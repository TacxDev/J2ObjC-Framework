//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/MessageDigest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityMessageDigest")
#ifdef RESTRICT_JavaSecurityMessageDigest
#define INCLUDE_ALL_JavaSecurityMessageDigest 0
#else
#define INCLUDE_ALL_JavaSecurityMessageDigest 1
#endif
#undef RESTRICT_JavaSecurityMessageDigest
#ifdef INCLUDE_JavaSecurityMessageDigest_Delegate
#define INCLUDE_JavaSecurityMessageDigest 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityMessageDigest_) && (INCLUDE_ALL_JavaSecurityMessageDigest || defined(INCLUDE_JavaSecurityMessageDigest))
#define JavaSecurityMessageDigest_

#define RESTRICT_JavaSecurityMessageDigestSpi 1
#define INCLUDE_JavaSecurityMessageDigestSpi 1
#include "java/security/MessageDigestSpi.h"

@class IOSByteArray;
@class JavaLangBoolean;
@class JavaLangByte;
@class JavaLangInteger;
@class JavaNioByteBuffer;
@class JavaSecurityProvider;

/*!
 @brief This MessageDigest class provides applications the functionality of a
  message digest algorithm, such as SHA-1 or SHA-256.
 Message digests are secure one-way hash functions that take arbitrary-sized
  data and output a fixed-length hash value. 
 <p>A MessageDigest object starts out initialized. The data is
  processed through it using the <code>update</code>
  methods. At any point <code>reset</code> can be called
  to reset the digest. Once all the data to be updated has been
  updated, one of the <code>digest</code> methods should
  be called to complete the hash computation. 
 <p>The <code>digest</code> method can be called once for a given number
  of updates. After <code>digest</code> has been called, the MessageDigest
  object is reset to its initialized state. 
 <p>Implementations are free to implement the Cloneable interface.
  Client applications can test cloneability by attempting cloning
  and catching the CloneNotSupportedException: 
 @code
 MessageDigest md = MessageDigest.getInstance("SHA-256");
  try {
      md.update(toChapter1);
      MessageDigest tc1 = md.clone();
      byte[] toChapter1Digest = tc1.digest();
      md.update(toChapter2);
      ...etc.
  } catch (CloneNotSupportedException cnse) {
      throw new DigestException("couldn't make digest of partial content");
  } 
 
@endcode
  
 <p>Note that if a given implementation is not cloneable, it is
  still possible to compute intermediate digests by instantiating
  several instances, if the number of digests is known in advance. 
 <p>Note that this class is abstract and extends from 
 <code>MessageDigestSpi</code> for historical reasons.
  Application developers should only take notice of the methods defined in
  this <code>MessageDigest</code> class; all the methods in
  the superclass are intended for cryptographic service providers who wish to
  supply their own implementations of message digest algorithms. 
 <p> Android provides the following <code>MessageDigest</code> algorithms: 
 <table>
    <thead>
      <tr>
        <th>Algorithm</th>
        <th>Supported API Levels</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>MD5</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA-1</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA-224</td>
        <td>1-8,22+</td>
      </tr>
      <tr>
        <td>SHA-256</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA-384</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>SHA-512</td>
        <td>1+</td>
      </tr>
    </tbody>
  </table>
  These algorithms are described in the <a href="{@@docRoot}/../specs/security/standard-names.html#messagedigest-algorithms">
  MessageDigest section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
 @author Benjamin Renaud
 @since 1.1
 - seealso: DigestInputStream
 - seealso: DigestOutputStream
 */
@interface JavaSecurityMessageDigest : JavaSecurityMessageDigestSpi

#pragma mark Public

/*!
 @brief Returns a clone if the implementation is cloneable.
 @return a clone if the implementation is cloneable.
 @throw CloneNotSupportedExceptionif this is called on an
  implementation that does not support <code>Cloneable</code>.
 */
- (id __nonnull)java_clone;

/*!
 @brief Completes the hash computation by performing final operations
  such as padding.The digest is reset after this call is made.
 @return the array of bytes for the resulting hash value.
 */
- (IOSByteArray * __nonnull)digest;

/*!
 @brief Performs a final update on the digest using the specified array
  of bytes, then completes the digest computation.That is, this
  method first calls <code>update(input)</code>,
  passing the <i>input</i> array to the <code>update</code> method,
  then calls <code>digest()</code>.
 @param input the input to be updated before the digest is  completed.
 @return the array of bytes for the resulting hash value.
 */
- (IOSByteArray * __nonnull)digestWithByteArray:(IOSByteArray *)input;

