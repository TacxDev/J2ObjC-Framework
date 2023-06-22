//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/graph/StandardValueGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphStandardValueGraph")
#ifdef RESTRICT_ComGoogleCommonGraphStandardValueGraph
#define INCLUDE_ALL_ComGoogleCommonGraphStandardValueGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphStandardValueGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphStandardValueGraph

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphStandardValueGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphStandardValueGraph || defined(INCLUDE_ComGoogleCommonGraphStandardValueGraph))
#define ComGoogleCommonGraphStandardValueGraph_

#define RESTRICT_ComGoogleCommonGraphAbstractValueGraph 1
#define INCLUDE_ComGoogleCommonGraphAbstractValueGraph 1
#include "com/google/common/graph/AbstractValueGraph.h"

@class ComGoogleCommonGraphAbstractGraphBuilder;
@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@class ComGoogleCommonGraphMapIteratorCache;
@class JavaLangBoolean;
@class JavaLangLong;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonGraphStandardValueGraph : ComGoogleCommonGraphAbstractValueGraph {
 @public
  ComGoogleCommonGraphMapIteratorCache *nodeConnections_;
  jlong edgeCount_;
}

#pragma mark Public

- (id<JavaUtilSet>)adjacentNodesWithId:(id)node;

- (jboolean)allowsSelfLoops;

- (id)edgeValueOrDefaultWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints
                                                      withId:(id)defaultValue;

- (id)edgeValueOrDefaultWithId:(id)nodeU
                        withId:(id)nodeV
                        withId:(id)defaultValue;

- (jboolean)hasEdgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints;

- (jboolean)hasEdgeConnectingWithId:(id)nodeU
                             withId:(id)nodeV;

- (id<JavaUtilSet>)incidentEdgesWithId:(id)node;

- (jboolean)isDirected;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (id<JavaUtilSet>)nodes;

- (id<JavaUtilSet>)predecessorsWithId:(id)node;

- (id<JavaUtilSet>)successorsWithId:(id)node;

#pragma mark Protected

- (jlong)edgeCount;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder:(ComGoogleCommonGraphAbstractGraphBuilder *)builder;

- (instancetype)initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder:(ComGoogleCommonGraphAbstractGraphBuilder *)builder
                                                               withJavaUtilMap:(id<JavaUtilMap>)nodeConnections
                                                                      withLong:(jlong)edgeCount;

- (jboolean)containsNodeWithId:(id)node;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphStandardValueGraph)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphStandardValueGraph, nodeConnections_, ComGoogleCommonGraphMapIteratorCache *)

FOUNDATION_EXPORT void ComGoogleCommonGraphStandardValueGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphStandardValueGraph *self, ComGoogleCommonGraphAbstractGraphBuilder *builder);

FOUNDATION_EXPORT ComGoogleCommonGraphStandardValueGraph *new_ComGoogleCommonGraphStandardValueGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphAbstractGraphBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphStandardValueGraph *create_ComGoogleCommonGraphStandardValueGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_(ComGoogleCommonGraphAbstractGraphBuilder *builder);

FOUNDATION_EXPORT void ComGoogleCommonGraphStandardValueGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_withJavaUtilMap_withLong_(ComGoogleCommonGraphStandardValueGraph *self, ComGoogleCommonGraphAbstractGraphBuilder *builder, id<JavaUtilMap> nodeConnections, jlong edgeCount);

FOUNDATION_EXPORT ComGoogleCommonGraphStandardValueGraph *new_ComGoogleCommonGraphStandardValueGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_withJavaUtilMap_withLong_(ComGoogleCommonGraphAbstractGraphBuilder *builder, id<JavaUtilMap> nodeConnections, jlong edgeCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphStandardValueGraph *create_ComGoogleCommonGraphStandardValueGraph_initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder_withJavaUtilMap_withLong_(ComGoogleCommonGraphAbstractGraphBuilder *builder, id<JavaUtilMap> nodeConnections, jlong edgeCount);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphStandardValueGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphStandardValueGraph")