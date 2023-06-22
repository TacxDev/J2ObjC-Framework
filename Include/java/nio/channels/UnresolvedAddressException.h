//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/UnresolvedAddressException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsUnresolvedAddressException")
#ifdef RESTRICT_JavaNioChannelsUnresolvedAddressException
#define INCLUDE_ALL_JavaNioChannelsUnresolvedAddressException 0
#else
#define INCLUDE_ALL_JavaNioChannelsUnresolvedAddressException 1
#endif
#undef RESTRICT_JavaNioChannelsUnresolvedAddressException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsUnresolvedAddressException_) && (INCLUDE_ALL_JavaNioChannelsUnresolvedAddressException || defined(INCLUDE_JavaNioChannelsUnresolvedAddressException))
#define JavaNioChannelsUnresolvedAddressException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "java/lang/IllegalArgumentException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when an attempt is made to invoke a network
  operation upon an unresolved socket address.
 @since 1.4
 */
@interface JavaNioChannelsUnresolvedAddressException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsUnresolvedAddressException)

FOUNDATION_EXPORT void JavaNioChannelsUnresolvedAddressException_init(JavaNioChannelsUnresolvedAddressException *self);

FOUNDATION_EXPORT JavaNioChannelsUnresolvedAddressException *new_JavaNioChannelsUnresolvedAddressException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsUnresolvedAddressException *create_JavaNioChannelsUnresolvedAddressException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsUnresolvedAddressException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsUnresolvedAddressException")
