//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/UnsupportedClassVersionError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangUnsupportedClassVersionError")
#ifdef RESTRICT_JavaLangUnsupportedClassVersionError
#define INCLUDE_ALL_JavaLangUnsupportedClassVersionError 0
#else
#define INCLUDE_ALL_JavaLangUnsupportedClassVersionError 1
#endif
#undef RESTRICT_JavaLangUnsupportedClassVersionError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangUnsupportedClassVersionError_) && (INCLUDE_ALL_JavaLangUnsupportedClassVersionError || defined(INCLUDE_JavaLangUnsupportedClassVersionError))
#define JavaLangUnsupportedClassVersionError_

#define RESTRICT_JavaLangClassFormatError 1
#define INCLUDE_JavaLangClassFormatError 1
#include "java/lang/ClassFormatError.h"

/*!
 @brief Thrown when the Java Virtual Machine attempts to read a class
  file and determines that the major and minor version numbers
  in the file are not supported.
 @since 1.2
 */
@interface JavaLangUnsupportedClassVersionError : JavaLangClassFormatError

#pragma mark Public

/*!
 @brief Constructs a <code>UnsupportedClassVersionError</code>
  with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>UnsupportedClassVersionError</code> with
  the specified detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangUnsupportedClassVersionError)

FOUNDATION_EXPORT void JavaLangUnsupportedClassVersionError_init(JavaLangUnsupportedClassVersionError *self);

FOUNDATION_EXPORT JavaLangUnsupportedClassVersionError *new_JavaLangUnsupportedClassVersionError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangUnsupportedClassVersionError *create_JavaLangUnsupportedClassVersionError_init(void);

FOUNDATION_EXPORT void JavaLangUnsupportedClassVersionError_initWithNSString_(JavaLangUnsupportedClassVersionError *self, NSString *s);

FOUNDATION_EXPORT JavaLangUnsupportedClassVersionError *new_JavaLangUnsupportedClassVersionError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangUnsupportedClassVersionError *create_JavaLangUnsupportedClassVersionError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangUnsupportedClassVersionError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangUnsupportedClassVersionError")
