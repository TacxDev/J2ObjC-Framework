//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/graph/AbstractValueGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractValueGraph")
#ifdef RESTRICT_ComGoogleCommonGraphAbstractValueGraph
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractValueGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractValueGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphAbstractValueGraph

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphAbstractValueGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphAbstractValueGraph || defined(INCLUDE_ComGoogleCommonGraphAbstractValueGraph))
#define ComGoogleCommonGraphAbstractValueGraph_

#define RESTRICT_ComGoogleCommonGraphAbstractBaseGraph 1
#define INCLUDE_ComGoogleCommonGraphAbstractBaseGraph 1
#include "com/google/common/graph/AbstractBaseGraph.h"

#define RESTRICT_ComGoogleCommonGraphValueGraph 1
#define INCLUDE_ComGoogleCommonGraphValueGraph 1
#include "com/google/common/graph/ValueGraph.h"

@class ComGoogleCommonGraphEndpointPair;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaUtilOptional;
@protocol ComGoogleCommonGraphGraph;

@interface ComGoogleCommonGraphAbstractValueGraph : ComGoogleCommonGraphAbstractBaseGraph < ComGoogleCommonGraphValueGraph >

#pragma mark Public

- (instancetype)init;

- (id<ComGoogleCommonGraphGraph>)asGraph;

- (JavaUtilOptional *)edgeValueWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints;

- (JavaUtilOptional *)edgeValueWithId:(id)nodeU
                               withId:(id)nodeV;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphAbstractValueGraph)

FOUNDATION_EXPORT void ComGoogleCommonGraphAbstractValueGraph_init(ComGoogleCommonGraphAbstractValueGraph *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphAbstractValueGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractValueGraph")
