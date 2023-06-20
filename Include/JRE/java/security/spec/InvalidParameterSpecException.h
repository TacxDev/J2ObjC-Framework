//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/InvalidParameterSpecException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException")
#ifdef RESTRICT_JavaSecuritySpecInvalidParameterSpecException
#define INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException 0
#else
#define INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException 1
#endif
#undef RESTRICT_JavaSecuritySpecInvalidParameterSpecException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecInvalidParameterSpecException_) && (INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException || defined(INCLUDE_JavaSecuritySpecInvalidParameterSpecException))
#define JavaSecuritySpecInvalidParameterSpecException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This is the exception for invalid parameter specifications.
 @author Jan Luehe
 - seealso: java.security.AlgorithmParameters
 - seealso: AlgorithmParameterSpec
 - seealso: DSAParameterSpec
 @since 1.2
 */
@interface JavaSecuritySpecInvalidParameterSpecException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs an InvalidParameterSpecException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an InvalidParameterSpecException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecInvalidParameterSpecException)

FOUNDATION_EXPORT void JavaSecuritySpecInvalidParameterSpecException_init(JavaSecuritySpecInvalidParameterSpecException *self);

FOUNDATION_EXPORT JavaSecuritySpecInvalidParameterSpecException *new_JavaSecuritySpecInvalidParameterSpecException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecInvalidParameterSpecException *create_JavaSecuritySpecInvalidParameterSpecException_init(void);

FOUNDATION_EXPORT void JavaSecuritySpecInvalidParameterSpecException_initWithNSString_(JavaSecuritySpecInvalidParameterSpecException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecuritySpecInvalidParameterSpecException *new_JavaSecuritySpecInvalidParameterSpecException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecInvalidParameterSpecException *create_JavaSecuritySpecInvalidParameterSpecException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecInvalidParameterSpecException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException")
