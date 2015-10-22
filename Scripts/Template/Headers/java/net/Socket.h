//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Socket.java
//

#ifndef _JavaNetSocket_H_
#define _JavaNetSocket_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/Closeable.h"

@class JavaIoFileDescriptor;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetInetAddress;
@class JavaNetProxy;
@class JavaNetSocketAddress;
@class JavaNetSocketImpl;
@class JavaNioChannelsSocketChannel;
@protocol JavaNetSocketImplFactory;

/*!
 @brief Provides a client-side TCP socket.
 */
@interface JavaNetSocket : NSObject < JavaIoCloseable > {
 @public
  JavaNetSocketImpl *impl_;
  volatile_jboolean isCreated_;
}

#pragma mark Public

/*!
 @brief Creates a new unconnected socket.
 When a SocketImplFactory is defined it
 creates the internal socket implementation, otherwise the default socket
 implementation will be used for this socket.
 */
- (instancetype)init;

/*!
 @brief Creates a new streaming socket connected to the target host specified by
 the parameters <code>dstAddress</code> and <code>dstPort</code>.
 The socket is
 bound to any available port on the local host.
 @param dstAddress
 the target host address to connect to.
 @param dstPort
 the port on the target host to connect to.
 @throws IOException
 if an error occurs while creating the socket.
 */
- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)dstAddress
                                   withInt:(jint)dstPort;

/*!
 @brief Creates a new streaming or datagram socket connected to the target host
 specified by the parameters <code>addr</code> and <code>port</code>.
 The socket is
 bound to any available port on the local host.
 @param addr
 the Internet address to connect to.
 @param port
 the port on the target host to connect to.
 @param streaming
 if <code>true</code> a streaming socket is returned, a datagram
 socket otherwise.
 @throws IOException
 if an error occurs while creating the socket.
 */
- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)addr
                                   withInt:(jint)port
                               withBoolean:(jboolean)streaming;

/*!
 @brief Creates a new streaming socket connected to the target host specified by
 the parameters <code>dstAddress</code> and <code>dstPort</code>.
 On the local
 endpoint the socket is bound to the given address <code>localAddress</code> on
 port <code>localPort</code>.
 @param dstAddress
 the target host address to connect to.
 @param dstPort
 the port on the target host to connect to.
 @param localAddress
 the address on the local host to bind to.
 @param localPort
 the port on the local host to bind to.
 @throws IOException
 if an error occurs while creating the socket.
 */
- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)dstAddress
                                   withInt:(jint)dstPort
                    withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                                   withInt:(jint)localPort;

/*!
 @brief Creates a new unconnected socket using the given proxy type.
 When a
 <code>SocketImplFactory</code> is defined it creates the internal socket
 implementation, otherwise the default socket implementation will be used
 for this socket.
 <p>
 Example that will create a socket connection through a <code>SOCKS</code>
 proxy server: <br>
 <code>Socket sock = new Socket(new Proxy(Proxy.Type.SOCKS, new
 InetSocketAddress("test.domain.org", 2130)));</code>
 @param proxy
 the specified proxy for this socket.
 @throws IllegalArgumentException
 if the argument <code>proxy</code> is <code>null</code> or of an
 invalid type.
 */
- (instancetype)initWithJavaNetProxy:(JavaNetProxy *)proxy;

/*!
 @brief Creates a new streaming socket connected to the target host specified by
 the parameters <code>dstName</code> and <code>dstPort</code>.
 The socket is bound
 to any available port on the local host.
 <p>This implementation tries each IP address for the given hostname (in
 <a href="http://www.ietf.org/rfc/rfc3484.txt">RFC 3484</a> order)
 until it either connects successfully or it exhausts the set.
 @param dstName
 the target host name or IP address to connect to.
 @param dstPort
 the port on the target host to connect to.
 @throws UnknownHostException
 if the host name could not be resolved into an IP address.
 @throws IOException
 if an error occurs while creating the socket.
 */
