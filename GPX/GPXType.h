//
//  GPXType.h
//  GPX Framework
//
//  Created by NextBusinessSystem on 12/04/06.
//  Copyright (c) 2012 NextBusinessSystem Co., Ltd. All rights reserved.
//

typedef NS_ENUM(NSInteger, GPXFix) {
    GPXFixNone = 0,
    GPXFix2D,
    GPXFix3D,
    GPXFixDgps,
    GPXFixPps,
};


/** Convinience methods for GPX Value types.
 */
@interface GPXType : NSObject

/** Return the double object from a given string.
 @param value The string which to convert double. A value ≥−90 and ≤90.
 @return A CGFloat from a value.
 */
+ (double)latitude:(NSString *)value;

/** Return the NSString object from a given double.
 @param latitude The double which to convert NSString. A value ≥−90 and ≤90.
 @return A NSString from a latitude.
 */
+ (NSString *)valueForLatitude:(double)latitude;

/** Return the double object from a given string.
 @param value The string which to convert double. A value ≥−180 and ≤180.
 @return A CGFloat from a value.
 */
+ (double)longitude:(NSString *)value;

/** Return the NSString object from a given double.
 @param longitude The double which to convert NSString. A value ≥−180 and ≤180.
 @return A NSString from a longitude.
 */
+ (NSString *)valueForLongitude:(double)longitude;

/** Return the double object from a given string.
 @param value The string which to convert double. A value ≥0 and ≤360.
 @return A CGFloat from a value.
 */
+ (double)degress:(NSString *)value;

/** Return the NSString object from a given double.
 @param degress The double which to convert NSString. A value ≥0 and ≤360.
 @return A NSString from a degress.
 */
+ (NSString *)valueForDegress:(double)degress;

/** Return the GPXFix from a given string.
 @param value The string which to convert GPXFix.
 @return A GPXFix from a value.
 */
+ (GPXFix)fix:(NSString *)value;

/** Return the NSString object from a given GPXFix.
 @param fix The GPXFix which to convert NSString.
 @return A NSString from a fix.
 */
+ (NSString *)valueForFix:(GPXFix)fix;

/** Return the NSInteger object from a given string.
 @param value The string which to convert NSInteger. A value ≥0 and ≤1023.
 @return A NSInteger from a value.
 */
+ (NSInteger)dgpsStation:(NSString *)value;

/** Return the NSString object from a given NSInteger.
 @param dgpsStation The NSInteger which to convert NSString. A value ≥0 and ≤1023.
 @return A NSString from a dgpsStation.
 */
+ (NSString *)valueForDgpsStation:(NSInteger)dgpsStation;

/** Return the double object from a given string.
 @param value The string which to convert double.
 @return A double from a value.
 */
+ (double)decimal:(NSString *)value;

/** Return the NSString object from a given double.
 @param decimal The double which to convert NSString.
 @return A NSString from a decimal.
 */
+ (NSString *)valueForDecimal:(double)decimal;

/** Return the NSDate object from a given string.
 
 pecifies a single moment in time. The value is a dateTime, which can be one of the following:
 
 - *gYear* gives year resolution
 - *gYearMonth* gives month resolution
 - *date gives* day resolution
 - *dateTime* gives second resolution
 
 
 *gYear (YYYY)*
 
 <TimeStamp>
 <when>1997</when>
 </TimeStamp>
 
 *gYearMonth (YYYY-MM)*
 
 <TimeStamp>
 <when>1997-07</when>
 </TimeStamp> 
 
 *date (YYYY-MM-DD)*
 
 <TimeStamp>
 <when>1997-07-16</when>
 </TimeStamp> 
 
 *dateTime (YYYY-MM-DDThh:mm:ssZ)*
 
 Here, T is the separator between the calendar and the hourly notation of time, and Z indicates UTC. (Seconds are required.)
 
 <TimeStamp>
 <when>1997-07-16T07:30:15Z</when>
 </TimeStamp>
 
 *dateTime (YYYY-MM-DDThh:mm:sszzzzzz)*
 
 This example gives the local time and then the ± conversion to UTC.
 
 <TimeStamp>
 <when>1997-07-16T10:30:15+03:00</when>
 </TimeStamp>
 
 @param value The string which to convert NSDate.
 @return A NSDate from a value.
 */
+ (NSDate *)dateTime:(NSString *)value;

/** Return the NSString object from a given NSDate.
 @param date The NSDate which to convert NSString.
 @return A dateTime (YYYY-MM-DDThh:mm:ssZ) value from a date.
 */
+ (NSString *)valueForDateTime:(NSDate *)date;

/** Return the NSInteger object from a given string.
 @param value The string which to convert NSInteger. A value ≥0
 @return A NSInteger from a value.
 */
+ (NSInteger)nonNegativeInteger:(NSString *)value;

/** Return the NSString object from a given NSInteger.
 @param integer The NSInteger which to convert NSString. A value ≥0
 @return A NSString from a integer.
 */
+ (NSString *)valueForNonNegativeInteger:(NSInteger)integer;

@end
