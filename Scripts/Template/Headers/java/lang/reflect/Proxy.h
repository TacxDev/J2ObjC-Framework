//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/Proxy.java
//

#ifndef _JavaLangReflectProxy_H_
#define _JavaLangReflectProxy_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangClassLoader;
@protocol JavaLangReflectInvocationHandler;
@protocol JavaUtilMap;

/*!
 @brief <code>Proxy</code> defines methods for creating dynamic proxy classes and instances.
 A proxy class implements a declared set of interfaces and delegates method
 invocations to an <code>InvocationHandler</code>.
 @since 1.3
 */
@interface JavaLangReflectProxy : NSObject < JavaIoSerializable > {
 @public
  /*!
   @brief The invocation handler on which the method calls are dispatched.
   */
  id<JavaLangReflectInvocationHandler> handler_;
  id<JavaUtilMap> methodMap_;
}

#pragma mark Public

/*!
 @brief Returns the invocation handler of the specified proxy instance.
 @param proxy
 the proxy instance
 @return the invocation handler of the specified proxy instance
 @throws IllegalArgumentException
 if the supplied <code>proxy</code> is not a proxy object
 */
+ (id<JavaLangReflectInvocationHandler>)getInvocationHandlerWithId:(id)proxy;

/*!
 @brief Returns the dynamically built <code>Class</code> for the specified interfaces.
 Creates a new <code>Class</code> when necessary. The order of the interfaces
 is relevant. Invocations of this method with the same interfaces but
 different order result in different generated classes. The interfaces
 must be visible from the supplied class loader; no duplicates are
 permitted. All non-public interfaces must be defined in the same package.
 @param loader
 the class loader that will define the proxy class
 @param interfaces
 an array of <code>Class</code> objects, each one identifying an
 interface that will be implemented by the returned proxy
 class
 @return a proxy class that implements all of the interfaces referred to
 in the contents of <code>interfaces</code>
 @throws IllegalArgumentException
 if any of the interface restrictions are violated
 @throws NullPointerException
 if either <code>interfaces</code> or any of its elements are
 <code>null</code>
 */
+ (IOSClass *)getProxyClassWithJavaLangClassLoader:(JavaLangClassLoader *)loader
                                 withIOSClassArray:(IOSObjectArray *)interfaces;

/*!
 @brief Indicates whether or not the specified class is a dynamically generated
 proxy class.
 @param cl
 the class
 @return <code>true</code> if the class is a proxy class, <code>false</code>
 otherwise
 @throws NullPointerException
 if the class is <code>null</code>
 */
+ (jboolean)isProxyClassWithIOSClass:(IOSClass *)cl;

/*!
 @brief Returns an instance of the dynamically built class for the specified
 interfaces.
 Method invocations on the returned instance are forwarded to
 the specified invocation handler. The interfaces must be visible from the
 supplied class loader; no duplicates are permitted. All non-public
 interfaces must be defined in the same package.
 @param loader
 the class loader that will define the proxy class
 @param interfaces
 an array of <code>Class</code> objects, each one identifying an
 interface that will be implemented by the returned proxy
 object
 @param h
 the invocation handler that handles the dispatched method
 invocations
 @return a new proxy object that delegates to the handler <code>h</code>
 @throws IllegalArgumentException
 if any of the interface restrictions are violated
 @throws NullPointerException
 if the interfaces or any of its elements are null
 */
+ (id)newProxyInstanceWithJavaLangClassLoader:(JavaLangClassLoader *)loader
                            withIOSClassArray:(IOSObjectArray *)interfaces
         withJavaLangReflectInvocationHandler:(id<JavaLangReflectInvocationHandler>)h OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Constructs a new <code>Proxy</code> instance with the specified invocation
 handler.
 @param h
 the invocation handler for the newly created proxy
 */
- (instancetype)initWithJavaLangReflectInvocationHandler:(id<JavaLangReflectInvocationHandler>)h;

#pragma mark Package-Private




@end

J2OBJC_STATIC_INIT(JavaLangReflectProxy)

J2OBJC_FIELD_SETTER(JavaLangReflectProxy, handler_, id<JavaLangReflectInvocationHandler>)
J2OBJC_FIELD_SETTER(JavaLangReflectProxy, methodMap_, id<JavaUtilMap>)

FOUNDATION_EXPORT void JavaLangReflectProxy_initWithJavaLangReflectInvocationHandler_(JavaLangReflectProxy *self, id<JavaLangReflectInvocationHandler> h);

FOUNDATION_EXPORT JavaLangReflectProxy *new_JavaLangReflectProxy_initWithJavaLangReflectInvocationHandler_(id<JavaLangReflectInvocationHandler> h) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT IOSClass *JavaLangReflectProxy_getProxyClassWithJavaLangClassLoader_withIOSClassArray_(JavaLangClassLoader *loader, IOSObjectArray *interfaces);

FOUNDATION_EXPORT id JavaLangReflectProxy_newProxyInstanceWithJavaLangClassLoader_withIOSClassArray_withJavaLangReflectInvocationHandler_(JavaLangClassLoader *loader, IOSObjectArray *interfaces, id<JavaLangReflectInvocationHandler> h);

FOUNDATION_EXPORT jboolean JavaLangReflectProxy_isProxyClassWithIOSClass_(IOSClass *cl);

FOUNDATION_EXPORT id<JavaLangReflectInvocationHandler> JavaLangReflectProxy_getInvocationHandlerWithId_(id proxy);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectProxy)

#endif // _JavaLangReflectProxy_H_
