//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/Signature.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySignature")
#ifdef RESTRICT_JavaSecuritySignature
#define INCLUDE_ALL_JavaSecuritySignature 0
#else
#define INCLUDE_ALL_JavaSecuritySignature 1
#endif
#undef RESTRICT_JavaSecuritySignature

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySignature_) && (INCLUDE_ALL_JavaSecuritySignature || defined(INCLUDE_JavaSecuritySignature))
#define JavaSecuritySignature_

#define RESTRICT_JavaSecuritySignatureSpi 1
#define INCLUDE_JavaSecuritySignatureSpi 1
#include "java/security/SignatureSpi.h"

@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaSecurityAlgorithmParameters;
@class JavaSecurityCertCertificate;
@class JavaSecurityProvider;
@class JavaSecuritySecureRandom;
@protocol JavaSecurityPrivateKey;
@protocol JavaSecurityPublicKey;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief The Signature class is used to provide applications the functionality
  of a digital signature algorithm.Digital signatures are used for
  authentication and integrity assurance of digital data.
 <p> The signature algorithm can be, among others, the NIST standard
  DSA, using DSA and SHA-1. The DSA algorithm using the
  SHA-1 message digest algorithm can be specified as <code>SHA1withDSA</code>.
  In the case of RSA, there are multiple choices for the message digest
  algorithm, so the signing algorithm could be specified as, for example, 
 <code>MD2withRSA</code>, <code>MD5withRSA</code>, or <code>SHA1withRSA</code>.
  The algorithm name must be specified, as there is no default. 
 <p> A Signature object can be used to generate and verify digital
  signatures. 
 <p> There are three phases to the use of a Signature object for
  either signing data or verifying a signature:<ol>
  
 <li>Initialization, with either
      <ul>
      <li>a public key, which initializes the signature for
      verification (see <code>initVerify</code>), or
      <li>a private key (and optionally a Secure Random Number Generator),
      which initializes the signature for signing
      (see <code>initSign(PrivateKey)</code>
      and <code>initSign(PrivateKey, SecureRandom)</code>).
      </ul>
  
 <li>Updating
  
 <p>Depending on the type of initialization, this will update the
  bytes to be signed or verified. See the 
 <code>update</code> methods. 
 <li>Signing or Verifying a signature on all updated bytes. See the 
 <code>sign</code> methods and the <code>verify</code>
  method. 
 </ol>
  
 <p>Note that this class is abstract and extends from 
 <code>SignatureSpi</code> for historical reasons.
  Application developers should only take notice of the methods defined in
  this <code>Signature</code> class; all the methods in
  the superclass are intended for cryptographic service providers who wish to
  supply their own implementations of digital signature algorithms. 
 <p> Android provides the following <code>Signature</code> algorithms: 
 <table>
    <thead>
      <tr>
        <th>Algorithm</th>
        <th>Supported API Levels</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>DSA</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>DSAwithSHA1</td>
        <td>1+</td>
      </tr>
      <tr class="deprecated">
        <td>DSS</td>
        <td>1-19</td>
      </tr>
      <tr>
        <td>ECDSA</td>
        <td>11+</td>
      </tr>
      <tr>
        <td>ECDSAwithSHA1</td>
        <td>11+</td>
      </tr>
      <tr class="deprecated">
        <td>MD2withRSA</td>
        <td>1-3</td>
      </tr>
      <tr class="deprecated">
        <td>MD4withRSA</td>
        <td>1-8</td>
      </tr>
      <tr>
        <td>MD5withRSA</td>
        <td>1+</td>
      </tr>
      <tr class="deprecated">
        <td>MD5withRSA/ISO9796-2</td>
        <td>1-8</td>
      </tr>
      <tr>
        <td>NONEwithDSA</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>NONEwithECDSA</td>
        <td>11+</td>
      </tr>
      <tr>
        <td>NONEwithRSA</td>
        <td>17+</td>
      </tr>
      <tr class="deprecated">
        <td>RSASSA-PSS</td>
        <td>1-8</td>
      </tr>
      <tr>
        <td>SHA1withDSA</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA1withECDSA</td>
        <td>11+</td>
      </tr>
      <tr>
        <td>SHA1withRSA</td>
        <td>1+</td>
      </tr>
      <tr class="deprecated">
        <td>SHA1withRSA/ISO9796-2</td>
        <td>1-8</td>
      </tr>
      <tr>
        <td>SHA1withRSA/PSS</td>
        <td>23+</td>
      </tr>
      <tr>
        <td>SHA224withDSA</td>
        <td>20+</td>
      </tr>
      <tr>
        <td>SHA224withECDSA</td>
        <td>20+</td>
      </tr>
      <tr>
        <td>SHA224withRSA</td>
        <td>20+</td>
      </tr>
      <tr>
        <td>SHA224withRSA/PSS</td>
        <td>23+</td>
      </tr>
      <tr>
        <td>SHA256withDSA</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA256withECDSA</td>
        <td>11+</td>
      </tr>
      <tr>
        <td>SHA256withRSA</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA256withRSA/PSS</td>
        <td>23+</td>
      </tr>
      <tr>
        <td>SHA384withECDSA</td>
        <td>11+</td>
      </tr>
      <tr>
        <td>SHA384withRSA</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA384withRSA/PSS</td>
        <td>23+</td>
      </tr>
      <tr>
        <td>SHA512withECDSA</td>
        <td>11+</td>
      </tr>
      <tr>
        <td>SHA512withRSA</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA512withRSA/PSS</td>
        <td>23+</td>
      </tr>
    </tbody>
  </table>
  These algorithms are described in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#Signature">
  Signature section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
 @author Benjamin Renaud
 */
