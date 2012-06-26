//
//  AppDelegate.h
//  ARC_cocos2d
//
//  Created by Chien-Lung Chen on 6/26/12.
//  Copyright USC 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
