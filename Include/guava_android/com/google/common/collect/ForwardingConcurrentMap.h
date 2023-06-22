//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/ForwardingConcurrentMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingConcurrentMap
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingConcurrentMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingConcurrentMap_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap || defined(INCLUDE_ComGoogleCommonCollectForwardingConcurrentMap))
#define ComGoogleCommonCollectForwardingConcurrentMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "com/google/common/collect/ForwardingMap.h"

#define RESTRICT_JavaUtilConcurrentConcurrentMap 1
#define INCLUDE_JavaUtilConcurrentConcurrentMap 1
#include "java/util/concurrent/ConcurrentMap.h"

@class JavaLangBoolean;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;

@interface ComGoogleCommonCollectForwardingConcurrentMap : ComGoogleCommonCollectForwardingMap < JavaUtilConcurrentConcurrentMap >

#pragma mark Public

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentConcurrentMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingConcurrentMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingConcurrentMap_init(ComGoogleCommonCollectForwardingConcurrentMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingConcurrentMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingConcurrentMap")