@interface JavaSecuritySignature : JavaSecuritySignatureSpi {
 @public
  JavaSecurityProvider *provider_;
  /*!
   @brief Current state of this signature object.
   */
  jint state_;
}
@property (readonly, class) jint UNINITIALIZED NS_SWIFT_NAME(UNINITIALIZED);
@property (readonly, class) jint SIGN NS_SWIFT_NAME(SIGN);
@property (readonly, class) jint VERIFY NS_SWIFT_NAME(VERIFY);

+ (jint)UNINITIALIZED;

+ (jint)SIGN;

+ (jint)VERIFY;

#pragma mark Public

/*!
 @brief Returns a clone if the implementation is cloneable.
 @return a clone if the implementation is cloneable.
 @throw CloneNotSupportedExceptionif this is called
  on an implementation that does not support <code>Cloneable</code>.
 */
- (id)java_clone;

/*!
 @brief Returns the name of the algorithm for this signature object.
 @return the name of the algorithm for this signature object.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns the <code>SignatureSpi</code> backing this <code>Signature</code>.
 */
- (JavaSecuritySignatureSpi *)getCurrentSpi;

/*!
 @brief Returns a Signature object that implements the specified signature
  algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new Signature object encapsulating the
  SignatureSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the algorithm requested.  See the Signature section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#Signature">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @return the new Signature object.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           Signature implementation for the
           specified algorithm.
 - seealso: Provider
 */
+ (JavaSecuritySignature *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a Signature object that implements the specified
  signature algorithm.
 <p> A new Signature object encapsulating the
  SignatureSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the name of the algorithm requested.  See the Signature section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#Signature">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the provider.
 @return the new Signature object.
 @throw NoSuchAlgorithmExceptionif a SignatureSpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the provider is null.
 - seealso: Provider
 @since 1.4
 */
+ (JavaSecuritySignature *)getInstanceWithNSString:(NSString *)algorithm
                          withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a Signature object that implements the specified signature
  algorithm.
 <p> A new Signature object encapsulating the
  SignatureSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the name of the algorithm requested.  See the Signature section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#Signature">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the name of the provider.
 @return the new Signature object.
 @throw NoSuchAlgorithmExceptionif a SignatureSpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the provider name is null
           or empty.
 - seealso: Provider
 */
+ (JavaSecuritySignature *)getInstanceWithNSString:(NSString *)algorithm
                                      withNSString:(NSString *)provider;

/*!
 @brief Gets the value of the specified algorithm parameter.This method
  supplies a general-purpose mechanism through which it is possible to
  get the various parameters of this object.
 A parameter may be any
  settable parameter for the algorithm, such as a parameter size, or
  a source of random bits for signature generation (if appropriate),
  or an indication of whether or not to perform a specific but optional
  computation. A uniform algorithm-specific naming scheme for each
  parameter is desirable but left unspecified at this time.
 @param param the string name of the parameter.
 @return the object that represents the parameter value, or null if
  there is none.
 @throw InvalidParameterExceptionif <code>param</code> is an invalid
  parameter for this engine, or another exception occurs while
  trying to get this parameter.
 - seealso: #setParameter(String, Object)
 */
- (id)getParameterWithNSString:(NSString *)param __attribute__((deprecated));

/*!
 @brief Returns the parameters used with this signature object.
 <p>The returned parameters may be the same that were used to initialize
  this signature, or may contain a combination of default and randomly
  generated parameter values used by the underlying signature
  implementation if this signature requires algorithm parameters but
  was not initialized with any.
 @return the parameters used with this signature, or null if this
  signature does not use any parameters.
 - seealso: #setParameter(AlgorithmParameterSpec)
 @since 1.4
 */
- (JavaSecurityAlgorithmParameters *)getParameters;

/*!
 @brief Returns the provider of this signature object.
 @return the provider of this signature object
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initialize this object for signing.If this method is called
  again with a different argument, it negates the effect
  of this call.
 @param privateKey the private key of the identity whose signature  is going to be generated.
 @throw InvalidKeyExceptionif the key is invalid.
 */
- (void)initSignWithJavaSecurityPrivateKey:(id<JavaSecurityPrivateKey>)privateKey OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initialize this object for signing.If this method is called
  again with a different argument, it negates the effect
  of this call.
 @param privateKey the private key of the identity whose signature  is going to be generated.
 @param random the source of randomness for this signature.
 @throw InvalidKeyExceptionif the key is invalid.
 */
- (void)initSignWithJavaSecurityPrivateKey:(id<JavaSecurityPrivateKey>)privateKey
              withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this object for verification, using the public key from
  the given certificate.
 <p>If the certificate is of type X.509 and has a <i>key usage</i>
  extension field marked as critical, and the value of the <i>key usage</i>
  extension field implies that the public key in
  the certificate and its corresponding private key are not
  supposed to be used for digital signatures, an 
 <code>InvalidKeyException</code> is thrown.
 @param certificate the certificate of the identity whose signature is  going to be verified.
 @throw InvalidKeyExceptionif the public key in the certificate
  is not encoded properly or does not include required  parameter
  information or cannot be used for digital signature purposes.
 @since 1.3
 */
- (void)initVerifyWithJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)certificate OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this object for verification.If this method is called
  again with a different argument, it negates the effect
  of this call.
 @param publicKey the public key of the identity whose signature is  going to be verified.
 @throw InvalidKeyExceptionif the key is invalid.
 */
