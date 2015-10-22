//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Sequence.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Sequence_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Sequence_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../org/apache/harmony/security/asn1/ASN1TypeCollection.h"

@class IOSObjectArray;
@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief This class represents ASN.1 Sequence type.
 */
@interface OrgApacheHarmonySecurityAsn1ASN1Sequence : OrgApacheHarmonySecurityAsn1ASN1TypeCollection

#pragma mark Public

- (instancetype)initWithOrgApacheHarmonySecurityAsn1ASN1TypeArray:(IOSObjectArray *)type;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1Sequence)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1Sequence_initWithOrgApacheHarmonySecurityAsn1ASN1TypeArray_(OrgApacheHarmonySecurityAsn1ASN1Sequence *self, IOSObjectArray *type);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Sequence *new_OrgApacheHarmonySecurityAsn1ASN1Sequence_initWithOrgApacheHarmonySecurityAsn1ASN1TypeArray_(IOSObjectArray *type) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1Sequence)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Sequence_H_
