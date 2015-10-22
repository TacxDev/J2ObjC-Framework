//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/SocketAddress.java
//

#ifndef _JavaNetSocketAddress_H_
#define _JavaNetSocketAddress_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/Serializable.h"

/*!
 @brief This abstract class represents a protocol-independent base for
 socket-endpoint representing classes.
 The class has to be implemented
 according to a specific protocol.
 */
@interface JavaNetSocketAddress : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new <code>SocketAddress</code> instance.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketAddress)

FOUNDATION_EXPORT void JavaNetSocketAddress_init(JavaNetSocketAddress *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketAddress)

#endif // _JavaNetSocketAddress_H_
