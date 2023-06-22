//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertPathChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertPathChecker")
#ifdef RESTRICT_JavaSecurityCertCertPathChecker
#define INCLUDE_ALL_JavaSecurityCertCertPathChecker 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertPathChecker 1
#endif
#undef RESTRICT_JavaSecurityCertCertPathChecker

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCertPathChecker_) && (INCLUDE_ALL_JavaSecurityCertCertPathChecker || defined(INCLUDE_JavaSecurityCertCertPathChecker))
#define JavaSecurityCertCertPathChecker_

@class JavaLangBoolean;
@class JavaSecurityCertCertificate;

/*!
 @brief <p>Performs one or more checks on each <code>Certificate</code> of a 
 <code>CertPath</code>.
 <p>A <code>CertPathChecker</code> implementation is typically created to extend
  a certification path validation algorithm. For example, an implementation
  may check for and process a critical private extension of each certificate
  in a certification path.
 @since 1.8
 */
@protocol JavaSecurityCertCertPathChecker < JavaObject >

/*!
 @brief Initializes the internal state of this <code>CertPathChecker</code>.
 <p>The <code>forward</code> flag specifies the order that certificates will
  be passed to the <code>check</code> method (forward or reverse).
 @param forward the order that certificates are presented to the         
 <code>check</code>  method. If <code>true</code> , certificates are         presented from target to trust anchor (forward); if
          <code>false</code>
  , from trust anchor to target (reverse).
 @throw CertPathValidatorExceptionif this <code>CertPathChecker</code> is
          unable to check certificates in the specified order
 */
- (void)init__WithBoolean:(jboolean)forward OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Indicates if forward checking is supported.Forward checking refers
  to the ability of the <code>CertPathChecker</code> to perform its checks
  when certificates are presented to the <code>check</code> method in the
  forward direction (from target to trust anchor).
 @return <code>true</code> if forward checking is supported, <code>false</code>
          otherwise
 */
- (jboolean)isForwardCheckingSupported;

/*!
 @brief Performs the check(s) on the specified certificate using its internal
  state.The certificates are presented in the order specified by the 
 <code>init</code> method.
 @param cert the <code>Certificate</code>  to be checked
 @throw CertPathValidatorExceptionif the specified certificate does
          not pass the check
 */
- (void)checkWithJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)cert;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathChecker)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathChecker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertPathChecker")