- (void)initVerifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)publicKey OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this signature engine with the specified parameter set.
 @param params the parameters
 @throw InvalidAlgorithmParameterExceptionif the given parameters
  are inappropriate for this signature engine
 - seealso: #getParameters
 */
- (void)setParameterWithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params;

/*!
 @brief Sets the specified algorithm parameter to the specified value.
 This method supplies a general-purpose mechanism through
  which it is possible to set the various parameters of this object.
  A parameter may be any settable parameter for the algorithm, such as
  a parameter size, or a source of random bits for signature generation
  (if appropriate), or an indication of whether or not to perform
  a specific but optional computation. A uniform algorithm-specific
  naming scheme for each parameter is desirable but left unspecified
  at this time.
 @param param the string identifier of the parameter.
 @param value the parameter value.
 @throw InvalidParameterExceptionif <code>param</code> is an
  invalid parameter for this signature algorithm engine,
  the parameter is already set
  and cannot be set again, a security exception occurs, and so on.
 - seealso: #getParameter
 */
- (void)setParameterWithNSString:(NSString *)param
                          withId:(id)value __attribute__((deprecated));

/*!
 @brief Returns the signature bytes of all the data updated.
 The format of the signature depends on the underlying
  signature scheme. 
 <p>A call to this method resets this signature object to the state
  it was in when previously initialized for signing via a
  call to <code>initSign(PrivateKey)</code>. That is, the object is
  reset and available to generate another signature from the same
  signer, if desired, via new calls to <code>update</code> and 
 <code>sign</code>.
 @return the signature bytes of the signing operation's result.
 @throw SignatureExceptionif this signature object is not
  initialized properly or if this signature algorithm is unable to
  process the input data provided.
 */
- (IOSByteArray *)sign;

/*!
 @brief Finishes the signature operation and stores the resulting signature
  bytes in the provided buffer <code>outbuf</code>, starting at 
 <code>offset</code>.
 The format of the signature depends on the underlying
  signature scheme. 
 <p>This signature object is reset to its initial state (the state it
  was in after a call to one of the <code>initSign</code> methods) and
  can be reused to generate further signatures with the same private key.
 @param outbuf buffer for the signature result.
 @param offset offset into <code>outbuf</code>  where the signature is
   stored.
 @param len number of bytes within <code>outbuf</code>  allotted for the
   signature.
 @return the number of bytes placed into <code>outbuf</code>.
 @throw SignatureExceptionif this signature object is not
  initialized properly, if this signature algorithm is unable to
  process the input data provided, or if <code>len</code> is less
  than the actual signature length.
 @since 1.2
 */
- (jint)signWithByteArray:(IOSByteArray *)outbuf
                  withInt:(jint)offset
                  withInt:(jint)len;

/*!
 @brief Returns a string representation of this signature object,
  providing information that includes the state of the object
  and the name of the algorithm used.
 @return a string representation of this signature object.
 */
- (NSString *)description;

/*!
 @brief Updates the data to be signed or verified by a byte.
 @param b the byte to use for the update.
 @throw SignatureExceptionif this signature object is not
  initialized properly.
 */