/*!
 @brief Completes the hash computation by performing final operations
  such as padding.The digest is reset after this call is made.
 @param buf output buffer for the computed digest
 @param offset offset into the output buffer to begin storing the digest
 @param len number of bytes within buf allotted for the digest
 @return the number of bytes placed into <code>buf</code>
 @throw DigestExceptionif an error occurs.
 */
- (jint)digestWithByteArray:(IOSByteArray *)buf
                    withInt:(jint)offset
                    withInt:(jint)len;

/*!
 @brief Returns a string that identifies the algorithm, independent of
  implementation details.The name should be a standard
  Java Security name (such as "SHA-256").
 See the MessageDigest section in the <a href="{@@docRoot}/../specs/security/standard-names.html#messagedigest-algorithms">
  Java Security Standard Algorithm Names Specification</a>
  for information about standard algorithm names.
 @return the name of the algorithm
 */
- (NSString * __nonnull)getAlgorithm;

/*!
 @brief Returns the length of the digest in bytes, or 0 if this operation is
  not supported by the provider and the implementation is not cloneable.
 @return the digest length in bytes, or 0 if this operation is not
  supported by the provider and the implementation is not cloneable.
 @since 1.2
 */
- (jint)getDigestLength;

/*!
 @brief Returns a MessageDigest object that implements the specified digest
  algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new MessageDigest object encapsulating the
  MessageDigestSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the name of the algorithm requested.  See the MessageDigest section in the 
  <a href="{@@docRoot}/../specs/security/standard-names.html#messagedigest-algorithms">
   Java Security Standard Algorithm Names Specification
  </a>  for information about standard algorithm names.
 @return a <code>MessageDigest</code> object that implements the
          specified algorithm
 @throw NoSuchAlgorithmExceptionif no <code>Provider</code> supports a
          <code>MessageDigestSpi</code> implementation for the
          specified algorithm
 @throw NullPointerExceptionif <code>algorithm</code> is <code>null</code>
 - seealso: Provider
 */
+ (JavaSecurityMessageDigest * __nonnull)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a MessageDigest object that implements the specified digest
  algorithm.
 <p> A new MessageDigest object encapsulating the
  MessageDigestSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the name of the algorithm requested.  See the MessageDigest section in the 
  <a href="{@@docRoot}/../specs/security/standard-names.html#messagedigest-algorithms">
   Java Security Standard Algorithm Names Specification
  </a>  for information about standard algorithm names.
 @param provider the provider.
 @return a <code>MessageDigest</code> object that implements the
          specified algorithm
 @throw IllegalArgumentExceptionif the specified provider is
          <code>null</code>
 @throw NoSuchAlgorithmExceptionif a <code>MessageDigestSpi</code>
          implementation for the specified algorithm is not available
          from the specified <code>Provider</code> object
 @throw NullPointerExceptionif <code>algorithm</code> is <code>null</code>
 - seealso: Provider
 @since 1.4
 */
+ (JavaSecurityMessageDigest * __nonnull)getInstanceWithNSString:(NSString *)algorithm
                                        withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a MessageDigest object that implements the specified digest
  algorithm.
 <p> A new MessageDigest object encapsulating the
  MessageDigestSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the name of the algorithm requested.  See the MessageDigest section in the 
  <a href="{@@docRoot}/../specs/security/standard-names.html#messagedigest-algorithms">
   Java Security Standard Algorithm Names Specification
  </a>  for information about standard algorithm names.
 @param provider the name of the provider.
 @return a <code>MessageDigest</code> object that implements the
          specified algorithm
 @throw IllegalArgumentExceptionif the provider name is <code>null</code>
          or empty
 @throw NoSuchAlgorithmExceptionif a <code>MessageDigestSpi</code>
          implementation for the specified algorithm is not
          available from the specified provider
 @throw NoSuchProviderExceptionif the specified provider is not
          registered in the security provider list
 @throw NullPointerExceptionif <code>algorithm</code> is <code>null</code>
 - seealso: Provider
 */
+ (JavaSecurityMessageDigest * __nonnull)getInstanceWithNSString:(NSString *)algorithm
                                                    withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this message digest object.
 @return the provider of this message digest object
 */
- (JavaSecurityProvider * __nonnull)getProvider;

/*!
 @brief Compares two digests for equality.Two digests are equal if they have
  the same length and all bytes at corresponding positions are equal.
 @param digesta one of the digests to compare.
 @param digestb the other digest to compare.
 @return true if the digests are equal, false otherwise.
 */
