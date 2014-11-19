//
//  WXClient.h
//  SimpleWeather
//
//  Created by Shalvindra Prasad on 11/19/14.
//  Copyright (c) 2014 kRiZ. All rights reserved.
//

@import CoreLocation;
#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>

@interface WXClient : NSObject
- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;
@end
