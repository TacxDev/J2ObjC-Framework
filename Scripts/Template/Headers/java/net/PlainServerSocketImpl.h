//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/PlainServerSocketImpl.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetPlainServerSocketImpl")
#ifdef RESTRICT_JavaNetPlainServerSocketImpl
#define INCLUDE_ALL_JavaNetPlainServerSocketImpl 0
#else
#define INCLUDE_ALL_JavaNetPlainServerSocketImpl 1
#endif
#undef RESTRICT_JavaNetPlainServerSocketImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetPlainServerSocketImpl_) && (INCLUDE_ALL_JavaNetPlainServerSocketImpl || defined(INCLUDE_JavaNetPlainServerSocketImpl))
#define JavaNetPlainServerSocketImpl_

#define RESTRICT_JavaNetPlainSocketImpl 1
#define INCLUDE_JavaNetPlainSocketImpl 1
#include "../../java/net/PlainSocketImpl.h"

@class JavaIoFileDescriptor;

/*!
  used in java.nio.
 */
@interface JavaNetPlainServerSocketImpl : JavaNetPlainSocketImpl

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

#pragma mark Protected

- (void)createWithBoolean:(jboolean)isStreaming;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetPlainServerSocketImpl)

FOUNDATION_EXPORT void JavaNetPlainServerSocketImpl_init(JavaNetPlainServerSocketImpl *self);

FOUNDATION_EXPORT JavaNetPlainServerSocketImpl *new_JavaNetPlainServerSocketImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetPlainServerSocketImpl *create_JavaNetPlainServerSocketImpl_init();

FOUNDATION_EXPORT void JavaNetPlainServerSocketImpl_initWithJavaIoFileDescriptor_(JavaNetPlainServerSocketImpl *self, JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT JavaNetPlainServerSocketImpl *new_JavaNetPlainServerSocketImpl_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetPlainServerSocketImpl *create_JavaNetPlainServerSocketImpl_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetPlainServerSocketImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetPlainServerSocketImpl")