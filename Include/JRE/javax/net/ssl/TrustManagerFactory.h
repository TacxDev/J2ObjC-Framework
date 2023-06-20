//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/TrustManagerFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslTrustManagerFactory")
#ifdef RESTRICT_JavaxNetSslTrustManagerFactory
#define INCLUDE_ALL_JavaxNetSslTrustManagerFactory 0
#else
#define INCLUDE_ALL_JavaxNetSslTrustManagerFactory 1
#endif
#undef RESTRICT_JavaxNetSslTrustManagerFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslTrustManagerFactory_) && (INCLUDE_ALL_JavaxNetSslTrustManagerFactory || defined(INCLUDE_JavaxNetSslTrustManagerFactory))
#define JavaxNetSslTrustManagerFactory_

@class IOSObjectArray;
@class JavaSecurityKeyStore;
@class JavaSecurityProvider;
@class JavaxNetSslTrustManagerFactorySpi;
@protocol JavaxNetSslManagerFactoryParameters;

/*!
 @brief This class acts as a factory for trust managers based on a
  source of trust material.Each trust manager manages a specific
  type of trust material for use by secure sockets.
 The trust
  material is based on a KeyStore and/or provider specific sources. 
 <p> Android provides the following <code>TrustManagerFactory</code> algorithms: 
 <table>
    <thead>
      <tr>
        <th>Algorithm</th>
        <th>Supported API Levels</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>PKIX</td>
        <td>1+</td>
      </tr>
    </tbody>
  </table>
 @since 1.4
 - seealso: TrustManager
 */
@interface JavaxNetSslTrustManagerFactory : NSObject

#pragma mark Public

/*!
 @brief Returns the algorithm name of this <code>TrustManagerFactory</code>
  object.
 <p>This is the same name that was specified in one of the 
 <code>getInstance</code> calls that created this 
 <code>TrustManagerFactory</code> object.
 @return the algorithm name of this <code>TrustManagerFactory</code>
           object
 */
- (NSString *)getAlgorithm;

/*!
 @brief Obtains the default TrustManagerFactory algorithm name.
 <p>The default TrustManager can be changed at runtime by setting
  the value of the <code>ssl.TrustManagerFactory.algorithm</code>
  security property to the desired algorithm name.
 - seealso: java.security.Securitysecurity properties
 @return the default algorithm name as specified by the 
 <code>ssl.TrustManagerFactory.algorithm</code> security property, or an
  implementation-specific default if no such property exists.
 */
+ (NSString *)getDefaultAlgorithm;

/*!
 @brief Returns a <code>TrustManagerFactory</code> object that acts as a
  factory for trust managers.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new TrustManagerFactory object encapsulating the
  TrustManagerFactorySpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested trust management           algorithm.  See the 
  <a href="{@@docRoot}/../technotes/guides/security/jsse/JSSERefGuide.html">
            Java Secure Socket Extension Reference Guide 
  </a>           for information about standard algorithm names.
 @return the new <code>TrustManagerFactory</code> object.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           TrustManagerFactorySpi implementation for the
           specified algorithm.
 @throw NullPointerExceptionif algorithm is null.
 - seealso: java.security.Provider
 */
