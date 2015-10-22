//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertificateFactory.java
//

#ifndef _JavaSecurityCertCertificateFactory_H_
#define _JavaSecurityCertCertificateFactory_H_

#include "../../../J2ObjC_header.h"

@class JavaIoInputStream;
@class JavaSecurityCertCRL;
@class JavaSecurityCertCertPath;
@class JavaSecurityCertCertificate;
@class JavaSecurityCertCertificateFactorySpi;
@class JavaSecurityProvider;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

/*!
 @brief This class implements the functionality of a certificate factory algorithm,
 relying on parsing a stream of bytes.
 <p>
 It defines methods for parsing certificate chains (certificate paths) and
 <i>Certificate Revocation Lists</i> (CRLs).
 */
@interface JavaSecurityCertCertificateFactory : NSObject

#pragma mark Public

/*!
 @brief Generates and initializes a <code>Certificate</code> from the provided input
 stream.
 @param inStream
 the stream from where data is read to create the <code>Certificate</code>
 .
 @return an initialized Certificate.
 @throws CertificateException
 if parsing problems are detected.
 */
- (JavaSecurityCertCertificate *)generateCertificateWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates and initializes a collection of (unrelated) certificates from
 the provided input stream.
 @param inStream
 the stream from which the data is read to create the
 collection.
 @return an initialized collection of certificates.
 @throws CertificateException
 if parsing problems are detected.
 */
- (id<JavaUtilCollection>)generateCertificatesWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates a <code>CertPath</code> (a certificate chain) from the provided
 <code>InputStream</code>.
 The default encoding scheme is applied.
 @param inStream
 <code>InputStream</code> with encoded data.
 @return a <code>CertPath</code> initialized from the provided data.
 @throws CertificateException
 if parsing problems are detected.
 */
- (JavaSecurityCertCertPath *)generateCertPathWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates a <code>CertPath</code> (a certificate chain) from the given
 <code>inputStream</code>, assuming the given <code>encoding</code> from
 <code>getCertPathEncodings()</code>.
 @throws CertificateException
 if parsing problems are detected.
 @throws UnsupportedOperationException
 if the provider does not implement this method.
 */
- (JavaSecurityCertCertPath *)generateCertPathWithJavaIoInputStream:(JavaIoInputStream *)inputStream
                                                       withNSString:(NSString *)encoding;

/*!
 @brief Generates a <code>CertPath</code> from the provided list of certificates.
 The
 encoding is the default encoding.
 @param certificates
 the list containing certificates in a format supported by the
 <code>CertificateFactory</code>.
 @return a <code>CertPath</code> initialized from the provided data.
 @throws CertificateException
 if parsing problems are detected.
 @throws UnsupportedOperationException
 if the provider does not implement this method.
 */
- (JavaSecurityCertCertPath *)generateCertPathWithJavaUtilList:(id<JavaUtilList>)certificates;

/*!
 @brief Generates and initializes a <i>Certificate Revocation List</i> (CRL) from
 the provided input stream.
 @param inStream
 the stream from where data is read to create the CRL.
 @return an initialized CRL.
 @throws CRLException
 if parsing problems are detected.
 */
- (JavaSecurityCertCRL *)generateCRLWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates and initializes a collection of <i>Certificate Revocation
 List</i> (CRL) from the provided input stream.
 @param inStream
 the stream from which the data is read to create the CRLs.
 @return an initialized collection of CRLs.
 @throws CRLException
 if parsing problems are detected.
 */
- (id<JavaUtilCollection>)generateCRLsWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns an <code>Iterator</code> over the supported <code>CertPath</code> encodings
 (as Strings).
 The first element is the default encoding scheme to apply.
 @return an iterator over supported <code>CertPath</code> encodings (as
 Strings).
 */
- (id<JavaUtilIterator>)getCertPathEncodings;

/*!
 @brief Creates a new <code>CertificateFactory</code> instance that provides the
 requested certificate type.
 @param type
 the certificate type.
 @return the new <code>CertificateFactory</code> instance.
 @throws CertificateException
 if the specified certificate type is not available at any
 installed provider.
 @throws NullPointerException if <code>type == null</code>
 */
+ (JavaSecurityCertCertificateFactory *)getInstanceWithNSString:(NSString *)type;

/*!
 @brief Creates a new <code>CertificateFactory</code> instance from the specified
 provider that provides the requested certificate type.
 @param type
 the certificate type.
 @param provider
 the name of the provider providing certificates of the
 specified type.
 @return the new <code>CertificateFactory</code> instance.
 @throws CertificateException
 if the specified certificate type is not available at the
 specified provider.
 @throws IllegalArgumentException
 if the specified provider is <code>null</code>.
 @throws NullPointerException if <code>type == null</code>
 @throws IllegalArgumentException if <code>provider == null</code>
 */
+ (JavaSecurityCertCertificateFactory *)getInstanceWithNSString:(NSString *)type
                                       withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Creates a new <code>CertificateFactory</code> instance from the specified
 provider that provides the requested certificate type.
 @param type
 the certificate type.
 @param provider
 the name of the provider providing certificates of the
 specified type.
 @return the new <code>CertificateFactory</code> instance.
 @throws CertificateException
 if the specified certificate type is not available by the
 specified provider.
 @throws NoSuchProviderException
 if no provider with the specified name can be found.
 @throws IllegalArgumentException if <code>provider == null || provider.isEmpty()</code>
 @throws NullPointerException
 it <code>type</code> is <code>null</code>.
 */
+ (JavaSecurityCertCertificateFactory *)getInstanceWithNSString:(NSString *)type
                                                   withNSString:(NSString *)provider;

/*!
 @brief Returns the <code>Provider</code> of the certificate factory represented by
 the certificate.
 @return the provider of this certificate factory.
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Returns the Certificate type.
 @return type of certificate being used.
 */
- (NSString *)getType;

#pragma mark Protected

/*!
 @brief Creates a new <code>CertificateFactory</code> instance.
 @param certFacSpi
 the implementation delegate.
 @param provider
 the associated provider.
 @param type
 the certificate type.
 */
- (instancetype)initWithJavaSecurityCertCertificateFactorySpi:(JavaSecurityCertCertificateFactorySpi *)certFacSpi
                                     withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                 withNSString:(NSString *)type;

@end

J2OBJC_STATIC_INIT(JavaSecurityCertCertificateFactory)

FOUNDATION_EXPORT void JavaSecurityCertCertificateFactory_initWithJavaSecurityCertCertificateFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertificateFactory *self, JavaSecurityCertCertificateFactorySpi *certFacSpi, JavaSecurityProvider *provider, NSString *type);

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *new_JavaSecurityCertCertificateFactory_initWithJavaSecurityCertCertificateFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertificateFactorySpi *certFacSpi, JavaSecurityProvider *provider, NSString *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *JavaSecurityCertCertificateFactory_getInstanceWithNSString_(NSString *type);

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *JavaSecurityCertCertificateFactory_getInstanceWithNSString_withNSString_(NSString *type, NSString *provider);

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *JavaSecurityCertCertificateFactory_getInstanceWithNSString_withJavaSecurityProvider_(NSString *type, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateFactory)

#endif // _JavaSecurityCertCertificateFactory_H_
