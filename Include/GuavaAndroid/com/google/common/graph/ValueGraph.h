//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/graph/ValueGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphValueGraph")
#ifdef RESTRICT_ComGoogleCommonGraphValueGraph
#define INCLUDE_ALL_ComGoogleCommonGraphValueGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphValueGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphValueGraph

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphValueGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphValueGraph || defined(INCLUDE_ComGoogleCommonGraphValueGraph))
#define ComGoogleCommonGraphValueGraph_

#define RESTRICT_ComGoogleCommonGraphBaseGraph 1
#define INCLUDE_ComGoogleCommonGraphBaseGraph 1
#include "com/google/common/graph/BaseGraph.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol ComGoogleCommonGraphGraph;
@protocol JavaUtilSet;

@protocol ComGoogleCommonGraphValueGraph < ComGoogleCommonGraphBaseGraph, JavaObject >

- (id<JavaUtilSet>)nodes;

- (id<JavaUtilSet>)edges;

- (id<ComGoogleCommonGraphGraph>)asGraph;

- (jboolean)isDirected;

- (jboolean)allowsSelfLoops;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (ComGoogleCommonGraphElementOrder *)incidentEdgeOrder;

- (id<JavaUtilSet>)adjacentNodesWithId:(id)node;

- (id<JavaUtilSet>)predecessorsWithId:(id)node;

- (id<JavaUtilSet>)successorsWithId:(id)node;

- (id<JavaUtilSet>)incidentEdgesWithId:(id)node;

- (jint)degreeWithId:(id)node;

- (jint)inDegreeWithId:(id)node;

- (jint)outDegreeWithId:(id)node;

- (jboolean)hasEdgeConnectingWithId:(id)nodeU
                             withId:(id)nodeV;

- (jboolean)hasEdgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints;

- (id)edgeValueOrDefaultWithId:(id)nodeU
                        withId:(id)nodeV
                        withId:(id)defaultValue;

- (id)edgeValueOrDefaultWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints
                                                      withId:(id)defaultValue;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphValueGraph)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphValueGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphValueGraph")
