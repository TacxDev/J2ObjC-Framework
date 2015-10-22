//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/DefaultServerSocketFactory.java
//

#ifndef _JavaxNetDefaultServerSocketFactory_H_
#define _JavaxNetDefaultServerSocketFactory_H_

#include "../../J2ObjC_header.h"
#include "../../javax/net/ServerSocketFactory.h"

@class JavaNetInetAddress;
@class JavaNetServerSocket;

@interface JavaxNetDefaultServerSocketFactory : JavaxNetServerSocketFactory

#pragma mark Public

- (JavaNetServerSocket *)createServerSocket;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog
                            withJavaNetInetAddress:(JavaNetInetAddress *)iAddress;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetDefaultServerSocketFactory)

FOUNDATION_EXPORT void JavaxNetDefaultServerSocketFactory_init(JavaxNetDefaultServerSocketFactory *self);

FOUNDATION_EXPORT JavaxNetDefaultServerSocketFactory *new_JavaxNetDefaultServerSocketFactory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetDefaultServerSocketFactory)

#endif // _JavaxNetDefaultServerSocketFactory_H_
