//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/ForwardingQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingQueue
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingQueue

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingQueue_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue || defined(INCLUDE_ComGoogleCommonCollectForwardingQueue))
#define ComGoogleCommonCollectForwardingQueue_

#define RESTRICT_ComGoogleCommonCollectForwardingCollection 1
#define INCLUDE_ComGoogleCommonCollectForwardingCollection 1
#include "com/google/common/collect/ForwardingCollection.h"

#define RESTRICT_JavaUtilQueue 1
#define INCLUDE_JavaUtilQueue 1
#include "java/util/Queue.h"

@class JavaLangBoolean;

@interface ComGoogleCommonCollectForwardingQueue : ComGoogleCommonCollectForwardingCollection < JavaUtilQueue >

#pragma mark Public

- (id)element;

- (jboolean)offerWithId:(id)o;

- (id)peek;

- (id)poll;

- (id)remove;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilQueue>)delegate;

- (jboolean)standardOfferWithId:(id)e;

- (id)standardPeek;

- (id)standardPoll;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingQueue)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingQueue_init(ComGoogleCommonCollectForwardingQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue")