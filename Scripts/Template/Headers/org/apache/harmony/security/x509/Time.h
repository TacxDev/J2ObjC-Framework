//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/Time.java
//

#ifndef _OrgApacheHarmonySecurityX509Time_H_
#define _OrgApacheHarmonySecurityX509Time_H_

#include "../../../../../J2ObjC_header.h"

@class OrgApacheHarmonySecurityAsn1ASN1Choice;

/*!
 @author Alexander Y. Kleymenov
 @version $Revision$
 */

/*!
 @brief Class represents the work with the following X.509 structure:
 (as specified in RFC 3280 -
 Internet X.509 Public Key Infrastructure.
 Certificate and Certificate Revocation List (CRL) Profile.
 http://www.ietf.org/rfc/rfc3280.txt):
 @code

  Time ::= CHOICE {
       utcTime        UTCTime,
       generalTime    GeneralizedTime
  }
  
@endcode
 */
@interface OrgApacheHarmonySecurityX509Time : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509Time)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Choice *OrgApacheHarmonySecurityX509Time_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Time, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Choice *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509Time_init(OrgApacheHarmonySecurityX509Time *self);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509Time *new_OrgApacheHarmonySecurityX509Time_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509Time)

#endif // _OrgApacheHarmonySecurityX509Time_H_
