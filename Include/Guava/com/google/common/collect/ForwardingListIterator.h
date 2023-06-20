//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/ForwardingListIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingListIterator
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingListIterator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingListIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator || defined(INCLUDE_ComGoogleCommonCollectForwardingListIterator))
#define ComGoogleCommonCollectForwardingListIterator_

#define RESTRICT_ComGoogleCommonCollectForwardingIterator 1
#define INCLUDE_ComGoogleCommonCollectForwardingIterator 1
#include "com/google/common/collect/ForwardingIterator.h"

#define RESTRICT_JavaUtilListIterator 1
#define INCLUDE_JavaUtilListIterator 1
#include "java/util/ListIterator.h"

@class JavaLangBoolean;
@class JavaLangInteger;

@interface ComGoogleCommonCollectForwardingListIterator : ComGoogleCommonCollectForwardingIterator < JavaUtilListIterator >

#pragma mark Public

- (void)addWithId:(id)element;

- (jboolean)hasPrevious;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

- (void)setWithId:(id)element;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilListIterator>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingListIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingListIterator_init(ComGoogleCommonCollectForwardingListIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingListIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingListIterator")
