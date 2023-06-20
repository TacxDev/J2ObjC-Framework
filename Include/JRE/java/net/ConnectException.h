//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/ConnectException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetConnectException")
#ifdef RESTRICT_JavaNetConnectException
#define INCLUDE_ALL_JavaNetConnectException 0
#else
#define INCLUDE_ALL_JavaNetConnectException 1
#endif
#undef RESTRICT_JavaNetConnectException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetConnectException_) && (INCLUDE_ALL_JavaNetConnectException || defined(INCLUDE_JavaNetConnectException))
#define JavaNetConnectException_

#define RESTRICT_JavaNetSocketException 1
#define INCLUDE_JavaNetSocketException 1
#include "java/net/SocketException.h"

@class JavaLangThrowable;

/*!
 @brief Signals that an error occurred while attempting to connect a
  socket to a remote address and port.Typically, the connection
  was refused remotely (e.g., no process is listening on the
  remote address/port).
 @since JDK1.1
 */
@interface JavaNetConnectException : JavaNetSocketException

#pragma mark Public

/*!
 @brief Construct a new ConnectException with no detailed message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new ConnectException with the specified detail
  message as to why the connect error occurred.
 A detail message is a String that gives a specific
  description of this error.
 @param msg the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

/*!
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetConnectException)

FOUNDATION_EXPORT void JavaNetConnectException_initWithNSString_(JavaNetConnectException *self, NSString *msg);

FOUNDATION_EXPORT JavaNetConnectException *new_JavaNetConnectException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetConnectException *create_JavaNetConnectException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaNetConnectException_init(JavaNetConnectException *self);

FOUNDATION_EXPORT JavaNetConnectException *new_JavaNetConnectException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetConnectException *create_JavaNetConnectException_init(void);

FOUNDATION_EXPORT void JavaNetConnectException_initWithNSString_withJavaLangThrowable_(JavaNetConnectException *self, NSString *msg, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetConnectException *new_JavaNetConnectException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetConnectException *create_JavaNetConnectException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetConnectException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetConnectException")
