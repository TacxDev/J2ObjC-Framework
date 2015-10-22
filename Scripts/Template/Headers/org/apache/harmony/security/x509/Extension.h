//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/Extension.java
//

#ifndef _OrgApacheHarmonySecurityX509Extension_H_
#define _OrgApacheHarmonySecurityX509Extension_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../java/security/cert/Extension.h"

@class IOSByteArray;
@class IOSIntArray;
@class JavaIoOutputStream;
@class JavaLangStringBuilder;
@class OrgApacheHarmonySecurityAsn1ASN1Sequence;
@class OrgApacheHarmonySecurityX509BasicConstraints;
@class OrgApacheHarmonySecurityX509ExtensionValue;
@class OrgApacheHarmonySecurityX509KeyUsage;

/*!
 @author Alexander Y. Kleymenov
 @version $Revision$
 */

#define OrgApacheHarmonySecurityX509Extension_CRITICAL true
#define OrgApacheHarmonySecurityX509Extension_NON_CRITICAL false

/*!
 @brief The class encapsulates the ASN.1 DER encoding/decoding work
 with the Extension part of X.509 certificate
 (as specified in RFC 3280 -
 Internet X.509 Public Key Infrastructure.
 Certificate and Certificate Revocation List (CRL) Profile.
 http://www.ietf.org/rfc/rfc3280.txt):
 @code

  Extension  ::=  SEQUENCE  {
       extnID      OBJECT IDENTIFIER,
       critical    BOOLEAN DEFAULT FALSE,
       extnValue   OCTET STRING
  }
  
@endcode
 */
@interface OrgApacheHarmonySecurityX509Extension : NSObject < JavaSecurityCertExtension > {
 @public
  OrgApacheHarmonySecurityX509ExtensionValue *extnValueObject_;
}

#pragma mark Public

- (instancetype)initWithIntArray:(IOSIntArray *)extnID
                     withBoolean:(jboolean)critical
                   withByteArray:(IOSByteArray *)extnValue;

- (instancetype)initWithIntArray:(IOSIntArray *)extnID
                   withByteArray:(IOSByteArray *)extnValue;

- (instancetype)initWithNSString:(NSString *)extnID
                     withBoolean:(jboolean)critical
                   withByteArray:(IOSByteArray *)extnValue;

- (instancetype)initWithNSString:(NSString *)extnID
                     withBoolean:(jboolean)critical
withOrgApacheHarmonySecurityX509ExtensionValue:(OrgApacheHarmonySecurityX509ExtensionValue *)extnValueObject;

- (instancetype)initWithNSString:(NSString *)extnID
                   withByteArray:(IOSByteArray *)extnValue;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

- (void)encodeWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (jboolean)isEqual:(id)ext;

- (OrgApacheHarmonySecurityX509BasicConstraints *)getBasicConstraintsValue;

- (OrgApacheHarmonySecurityX509ExtensionValue *)getDecodedExtensionValue;

/*!
 @brief Returns ASN.1 encoded form of this X.509 Extension value.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the value of extnID field of the structure.
 */
- (NSString *)getId;

- (OrgApacheHarmonySecurityX509KeyUsage *)getKeyUsageValue;

/*!
 @brief Returns the raw (undecoded octet string) value of extnValue
 field of the structure.
 */
- (IOSByteArray *)getRawExtnValue;

/*!
 @brief Returns the value of extnValue field of the structure.
 */
- (IOSByteArray *)getValue;

- (NSUInteger)hash;

/*!
 @brief Returns the value of critical field of the structure.
 */
