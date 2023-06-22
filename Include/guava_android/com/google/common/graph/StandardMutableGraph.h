//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/graph/StandardMutableGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphStandardMutableGraph")
#ifdef RESTRICT_ComGoogleCommonGraphStandardMutableGraph
#define INCLUDE_ALL_ComGoogleCommonGraphStandardMutableGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphStandardMutableGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphStandardMutableGraph

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphStandardMutableGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphStandardMutableGraph || defined(INCLUDE_ComGoogleCommonGraphStandardMutableGraph))
#define ComGoogleCommonGraphStandardMutableGraph_

#define RESTRICT_ComGoogleCommonGraphForwardingGraph 1
#define INCLUDE_ComGoogleCommonGraphForwardingGraph 1
#include "com/google/common/graph/ForwardingGraph.h"

#define RESTRICT_ComGoogleCommonGraphMutableGraph 1
#define INCLUDE_ComGoogleCommonGraphMutableGraph 1
#include "com/google/common/graph/MutableGraph.h"

@class ComGoogleCommonGraphAbstractGraphBuilder;
@class ComGoogleCommonGraphEndpointPair;
@class JavaLangBoolean;
@protocol ComGoogleCommonGraphBaseGraph;

@interface ComGoogleCommonGraphStandardMutableGraph : ComGoogleCommonGraphForwardingGraph < ComGoogleCommonGraphMutableGraph >

#pragma mark Public

- (jboolean)addNodeWithId:(id)node;

- (jboolean)putEdgeWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints;

- (jboolean)putEdgeWithId:(id)nodeU
                   withId:(id)nodeV;

- (jboolean)removeEdgeWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints;

- (jboolean)removeEdgeWithId:(id)nodeU
                      withId:(id)nodeV;

- (jboolean)removeNodeWithId:(id)node;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder:(ComGoogleCommonGraphAbstractGraphBuilder *)builder;

- (id<ComGoogleCommonGraphBaseGraph>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphStandardMutableGraph)

FOUNDATION_EXPORT void ComGoogleCommonGraphStandardMutableGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphStandardMutableGraph *self, ComGoogleCommonGraphAbstractGraphBuilder *builder);

FOUNDATION_EXPORT ComGoogleCommonGraphStandardMutableGraph *new_ComGoogleCommonGraphStandardMutableGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphAbstractGraphBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphStandardMutableGraph *create_ComGoogleCommonGraphStandardMutableGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphAbstractGraphBuilder *builder);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphStandardMutableGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphStandardMutableGraph")