+ (JavaxNetSslTrustManagerFactory *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a <code>TrustManagerFactory</code> object that acts as a
  factory for trust managers.
 <p> A new TrustManagerFactory object encapsulating the
  TrustManagerFactorySpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the standard name of the requested trust management           algorithm.  See the 
  <a href="{@@docRoot}/../technotes/guides/security/jsse/JSSERefGuide.html">
            Java Secure Socket Extension Reference Guide 
  </a>           for information about standard algorithm names.
 @param provider an instance of the provider.
 @return the new <code>TrustManagerFactory</code> object.
 @throw NoSuchAlgorithmExceptionif a TrustManagerFactorySpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the provider is null.
 @throw NullPointerExceptionif algorithm is null.
 - seealso: java.security.Provider
 */
+ (JavaxNetSslTrustManagerFactory *)getInstanceWithNSString:(NSString *)algorithm
                                   withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a <code>TrustManagerFactory</code> object that acts as a
  factory for trust managers.
 <p> A new KeyManagerFactory object encapsulating the
  KeyManagerFactorySpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested trust management           algorithm.  See the 
  <a href="{@@docRoot}/../technotes/guides/security/jsse/JSSERefGuide.html">
            Java Secure Socket Extension Reference Guide 
  </a>           for information about standard algorithm names.
 @param provider the name of the provider.
 @return the new <code>TrustManagerFactory</code> object
 @throw NoSuchAlgorithmExceptionif a TrustManagerFactorySpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the provider name is null or empty.
 @throw NullPointerExceptionif algorithm is null.
 - seealso: java.security.Provider
 */
+ (JavaxNetSslTrustManagerFactory *)getInstanceWithNSString:(NSString *)algorithm
                                               withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this <code>TrustManagerFactory</code> object.
 @return the provider of this <code>TrustManagerFactory</code> object
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Returns one trust manager for each type of trust material.
 @throw IllegalStateExceptionif the factory is not initialized.
 @return the trust managers
 */
- (IOSObjectArray *)getTrustManagers;

/*!
 @brief Initializes this factory with a source of certificate
  authorities and related trust material.
 <P>
  The provider typically uses a KeyStore as a basis for making
  trust decisions. 
 <P>
  For more flexible initialization, please see 
 <code>init(ManagerFactoryParameters)</code>.
 @param ks the key store, or null
 @throw KeyStoreExceptionif this operation fails
 */
- (void)init__WithJavaSecurityKeyStore:(JavaSecurityKeyStore *)ks OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this factory with a source of provider-specific
  trust material.
 <P>
  In some cases, initialization parameters other than a keystore
  may be needed by a provider.  Users of that particular provider
  are expected to pass an implementation of the appropriate 
 <CODE>ManagerFactoryParameters</CODE> as defined by the
  provider.  The provider can then call the specified methods in the 
 <CODE>ManagerFactoryParameters</CODE> implementation to obtain the
  needed information.
 @param spec an implementation of a provider-specific parameter           specification
 @throw InvalidAlgorithmParameterExceptionif an error is
           encountered
 */
- (void)init__WithJavaxNetSslManagerFactoryParameters:(id<JavaxNetSslManagerFactoryParameters>)spec OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Creates a TrustManagerFactory object.
 @param factorySpi the delegate
 @param provider the provider
 @param algorithm the algorithm
 */
- (instancetype __nonnull)initWithJavaxNetSslTrustManagerFactorySpi:(JavaxNetSslTrustManagerFactorySpi *)factorySpi
                                           withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                       withNSString:(NSString *)algorithm;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslTrustManagerFactory)

FOUNDATION_EXPORT NSString *JavaxNetSslTrustManagerFactory_getDefaultAlgorithm(void);

FOUNDATION_EXPORT void JavaxNetSslTrustManagerFactory_initWithJavaxNetSslTrustManagerFactorySpi_withJavaSecurityProvider_withNSString_(JavaxNetSslTrustManagerFactory *self, JavaxNetSslTrustManagerFactorySpi *factorySpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *new_JavaxNetSslTrustManagerFactory_initWithJavaxNetSslTrustManagerFactorySpi_withJavaSecurityProvider_withNSString_(JavaxNetSslTrustManagerFactorySpi *factorySpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *create_JavaxNetSslTrustManagerFactory_initWithJavaxNetSslTrustManagerFactorySpi_withJavaSecurityProvider_withNSString_(JavaxNetSslTrustManagerFactorySpi *factorySpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *JavaxNetSslTrustManagerFactory_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *JavaxNetSslTrustManagerFactory_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *JavaxNetSslTrustManagerFactory_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslTrustManagerFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslTrustManagerFactory")