- (instancetype)initWithNSString:(NSString *)dstName
                         withInt:(jint)dstPort;

/*!
 @brief Creates a new streaming or datagram socket connected to the target host
 specified by the parameters <code>hostName</code> and <code>port</code>.
 The socket
 is bound to any available port on the local host.
 <p>This implementation tries each IP address for the given hostname (in
 <a href="http://www.ietf.org/rfc/rfc3484.txt">RFC 3484</a> order)
 until it either connects successfully or it exhausts the set.
 @param hostName
 the target host name or IP address to connect to.
 @param port
 the port on the target host to connect to.
 @param streaming
 if <code>true</code> a streaming socket is returned, a datagram
 socket otherwise.
 @throws UnknownHostException
 if the host name could not be resolved into an IP address.
 @throws IOException
 if an error occurs while creating the socket.
 */
- (instancetype)initWithNSString:(NSString *)hostName
                         withInt:(jint)port
                     withBoolean:(jboolean)streaming;

/*!
 @brief Creates a new streaming socket connected to the target host specified by
 the parameters <code>dstName</code> and <code>dstPort</code>.
 On the local endpoint
 the socket is bound to the given address <code>localAddress</code> on port
 <code>localPort</code>. If <code>host</code> is <code>null</code> a loopback address is used to connect to.
 <p>This implementation tries each IP address for the given hostname (in
 <a href="http://www.ietf.org/rfc/rfc3484.txt">RFC 3484</a> order)
 until it either connects successfully or it exhausts the set.
 @param dstName
 the target host name or IP address to connect to.
 @param dstPort
 the port on the target host to connect to.
 @param localAddress
 the address on the local host to bind to.
 @param localPort
 the port on the local host to bind to.
 @throws UnknownHostException
 if the host name could not be resolved into an IP address.
 @throws IOException
 if an error occurs while creating the socket.
 */
- (instancetype)initWithNSString:(NSString *)dstName
                         withInt:(jint)dstPort
          withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                         withInt:(jint)localPort;

/*!
 @brief Binds this socket to the given local host address and port specified by
 the SocketAddress <code>localAddr</code>.
 If <code>localAddr</code> is set to
 <code>null</code>, this socket will be bound to an available local address on
 any free port.
 @param localAddr
 the specific address and port on the local machine to bind to.
 @throws IllegalArgumentException
 if the given SocketAddress is invalid or not supported.
 @throws IOException
 if the socket is already bound or an error occurs while
 binding.
 */
- (void)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr;

/*!
 @brief Closes the socket.
 It is not possible to reconnect or rebind to this
 socket thereafter which means a new socket instance has to be created.
 @throws IOException
 if an error occurs while closing the socket.
 */
- (void)close;

/*!
 @brief Connects this socket to the given remote host address and port specified
 by the SocketAddress <code>remoteAddr</code>.
 @param remoteAddr
 the address and port of the remote host to connect to.
 @throws IllegalArgumentException
 if the given SocketAddress is invalid or not supported.
 @throws IOException
 if the socket is already connected or an error occurs while
 connecting.
 */
- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remoteAddr;

/*!
 @brief Connects this socket to the given remote host address and port specified
 by the SocketAddress <code>remoteAddr</code> with the specified timeout.
 The
 connecting method will block until the connection is established or an
 error occurred.
 @param remoteAddr
 the address and port of the remote host to connect to.
 @param timeout
 the timeout value in milliseconds or <code>0</code> for an infinite
 timeout.
 @throws IllegalArgumentException
 if the given SocketAddress is invalid or not supported or the
 timeout value is negative.
 @throws IOException
 if the socket is already connected or an error occurs while
 connecting.
 */
- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remoteAddr
                                withInt:(jint)timeout;

/*!
 @brief Returns this socket's <code>SocketChannel</code>, if one exists.
 A channel is
 available only if this socket wraps a channel. (That is, you can go from a
 channel to a socket and back again, but you can't go from an arbitrary socket to a channel.)
 In practice, this means that the socket must have been created by
 <code>java.nio.channels.ServerSocketChannel.accept</code> or
 <code>java.nio.channels.SocketChannel.open</code>.
 */
