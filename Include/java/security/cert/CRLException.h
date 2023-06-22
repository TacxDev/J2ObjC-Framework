//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CRLException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCRLException")
#ifdef RESTRICT_JavaSecurityCertCRLException
#define INCLUDE_ALL_JavaSecurityCertCRLException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCRLException 1
#endif
#undef RESTRICT_JavaSecurityCertCRLException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCRLException_) && (INCLUDE_ALL_JavaSecurityCertCRLException || defined(INCLUDE_JavaSecurityCertCRLException))
#define JavaSecurityCertCRLException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief CRL (Certificate Revocation List) Exception.
 @author Hemma Prafullchandra
 @since 1.2
 */
@interface JavaSecurityCertCRLException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a CRLException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a CRLException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param message the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Creates a <code>CRLException</code> with the specified
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
 @brief Creates a <code>CRLException</code> with the specified cause
  and a detail message of <code>(cause==null ?
 null : cause.toString())</code>
  (which typically contains the class and detail message of 
 <code>cause</code>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A <code>null</code>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCRLException)

FOUNDATION_EXPORT void JavaSecurityCertCRLException_init(JavaSecurityCertCRLException *self);

FOUNDATION_EXPORT JavaSecurityCertCRLException *new_JavaSecurityCertCRLException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCRLException *create_JavaSecurityCertCRLException_init(void);

FOUNDATION_EXPORT void JavaSecurityCertCRLException_initWithNSString_(JavaSecurityCertCRLException *self, NSString *message);

FOUNDATION_EXPORT JavaSecurityCertCRLException *new_JavaSecurityCertCRLException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCRLException *create_JavaSecurityCertCRLException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaSecurityCertCRLException_initWithNSString_withJavaLangThrowable_(JavaSecurityCertCRLException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityCertCRLException *new_JavaSecurityCertCRLException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCRLException *create_JavaSecurityCertCRLException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSecurityCertCRLException_initWithJavaLangThrowable_(JavaSecurityCertCRLException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityCertCRLException *new_JavaSecurityCertCRLException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCRLException *create_JavaSecurityCertCRLException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCRLException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCRLException")
