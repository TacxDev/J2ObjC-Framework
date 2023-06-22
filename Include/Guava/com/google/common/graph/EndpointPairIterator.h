//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/graph/EndpointPairIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphEndpointPairIterator")
#ifdef RESTRICT_ComGoogleCommonGraphEndpointPairIterator
#define INCLUDE_ALL_ComGoogleCommonGraphEndpointPairIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphEndpointPairIterator 1
#endif
#undef RESTRICT_ComGoogleCommonGraphEndpointPairIterator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphEndpointPairIterator_) && (INCLUDE_ALL_ComGoogleCommonGraphEndpointPairIterator || defined(INCLUDE_ComGoogleCommonGraphEndpointPairIterator))
#define ComGoogleCommonGraphEndpointPairIterator_

#define RESTRICT_ComGoogleCommonCollectAbstractIterator 1
#define INCLUDE_ComGoogleCommonCollectAbstractIterator 1
#include "com/google/common/collect/AbstractIterator.h"

@class ComGoogleCommonGraphEndpointPair;
@class JavaLangBoolean;
@protocol ComGoogleCommonGraphBaseGraph;
@protocol JavaUtilIterator;

@interface ComGoogleCommonGraphEndpointPairIterator : ComGoogleCommonCollectAbstractIterator {
 @public
  id node_;
  id<JavaUtilIterator> successorIterator_;
}

#pragma mark Public

- (ComGoogleCommonGraphEndpointPair *)next;

- (ComGoogleCommonGraphEndpointPair *)peek;

#pragma mark Protected

- (ComGoogleCommonGraphEndpointPair *)computeNext;

- (ComGoogleCommonGraphEndpointPair *)endOfData;

#pragma mark Package-Private

- (jboolean)advance;

+ (ComGoogleCommonGraphEndpointPairIterator *)ofWithComGoogleCommonGraphBaseGraph:(id<ComGoogleCommonGraphBaseGraph>)graph;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphEndpointPairIterator)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphEndpointPairIterator, node_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonGraphEndpointPairIterator, successorIterator_, id<JavaUtilIterator>)

FOUNDATION_EXPORT ComGoogleCommonGraphEndpointPairIterator *ComGoogleCommonGraphEndpointPairIterator_ofWithComGoogleCommonGraphBaseGraph_(id<ComGoogleCommonGraphBaseGraph> graph);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphEndpointPairIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphEndpointPairIterator")
