//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLSessionBindingEvent.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLSessionBindingEvent")
#ifdef RESTRICT_JavaxNetSslSSLSessionBindingEvent
#define INCLUDE_ALL_JavaxNetSslSSLSessionBindingEvent 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLSessionBindingEvent 1
#endif
#undef RESTRICT_JavaxNetSslSSLSessionBindingEvent

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSSLSessionBindingEvent_) && (INCLUDE_ALL_JavaxNetSslSSLSessionBindingEvent || defined(INCLUDE_JavaxNetSslSSLSessionBindingEvent))
#define JavaxNetSslSSLSessionBindingEvent_

#define RESTRICT_JavaUtilEventObject 1
#define INCLUDE_JavaUtilEventObject 1
#include "java/util/EventObject.h"

@protocol JavaxNetSslSSLSession;

/*!
 @brief This event is propagated to a SSLSessionBindingListener.
 When a listener object is bound or unbound to an SSLSession by 
 <code>SSLSession.putValue(String, Object)</code>
  or <code>SSLSession.removeValue(String)</code>, objects which
  implement the SSLSessionBindingListener will be receive an
  event of this type.  The event's <code>name</code> field is the
  key in which the listener is being bound or unbound.
 - seealso: SSLSession
 - seealso: SSLSessionBindingListener
 @since 1.4
 @author Nathan Abramson
 @author David Brownell
 */
@interface JavaxNetSslSSLSessionBindingEvent : JavaUtilEventObject

#pragma mark Public

/*!
 @brief Constructs a new SSLSessionBindingEvent.
 @param session the SSLSession acting as the source of the event
 @param name the name to which the object is being bound or unbound
 @throw IllegalArgumentExceptionif <code>session</code> is null.
 */
- (instancetype __nonnull)initWithJavaxNetSslSSLSession:(id<JavaxNetSslSSLSession>)session
                                           withNSString:(NSString *)name;

/*!
 @brief Returns the name to which the object is being bound, or the name
  from which the object is being unbound.
 @return the name to which the object is being bound or unbound
 */
- (NSString *)getName;

/*!
 @brief Returns the SSLSession into which the listener is being bound or
  from which the listener is being unbound.
 @return the <code>SSLSession</code>
 */
- (id<JavaxNetSslSSLSession>)getSession;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionBindingEvent)

FOUNDATION_EXPORT void JavaxNetSslSSLSessionBindingEvent_initWithJavaxNetSslSSLSession_withNSString_(JavaxNetSslSSLSessionBindingEvent *self, id<JavaxNetSslSSLSession> session, NSString *name);

FOUNDATION_EXPORT JavaxNetSslSSLSessionBindingEvent *new_JavaxNetSslSSLSessionBindingEvent_initWithJavaxNetSslSSLSession_withNSString_(id<JavaxNetSslSSLSession> session, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLSessionBindingEvent *create_JavaxNetSslSSLSessionBindingEvent_initWithJavaxNetSslSSLSession_withNSString_(id<JavaxNetSslSSLSession> session, NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionBindingEvent)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLSessionBindingEvent")
