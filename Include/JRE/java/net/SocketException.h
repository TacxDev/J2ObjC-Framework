//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/SocketException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetSocketException")
#ifdef RESTRICT_JavaNetSocketException
#define INCLUDE_ALL_JavaNetSocketException 0
#else
#define INCLUDE_ALL_JavaNetSocketException 1
#endif
#undef RESTRICT_JavaNetSocketException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetSocketException_) && (INCLUDE_ALL_JavaNetSocketException || defined(INCLUDE_JavaNetSocketException))
#define JavaNetSocketException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that there is an error creating or accessing a Socket.
 @author Jonathan Payne
 @since JDK1.0
 */
@interface JavaNetSocketException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>SocketException</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new <code>SocketException</code> with the
  specified detail message.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

/*!
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketException)

FOUNDATION_EXPORT void JavaNetSocketException_initWithNSString_(JavaNetSocketException *self, NSString *msg);

FOUNDATION_EXPORT JavaNetSocketException *new_JavaNetSocketException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketException *create_JavaNetSocketException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaNetSocketException_init(JavaNetSocketException *self);

FOUNDATION_EXPORT JavaNetSocketException *new_JavaNetSocketException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketException *create_JavaNetSocketException_init(void);

FOUNDATION_EXPORT void JavaNetSocketException_initWithJavaLangThrowable_(JavaNetSocketException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetSocketException *new_JavaNetSocketException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketException *create_JavaNetSocketException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaNetSocketException_initWithNSString_withJavaLangThrowable_(JavaNetSocketException *self, NSString *msg, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetSocketException *new_JavaNetSocketException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketException *create_JavaNetSocketException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetSocketException")
