//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/IllegalBlockSizeException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoIllegalBlockSizeException")
#ifdef RESTRICT_JavaxCryptoIllegalBlockSizeException
#define INCLUDE_ALL_JavaxCryptoIllegalBlockSizeException 0
#else
#define INCLUDE_ALL_JavaxCryptoIllegalBlockSizeException 1
#endif
#undef RESTRICT_JavaxCryptoIllegalBlockSizeException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoIllegalBlockSizeException_) && (INCLUDE_ALL_JavaxCryptoIllegalBlockSizeException || defined(INCLUDE_JavaxCryptoIllegalBlockSizeException))
#define JavaxCryptoIllegalBlockSizeException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This exception is thrown when the length of data provided to a block
  cipher is incorrect, i.e., does not match the block size of the cipher.
 @author Jan Luehe
 @since 1.4
 */
@interface JavaxCryptoIllegalBlockSizeException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs an IllegalBlockSizeException with no detail message.
 A detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an IllegalBlockSizeException with the specified
  detail message.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoIllegalBlockSizeException)

FOUNDATION_EXPORT void JavaxCryptoIllegalBlockSizeException_init(JavaxCryptoIllegalBlockSizeException *self);

FOUNDATION_EXPORT JavaxCryptoIllegalBlockSizeException *new_JavaxCryptoIllegalBlockSizeException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoIllegalBlockSizeException *create_JavaxCryptoIllegalBlockSizeException_init(void);

FOUNDATION_EXPORT void JavaxCryptoIllegalBlockSizeException_initWithNSString_(JavaxCryptoIllegalBlockSizeException *self, NSString *msg);

FOUNDATION_EXPORT JavaxCryptoIllegalBlockSizeException *new_JavaxCryptoIllegalBlockSizeException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoIllegalBlockSizeException *create_JavaxCryptoIllegalBlockSizeException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoIllegalBlockSizeException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoIllegalBlockSizeException")
