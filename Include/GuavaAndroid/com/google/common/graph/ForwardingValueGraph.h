//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/graph/ForwardingValueGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph")
#ifdef RESTRICT_ComGoogleCommonGraphForwardingValueGraph
#define INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphForwardingValueGraph

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphForwardingValueGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph || defined(INCLUDE_ComGoogleCommonGraphForwardingValueGraph))
#define ComGoogleCommonGraphForwardingValueGraph_

#define RESTRICT_ComGoogleCommonGraphAbstractValueGraph 1
#define INCLUDE_ComGoogleCommonGraphAbstractValueGraph 1
#include "com/google/common/graph/AbstractValueGraph.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@protocol ComGoogleCommonGraphValueGraph;
@protocol JavaUtilSet;

@interface ComGoogleCommonGraphForwardingValueGraph : ComGoogleCommonGraphAbstractValueGraph

#pragma mark Public

- (id<JavaUtilSet>)adjacentNodesWithId:(id)node;

- (jboolean)allowsSelfLoops;

- (jint)degreeWithId:(id)node;

- (id)edgeValueOrDefaultWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints
                                                      withId:(id)defaultValue;

- (id)edgeValueOrDefaultWithId:(id)nodeU
                        withId:(id)nodeV
                        withId:(id)defaultValue;

- (jboolean)hasEdgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints;

- (jboolean)hasEdgeConnectingWithId:(id)nodeU
                             withId:(id)nodeV;

- (ComGoogleCommonGraphElementOrder *)incidentEdgeOrder;

- (jint)inDegreeWithId:(id)node;

- (jboolean)isDirected;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (id<JavaUtilSet>)nodes;

- (jint)outDegreeWithId:(id)node;

- (id<JavaUtilSet>)predecessorsWithId:(id)node;

- (id<JavaUtilSet>)successorsWithId:(id)node;

#pragma mark Protected

- (jlong)edgeCount;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (id<ComGoogleCommonGraphValueGraph>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphForwardingValueGraph)

FOUNDATION_EXPORT void ComGoogleCommonGraphForwardingValueGraph_initPackagePrivate(ComGoogleCommonGraphForwardingValueGraph *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphForwardingValueGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphForwardingValueGraph")
