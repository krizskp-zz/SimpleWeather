//
//  WXManager.h
//  SimpleWeather
//
//  Created by Shalvindra Prasad on 11/19/14.
//  Copyright (c) 2014 kRiZ. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
#import "WXCondition.h"

@interface WXManager : NSObject <CLLocationManagerDelegate>
@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

+ (instancetype)sharedManager;
- (void)findCurrentLocation;
@end
