//
//  GPXExtensions.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import "GPXElement.h"


/** You can add extend GPX by adding your own elements from another schema here. 
 */
@interface GPXExtensions : GPXElement

/** Waypoint speed in meters per second. */
@property (nonatomic, assign) double speed;

/** Waypoint travel direction. */
@property (nonatomic, assign) double course;

/** Waypoint activity. */
@property (strong, nonatomic) NSString *activity;

@end
