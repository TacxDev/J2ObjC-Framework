//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/StringToReal.java
//

#ifndef _JavaLangStringToReal_H_
#define _JavaLangStringToReal_H_

#include "../../J2ObjC_header.h"

/*!
 @brief Used to parse a string and return either a single or double precision
 floating point number.
 */
@interface JavaLangStringToReal : NSObject

#pragma mark Public

/*!
 @brief Returns the closest double value to the real number in the string.
 @param s
 the String that will be parsed to a floating point
 @return the double closest to the real number
 @throws NumberFormatException
 if the String doesn't represent a double
 */
+ (jdouble)parseDoubleWithNSString:(NSString *)s;

/*!
 @brief Returns the closest float value to the real number in the string.
 @param s
 the String that will be parsed to a floating point
 @return the float closest to the real number
 @throws NumberFormatException
 if the String doesn't represent a float
 */
+ (jfloat)parseFloatWithNSString:(NSString *)s;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStringToReal)

FOUNDATION_EXPORT jdouble JavaLangStringToReal_parseDoubleWithNSString_(NSString *s);

FOUNDATION_EXPORT jfloat JavaLangStringToReal_parseFloatWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaLangStringToReal_init(JavaLangStringToReal *self);

FOUNDATION_EXPORT JavaLangStringToReal *new_JavaLangStringToReal_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStringToReal)

#endif // _JavaLangStringToReal_H_