- (JavaNioChannelsSocketChannel *)getChannel;

/*!
  internal use only
 */
- (JavaIoFileDescriptor *)getFileDescriptor$;

/*!
 @brief Returns the IP address of the target host this socket is connected to, or null if this
 socket is not yet connected.
 */
- (JavaNetInetAddress *)getInetAddress;

/*!
 @brief Returns an input stream to read data from this socket.
 If the socket has an associated
 <code>SocketChannel</code> and that channel is in non-blocking mode then reads from the
 stream will throw a <code>java.nio.channels.IllegalBlockingModeException</code>.
 @return the byte-oriented input stream.
 @throws IOException
 if an error occurs while creating the input stream or the
 socket is in an invalid state.
 */
- (JavaIoInputStream *)getInputStream;

/*!
 @brief Returns this socket's <code>SocketOptions.SO_KEEPALIVE</code> setting.
 */
- (jboolean)getKeepAlive;

/*!
 @brief Returns the local IP address this socket is bound to, or an address for which
 <code>InetAddress.isAnyLocalAddress()</code> returns true if the socket is closed or unbound.
 */
- (JavaNetInetAddress *)getLocalAddress;

/*!
 @brief Returns the local port this socket is bound to, or -1 if the socket is unbound.
 If the socket
 has been closed this method will still return the local port the socket was bound to.
 */
- (jint)getLocalPort;

/*!
 @brief Returns the local address and port of this socket as a SocketAddress or null if the socket
 has never been bound.
 If the socket is closed but has previously been bound then an address
 for which <code>InetAddress.isAnyLocalAddress()</code> returns true will be returned with the
 previously-bound port. This is useful on multihomed hosts.
 */
- (JavaNetSocketAddress *)getLocalSocketAddress;

/*!
 @brief Returns this socket's <code>SocketOptions.SO_OOBINLINE</code> setting.
 */
- (jboolean)getOOBInline;

/*!
 @brief Returns an output stream to write data into this socket.
 If the socket has an associated
 <code>SocketChannel</code> and that channel is in non-blocking mode then writes to the
 stream will throw a <code>java.nio.channels.IllegalBlockingModeException</code>.
 @return the byte-oriented output stream.
 @throws IOException
 if an error occurs while creating the output stream or the
 socket is in an invalid state.
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 @brief Returns the port number of the target host this socket is connected to, or 0 if this socket
 is not yet connected.
 */
- (jint)getPort;

/*!
 @brief Returns this socket's <code>receive buffer size</code>.
 */
- (jint)getReceiveBufferSize;

/*!
 @brief Returns the remote address and port of this socket as a <code>SocketAddress</code>
  or null if the socket is not connected.
 @return the remote socket address and port.
 */
- (JavaNetSocketAddress *)getRemoteSocketAddress;

/*!
 @brief Returns this socket's <code>SocketOptions.SO_REUSEADDR</code> setting.
 */
- (jboolean)getReuseAddress;

/*!
 @brief Returns this socket's <code>send buffer size</code>.
 */
- (jint)getSendBufferSize;

/*!
 @brief Returns this socket's <code>linger</code> timeout in seconds, or -1
 for no linger (i.e.
 <code>close</code> will return immediately).
 */
- (jint)getSoLinger;

/*!
 @brief Returns this socket's <code>receive timeout</code>.
 */
- (jint)getSoTimeout;

/*!
 @brief Returns this socket's <code>SocketOptions#TCP_NODELAY</code> setting.
 */
- (jboolean)getTcpNoDelay;

/*!
 @brief Returns this socket's  setting.
 */
- (jint)getTrafficClass;

/*!
 @brief Returns whether this socket is bound to a local address and port.
 @return <code>true</code> if the socket is bound to a local address, <code>false</code>
  otherwise.
 */
