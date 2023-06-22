//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/StandardConstants.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslStandardConstants")
#ifdef RESTRICT_JavaxNetSslStandardConstants
#define INCLUDE_ALL_JavaxNetSslStandardConstants 0
#else
#define INCLUDE_ALL_JavaxNetSslStandardConstants 1
#endif
#undef RESTRICT_JavaxNetSslStandardConstants

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslStandardConstants_) && (INCLUDE_ALL_JavaxNetSslStandardConstants || defined(INCLUDE_JavaxNetSslStandardConstants))
#define JavaxNetSslStandardConstants_

@class JavaLangInteger;

/*!
 @brief Standard constants definitions
 @since 1.8
 */
@interface JavaxNetSslStandardConstants : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslStandardConstants)

/*!
 @brief The "host_name" type representing of a DNS hostname
  (see <code>SNIHostName</code>) in a Server Name Indication (SNI) extension.
 <P>
  The SNI extension is a feature that extends the SSL/TLS protocols to
  indicate what server name the client is attempting to connect to during
  handshaking.  See section 3, "Server Name Indication", of <A HREF="http://www.ietf.org/rfc/rfc6066.txt">
 TLS Extensions (RFC 6066)</A>.
  <P>
  The value of this constant is <code>0x00</code>.
 - seealso: SNIServerName
 - seealso: SNIHostName
 */
inline jint JavaxNetSslStandardConstants_get_SNI_HOST_NAME(void);
#define JavaxNetSslStandardConstants_SNI_HOST_NAME 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaxNetSslStandardConstants, SNI_HOST_NAME, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslStandardConstants)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslStandardConstants")