//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/X509EncodedKeySpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecX509EncodedKeySpec")
#ifdef RESTRICT_JavaSecuritySpecX509EncodedKeySpec
#define INCLUDE_ALL_JavaSecuritySpecX509EncodedKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecX509EncodedKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecX509EncodedKeySpec

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecX509EncodedKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecX509EncodedKeySpec || defined(INCLUDE_JavaSecuritySpecX509EncodedKeySpec))
#define JavaSecuritySpecX509EncodedKeySpec_

#define RESTRICT_JavaSecuritySpecEncodedKeySpec 1
#define INCLUDE_JavaSecuritySpecEncodedKeySpec 1
#include "java/security/spec/EncodedKeySpec.h"

@class IOSByteArray;

/*!
 @brief This class represents the ASN.1 encoding of a public key,
  encoded according to the ASN.1 type <code>SubjectPublicKeyInfo</code>.
 The <code>SubjectPublicKeyInfo</code> syntax is defined in the X.509
  standard as follows: 
 @code

  SubjectPublicKeyInfo ::= SEQUENCE {
    algorithm AlgorithmIdentifier,
    subjectPublicKey BIT STRING } 
  
@endcode
 @author Jan Luehe
 - seealso: java.security.Key
 - seealso: java.security.KeyFactory
 - seealso: KeySpec
 - seealso: EncodedKeySpec
 - seealso: PKCS8EncodedKeySpec
 @since 1.2
 */
@interface JavaSecuritySpecX509EncodedKeySpec : JavaSecuritySpecEncodedKeySpec

#pragma mark Public

/*!
 @brief Creates a new X509EncodedKeySpec with the given encoded key.
 @param encodedKey the key, which is assumed to be  encoded according to the X.509 standard. The contents of the
   array are copied to protect against subsequent modification.
 @throw NullPointerExceptionif <code>encodedKey</code>
  is null.
 */
- (instancetype __nonnull)initWithByteArray:(IOSByteArray *)encodedKey;

/*!
 @brief Returns the key bytes, encoded according to the X.509 standard.
 @return the X.509 encoding of the key. Returns a new array
  each time this method is called.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the name of the encoding format associated with this
  key specification.
 @return the string <code>"X.509"</code>.
 */
- (NSString *)getFormat;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecX509EncodedKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecX509EncodedKeySpec_initWithByteArray_(JavaSecuritySpecX509EncodedKeySpec *self, IOSByteArray *encodedKey);

FOUNDATION_EXPORT JavaSecuritySpecX509EncodedKeySpec *new_JavaSecuritySpecX509EncodedKeySpec_initWithByteArray_(IOSByteArray *encodedKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecX509EncodedKeySpec *create_JavaSecuritySpecX509EncodedKeySpec_initWithByteArray_(IOSByteArray *encodedKey);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecX509EncodedKeySpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecX509EncodedKeySpec")
