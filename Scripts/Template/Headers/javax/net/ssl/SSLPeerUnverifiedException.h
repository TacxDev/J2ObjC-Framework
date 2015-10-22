//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLPeerUnverifiedException.java
//

#ifndef _JavaxNetSslSSLPeerUnverifiedException_H_
#define _JavaxNetSslSSLPeerUnverifiedException_H_

#include "../../../J2ObjC_header.h"
#include "../../../javax/net/ssl/SSLException.h"

/*!
 @brief The exception that is thrown when the identity of a peer has not been
 verified.
 */
@interface JavaxNetSslSSLPeerUnverifiedException : JavaxNetSslSSLException

#pragma mark Public

/*!
 @brief Creates a new <code>SSLPeerUnverifiedException</code> with the specified
 message.
 @param reason
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)reason;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLPeerUnverifiedException)

FOUNDATION_EXPORT void JavaxNetSslSSLPeerUnverifiedException_initWithNSString_(JavaxNetSslSSLPeerUnverifiedException *self, NSString *reason);

FOUNDATION_EXPORT JavaxNetSslSSLPeerUnverifiedException *new_JavaxNetSslSSLPeerUnverifiedException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLPeerUnverifiedException)

#endif // _JavaxNetSslSSLPeerUnverifiedException_H_
