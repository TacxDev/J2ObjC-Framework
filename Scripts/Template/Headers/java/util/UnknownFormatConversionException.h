//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/UnknownFormatConversionException.java
//

#ifndef _JavaUtilUnknownFormatConversionException_H_
#define _JavaUtilUnknownFormatConversionException_H_

#include "../../J2ObjC_header.h"
#include "../../java/util/IllegalFormatException.h"

/*!
 @brief An <code>UnknownFormatConversionException</code> will be thrown if the format
 conversion is unknown.
 */
@interface JavaUtilUnknownFormatConversionException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs an <code>UnknownFormatConversionException</code> with the unknown
 format conversion.
 @param s
 the unknown format conversion.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Returns the conversion associated with the exception.
 @return the conversion associated with the exception.
 */
- (NSString *)getConversion;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilUnknownFormatConversionException)

FOUNDATION_EXPORT void JavaUtilUnknownFormatConversionException_initWithNSString_(JavaUtilUnknownFormatConversionException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilUnknownFormatConversionException *new_JavaUtilUnknownFormatConversionException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilUnknownFormatConversionException)

#endif // _JavaUtilUnknownFormatConversionException_H_
