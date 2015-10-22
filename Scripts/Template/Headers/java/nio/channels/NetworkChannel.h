//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/NetworkChannel.java
//

#ifndef _JavaNioChannelsNetworkChannel_H_
#define _JavaNioChannelsNetworkChannel_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/io/Closeable.h"
#include "../../../java/lang/AutoCloseable.h"
#include "../../../java/nio/channels/Channel.h"

@class JavaNetSocketAddress;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

/*!
 @brief A common interface for channels that are backed by network sockets.
 @since 1.7
  Until ready for a public API change
 */
@protocol JavaNioChannelsNetworkChannel < JavaLangAutoCloseable, JavaNioChannelsChannel, JavaIoCloseable, NSObject, JavaObject >

/*!
 @brief Binds this channel to the given local socket address.
 If the <code>localAddr</code> is set
 to <code>null</code> the socket will be bound to an available local address on any free port of
 the system.
 @param local
 the local machine address and port to bind on.
 @return this channel.
 @throws UnsupportedAddressTypeException
 if the <code>SocketAddress</code> is not supported.
 @throws ClosedChannelException
 if the channel is closed.
 @throws AlreadyBoundException
 if the channel is already bound.
 @throws IOException
 if another I/O error occurs.
  Until ready for a public API change
 */
- (id<JavaNioChannelsNetworkChannel>)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

/*!
 @brief Returns the local socket address the channel is bound to.
 The socket may be bound explicitly
 via <code>bind(java.net.SocketAddress)</code> or similar methods, or as a side-effect when other
 methods are called, depending on the implementation. If the channel is not bound <code>null</code>
 is returned.
 <p>If IP is being used, the returned object will be a subclass of
 <code>java.net.InetSocketAddress</code>
 @return the local socket address, or <code>null</code> if the socket is not bound
 @throws ClosedChannelException
 if the channel is closed.
 @throws IOException
 if another I/O error occurs.
  Until ready for a public API change
 */
- (JavaNetSocketAddress *)getLocalAddress;

/*!
 @brief Returns the value for the socket option.
 @throws UnsupportedOperationException
 if the option is not supported by the socket.
 @throws java.nio.channels.ClosedChannelException
 if the socket is closed
 @throws IOException
 if the value cannot be read.
  Until ready for a public API change
 */
- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

/*!
 @brief Sets the value for the socket option.
 @return this NetworkChannel
 @throws UnsupportedOperationException
 if the option is not supported by the socket.
 @throws IllegalArgumentException
 if the value is not valid for the option.
 @throws java.nio.channels.ClosedChannelException
 if the socket is closed
 @throws IOException
 if the value cannot be written.
  Until ready for a public API change
 */
- (id<JavaNioChannelsNetworkChannel>)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                               withId:(id)value;

/*!
 @brief Returns the set of socket options supported by this channel.
  Until ready for a public API change
 */
- (id<JavaUtilSet>)supportedOptions;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNetworkChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNetworkChannel)

#endif // _JavaNioChannelsNetworkChannel_H_
