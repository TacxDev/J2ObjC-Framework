//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ClosedSelectorException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsClosedSelectorException")
#ifdef RESTRICT_JavaNioChannelsClosedSelectorException
#define INCLUDE_ALL_JavaNioChannelsClosedSelectorException 0
#else
#define INCLUDE_ALL_JavaNioChannelsClosedSelectorException 1
#endif
#undef RESTRICT_JavaNioChannelsClosedSelectorException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsClosedSelectorException_) && (INCLUDE_ALL_JavaNioChannelsClosedSelectorException || defined(INCLUDE_JavaNioChannelsClosedSelectorException))
#define JavaNioChannelsClosedSelectorException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "../../../java/lang/IllegalStateException.h"

/*!
 @brief A <code>ClosedSelectorException</code> is thrown when a <code>selector</code>
 is closed and an I/O operation is attempted.
 */
@interface JavaNioChannelsClosedSelectorException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs a <code>ClosedSelectorException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsClosedSelectorException)

FOUNDATION_EXPORT void JavaNioChannelsClosedSelectorException_init(JavaNioChannelsClosedSelectorException *self);

FOUNDATION_EXPORT JavaNioChannelsClosedSelectorException *new_JavaNioChannelsClosedSelectorException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsClosedSelectorException *create_JavaNioChannelsClosedSelectorException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsClosedSelectorException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsClosedSelectorException")