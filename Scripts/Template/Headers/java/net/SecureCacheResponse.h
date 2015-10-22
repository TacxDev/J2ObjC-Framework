//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/SecureCacheResponse.java
//

#ifndef _JavaNetSecureCacheResponse_H_
#define _JavaNetSecureCacheResponse_H_

#include "../../J2ObjC_header.h"
#include "../../java/net/CacheResponse.h"

@protocol JavaSecurityPrincipal;
@protocol JavaUtilList;

/*!
 @brief A secure cache response represents data which is originally retrieved over a
 secure connection.
 Such a connection can be secured by using a cryptographic
 protocol like TLS or SSL.
 */
@interface JavaNetSecureCacheResponse : JavaNetCacheResponse

#pragma mark Public

/*!
 @brief Creates a new instance of this class.
 */
- (instancetype)init;

/*!
 @brief Gets the cipher suite string on the connection which is originally used
 to retrieve the network resource.
 @return the cipher suite string.
 */
- (NSString *)getCipherSuite;

/*!
 @brief Gets the local certificate chain.
 When the original connection retrieved
 the resource data, this certificate chain was sent to the server during
 handshaking process. This method only takes effect when certificate-based
 cipher suite is enabled.
 @return the certificate chain that was sent to the server. If no
 certificate chain was sent, the method returns <code>null</code>.
 */
- (id<JavaUtilList>)getLocalCertificateChain;

/*!
 @brief Gets the local principle that the original connection sent to the server.
 When the original connection fetched the network resource, the principle
 was sent to the server during handshaking process.
 @return the local principal object being sent to the server. Returns an
 <code>X500Principal</code> object for X509-based cipher suites. If no
 principal was sent, it returns <code>null</code>.
 */
- (id<JavaSecurityPrincipal>)getLocalPrincipal;

/*!
 @brief Gets the server's principle.
 When the original connection retrieved
 network resource, the principle was established when defining the
 session.
 @return a principal object representing the server's principal.
 @throws SSLPeerUnverifiedException
 if the peer is unverified.
 */
- (id<JavaSecurityPrincipal>)getPeerPrincipal;

/*!
 @brief Gets the cached server's certificate chain.
 As part of defining the
 session, the certificate chain was established when the original
 connection retrieved network resource. This method can only be invoked
 when certificated-based cipher suite is enabled. Otherwise, it throws an
 <code>SSLPeerUnverifiedException</code>.
 @return the server's certificate chain.
 @throws SSLPeerUnverifiedException
 if the peer is unverified.
 */
- (id<JavaUtilList>)getServerCertificateChain;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSecureCacheResponse)

FOUNDATION_EXPORT void JavaNetSecureCacheResponse_init(JavaNetSecureCacheResponse *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSecureCacheResponse)

#endif // _JavaNetSecureCacheResponse_H_
