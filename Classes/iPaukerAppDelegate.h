//
//  iPaukerAppDelegate.h
//  iPauker
//
//  Created by Mark Probst on 8/12/08.
//  Copyright __MyCompanyName__ 2008. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CardSet.h"

@class iPaukerViewController;

@interface iPaukerAppDelegate : NSObject <UIApplicationDelegate> {
    IBOutlet UIWindow *window;
    IBOutlet iPaukerViewController *viewController;
    
    long long currentTime;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) iPaukerViewController *viewController;

- (void) updateTime;
- (long long) currentTime;

+ (long long) updateAndGetTime;

@end
