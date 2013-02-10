/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#include "BasicListItem.h"

using namespace bb::cascades;

BasicListItem::BasicListItem() {
    item_ = new StandardListItem();
    setRoot(item_);
}

void BasicListItem::setData(QObject* data) {
    updateTitle(data->property("title").toString());
    connect(data, SIGNAL(titleChanged(const QString&)), SLOT(updateTitle(const QString&)));
    data_->disconnect(this);
    data_ = data;
}

void BasicListItem::updateTitle(const QString& title) {
    item_->setTitle(title);
}

