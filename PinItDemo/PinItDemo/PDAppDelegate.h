//
//  PDAppDelegate.h
//  PinItDemo
//
//  Created by Naveen Gavini on 2/19/13.
//  Copyright (c) 2013 Pinterest. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PDViewController;

@interface PDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) PDViewController *viewController;

@end
