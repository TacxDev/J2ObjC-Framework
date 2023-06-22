//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/SocketOption.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetSocketOption")
#ifdef RESTRICT_JavaNetSocketOption
#define INCLUDE_ALL_JavaNetSocketOption 0
#else
#define INCLUDE_ALL_JavaNetSocketOption 1
#endif
#undef RESTRICT_JavaNetSocketOption

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetSocketOption_) && (INCLUDE_ALL_JavaNetSocketOption || defined(INCLUDE_JavaNetSocketOption))
#define JavaNetSocketOption_

@class IOSClass;

/*!
 @brief A socket option associated with a socket.
 <p> In the <code>channels</code> package, the <code>java.nio.channels.NetworkChannel</code>
  interface defines the <code>setOption</code>
  and <code>getOption</code>
  methods to set and query the channel's socket options.
 @since 1.7
 - seealso: StandardSocketOptions
 */
@protocol JavaNetSocketOption < JavaObject >

/*!
 @brief Returns the name of the socket option.
 @return the name of the socket option
 */
- (NSString *)name;

/*!
 @brief Returns the type of the socket option value.
 @return the type of the socket option value
 */
- (IOSClass *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketOption)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketOption)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetSocketOption")