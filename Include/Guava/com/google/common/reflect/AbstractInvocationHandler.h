//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/reflect/AbstractInvocationHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectAbstractInvocationHandler")
#ifdef RESTRICT_ComGoogleCommonReflectAbstractInvocationHandler
#define INCLUDE_ALL_ComGoogleCommonReflectAbstractInvocationHandler 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectAbstractInvocationHandler 1
#endif
#undef RESTRICT_ComGoogleCommonReflectAbstractInvocationHandler

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectAbstractInvocationHandler_) && (INCLUDE_ALL_ComGoogleCommonReflectAbstractInvocationHandler || defined(INCLUDE_ComGoogleCommonReflectAbstractInvocationHandler))
#define ComGoogleCommonReflectAbstractInvocationHandler_

#define RESTRICT_JavaLangReflectInvocationHandler 1
#define INCLUDE_JavaLangReflectInvocationHandler 1
#include "java/lang/reflect/InvocationHandler.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangReflectMethod;

@interface ComGoogleCommonReflectAbstractInvocationHandler : NSObject < JavaLangReflectInvocationHandler >

#pragma mark Public

- (instancetype)init;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (id)invokeWithId:(id)proxy
withJavaLangReflectMethod:(JavaLangReflectMethod *)method
 withNSObjectArray:(IOSObjectArray *)args;

- (NSString *)description;

#pragma mark Protected

- (id)handleInvocationWithId:(id)proxy
   withJavaLangReflectMethod:(JavaLangReflectMethod *)method
           withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonReflectAbstractInvocationHandler)

FOUNDATION_EXPORT void ComGoogleCommonReflectAbstractInvocationHandler_init(ComGoogleCommonReflectAbstractInvocationHandler *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectAbstractInvocationHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectAbstractInvocationHandler")
