//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/MGF1ParameterSpec.java
//

#ifndef _JavaSecuritySpecMGF1ParameterSpec_H_
#define _JavaSecuritySpecMGF1ParameterSpec_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/security/spec/AlgorithmParameterSpec.h"

/*!
 @brief The parameter specification for the Mask Generation Function (MGF1) in
 the RSA-PSS Signature and OAEP Padding scheme.
 <p>
 Defined in the <a
 href="http://www.rsa.com/rsalabs/pubs/PKCS/html/pkcs-1.html">PKCS #1 v2.1</a>
 standard
 */
@interface JavaSecuritySpecMGF1ParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Creates a new <code>MGF1ParameterSpec</code> with the specified message digest
 algorithm name.
 @param mdName
 the name of the message digest algorithm.
 */
- (instancetype)initWithNSString:(NSString *)mdName;

/*!
 @brief Returns the name of the message digest algorithm.
 @return the name of the message digest algorithm.
 */
- (NSString *)getDigestAlgorithm;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecMGF1ParameterSpec)

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA1_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecMGF1ParameterSpec, SHA1_, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA256_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecMGF1ParameterSpec, SHA256_, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA384_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecMGF1ParameterSpec, SHA384_, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA512_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecMGF1ParameterSpec, SHA512_, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT void JavaSecuritySpecMGF1ParameterSpec_initWithNSString_(JavaSecuritySpecMGF1ParameterSpec *self, NSString *mdName);

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *new_JavaSecuritySpecMGF1ParameterSpec_initWithNSString_(NSString *mdName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecMGF1ParameterSpec)

#endif // _JavaSecuritySpecMGF1ParameterSpec_H_
