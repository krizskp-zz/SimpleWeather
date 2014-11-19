//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by Shalvindra Prasad on 11/19/14.
//  Copyright (c) 2014 kRiZ. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
	NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];

	paths[@"tempHigh"] = @"temp.max";
	paths[@"tempLow"] = @"temp.min";

	return paths;
}

@end
