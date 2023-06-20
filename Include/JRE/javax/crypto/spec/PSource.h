//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/PSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecPSource")
#ifdef RESTRICT_JavaxCryptoSpecPSource
#define INCLUDE_ALL_JavaxCryptoSpecPSource 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecPSource 1
#endif
#undef RESTRICT_JavaxCryptoSpecPSource
#ifdef INCLUDE_JavaxCryptoSpecPSource_PSpecified
#define INCLUDE_JavaxCryptoSpecPSource 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSpecPSource_) && (INCLUDE_ALL_JavaxCryptoSpecPSource || defined(INCLUDE_JavaxCryptoSpecPSource))
#define JavaxCryptoSpecPSource_

/*!
 @brief This class specifies the source for encoding input P in OAEP Padding,
  as defined in the 
 <a href="http://www.ietf.org/rfc/rfc3447.txt">PKCS #1</a>
  standard.
 @code

  PKCS1PSourceAlgorithms    ALGORITHM-IDENTIFIER ::= {
    { OID id-pSpecified PARAMETERS OCTET STRING },
    ...  -- Allows for future expansion --
  } 
  
@endcode
 @author Valerie Peng
 @since 1.5
 */
@interface JavaxCryptoSpecPSource : NSObject

#pragma mark Public

/*!
 @brief Returns the PSource algorithm name.
 @return the PSource algorithm name.
 */
- (NSString *)getAlgorithm;

#pragma mark Protected

/*!
 @brief Constructs a source of the encoding input P for OAEP
  padding as defined in the PKCS #1 standard using the
  specified PSource algorithm.
 @param pSrcName the algorithm for the source of the  encoding input P.
 @throw NullPointerExceptionif <code>pSrcName</code>
  is null.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)pSrcName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecPSource)

FOUNDATION_EXPORT void JavaxCryptoSpecPSource_initWithNSString_(JavaxCryptoSpecPSource *self, NSString *pSrcName);

FOUNDATION_EXPORT JavaxCryptoSpecPSource *new_JavaxCryptoSpecPSource_initWithNSString_(NSString *pSrcName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecPSource *create_JavaxCryptoSpecPSource_initWithNSString_(NSString *pSrcName);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecPSource)

#endif

#if !defined (JavaxCryptoSpecPSource_PSpecified_) && (INCLUDE_ALL_JavaxCryptoSpecPSource || defined(INCLUDE_JavaxCryptoSpecPSource_PSpecified))
#define JavaxCryptoSpecPSource_PSpecified_

@class IOSByteArray;

/*!
 @brief This class is used to explicitly specify the value for
  encoding input P in OAEP Padding.
 @since 1.5
 */
@interface JavaxCryptoSpecPSource_PSpecified : JavaxCryptoSpecPSource

#pragma mark Public

/*!
 @brief Constructs the source explicitly with the specified
  value <code>p</code> as the encoding input P.
 Note:
 @param p the value of the encoding input. The contents  of the array are copied to protect against subsequent
   modification.
 @throw NullPointerExceptionif <code>p</code> is null.
 */
- (instancetype __nonnull)initWithByteArray:(IOSByteArray *)p;

/*!
 @brief Returns the value of encoding input P.
 @return the value of encoding input P. A new array is
  returned each time this method is called.
 */
- (IOSByteArray *)getValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaxCryptoSpecPSource_PSpecified)

/*!
 @brief The encoding input P whose value equals byte[0].
 */
inline JavaxCryptoSpecPSource_PSpecified *JavaxCryptoSpecPSource_PSpecified_get_DEFAULT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaxCryptoSpecPSource_PSpecified *JavaxCryptoSpecPSource_PSpecified_DEFAULT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxCryptoSpecPSource_PSpecified, DEFAULT, JavaxCryptoSpecPSource_PSpecified *)

FOUNDATION_EXPORT void JavaxCryptoSpecPSource_PSpecified_initWithByteArray_(JavaxCryptoSpecPSource_PSpecified *self, IOSByteArray *p);

FOUNDATION_EXPORT JavaxCryptoSpecPSource_PSpecified *new_JavaxCryptoSpecPSource_PSpecified_initWithByteArray_(IOSByteArray *p) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecPSource_PSpecified *create_JavaxCryptoSpecPSource_PSpecified_initWithByteArray_(IOSByteArray *p);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecPSource_PSpecified)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecPSource")