- (jboolean)isBound;

/*!
 @brief Returns whether this socket is closed.
 @return <code>true</code> if the socket is closed, <code>false</code> otherwise.
 */
- (jboolean)isClosed;

/*!
 @brief Returns whether this socket is connected to a remote host.
 @return <code>true</code> if the socket is connected, <code>false</code> otherwise.
 */
- (jboolean)isConnected;

/*!
 @brief Returns whether the incoming channel of the socket has already been
 closed.
 @return <code>true</code> if reading from this socket is not possible anymore,
 <code>false</code> otherwise.
 */
- (jboolean)isInputShutdown;

/*!
 @brief Returns whether the outgoing channel of the socket has already been
 closed.
 @return <code>true</code> if writing to this socket is not possible anymore,
 <code>false</code> otherwise.
 */
- (jboolean)isOutputShutdown;

/*!
 @brief Sets the Socket and its related SocketImpl state as if a successful bind() took place,
 without actually performing an OS bind().
  used in java.nio
 */
- (void)onBindWithJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                             withInt:(jint)localPort;

/*!
 @brief Sets the Socket and its related SocketImpl state as if a successful close() took place,
 without actually performing an OS close().
  used in java.nio
 */
- (void)onClose;

/*!
 @brief Sets the Socket and its related SocketImpl state as if a successful connect() took place,
 without actually performing an OS connect().
  internal use only
 */
- (void)onConnectWithJavaNetInetAddress:(JavaNetInetAddress *)remoteAddress
                                withInt:(jint)remotePort;

/*!
 @brief Sends the given single byte data which is represented by the lowest octet
 of <code>value</code> as "TCP urgent data".
 @param value
 the byte of urgent data to be sent.
 @throws IOException
 if an error occurs while sending urgent data.
 */
- (void)sendUrgentDataWithInt:(jint)value;

/*!
 @brief Sets this socket's <code>SocketOptions.SO_KEEPALIVE</code> option.
 */
- (void)setKeepAliveWithBoolean:(jboolean)keepAlive;

/*!
 @brief Sets this socket's <code>SocketOptions.SO_OOBINLINE</code> option.
 */
- (void)setOOBInlineWithBoolean:(jboolean)oobinline;

/*!
 @brief Sets performance preferences for connectionTime, latency and bandwidth.
 <p>This method does currently nothing.
 @param connectionTime
 the value representing the importance of a short connecting
 time.
 @param latency
 the value representing the importance of low latency.
 @param bandwidth
 the value representing the importance of high bandwidth.
 */
- (void)setPerformancePreferencesWithInt:(jint)connectionTime
                                 withInt:(jint)latency
                                 withInt:(jint)bandwidth;

/*!
 @brief Sets this socket's <code>receive buffer size</code>.
 */
- (void)setReceiveBufferSizeWithInt:(jint)size;

/*!
 @brief Sets this socket's <code>SocketOptions.SO_REUSEADDR</code> option.
 */
- (void)setReuseAddressWithBoolean:(jboolean)reuse;

/*!
 @brief Sets this socket's <code>send buffer size</code>.
 */
- (void)setSendBufferSizeWithInt:(jint)size;

/*!
 @brief Sets the internal factory for creating socket implementations.
 This may
 only be executed once during the lifetime of the application.
 @param fac
 the socket implementation factory to be set.
 @throws IOException
 if the factory has been already set.
 */
+ (void)setSocketImplFactoryWithJavaNetSocketImplFactory:(id<JavaNetSocketImplFactory>)fac;

/*!
 @brief Sets this socket's <code>linger</code> timeout in seconds.
 If <code>on</code> is false, <code>timeout</code> is irrelevant.
 */
- (void)setSoLingerWithBoolean:(jboolean)on
                       withInt:(jint)timeout;

/*!
 @brief Sets this socket's <code>read timeout</code> in milliseconds.
 Use 0 for no timeout.
 To take effect, this option must be set before the blocking method was called.
 */
