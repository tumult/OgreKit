/*
 * Name: OgreTextView.h
 * Project: OgreKit
 *
 * Creation Date: Jun 13 2004
 * Author: Isao Sonobe <sonoisa@gmail.com>
 * Copyright: Copyright (c) 2003-2020 Isao Sonobe, All rights reserved.
 * License: OgreKit License
 *
 * Encoding: UTF8
 * Tabsize: 4
 */

#import <AppKit/AppKit.h>
#import <OgreKit/OgreView.h>

@interface OgreTextView : NSTextView <OgreView>
{
    id          _observableControllerForDataBinding;
    NSString    *_keyPathForDataBinding;

    id          _observableControllerForValueBinding;
    NSString    *_keyPathForValueBinding;
}

- (void)ogreDidEndEditing;

@end
