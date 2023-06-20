//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/eventbus/Dispatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusDispatcher")
#ifdef RESTRICT_ComGoogleCommonEventbusDispatcher
#define INCLUDE_ALL_ComGoogleCommonEventbusDispatcher 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusDispatcher 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusDispatcher

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEventbusDispatcher_) && (INCLUDE_ALL_ComGoogleCommonEventbusDispatcher || defined(INCLUDE_ComGoogleCommonEventbusDispatcher))
#define ComGoogleCommonEventbusDispatcher_

@protocol JavaUtilIterator;

@interface ComGoogleCommonEventbusDispatcher : NSObject

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (void)dispatchWithId:(id)event
  withJavaUtilIterator:(id<JavaUtilIterator>)subscribers;

+ (ComGoogleCommonEventbusDispatcher *)immediate;

+ (ComGoogleCommonEventbusDispatcher *)legacyAsync;

+ (ComGoogleCommonEventbusDispatcher *)perThreadDispatchQueue;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusDispatcher)

FOUNDATION_EXPORT void ComGoogleCommonEventbusDispatcher_initPackagePrivate(ComGoogleCommonEventbusDispatcher *self);

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_perThreadDispatchQueue(void);

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_legacyAsync(void);

FOUNDATION_EXPORT ComGoogleCommonEventbusDispatcher *ComGoogleCommonEventbusDispatcher_immediate(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusDispatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusDispatcher")
