//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/GeneralSecurityException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityGeneralSecurityException")
#ifdef RESTRICT_JavaSecurityGeneralSecurityException
#define INCLUDE_ALL_JavaSecurityGeneralSecurityException 0
#else
#define INCLUDE_ALL_JavaSecurityGeneralSecurityException 1
#endif
#undef RESTRICT_JavaSecurityGeneralSecurityException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityGeneralSecurityException_) && (INCLUDE_ALL_JavaSecurityGeneralSecurityException || defined(INCLUDE_JavaSecurityGeneralSecurityException))
#define JavaSecurityGeneralSecurityException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangBoolean;
@class JavaLangThrowable;

/*!
 @brief The <code>GeneralSecurityException</code> class is a generic
  security exception class that provides type safety for all the
  security-related exception classes that extend from it.
 @author Jan Luehe
 @since 1.2
 */
@interface JavaSecurityGeneralSecurityException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a GeneralSecurityException with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a GeneralSecurityException with the specified detail
  message.
 A detail message is a String that describes this particular
  exception.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>GeneralSecurityException</code> with the specified
  detail message and cause.
 @param message the detail message (which is saved for later retrieval         by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A <code>null</code>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>GeneralSecurityException</code> with the specified cause
  and a detail message of <code>(cause==null ?
 null : cause.toString())</code>
  (which typically contains the class and detail message of 
 <code>cause</code>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A <code>null</code>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityGeneralSecurityException)

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_init(JavaSecurityGeneralSecurityException *self);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *create_JavaSecurityGeneralSecurityException_init(void);

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithNSString_(JavaSecurityGeneralSecurityException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *create_JavaSecurityGeneralSecurityException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithNSString_withJavaLangThrowable_(JavaSecurityGeneralSecurityException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *create_JavaSecurityGeneralSecurityException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithJavaLangThrowable_(JavaSecurityGeneralSecurityException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *create_JavaSecurityGeneralSecurityException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityGeneralSecurityException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityGeneralSecurityException")
