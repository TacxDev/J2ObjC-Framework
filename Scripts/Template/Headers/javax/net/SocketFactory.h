//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/SocketFactory.java
//

#ifndef _JavaxNetSocketFactory_H_
#define _JavaxNetSocketFactory_H_

#include "../../J2ObjC_header.h"

@class JavaNetInetAddress;
@class JavaNetSocket;

/*!
 @brief This abstract class defines methods to create sockets.
 It can be subclassed
 to create specific socket types with additional socket-level functionality.
 */
@interface JavaxNetSocketFactory : NSObject

#pragma mark Public

/*!
 @brief Creates a new socket which is not connected to any remote host.
 This
 method has to be overridden by a subclass otherwise a <code>SocketException</code>
  is thrown.
 @return the created unconnected socket.
 @throws IOException
 if an error occurs while creating a new socket.
 */
- (JavaNetSocket *)createSocket;

/*!
 @brief Creates a new socket which is connected to the remote host specified by
 the InetAddress <code>host</code>.
 The socket is bound to any available local
 address and port.
 @param host
 the host address the socket has to be connected to.
 @param port
 the port number of the remote host at which the socket is
 connected.
 @return the created connected socket.
 @throws IOException
 if an error occurs while creating a new socket.
 */
- (JavaNetSocket *)createSocketWithJavaNetInetAddress:(JavaNetInetAddress *)host
                                              withInt:(jint)port;

/*!
 @brief Creates a new socket which is connected to the remote host specified by
 the InetAddress <code>address</code>.
 The socket is bound to the local network
 interface specified by the InetAddress <code>localHost</code> on port <code>localPort</code>
 .
 @param address
 the remote host address the socket has to be connected to.
 @param port
 the port number of the remote host at which the socket is
 connected.
 @param localAddress
 the local host address the socket is bound to.
 @param localPort
 the port number of the local host at which the socket is
 bound.
 @return the created connected socket.
 @throws IOException
 if an error occurs while creating a new socket.
 */
- (JavaNetSocket *)createSocketWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                              withInt:(jint)port
                               withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                                              withInt:(jint)localPort;

/*!
 @brief Creates a new socket which is connected to the remote host specified by
 the parameters <code>host</code> and <code>port</code>.
 The socket is bound to any
 available local address and port.
 @param host
 the remote host address the socket has to be connected to.
 @param port
 the port number of the remote host at which the socket is
 connected.
 @return the created connected socket.
 @throws IOException
 if an error occurs while creating a new socket.
 @throws UnknownHostException
 if the specified host is unknown or the IP address could not
 be resolved.
 */
- (JavaNetSocket *)createSocketWithNSString:(NSString *)host
                                    withInt:(jint)port;

/*!
 @brief Creates a new socket which is connected to the remote host specified by
 the parameters <code>host</code> and <code>port</code>.
 The socket is bound to the
 local network interface specified by the InetAddress <code>localHost</code> on
 port <code>localPort</code>.
 @param host
 the remote host address the socket has to be connected to.
 @param port
 the port number of the remote host at which the socket is
 connected.
 @param localHost
 the local host address the socket is bound to.
 @param localPort
 the port number of the local host at which the socket is
 bound.
 @return the created connected socket.
 @throws IOException
 if an error occurs while creating a new socket.
 @throws UnknownHostException
 if the specified host is unknown or the IP address could not
 be resolved.
 */
- (JavaNetSocket *)createSocketWithNSString:(NSString *)host
                                    withInt:(jint)port
                     withJavaNetInetAddress:(JavaNetInetAddress *)localHost
                                    withInt:(jint)localPort;

/*!
 @brief Gets the default socket factory of the system which can be used to create
 new sockets without creating a subclass of this factory.
 @return the system default socket factory.
 */
+ (JavaxNetSocketFactory *)getDefault;

#pragma mark Protected

/*!
 @brief Creates a new <code>SocketFactory</code> instance.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSocketFactory)

FOUNDATION_EXPORT JavaxNetSocketFactory *JavaxNetSocketFactory_getDefault();

FOUNDATION_EXPORT void JavaxNetSocketFactory_init(JavaxNetSocketFactory *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSocketFactory)

#endif // _JavaxNetSocketFactory_H_
