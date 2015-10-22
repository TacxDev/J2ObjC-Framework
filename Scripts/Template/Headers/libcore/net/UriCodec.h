//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/net/UriCodec.java
//

#ifndef _LibcoreNetUriCodec_H_
#define _LibcoreNetUriCodec_H_

#include "../../J2ObjC_header.h"

@class JavaLangStringBuilder;
@class JavaNioCharsetCharset;

/*!
 @brief Encodes and decodes <code>application/x-www-form-urlencoded</code> content.
 Subclasses define exactly which characters are legal.
 <p>By default, UTF-8 is used to encode escaped characters. A single input
 character like "\u0080" may be encoded to multiple octets like %C2%80.
 */
@interface LibcoreNetUriCodec : NSObject

#pragma mark Public

- (instancetype)init;

- (void)appendEncodedWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                  withNSString:(NSString *)s;

- (void)appendPartiallyEncodedWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                           withNSString:(NSString *)s;

+ (NSString *)decodeWithNSString:(NSString *)s;

/*!
 @param convertPlus true to convert '+' to ' '.
 @param throwOnFailure true to throw an IllegalArgumentException on
 invalid escape sequences; false to replace them with the replacement
 character (U+fffd).
 */
+ (NSString *)decodeWithNSString:(NSString *)s
                     withBoolean:(jboolean)convertPlus
       withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset
                     withBoolean:(jboolean)throwOnFailure;

- (NSString *)encodeWithNSString:(NSString *)s
       withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

/*!
 @brief Throws if <code>s</code> is invalid according to this encoder.
 */
- (NSString *)validateWithNSString:(NSString *)uri
                           withInt:(jint)start
                           withInt:(jint)end
                      withNSString:(NSString *)name;

/*!
 @brief Throws if <code>s</code> contains characters that are not letters, digits or
 in <code>legal</code>.
 */
+ (void)validateSimpleWithNSString:(NSString *)s
                      withNSString:(NSString *)legal;

#pragma mark Protected

/*!
 @brief Returns true if <code>c</code> does not need to be escaped.
 */
- (jboolean)isRetainedWithChar:(jchar)c;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreNetUriCodec)

FOUNDATION_EXPORT void LibcoreNetUriCodec_validateSimpleWithNSString_withNSString_(NSString *s, NSString *legal);

FOUNDATION_EXPORT NSString *LibcoreNetUriCodec_decodeWithNSString_withBoolean_withJavaNioCharsetCharset_withBoolean_(NSString *s, jboolean convertPlus, JavaNioCharsetCharset *charset, jboolean throwOnFailure);

FOUNDATION_EXPORT NSString *LibcoreNetUriCodec_decodeWithNSString_(NSString *s);

FOUNDATION_EXPORT void LibcoreNetUriCodec_init(LibcoreNetUriCodec *self);

J2OBJC_TYPE_LITERAL_HEADER(LibcoreNetUriCodec)

#endif // _LibcoreNetUriCodec_H_
