//
//  GPXBounds.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import "GPXElement.h"


/** Two lat/lon pairs defining the extent of an element.
 */
@interface GPXBounds : GPXElement


/// ---------------------------------
/// @name Accessing Properties
/// ---------------------------------

/** The minimum latitude. */
@property (nonatomic, assign) double minLatitude;

/** The minimum longitude. */
@property (nonatomic, assign) double minLongitude;

/** The maximum latitude. */
@property (nonatomic, assign) double maxLatitude;

/** The maximum longitude. */
@property (nonatomic, assign) double maxLongitude;


/// ---------------------------------
/// @name Create Bounds
/// ---------------------------------

/** Creates and returns a new bounds element.
 @param minLatitude The minimum latitude.
 @param minLongitude The minimum longitude.
 @param maxLatitude The maximum latitude.
 @param maxLongitude The maximum longitude.
 @return A newly created bounds element.
 */
+ (GPXBounds *)boundsWithMinLatitude:(double)minLatitude minLongitude:(double)minLongitude maxLatitude:(double)maxLatitude maxLongitude:(double)maxLongitude;

@end
