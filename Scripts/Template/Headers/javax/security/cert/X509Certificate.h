//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/X509Certificate.java
//

#ifndef _JavaxSecurityCertX509Certificate_H_
#define _JavaxSecurityCertX509Certificate_H_

#include "../../../J2ObjC_header.h"
#include "../../../javax/security/cert/Certificate.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaMathBigInteger;
@class JavaUtilDate;
@protocol JavaSecurityPrincipal;

/*!
 @brief Abstract base class for X.509 certificates.
 <p>
 This represents a standard way for accessing the attributes of X.509 v1
 certificates.
 <p>
 Note: This package is provided only for compatibility reasons.
 It contains a simplified version of the java.security.cert package that was
 previously used by JSSE (Java SSL package). All applications that do not have
 to be compatible with older versions of JSSE (that is before Java SDK 1.5)
 should only use java.security.cert.
 */
@interface JavaxSecurityCertX509Certificate : JavaxSecurityCertCertificate

#pragma mark Public

/*!
 @brief Creates a new <code>X509Certificate</code>.
 */
- (instancetype)init;

/*!
 @brief Checks whether the certificate is currently valid.
 <p>
 The validity defined in ASN.1:
 @code

  validity             Validity
  Validity ::= SEQUENCE {
      notBefore       CertificateValidityDate,
      notAfter        CertificateValidityDate }
  CertificateValidityDate ::= CHOICE {
      utcTime         UTCTime,
      generalTime     GeneralizedTime }
  
@endcode
 @throws CertificateExpiredException
 if the certificate has expired.
 @throws CertificateNotYetValidException
 if the certificate is not yet valid.
 */
- (void)checkValidity;

/*!
 @brief Checks whether the certificate is valid at the specified date.
 @param date
 the date to check the validity against.
 @throws CertificateExpiredException
 if the certificate has expired.
 @throws CertificateNotYetValidException
 if the certificate is not yet valid.
 */
- (void)checkValidityWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Creates a new <code>X509Certificate</code> and initializes it from the
 specified byte array.
 @param certData
 byte array containing data to initialize the certificate.
 @return the certificate initialized from the specified byte array
 @throws CertificateException
 if the certificate cannot be created or initialized.
 */
+ (JavaxSecurityCertX509Certificate *)getInstanceWithByteArray:(IOSByteArray *)certData;

/*!
 @brief Creates a new <code>X509Certificate</code> and initializes it from the
 specified input stream.
 @param inStream
 input stream containing data to initialize the certificate.
 @return the certificate initialized from the specified input stream
 @throws CertificateException
 if the certificate cannot be created or initialized.
 */
+ (JavaxSecurityCertX509Certificate *)getInstanceWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns the <code>issuer</code> (issuer distinguished name) as an
 implementation specific <code>Principal</code> object.
 <p>
 The ASN.1 definition of <code>issuer</code>:
 @code

  issuer      Name
  Name ::= CHOICE {
      RDNSequence }
    RDNSequence ::= SEQUENCE OF RelativeDistinguishedName
    RelativeDistinguishedName ::= SET OF AttributeTypeAndValue
    AttributeTypeAndValue ::= SEQUENCE {
      type     AttributeType,
      value    AttributeValue }
    AttributeType ::= OBJECT IDENTIFIER
    AttributeValue ::= ANY DEFINED BY AttributeType
  
@endcode
 @return the <code>issuer</code> as an implementation specific <code>Principal</code>
 .
 */
- (id<JavaSecurityPrincipal>)getIssuerDN;

/*!
 @brief Returns the <code>notAfter</code> date of the validity period of the
 certificate.
 @return the end of the validity period.
 */
- (JavaUtilDate *)getNotAfter;

/*!
 @brief Returns the <code>notBefore</code> date from the validity period of the
 certificate.
 @return the start of the validity period.
 */
- (JavaUtilDate *)getNotBefore;

/*!
 @brief Returns the <code>serialNumber</code> of the certificate.
 <p>
 The ASN.1 definition of <code>serialNumber</code>:
 @code

  CertificateSerialNumber  ::=  INTEGER
  
@endcode
 @return the serial number.
 */
- (JavaMathBigInteger *)getSerialNumber;

/*!
 @brief Returns the name of the algorithm for the certificate signature.
 @return the signature algorithm name.
 */
- (NSString *)getSigAlgName;

/*!
 @brief Returns the OID of the signature algorithm from the certificate.
 @return the OID of the signature algorithm.
 */
- (NSString *)getSigAlgOID;

/*!
 @brief Returns the parameters of the signature algorithm in DER-encoded format.
 @return the parameters of the signature algorithm, or null if none are
 used.
 */
- (IOSByteArray *)getSigAlgParams;

/*!
 @brief Returns the <code>subject</code> (subject distinguished name) as an
 implementation specific <code>Principal</code> object.
 <p>
 The ASN.1 definition of <code>subject</code>:
 @code

  subject      Name
  Name ::= CHOICE {
      RDNSequence }
    RDNSequence ::= SEQUENCE OF RelativeDistinguishedName
    RelativeDistinguishedName ::= SET OF AttributeTypeAndValue
    AttributeTypeAndValue ::= SEQUENCE {
      type     AttributeType,
      value    AttributeValue }
    AttributeType ::= OBJECT IDENTIFIER
    AttributeValue ::= ANY DEFINED BY AttributeType
  
@endcode
 @return the <code>subject</code> (subject distinguished name).
 */
- (id<JavaSecurityPrincipal>)getSubjectDN;

/*!
 @brief Returns the certificates <code>version</code> (version number).
 <p>
 The version defined is ASN.1:
 @code

  Version ::=  INTEGER  {  v1(0), v2(1), v3(2)  }
  
@endcode
 @return the version number.
 */
- (jint)getVersion;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertX509Certificate)

FOUNDATION_EXPORT void JavaxSecurityCertX509Certificate_init(JavaxSecurityCertX509Certificate *self);

FOUNDATION_EXPORT JavaxSecurityCertX509Certificate *JavaxSecurityCertX509Certificate_getInstanceWithJavaIoInputStream_(JavaIoInputStream *inStream);

FOUNDATION_EXPORT JavaxSecurityCertX509Certificate *JavaxSecurityCertX509Certificate_getInstanceWithByteArray_(IOSByteArray *certData);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertX509Certificate)

#endif // _JavaxSecurityCertX509Certificate_H_