- (jboolean)isCritical;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509Extension)

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityX509Extension, extnValueObject_, OrgApacheHarmonySecurityX509ExtensionValue *)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, CRITICAL, jboolean)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, NON_CRITICAL, jboolean)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_SUBJ_DIRECTORY_ATTRS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, SUBJ_DIRECTORY_ATTRS_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_SUBJ_KEY_ID_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, SUBJ_KEY_ID_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_KEY_USAGE_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, KEY_USAGE_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_PRIVATE_KEY_USAGE_PERIOD_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, PRIVATE_KEY_USAGE_PERIOD_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_SUBJECT_ALT_NAME_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, SUBJECT_ALT_NAME_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_ISSUER_ALTERNATIVE_NAME_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, ISSUER_ALTERNATIVE_NAME_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_BASIC_CONSTRAINTS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, BASIC_CONSTRAINTS_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_NAME_CONSTRAINTS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, NAME_CONSTRAINTS_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_CRL_DISTR_POINTS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, CRL_DISTR_POINTS_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_CERTIFICATE_POLICIES_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, CERTIFICATE_POLICIES_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_POLICY_MAPPINGS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, POLICY_MAPPINGS_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_AUTH_KEY_ID_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, AUTH_KEY_ID_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_POLICY_CONSTRAINTS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, POLICY_CONSTRAINTS_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_EXTENDED_KEY_USAGE_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, EXTENDED_KEY_USAGE_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_FRESHEST_CRL_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, FRESHEST_CRL_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_INHIBIT_ANY_POLICY_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, INHIBIT_ANY_POLICY_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_AUTHORITY_INFO_ACCESS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, AUTHORITY_INFO_ACCESS_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_SUBJECT_INFO_ACCESS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, SUBJECT_INFO_ACCESS_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_ISSUING_DISTR_POINT_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, ISSUING_DISTR_POINT_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_CRL_NUMBER_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, CRL_NUMBER_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_CERTIFICATE_ISSUER_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, CERTIFICATE_ISSUER_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_INVALIDITY_DATE_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, INVALIDITY_DATE_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_REASON_CODE_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, REASON_CODE_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509Extension_ISSUING_DISTR_POINTS_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, ISSUING_DISTR_POINTS_, IOSIntArray *)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Sequence *OrgApacheHarmonySecurityX509Extension_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Extension, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Sequence *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509Extension_initWithNSString_withBoolean_withOrgApacheHarmonySecurityX509ExtensionValue_(OrgApacheHarmonySecurityX509Extension *self, NSString *extnID, jboolean critical, OrgApacheHarmonySecurityX509ExtensionValue *extnValueObject);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509Extension *new_OrgApacheHarmonySecurityX509Extension_initWithNSString_withBoolean_withOrgApacheHarmonySecurityX509ExtensionValue_(NSString *extnID, jboolean critical, OrgApacheHarmonySecurityX509ExtensionValue *extnValueObject) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509Extension_initWithNSString_withBoolean_withByteArray_(OrgApacheHarmonySecurityX509Extension *self, NSString *extnID, jboolean critical, IOSByteArray *extnValue);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509Extension *new_OrgApacheHarmonySecurityX509Extension_initWithNSString_withBoolean_withByteArray_(NSString *extnID, jboolean critical, IOSByteArray *extnValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509Extension_initWithIntArray_withBoolean_withByteArray_(OrgApacheHarmonySecurityX509Extension *self, IOSIntArray *extnID, jboolean critical, IOSByteArray *extnValue);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509Extension *new_OrgApacheHarmonySecurityX509Extension_initWithIntArray_withBoolean_withByteArray_(IOSIntArray *extnID, jboolean critical, IOSByteArray *extnValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509Extension_initWithNSString_withByteArray_(OrgApacheHarmonySecurityX509Extension *self, NSString *extnID, IOSByteArray *extnValue);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509Extension *new_OrgApacheHarmonySecurityX509Extension_initWithNSString_withByteArray_(NSString *extnID, IOSByteArray *extnValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509Extension_initWithIntArray_withByteArray_(OrgApacheHarmonySecurityX509Extension *self, IOSIntArray *extnID, IOSByteArray *extnValue);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509Extension *new_OrgApacheHarmonySecurityX509Extension_initWithIntArray_withByteArray_(IOSIntArray *extnID, IOSByteArray *extnValue) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509Extension)

#endif // _OrgApacheHarmonySecurityX509Extension_H_
