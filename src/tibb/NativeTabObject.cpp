/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2012 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#include "NativeTabObject.h"

#include <bb/cascades/ActionItem>
#include <bb/cascades/Image>
#include <bb/cascades/NavigationPane>
#include <bb/cascades/NavigationPaneProperties>
#include <bb/cascades/Page>
#include <bb/cascades/Tab>

#include "Scene.h"
#include "Window.h"

using namespace bb::cascades;
using namespace titanium;

NativeTabObject::NativeTabObject(TiObject* tiObject)
    : NativeControlObject(tiObject, N_TYPE_TAB)
    , navigationPane_(NULL)
    , tab_(NULL)
{
}

NativeTabObject::~NativeTabObject()
{
    delete tab_;
    tab_ = NULL;
    delete navigationPane_;
    navigationPane_ = NULL;
}

NativeObject* NativeTabObject::createTab(TiObject* tiObject)
{
    NativeTabObject* obj = new NativeTabObject(tiObject);
    return obj;
}

NATIVE_TYPE NativeTabObject::getObjectType() const
{
    return N_TYPE_TAB;
}

NAHANDLE NativeTabObject::getNativeHandle() const
{
    return tab_;
}

int NativeTabObject::setTitle(TiObject* obj)
{
    QString str;

    int error = NativeControlObject::getString(obj, str);
    if (!N_SUCCEEDED(error))
    {
        return error;
    }
    tab_->setTitle(str);
    return NATIVE_ERROR_OK;
}

int NativeTabObject::setIcon(TiObject* obj)
{
    QString iconPath;
    int error = NativeControlObject::getString(obj, iconPath);
    if (!N_SUCCEEDED(error))
    {
        return error;
    }
    iconPath = getResourcePath(iconPath);
    tab_->setImage(bb::cascades::Image(QUrl(iconPath)));
    return NATIVE_ERROR_OK;
}

int NativeTabObject::addChildNativeObject(NativeObject* obj)
{
    if (obj->getObjectType() == N_TYPE_WINDOW)
    {
        Window* window = static_cast<Window*>(obj->getNativeHandle());
        Page* page = static_cast<Page*>(window->scene()->pane());

        // The ownership of the page must be cleared before pushing,
        // otherwise navigation pane will do nothing.
        page->setParent(0);

        navigationPane_->push(page);
        return NATIVE_ERROR_OK;
    }
    return NATIVE_ERROR_NOTSUPPORTED;
}

int NativeTabObject::openWindowOnTab(NativeObject* obj)
{
    return addChildNativeObject(obj);
}

int NativeTabObject::initialize()
{
    tab_ = Tab::create();
    navigationPane_ = NavigationPane::create();
    tab_->setContent(navigationPane_);

    if (tab_ == NULL || navigationPane_ == NULL)
    {
        //if one of the tab_ or navigationPane_ pointers is NULL,
        //it means that create function couldn't allocate enough memory for at least one of these objects
        return NATIVE_ERROR_OUTOFMEMORY;
    }
    return NATIVE_ERROR_OK;
}