- (void)setSoTimeoutWithInt:(jint)timeout;

/*!
 @brief Sets this socket's <code>SocketOptions.TCP_NODELAY</code> option.
 */
- (void)setTcpNoDelayWithBoolean:(jboolean)on;

/*!
 @brief Sets this socket's <code>SocketOptions.IP_TOS</code> value for every packet sent by this socket.
 */
- (void)setTrafficClassWithInt:(jint)value;

/*!
 @brief Closes the input stream of this socket.
 Any further data sent to this
 socket will be discarded. Reading from this socket after this method has
 been called will return the value <code>EOF</code>.
 @throws IOException
 if an error occurs while closing the socket input stream.
 @throws SocketException
 if the input stream is already closed.
 */
- (void)shutdownInput;

/*!
 @brief Closes the output stream of this socket.
 All buffered data will be sent
 followed by the termination sequence. Writing to the closed output stream
 will cause an <code>IOException</code>.
 @throws IOException
 if an error occurs while closing the socket output stream.
 @throws SocketException
 if the output stream is already closed.
 */
- (void)shutdownOutput;

/*!
 @brief Returns a <code>String</code> containing a concise, human-readable description of the
 socket.
 @return the textual representation of this socket.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Creates an unconnected socket with the given socket implementation.
 @param impl
 the socket implementation to be used.
 @throws SocketException
 if an error occurs while creating the socket.
 */
- (instancetype)initWithJavaNetSocketImpl:(JavaNetSocketImpl *)impl;

#pragma mark Package-Private

/*!
 @brief Set the appropriate flags for a socket created by <code>ServerSocket.accept()</code>
 .
 */
- (void)accepted;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocket)

J2OBJC_FIELD_SETTER(JavaNetSocket, impl_, JavaNetSocketImpl *)

FOUNDATION_EXPORT void JavaNetSocket_init(JavaNetSocket *self);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetProxy_(JavaNetSocket *self, JavaNetProxy *proxy);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetProxy_(JavaNetProxy *proxy) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithNSString_withInt_(JavaNetSocket *self, NSString *dstName, jint dstPort);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithNSString_withInt_(NSString *dstName, jint dstPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithNSString_withInt_withJavaNetInetAddress_withInt_(JavaNetSocket *self, NSString *dstName, jint dstPort, JavaNetInetAddress *localAddress, jint localPort);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithNSString_withInt_withJavaNetInetAddress_withInt_(NSString *dstName, jint dstPort, JavaNetInetAddress *localAddress, jint localPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithNSString_withInt_withBoolean_(JavaNetSocket *self, NSString *hostName, jint port, jboolean streaming);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithNSString_withInt_withBoolean_(NSString *hostName, jint port, jboolean streaming) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetInetAddress_withInt_(JavaNetSocket *self, JavaNetInetAddress *dstAddress, jint dstPort);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetInetAddress_withInt_(JavaNetInetAddress *dstAddress, jint dstPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetInetAddress_withInt_withJavaNetInetAddress_withInt_(JavaNetSocket *self, JavaNetInetAddress *dstAddress, jint dstPort, JavaNetInetAddress *localAddress, jint localPort);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetInetAddress_withInt_withJavaNetInetAddress_withInt_(JavaNetInetAddress *dstAddress, jint dstPort, JavaNetInetAddress *localAddress, jint localPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetInetAddress_withInt_withBoolean_(JavaNetSocket *self, JavaNetInetAddress *addr, jint port, jboolean streaming);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetInetAddress_withInt_withBoolean_(JavaNetInetAddress *addr, jint port, jboolean streaming) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetSocketImpl_(JavaNetSocket *self, JavaNetSocketImpl *impl);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetSocketImpl_(JavaNetSocketImpl *impl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_setSocketImplFactoryWithJavaNetSocketImplFactory_(id<JavaNetSocketImplFactory> fac);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocket)

#endif // _JavaNetSocket_H_
