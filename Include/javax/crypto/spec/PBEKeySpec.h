//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/PBEKeySpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecPBEKeySpec")
#ifdef RESTRICT_JavaxCryptoSpecPBEKeySpec
#define INCLUDE_ALL_JavaxCryptoSpecPBEKeySpec 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecPBEKeySpec 1
#endif
#undef RESTRICT_JavaxCryptoSpecPBEKeySpec

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSpecPBEKeySpec_) && (INCLUDE_ALL_JavaxCryptoSpecPBEKeySpec || defined(INCLUDE_JavaxCryptoSpecPBEKeySpec))
#define JavaxCryptoSpecPBEKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include "java/security/spec/KeySpec.h"

@class IOSByteArray;
@class IOSCharArray;
@class JavaLangInteger;

/*!
 @brief A user-chosen password that can be used with password-based encryption
  (<i>PBE</i>).
 <p>The password can be viewed as some kind of raw key material, from which
  the encryption mechanism that uses it derives a cryptographic key. 
 <p>Different PBE mechanisms may consume different bits of each password
  character. For example, the PBE mechanism defined in 
 <a href="http://www.ietf.org/rfc/rfc2898.txt">
  PKCS #5</a> looks at only the low order 8 bits of each character, whereas
  PKCS #12 looks at all 16 bits of each character. 
 <p>You convert the password characters to a PBE key by creating an
  instance of the appropriate secret-key factory. For example, a secret-key
  factory for PKCS #5 will construct a PBE key from only the low order 8 bits
  of each password character, whereas a secret-key factory for PKCS #12 will
  take all 16 bits of each character. 
 <p>Also note that this class stores passwords as char arrays instead of 
 <code>String</code> objects (which would seem more logical), because the
  String class is immutable and there is no way to overwrite its
  internal value when the password stored in it is no longer needed. Hence,
  this class requests the password as a char array, so it can be overwritten
  when done.
 @author Jan Luehe
 @author Valerie Peng
 - seealso: javax.crypto.SecretKeyFactory
 - seealso: PBEParameterSpec
 @since 1.4
 */
@interface JavaxCryptoSpecPBEKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Constructor that takes a password.An empty char[] is used if
  null is specified.
 <p> Note: <code>password</code> is cloned before it is stored in
  the new <code>PBEKeySpec</code> object.
 @param password the password.
 */
- (instancetype __nonnull)initWithCharArray:(IOSCharArray *)password;

/*!
 @brief Constructor that takes a password, salt, iteration count for
  generating PBEKey of fixed-key-size PBE ciphers.An empty
  char[] is used if null is specified for <code>password</code>.
 <p> Note: the <code>password</code> and <code>salt</code>
  are cloned before they are stored in the new 
 <code>PBEKeySpec</code> object.
 @param password the password.
 @param salt the salt.
 @param iterationCount the iteration count.
 @throw NullPointerExceptionif <code>salt</code> is null.
 @throw IllegalArgumentExceptionif <code>salt</code> is empty,
  i.e. 0-length, or <code>iterationCount</code> is not positive.
 */
- (instancetype __nonnull)initWithCharArray:(IOSCharArray *)password
                              withByteArray:(IOSByteArray *)salt
                                    withInt:(jint)iterationCount;

/*!
 @brief Constructor that takes a password, salt, iteration count, and
  to-be-derived key length for generating PBEKey of variable-key-size
  PBE ciphers.An empty char[] is used if null is specified for 
 <code>password</code>.
 <p> Note: the <code>password</code> and <code>salt</code>
  are cloned before they are stored in
  the new <code>PBEKeySpec</code> object.
 @param password the password.
 @param salt the salt.
 @param iterationCount the iteration count.
 @param keyLength the to-be-derived key length.
 @throw NullPointerExceptionif <code>salt</code> is null.
 @throw IllegalArgumentExceptionif <code>salt</code> is empty,
  i.e. 0-length, <code>iterationCount</code> or 
 <code>keyLength</code> is not positive.
 */
- (instancetype __nonnull)initWithCharArray:(IOSCharArray *)password
                              withByteArray:(IOSByteArray *)salt
                                    withInt:(jint)iterationCount
                                    withInt:(jint)keyLength;

/*!
 @brief Clears the internal copy of the password.
 */
- (void)clearPassword;

/*!
 @brief Returns the iteration count or 0 if not specified.
 @return the iteration count.
 */
- (jint)getIterationCount;

/*!
 @brief Returns the to-be-derived key length or 0 if not specified.
 <p> Note: this is used to indicate the preference on key length
  for variable-key-size ciphers. The actual key size depends on
  each provider's implementation.
 @return the to-be-derived key length.
 */
- (jint)getKeyLength;

/*!
 @brief Returns a copy of the password.
 <p> Note: this method returns a copy of the password. It is
  the caller's responsibility to zero out the password information after
  it is no longer needed.
 @throw IllegalStateExceptionif password has been cleared by
  calling <code>clearPassword</code> method.
 @return the password.
 */
- (IOSCharArray *)getPassword;

/*!
 @brief Returns a copy of the salt or null if not specified.
 <p> Note: this method should return a copy of the salt. It is
  the caller's responsibility to zero out the salt information after
  it is no longer needed.
 @return the salt.
 */
- (IOSByteArray *)getSalt;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecPBEKeySpec)

FOUNDATION_EXPORT void JavaxCryptoSpecPBEKeySpec_initWithCharArray_(JavaxCryptoSpecPBEKeySpec *self, IOSCharArray *password);

FOUNDATION_EXPORT JavaxCryptoSpecPBEKeySpec *new_JavaxCryptoSpecPBEKeySpec_initWithCharArray_(IOSCharArray *password) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecPBEKeySpec *create_JavaxCryptoSpecPBEKeySpec_initWithCharArray_(IOSCharArray *password);

FOUNDATION_EXPORT void JavaxCryptoSpecPBEKeySpec_initWithCharArray_withByteArray_withInt_withInt_(JavaxCryptoSpecPBEKeySpec *self, IOSCharArray *password, IOSByteArray *salt, jint iterationCount, jint keyLength);

FOUNDATION_EXPORT JavaxCryptoSpecPBEKeySpec *new_JavaxCryptoSpecPBEKeySpec_initWithCharArray_withByteArray_withInt_withInt_(IOSCharArray *password, IOSByteArray *salt, jint iterationCount, jint keyLength) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecPBEKeySpec *create_JavaxCryptoSpecPBEKeySpec_initWithCharArray_withByteArray_withInt_withInt_(IOSCharArray *password, IOSByteArray *salt, jint iterationCount, jint keyLength);

FOUNDATION_EXPORT void JavaxCryptoSpecPBEKeySpec_initWithCharArray_withByteArray_withInt_(JavaxCryptoSpecPBEKeySpec *self, IOSCharArray *password, IOSByteArray *salt, jint iterationCount);

FOUNDATION_EXPORT JavaxCryptoSpecPBEKeySpec *new_JavaxCryptoSpecPBEKeySpec_initWithCharArray_withByteArray_withInt_(IOSCharArray *password, IOSByteArray *salt, jint iterationCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecPBEKeySpec *create_JavaxCryptoSpecPBEKeySpec_initWithCharArray_withByteArray_withInt_(IOSCharArray *password, IOSByteArray *salt, jint iterationCount);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecPBEKeySpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecPBEKeySpec")
