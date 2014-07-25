//
//  ENAppDelegate.h
//  TabBarDemo
//
//  Created by Aaron Elkins on 7/25/14.
//  Copyright (c) 2014 PixelEgg. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ENTabBarView.h"

@interface ENAppDelegate : NSObject <NSApplicationDelegate>{
    ENTabBarView *tabBarView;
}

@property (assign) IBOutlet NSWindow *window;

@end
