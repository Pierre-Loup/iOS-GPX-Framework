//
//  GPXExtensions.m
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import "GPXExtensions.h"
#import "GPXElementSubclass.h"

@implementation GPXExtensions {
    NSString *_speedValue;
    NSString *_courseValue;
}

@synthesize speed = _speed;
@synthesize course = _course;

#pragma mark - Instance

- (id)initWithXMLElement:(TBXMLElement *)element parent:(GPXElement *)parent
{
    self = [super initWithXMLElement:element parent:parent];
    if (self) {
        _speedValue = [self textForSingleChildElementNamed:@"speed" xmlElement:element];
        _courseValue = [self textForSingleChildElementNamed:@"course" xmlElement:element];
    }
    return self;
}


#pragma mark - Public methods

- (double)speed
{
    return [GPXType decimal:_speedValue];
}

- (void)setSpeed:(double)speed
{
    _speedValue = [GPXType valueForDecimal:speed];
}

- (double)course
{
    return [GPXType decimal:_courseValue];
}

- (void)setCourse:(double)course
{
    _courseValue = [GPXType valueForDecimal:course];
}

#pragma mark - tag

+ (NSString *)tagName
{
    return @"extensions";
}


#pragma mark - GPX

- (void)addChildTagToGpx:(NSMutableString *)gpx indentationLevel:(NSInteger)indentationLevel
{
    [super addChildTagToGpx:gpx indentationLevel:indentationLevel];
    
    [self gpx:gpx addPropertyForValue:_speedValue tagName:@"speed" indentationLevel:indentationLevel];
    [self gpx:gpx addPropertyForValue:_courseValue tagName:@"course" indentationLevel:indentationLevel];
}

@end
