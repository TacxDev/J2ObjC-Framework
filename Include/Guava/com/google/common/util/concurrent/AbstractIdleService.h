//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/util/concurrent/AbstractIdleService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractIdleService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAbstractIdleService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractIdleService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractIdleService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAbstractIdleService

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAbstractIdleService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractIdleService || defined(INCLUDE_ComGoogleCommonUtilConcurrentAbstractIdleService))
#define ComGoogleCommonUtilConcurrentAbstractIdleService_

#define RESTRICT_ComGoogleCommonUtilConcurrentService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentService 1
#include "com/google/common/util/concurrent/Service.h"

@class ComGoogleCommonUtilConcurrentService_Listener;
@class ComGoogleCommonUtilConcurrentService_State;
@class JavaLangBoolean;
@class JavaLangLong;
@class JavaLangThrowable;
@class JavaTimeDuration;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentAbstractIdleService : NSObject < ComGoogleCommonUtilConcurrentService >

#pragma mark Public

- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(ComGoogleCommonUtilConcurrentService_Listener *)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)awaitRunning;

- (void)awaitRunningWithJavaTimeDuration:(JavaTimeDuration *)timeout;

- (void)awaitRunningWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)awaitTerminated;

- (void)awaitTerminatedWithJavaTimeDuration:(JavaTimeDuration *)timeout;

- (void)awaitTerminatedWithLong:(jlong)timeout
 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (JavaLangThrowable *)failureCause;

- (jboolean)isRunning;

- (id<ComGoogleCommonUtilConcurrentService>)startAsync;

- (ComGoogleCommonUtilConcurrentService_State *)state;

- (id<ComGoogleCommonUtilConcurrentService>)stopAsync;

- (NSString *)description;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentExecutor>)executor;

- (NSString *)serviceName;

- (void)shutDown;

- (void)startUp;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractIdleService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractIdleService_init(ComGoogleCommonUtilConcurrentAbstractIdleService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractIdleService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractIdleService")
