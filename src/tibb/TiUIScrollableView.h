/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2012 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#ifndef TIUISCROLLABLEVIEW_H_
#define TIUISCROLLABLEVIEW_H_

#include "TiUIBase.h"

/*
 * TiUIScrollableView
 *
 * Represents a Titanium button object
 *
 */

class TiUIScrollableView : public TiUIBase
{
public:
    static TiUIScrollableView* createScrollableView(NativeObjectFactory* nativeObjectFactory);

protected:
    virtual ~TiUIScrollableView();
    virtual void initializeTiObject(TiObject* parentContext);

private:
    TiUIScrollableView();
};

#endif /* TIUISCROLLABLEVIEW_H_ */
