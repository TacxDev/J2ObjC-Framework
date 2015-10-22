//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/HandshakeCompletedEvent.java
//

#ifndef _JavaxNetSslHandshakeCompletedEvent_H_
#define _JavaxNetSslHandshakeCompletedEvent_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/util/EventObject.h"

@class IOSObjectArray;
@class JavaxNetSslSSLSocket;
@protocol JavaSecurityPrincipal;
@protocol JavaxNetSslSSLSession;

/*!
 @brief The event object encapsulating the information about a completed SSL
 handshake on a SSL connection.
 */
@interface JavaxNetSslHandshakeCompletedEvent : JavaUtilEventObject

#pragma mark Public

/*!
 @brief Creates a new <code>HandshakeCompletedEvent</code> with the specified SSL
 socket and SSL session.
 @param sock
 the SSL socket.
 @param s
 the SSL session.
 */
- (instancetype)initWithJavaxNetSslSSLSocket:(JavaxNetSslSSLSocket *)sock
                   withJavaxNetSslSSLSession:(id<JavaxNetSslSSLSession>)s;

/*!
 @brief Returns the name of the cipher suite negotiated during this handshake.
 @return the name of the cipher suite negotiated during this handshake.
 */
- (NSString *)getCipherSuite;

/*!
 @brief Returns the list of local certificates used during the handshake.
 These
 certificates were sent to the peer.
 @return Returns the list of certificates used during the handshake with
 the local identity certificate followed by CAs, or <code>null</code>
 if no certificates were used during the handshake.
 */
- (IOSObjectArray *)getLocalCertificates;

/*!
 @brief Returns the <code>Principal</code> used to identify during the handshake.
 @return the <code>Principal</code> used to identify during the handshake.
 */
- (id<JavaSecurityPrincipal>)getLocalPrincipal;

/*!
 @brief Returns the list of certificates identifying the peer.
 The peer's
 identity certificate is followed by the validated certificate authority
 certificates.
 <p>
 <b>Replaced by:</b> <code>getPeerCertificates()</code>
 @return the list of certificates identifying the peer
 @throws SSLPeerUnverifiedException
 if the identity of the peer has not been verified.
 */
- (IOSObjectArray *)getPeerCertificateChain;

/*!
 @brief Return the list of certificates identifying the peer during the
 handshake.
 @return the list of certificates identifying the peer with the peer's
 identity certificate followed by CAs.
 @throws SSLPeerUnverifiedException
 if the identity of the peer has not been verified.
 */
- (IOSObjectArray *)getPeerCertificates;

/*!
 @brief Returns the <code>Principal</code> identifying the peer.
 @return the <code>Principal</code> identifying the peer.
 @throws SSLPeerUnverifiedException
 if the identity of the peer has not been verified.
 */
- (id<JavaSecurityPrincipal>)getPeerPrincipal;

/*!
 @brief Returns the SSL session associated with this event.
 @return the SSL session associated with this event.
 */
- (id<JavaxNetSslSSLSession>)getSession;

/*!
 @brief Returns the SSL socket that produced this event.
 @return the SSL socket that produced this event.
 */
- (JavaxNetSslSSLSocket *)getSocket;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslHandshakeCompletedEvent)

FOUNDATION_EXPORT void JavaxNetSslHandshakeCompletedEvent_initWithJavaxNetSslSSLSocket_withJavaxNetSslSSLSession_(JavaxNetSslHandshakeCompletedEvent *self, JavaxNetSslSSLSocket *sock, id<JavaxNetSslSSLSession> s);

FOUNDATION_EXPORT JavaxNetSslHandshakeCompletedEvent *new_JavaxNetSslHandshakeCompletedEvent_initWithJavaxNetSslSSLSocket_withJavaxNetSslSSLSession_(JavaxNetSslSSLSocket *sock, id<JavaxNetSslSSLSession> s) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslHandshakeCompletedEvent)

#endif // _JavaxNetSslHandshakeCompletedEvent_H_
