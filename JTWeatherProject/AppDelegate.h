//
//  AppDelegate.h
//  JTWeatherProject
//
//  Created by Jeevan Thandi on 09/01/2016.
//  Copyright © 2016 Airla Tech Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
FOUNDATION_EXTERN NSString *const kOpenWeatherAPIKey;
FOUNDATION_EXTERN NSString *const kFullDayOverlayDidLoadNotification;

FOUNDATION_EXTERN NSString *const kBackgroundImage;
FOUNDATION_EXTERN NSString *const kTitle;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

