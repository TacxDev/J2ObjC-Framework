//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/SocketImplFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetSocketImplFactory")
#ifdef RESTRICT_JavaNetSocketImplFactory
#define INCLUDE_ALL_JavaNetSocketImplFactory 0
#else
#define INCLUDE_ALL_JavaNetSocketImplFactory 1
#endif
#undef RESTRICT_JavaNetSocketImplFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetSocketImplFactory_) && (INCLUDE_ALL_JavaNetSocketImplFactory || defined(INCLUDE_JavaNetSocketImplFactory))
#define JavaNetSocketImplFactory_

@class JavaNetSocketImpl;

/*!
 @brief This interface defines a factory for socket implementations.It
  is used by the classes <code>Socket</code> and 
 <code>ServerSocket</code> to create actual socket
  implementations.
 @author Arthur van Hoff
 - seealso: java.net.Socket
 - seealso: java.net.ServerSocket
 @since JDK1.0
 */
@protocol JavaNetSocketImplFactory < JavaObject >

/*!
 @brief Creates a new <code>SocketImpl</code> instance.
 @return a new instance of <code>SocketImpl</code>.
 - seealso: java.net.SocketImpl
 */
- (JavaNetSocketImpl *)createSocketImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketImplFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketImplFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetSocketImplFactory")
