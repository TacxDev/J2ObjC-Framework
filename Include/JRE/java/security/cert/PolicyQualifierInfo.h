//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/PolicyQualifierInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertPolicyQualifierInfo")
#ifdef RESTRICT_JavaSecurityCertPolicyQualifierInfo
#define INCLUDE_ALL_JavaSecurityCertPolicyQualifierInfo 0
#else
#define INCLUDE_ALL_JavaSecurityCertPolicyQualifierInfo 1
#endif
#undef RESTRICT_JavaSecurityCertPolicyQualifierInfo

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertPolicyQualifierInfo_) && (INCLUDE_ALL_JavaSecurityCertPolicyQualifierInfo || defined(INCLUDE_JavaSecurityCertPolicyQualifierInfo))
#define JavaSecurityCertPolicyQualifierInfo_

@class IOSByteArray;

/*!
 @brief An immutable policy qualifier represented by the ASN.1 PolicyQualifierInfo
  structure.
 <p>The ASN.1 definition is as follows: 
 @code

    PolicyQualifierInfo ::= SEQUENCE {
         policyQualifierId       PolicyQualifierId,
         qualifier               ANY DEFINED BY policyQualifierId } 
  
@endcode
  <p>
  A certificate policies extension, if present in an X.509 version 3
  certificate, contains a sequence of one or more policy information terms,
  each of which consists of an object identifier (OID) and optional
  qualifiers. In an end-entity certificate, these policy information terms
  indicate the policy under which the certificate has been issued and the
  purposes for which the certificate may be used. In a CA certificate, these
  policy information terms limit the set of policies for certification paths
  which include this certificate. 
 <p>
  A <code>Set</code> of <code>PolicyQualifierInfo</code> objects are returned
  by the <code>PolicyNode.getPolicyQualifiers</code>
  method. This allows applications with specific policy requirements to
  process and validate each policy qualifier. Applications that need to
  process policy qualifiers should explicitly set the 
 <code>policyQualifiersRejected</code> flag to false (by calling the 
 <code>PKIXParameters.setPolicyQualifiersRejected</code>
  method) before validating
  a certification path. 
 <p>Note that the PKIX certification path validation algorithm specifies
  that any policy qualifier in a certificate policies extension that is
  marked critical must be processed and validated. Otherwise the
  certification path must be rejected. If the 
 <code>policyQualifiersRejected</code> flag is set to false, it is up to
  the application to validate all policy qualifiers in this manner in order
  to be PKIX compliant. 
 <p><b>Concurrent Access</b>
  
 <p>All <code>PolicyQualifierInfo</code> objects must be immutable and
  thread-safe. That is, multiple threads may concurrently invoke the
  methods defined in this class on a single <code>PolicyQualifierInfo</code>
  object (or more than one) with no ill effects. Requiring 
 <code>PolicyQualifierInfo</code> objects to be immutable and thread-safe
  allows them to be passed around to various pieces of code without
  worrying about coordinating access.
 @author seth proctor
 @author Sean Mullan
 @since 1.4
 */
@interface JavaSecurityCertPolicyQualifierInfo : NSObject

#pragma mark Public

/*!
 @brief Creates an instance of <code>PolicyQualifierInfo</code> from the
  encoded bytes.The encoded byte array is copied on construction.
 @param encoded a byte array containing the qualifier in DER encoding
 @throw IOExceptionthrown if the byte array does not represent a
  valid and parsable policy qualifier
 */
- (instancetype __nonnull)initWithByteArray:(IOSByteArray *)encoded;

/*!
 @brief Returns the ASN.1 DER encoded form of this 
 <code>PolicyQualifierInfo</code>.
 @return the ASN.1 DER encoded bytes (never <code>null</code>).
  Note that a copy is returned, so the data is cloned each time
  this method is called.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the ASN.1 DER encoded form of the <code>qualifier</code>
  field of this <code>PolicyQualifierInfo</code>.
 @return the ASN.1 DER encoded bytes of the <code>qualifier</code>
  field. Note that a copy is returned, so the data is cloned each
  time this method is called.
 */
- (IOSByteArray *)getPolicyQualifier;

/*!
 @brief Returns the <code>policyQualifierId</code> field of this 
 <code>PolicyQualifierInfo</code>.The <code>policyQualifierId</code>
  is an Object Identifier (OID) represented by a set of nonnegative
  integers separated by periods.
 @return the OID (never <code>null</code>)
 */
- (NSString *)getPolicyQualifierId;

/*!
 @brief Return a printable representation of this 
 <code>PolicyQualifierInfo</code>.
 @return a <code>String</code> describing the contents of this
          <code>PolicyQualifierInfo</code>
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertPolicyQualifierInfo)

FOUNDATION_EXPORT void JavaSecurityCertPolicyQualifierInfo_initWithByteArray_(JavaSecurityCertPolicyQualifierInfo *self, IOSByteArray *encoded);

FOUNDATION_EXPORT JavaSecurityCertPolicyQualifierInfo *new_JavaSecurityCertPolicyQualifierInfo_initWithByteArray_(IOSByteArray *encoded) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertPolicyQualifierInfo *create_JavaSecurityCertPolicyQualifierInfo_initWithByteArray_(IOSByteArray *encoded);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertPolicyQualifierInfo)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertPolicyQualifierInfo")