- (void)updateWithByte:(jbyte)b;

/*!
 @brief Updates the data to be signed or verified, using the specified
  array of bytes.
 @param data the byte array to use for the update.
 @throw SignatureExceptionif this signature object is not
  initialized properly.
 */
- (void)updateWithByteArray:(IOSByteArray *)data;

/*!
 @brief Updates the data to be signed or verified, using the specified
  array of bytes, starting at the specified offset.
 @param data the array of bytes.
 @param off the offset to start from in the array of bytes.
 @param len the number of bytes to use, starting at offset.
 @throw SignatureExceptionif this signature object is not
  initialized properly.
 */
- (void)updateWithByteArray:(IOSByteArray *)data
                    withInt:(jint)off
                    withInt:(jint)len;

/*!
 @brief Updates the data to be signed or verified using the specified
  ByteBuffer.Processes the <code>data.remaining()</code> bytes
  starting at at <code>data.position()</code>.
 Upon return, the buffer's position will be equal to its limit;
  its limit will not have changed.
 @param data the ByteBuffer
 @throw SignatureExceptionif this signature object is not
  initialized properly.
 @since 1.5
 */
- (void)updateWithJavaNioByteBuffer:(JavaNioByteBuffer *)data;

/*!
 @brief Verifies the passed-in signature.
 <p>A call to this method resets this signature object to the state
  it was in when previously initialized for verification via a
  call to <code>initVerify(PublicKey)</code>. That is, the object is
  reset and available to verify another signature from the identity
  whose public key was specified in the call to <code>initVerify</code>.
 @param signature the signature bytes to be verified.
 @return true if the signature was verified, false if not.
 @throw SignatureExceptionif this signature object is not
  initialized properly, the passed-in signature is improperly
  encoded or of the wrong type, if this signature algorithm is unable to
  process the input data provided, etc.
 */
- (jboolean)verifyWithByteArray:(IOSByteArray *)signature;

/*!
 @brief Verifies the passed-in signature in the specified array
  of bytes, starting at the specified offset.
 <p>A call to this method resets this signature object to the state
  it was in when previously initialized for verification via a
  call to <code>initVerify(PublicKey)</code>. That is, the object is
  reset and available to verify another signature from the identity
  whose public key was specified in the call to <code>initVerify</code>.
 @param signature the signature bytes to be verified.
 @param offset the offset to start from in the array of bytes.
 @param length the number of bytes to use, starting at offset.
 @return true if the signature was verified, false if not.
 @throw SignatureExceptionif this signature object is not
  initialized properly, the passed-in signature is improperly
  encoded or of the wrong type, if this signature algorithm is unable to
  process the input data provided, etc.
 @throw IllegalArgumentExceptionif the <code>signature</code>
  byte array is null, or the <code>offset</code> or <code>length</code>
  is less than 0, or the sum of the <code>offset</code> and 
 <code>length</code> is greater than the length of the 
 <code>signature</code> byte array.
 @since 1.4
 */
- (jboolean)verifyWithByteArray:(IOSByteArray *)signature
                        withInt:(jint)offset
                        withInt:(jint)length;

#pragma mark Protected

/*!
 @brief Creates a Signature object for the specified algorithm.
 @param algorithm the standard string name of the algorithm.  See the Signature section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#Signature">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)algorithm;

#pragma mark Package-Private

- (void)chooseFirstProvider;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaSecuritySignature)

J2OBJC_FIELD_SETTER(JavaSecuritySignature, provider_, JavaSecurityProvider *)

/*!
 @brief Possible <code>state</code> value, signifying that
  this signature object has not yet been initialized.
 */
inline jint JavaSecuritySignature_get_UNINITIALIZED(void);
#define JavaSecuritySignature_UNINITIALIZED 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecuritySignature, UNINITIALIZED, jint)

/*!
 @brief Possible <code>state</code> value, signifying that
  this signature object has been initialized for signing.
 */
inline jint JavaSecuritySignature_get_SIGN(void);
#define JavaSecuritySignature_SIGN 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecuritySignature, SIGN, jint)

/*!
 @brief Possible <code>state</code> value, signifying that
  this signature object has been initialized for verification.
 */
inline jint JavaSecuritySignature_get_VERIFY(void);
#define JavaSecuritySignature_VERIFY 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecuritySignature, VERIFY, jint)

FOUNDATION_EXPORT void JavaSecuritySignature_initWithNSString_(JavaSecuritySignature *self, NSString *algorithm);

FOUNDATION_EXPORT JavaSecuritySignature *JavaSecuritySignature_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecuritySignature *JavaSecuritySignature_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecuritySignature *JavaSecuritySignature_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySignature)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySignature")
