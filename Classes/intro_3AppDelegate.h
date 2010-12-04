//
//  intro_3AppDelegate.h
//  intro-3
//
//  Created by Rodney Degracia on 12/4/10.
//  Copyright 2010 Elven Labs Software Development. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class MainViewController;

@class LocationManagerDelegate;
@interface intro_3AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MainViewController *mainViewController;
	
	CLLocationManager* locationManager;
	
	IBOutlet LocationManagerDelegate* locationManagerDelegate;
}
@property (nonatomic, retain)  CLLocationManager* locationManager;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MainViewController *mainViewController;

@end

