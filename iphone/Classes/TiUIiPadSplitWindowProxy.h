/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#ifdef USE_TI_UIIPADSPLITWINDOW

#import "TiWindowProxy.h"

@interface TiUIiPadSplitWindowProxy : TiWindowProxy {

@private
	id<NSObject,TiOrientationController> detailView;
}
-(void)popupVisibilityChanged:(BOOL)newVal;
@end

#endif
