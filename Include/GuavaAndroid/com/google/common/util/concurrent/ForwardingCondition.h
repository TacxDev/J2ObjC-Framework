//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/util/concurrent/ForwardingCondition.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingCondition
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingCondition

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingCondition_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingCondition))
#define ComGoogleCommonUtilConcurrentForwardingCondition_

#define RESTRICT_JavaUtilConcurrentLocksCondition 1
#define INCLUDE_JavaUtilConcurrentLocksCondition 1
#include "java/util/concurrent/locks/Condition.h"

@class JavaLangBoolean;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@class JavaUtilDate;

@interface ComGoogleCommonUtilConcurrentForwardingCondition : NSObject < JavaUtilConcurrentLocksCondition >

#pragma mark Public

- (void)await;

- (jboolean)awaitWithLong:(jlong)time
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jlong)awaitNanosWithLong:(jlong)nanosTimeout;

- (void)awaitUninterruptibly;

- (jboolean)awaitUntilWithJavaUtilDate:(JavaUtilDate *)deadline;

- (void)signal;

- (void)signalAll;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (id<JavaUtilConcurrentLocksCondition>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingCondition)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingCondition_initPackagePrivate(ComGoogleCommonUtilConcurrentForwardingCondition *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingCondition)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCondition")
