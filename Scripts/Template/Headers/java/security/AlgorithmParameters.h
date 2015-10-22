//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AlgorithmParameters.java
//

#ifndef _JavaSecurityAlgorithmParameters_H_
#define _JavaSecurityAlgorithmParameters_H_

#include "../../J2ObjC_header.h"

@class IOSByteArray;
@class IOSClass;
@class JavaSecurityAlgorithmParametersSpi;
@class JavaSecurityProvider;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief <code>AlgorithmParameters</code> is an engine class which provides algorithm
 parameters.
 */
@interface JavaSecurityAlgorithmParameters : NSObject

#pragma mark Public

/*!
 @brief Returns the name of the algorithm.
 @return the name of the algorithm.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns this <code>AlgorithmParameters</code> in their default encoding
 format.
 The default encoding format is ASN.1.
 @return the encoded parameters.
 @throws IOException
 if this <code>AlgorithmParameters</code> has already been
 initialized, or if this parameters could not be encoded.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns this <code>AlgorithmParameters</code> in the specified encoding
 format.
 @param format
 the name of the encoding format.
 @return the encoded parameters.
 @throws IOException
 if this <code>AlgorithmParameters</code> has already been
 initialized, or if this parameters could not be encoded.
 */
- (IOSByteArray *)getEncodedWithNSString:(NSString *)format;

/*!
 @brief Returns a new instance of <code>AlgorithmParameters</code> for the specified
 algorithm.
 @param algorithm
 the name of the algorithm to use.
 @return a new instance of <code>AlgorithmParameters</code> for the specified
 algorithm.
 @throws NoSuchAlgorithmException
 if the specified algorithm is not available.
 @throws NullPointerException
 if <code>algorithm</code> is <code>null</code>.
 */
+ (JavaSecurityAlgorithmParameters *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a new instance of <code>AlgorithmParameters</code> from the specified
 provider for the specified algorithm.
 The <code>provider</code> supplied does
 not have to be registered.
 @param algorithm
 the name of the algorithm to use.
 @param provider
 the provider of the <code>AlgorithmParameters</code>.
 @return a new instance of <code>AlgorithmParameters</code> for the specified
 algorithm.
 @throws NoSuchAlgorithmException
 if the specified algorithm is not available.
 @throws NullPointerException
 if <code>algorithm</code> is <code>null</code>.
 @throws IllegalArgumentException if <code>provider == null</code>
 */
+ (JavaSecurityAlgorithmParameters *)getInstanceWithNSString:(NSString *)algorithm
                                    withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a new instance of <code>AlgorithmParameters</code> from the specified
 provider for the specified algorithm.
 @param algorithm
 the name of the algorithm to use.
 @param provider
 name of the provider of the <code>AlgorithmParameters</code>.
 @return a new instance of <code>AlgorithmParameters</code> for the specified
 algorithm.
 @throws NoSuchAlgorithmException
 if the specified algorithm is not available.
 @throws NoSuchProviderException
 if the specified provider is not available.
 @throws IllegalArgumentException if <code>provider == null || provider.isEmpty()</code>
 @throws NullPointerException
 if <code>algorithm</code> is <code>null</code>.
 */
+ (JavaSecurityAlgorithmParameters *)getInstanceWithNSString:(NSString *)algorithm
                                                withNSString:(NSString *)provider;

/*!
 @brief Returns the <code>AlgorithmParameterSpec</code> for this <code>AlgorithmParameters</code>
 .
 @param paramSpec
 the type of the parameter specification in which this
 parameters should be converted.
 @return the <code>AlgorithmParameterSpec</code> for this <code>AlgorithmParameters</code>
 .
 @throws InvalidParameterSpecException
 if this <code>AlgorithmParameters</code> has already been
 initialized, or if this parameters could not be converted to
 the specified class.
 */
- (id)getParameterSpecWithIOSClass:(IOSClass *)paramSpec;

/*!
 @brief Returns the provider associated with this <code>AlgorithmParameters</code>.
 @return the provider associated with this <code>AlgorithmParameters</code>.
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initializes this <code>AlgorithmParameters</code> with the specified <code>AlgorithmParameterSpec</code>
 .
 @param paramSpec
 the parameter specification.
 @throws InvalidParameterSpecException
 if this <code>AlgorithmParameters</code> has already been
 initialized or the given <code>paramSpec</code> is not appropriate
 for initializing this <code>AlgorithmParameters</code>.
 */
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)paramSpec OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this <code>AlgorithmParameters</code> with the specified <code>byte[]</code>
  using the default decoding format for parameters.
 The default
 encoding format is ASN.1.
 @param params
 the encoded parameters.
 @throws IOException
 if this <code>AlgorithmParameters</code> has already been
 initialized, or the parameter could not be encoded.
 */
- (void)init__WithByteArray:(IOSByteArray *)params OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this <code>AlgorithmParameters</code> with the specified <code>byte[]</code>
  using the specified decoding format.
 @param params
 the encoded parameters.
 @param format
 the name of the decoding format.
 @throws IOException
 if this <code>AlgorithmParameters</code> has already been
 initialized, or the parameter could not be encoded.
 */
- (void)init__WithByteArray:(IOSByteArray *)params
               withNSString:(NSString *)format OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a string containing a concise, human-readable description of this
 <code>AlgorithmParameters</code>.
 @return a printable representation for this <code>AlgorithmParameters</code>.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Constructs a new instance of <code>AlgorithmParameters</code> with the given
 arguments.
 @param algPramSpi
 the concrete implementation.
 @param provider
 the security provider.
 @param algorithm
 the name of the algorithm.
 */
- (instancetype)initWithJavaSecurityAlgorithmParametersSpi:(JavaSecurityAlgorithmParametersSpi *)algPramSpi
                                  withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                              withNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaSecurityAlgorithmParameters)

FOUNDATION_EXPORT void JavaSecurityAlgorithmParameters_initWithJavaSecurityAlgorithmParametersSpi_withJavaSecurityProvider_withNSString_(JavaSecurityAlgorithmParameters *self, JavaSecurityAlgorithmParametersSpi *algPramSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *new_JavaSecurityAlgorithmParameters_initWithJavaSecurityAlgorithmParametersSpi_withJavaSecurityProvider_withNSString_(JavaSecurityAlgorithmParametersSpi *algPramSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *JavaSecurityAlgorithmParameters_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *JavaSecurityAlgorithmParameters_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *JavaSecurityAlgorithmParameters_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAlgorithmParameters)

#endif // _JavaSecurityAlgorithmParameters_H_
