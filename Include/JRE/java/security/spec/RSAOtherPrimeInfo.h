//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/RSAOtherPrimeInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo")
#ifdef RESTRICT_JavaSecuritySpecRSAOtherPrimeInfo
#define INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo 0
#else
#define INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo 1
#endif
#undef RESTRICT_JavaSecuritySpecRSAOtherPrimeInfo

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecRSAOtherPrimeInfo_) && (INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo || defined(INCLUDE_JavaSecuritySpecRSAOtherPrimeInfo))
#define JavaSecuritySpecRSAOtherPrimeInfo_

@class JavaMathBigInteger;

/*!
 @brief This class represents the triplet (prime, exponent, and coefficient)
  inside RSA's OtherPrimeInfo structure, as defined in the PKCS#1 v2.1.
 The ASN.1 syntax of RSA's OtherPrimeInfo is as follows: 
 @code

  OtherPrimeInfo ::= SEQUENCE {
    prime INTEGER,
    exponent INTEGER,
    coefficient INTEGER
    } 
  
@endcode
 @author Valerie Peng
 - seealso: RSAPrivateCrtKeySpec
 - seealso: java.security.interfaces.RSAMultiPrimePrivateCrtKey
 @since 1.4
 */
@interface JavaSecuritySpecRSAOtherPrimeInfo : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>RSAOtherPrimeInfo</code>
  given the prime, primeExponent, and
  crtCoefficient as defined in PKCS#1.
 @param prime the prime factor of n.
 @param primeExponent the exponent.
 @param crtCoefficient the Chinese Remainder Theorem  coefficient.
 @throw NullPointerExceptionif any of the parameters, i.e. 
 <code>prime</code>, <code>primeExponent</code>,
  <code>crtCoefficient</code>, is null.
 */
- (instancetype __nonnull)initWithJavaMathBigInteger:(JavaMathBigInteger *)prime
                              withJavaMathBigInteger:(JavaMathBigInteger *)primeExponent
                              withJavaMathBigInteger:(JavaMathBigInteger *)crtCoefficient;

/*!
 @brief Returns the prime's crtCoefficient.
 @return the crtCoefficient.
 */
- (JavaMathBigInteger *)getCrtCoefficient;

/*!
 @brief Returns the prime's exponent.
 @return the primeExponent.
 */
- (JavaMathBigInteger *)getExponent;

/*!
 @brief Returns the prime.
 @return the prime.
 */
- (JavaMathBigInteger *)getPrime;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecRSAOtherPrimeInfo)

FOUNDATION_EXPORT void JavaSecuritySpecRSAOtherPrimeInfo_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecRSAOtherPrimeInfo *self, JavaMathBigInteger *prime, JavaMathBigInteger *primeExponent, JavaMathBigInteger *crtCoefficient);

FOUNDATION_EXPORT JavaSecuritySpecRSAOtherPrimeInfo *new_JavaSecuritySpecRSAOtherPrimeInfo_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *prime, JavaMathBigInteger *primeExponent, JavaMathBigInteger *crtCoefficient) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecRSAOtherPrimeInfo *create_JavaSecuritySpecRSAOtherPrimeInfo_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *prime, JavaMathBigInteger *primeExponent, JavaMathBigInteger *crtCoefficient);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecRSAOtherPrimeInfo)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo")