+ (jboolean)isEqualWithByteArray:(IOSByteArray *)digesta
                   withByteArray:(IOSByteArray *)digestb;

/*!
 @brief Resets the digest for further use.
 */
- (void)reset;

/*!
 @brief Returns a string representation of this message digest object.
 */
- (NSString * __nonnull)description;

/*!
 @brief Updates the digest using the specified byte.
 @param input the byte with which to update the digest.
 */
- (void)updateWithByte:(jbyte)input;

/*!
 @brief Updates the digest using the specified array of bytes.
 @param input the array of bytes.
 */
- (void)updateWithByteArray:(IOSByteArray *)input;

/*!
 @brief Updates the digest using the specified array of bytes, starting
  at the specified offset.
 @param input the array of bytes.
 @param offset the offset to start from in the array of bytes.
 @param len the number of bytes to use, starting at  
 <code>offset</code> .
 */
- (void)updateWithByteArray:(IOSByteArray *)input
                    withInt:(jint)offset
                    withInt:(jint)len;

/*!
 @brief Update the digest using the specified ByteBuffer.The digest is
  updated using the <code>input.remaining()</code> bytes starting
  at <code>input.position()</code>.
 Upon return, the buffer's position will be equal to its limit;
  its limit will not have changed.
 @param input the ByteBuffer
 @since 1.5
 */
- (void)updateWithJavaNioByteBuffer:(JavaNioByteBuffer *)input;

#pragma mark Protected

/*!
 @brief Creates a message digest with the specified algorithm name.
 @param algorithm the standard name of the digest algorithm.  See the MessageDigest section in the 
  <a href="{@@docRoot}/../specs/security/standard-names.html#messagedigest-algorithms">
   Java Security Standard Algorithm Names Specification
  </a>  for information about standard algorithm names.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)algorithm;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityMessageDigest)

FOUNDATION_EXPORT void JavaSecurityMessageDigest_initWithNSString_(JavaSecurityMessageDigest *self, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityMessageDigest *JavaSecurityMessageDigest_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityMessageDigest *JavaSecurityMessageDigest_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityMessageDigest *JavaSecurityMessageDigest_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

FOUNDATION_EXPORT jboolean JavaSecurityMessageDigest_isEqualWithByteArray_withByteArray_(IOSByteArray *digesta, IOSByteArray *digestb);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityMessageDigest)

#endif

#if !defined (JavaSecurityMessageDigest_Delegate_) && (INCLUDE_ALL_JavaSecurityMessageDigest || defined(INCLUDE_JavaSecurityMessageDigest_Delegate))
#define JavaSecurityMessageDigest_Delegate_

@class IOSByteArray;
@class JavaLangByte;
@class JavaLangInteger;
@class JavaNioByteBuffer;
@class JavaSecurityMessageDigestSpi;

@interface JavaSecurityMessageDigest_Delegate : JavaSecurityMessageDigest

#pragma mark Public

- (instancetype __nonnull)initWithJavaSecurityMessageDigestSpi:(JavaSecurityMessageDigestSpi *)digestSpi
                                                  withNSString:(NSString *)algorithm;

/*!
 @brief Returns a clone if the delegate is cloneable.
 @return a clone if the delegate is cloneable.
 @throw CloneNotSupportedExceptionif this is called on a
  delegate that does not support <code>Cloneable</code>.
 */
- (id)java_clone;

#pragma mark Protected

- (IOSByteArray *)engineDigest;

- (jint)engineDigestWithByteArray:(IOSByteArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)len;

- (jint)engineGetDigestLength;

- (void)engineReset;

- (void)engineUpdateWithByte:(jbyte)input;

- (void)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)offset
                          withInt:(jint)len;

- (void)engineUpdateWithJavaNioByteBuffer:(JavaNioByteBuffer *)input;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityMessageDigest_Delegate)

FOUNDATION_EXPORT void JavaSecurityMessageDigest_Delegate_initWithJavaSecurityMessageDigestSpi_withNSString_(JavaSecurityMessageDigest_Delegate *self, JavaSecurityMessageDigestSpi *digestSpi, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityMessageDigest_Delegate *new_JavaSecurityMessageDigest_Delegate_initWithJavaSecurityMessageDigestSpi_withNSString_(JavaSecurityMessageDigestSpi *digestSpi, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityMessageDigest_Delegate *create_JavaSecurityMessageDigest_Delegate_initWithJavaSecurityMessageDigestSpi_withNSString_(JavaSecurityMessageDigestSpi *digestSpi, NSString *algorithm);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityMessageDigest_Delegate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityMessageDigest")