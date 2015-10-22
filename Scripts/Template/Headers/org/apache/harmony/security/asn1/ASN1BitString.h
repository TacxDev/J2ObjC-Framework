//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1BitString.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1BitString_H_
#define _OrgApacheHarmonySecurityAsn1ASN1BitString_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../org/apache/harmony/security/asn1/ASN1StringType.h"

@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief This class represents ASN.1 Bitstring type.
 */
@interface OrgApacheHarmonySecurityAsn1ASN1BitString : OrgApacheHarmonySecurityAsn1ASN1StringType

#pragma mark Public

/*!
 @brief Constructs ASN.1 Bitstring type
 The constructor is provided for inheritance purposes
 when there is a need to create a custom ASN.1 Bitstring type.
 To get a default implementation it is recommended to use
 getInstance() method.
 */
- (instancetype)init;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

/*!
 @brief Extracts BitString object from BER input stream.
 @param inArg - BER input stream
 @return BitString object
 */
- (id)getDecodedObjectWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

/*!
 @brief Returns ASN.1 Bitstring type default implementation
 The default implementation works with encoding
 that is represented as BitString object.
 @return ASN.1 Bitstring type default implementation
 */
+ (OrgApacheHarmonySecurityAsn1ASN1BitString *)getInstance;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1BitString)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1BitString_init(OrgApacheHarmonySecurityAsn1ASN1BitString *self);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1BitString *new_OrgApacheHarmonySecurityAsn1ASN1BitString_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1BitString *OrgApacheHarmonySecurityAsn1ASN1BitString_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1BitString)

/*!
 @brief Default implementation for ASN.1 Named Bitstring type
 The default implementation works with encoding
 that is mapped to array of boolean.
 */
@interface OrgApacheHarmonySecurityAsn1ASN1BitString_ASN1NamedBitList : OrgApacheHarmonySecurityAsn1ASN1BitString

#pragma mark Public

- (instancetype)initWithInt:(jint)minBits;

- (id)getDecodedObjectWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1BitString_ASN1NamedBitList)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1BitString_ASN1NamedBitList_initWithInt_(OrgApacheHarmonySecurityAsn1ASN1BitString_ASN1NamedBitList *self, jint minBits);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1BitString_ASN1NamedBitList *new_OrgApacheHarmonySecurityAsn1ASN1BitString_ASN1NamedBitList_initWithInt_(jint minBits) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1BitString_ASN1NamedBitList)

#endif // _OrgApacheHarmonySecurityAsn1ASN1BitString_H_
