//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/graph/Graphs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphGraphs")
#ifdef RESTRICT_ComGoogleCommonGraphGraphs
#define INCLUDE_ALL_ComGoogleCommonGraphGraphs 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphGraphs 1
#endif
#undef RESTRICT_ComGoogleCommonGraphGraphs

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphGraphs_) && (INCLUDE_ALL_ComGoogleCommonGraphGraphs || defined(INCLUDE_ComGoogleCommonGraphGraphs))
#define ComGoogleCommonGraphGraphs_

@class ComGoogleCommonGraphEndpointPair;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@protocol ComGoogleCommonGraphGraph;
@protocol ComGoogleCommonGraphMutableGraph;
@protocol ComGoogleCommonGraphMutableNetwork;
@protocol ComGoogleCommonGraphMutableValueGraph;
@protocol ComGoogleCommonGraphNetwork;
@protocol ComGoogleCommonGraphValueGraph;
@protocol JavaLangIterable;
@protocol JavaUtilSet;

@interface ComGoogleCommonGraphGraphs : NSObject

#pragma mark Public

+ (id<ComGoogleCommonGraphMutableGraph>)copyOfWithComGoogleCommonGraphGraph:(id<ComGoogleCommonGraphGraph>)graph OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonGraphMutableNetwork>)copyOfWithComGoogleCommonGraphNetwork:(id<ComGoogleCommonGraphNetwork>)network OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonGraphMutableValueGraph>)copyOfWithComGoogleCommonGraphValueGraph:(id<ComGoogleCommonGraphValueGraph>)graph OBJC_METHOD_FAMILY_NONE;

+ (jboolean)hasCycleWithComGoogleCommonGraphGraph:(id<ComGoogleCommonGraphGraph>)graph;

+ (jboolean)hasCycleWithComGoogleCommonGraphNetwork:(id<ComGoogleCommonGraphNetwork>)network;

+ (id<ComGoogleCommonGraphMutableGraph>)inducedSubgraphWithComGoogleCommonGraphGraph:(id<ComGoogleCommonGraphGraph>)graph
                                                                withJavaLangIterable:(id<JavaLangIterable>)nodes;

+ (id<ComGoogleCommonGraphMutableNetwork>)inducedSubgraphWithComGoogleCommonGraphNetwork:(id<ComGoogleCommonGraphNetwork>)network
                                                                    withJavaLangIterable:(id<JavaLangIterable>)nodes;

+ (id<ComGoogleCommonGraphMutableValueGraph>)inducedSubgraphWithComGoogleCommonGraphValueGraph:(id<ComGoogleCommonGraphValueGraph>)graph
                                                                          withJavaLangIterable:(id<JavaLangIterable>)nodes;

+ (id<JavaUtilSet>)reachableNodesWithComGoogleCommonGraphGraph:(id<ComGoogleCommonGraphGraph>)graph
                                                        withId:(id)node;

+ (id<ComGoogleCommonGraphGraph>)transitiveClosureWithComGoogleCommonGraphGraph:(id<ComGoogleCommonGraphGraph>)graph;

+ (id<ComGoogleCommonGraphGraph>)transposeWithComGoogleCommonGraphGraph:(id<ComGoogleCommonGraphGraph>)graph;

+ (id<ComGoogleCommonGraphNetwork>)transposeWithComGoogleCommonGraphNetwork:(id<ComGoogleCommonGraphNetwork>)network;

+ (id<ComGoogleCommonGraphValueGraph>)transposeWithComGoogleCommonGraphValueGraph:(id<ComGoogleCommonGraphValueGraph>)graph;

#pragma mark Package-Private

+ (jint)checkNonNegativeWithInt:(jint)value;

+ (jlong)checkNonNegativeWithLong:(jlong)value;

+ (jint)checkPositiveWithInt:(jint)value;

+ (jlong)checkPositiveWithLong:(jlong)value;

+ (ComGoogleCommonGraphEndpointPair *)transposeWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphGraphs)

FOUNDATION_EXPORT jboolean ComGoogleCommonGraphGraphs_hasCycleWithComGoogleCommonGraphGraph_(id<ComGoogleCommonGraphGraph> graph);

FOUNDATION_EXPORT jboolean ComGoogleCommonGraphGraphs_hasCycleWithComGoogleCommonGraphNetwork_(id<ComGoogleCommonGraphNetwork> network);

FOUNDATION_EXPORT id<ComGoogleCommonGraphGraph> ComGoogleCommonGraphGraphs_transitiveClosureWithComGoogleCommonGraphGraph_(id<ComGoogleCommonGraphGraph> graph);

FOUNDATION_EXPORT id<JavaUtilSet> ComGoogleCommonGraphGraphs_reachableNodesWithComGoogleCommonGraphGraph_withId_(id<ComGoogleCommonGraphGraph> graph, id node);

FOUNDATION_EXPORT id<ComGoogleCommonGraphGraph> ComGoogleCommonGraphGraphs_transposeWithComGoogleCommonGraphGraph_(id<ComGoogleCommonGraphGraph> graph);

FOUNDATION_EXPORT id<ComGoogleCommonGraphValueGraph> ComGoogleCommonGraphGraphs_transposeWithComGoogleCommonGraphValueGraph_(id<ComGoogleCommonGraphValueGraph> graph);

FOUNDATION_EXPORT id<ComGoogleCommonGraphNetwork> ComGoogleCommonGraphGraphs_transposeWithComGoogleCommonGraphNetwork_(id<ComGoogleCommonGraphNetwork> network);

FOUNDATION_EXPORT ComGoogleCommonGraphEndpointPair *ComGoogleCommonGraphGraphs_transposeWithComGoogleCommonGraphEndpointPair_(ComGoogleCommonGraphEndpointPair *endpoints);

FOUNDATION_EXPORT id<ComGoogleCommonGraphMutableGraph> ComGoogleCommonGraphGraphs_inducedSubgraphWithComGoogleCommonGraphGraph_withJavaLangIterable_(id<ComGoogleCommonGraphGraph> graph, id<JavaLangIterable> nodes);

FOUNDATION_EXPORT id<ComGoogleCommonGraphMutableValueGraph> ComGoogleCommonGraphGraphs_inducedSubgraphWithComGoogleCommonGraphValueGraph_withJavaLangIterable_(id<ComGoogleCommonGraphValueGraph> graph, id<JavaLangIterable> nodes);

FOUNDATION_EXPORT id<ComGoogleCommonGraphMutableNetwork> ComGoogleCommonGraphGraphs_inducedSubgraphWithComGoogleCommonGraphNetwork_withJavaLangIterable_(id<ComGoogleCommonGraphNetwork> network, id<JavaLangIterable> nodes);

FOUNDATION_EXPORT id<ComGoogleCommonGraphMutableGraph> ComGoogleCommonGraphGraphs_copyOfWithComGoogleCommonGraphGraph_(id<ComGoogleCommonGraphGraph> graph);

FOUNDATION_EXPORT id<ComGoogleCommonGraphMutableValueGraph> ComGoogleCommonGraphGraphs_copyOfWithComGoogleCommonGraphValueGraph_(id<ComGoogleCommonGraphValueGraph> graph);

FOUNDATION_EXPORT id<ComGoogleCommonGraphMutableNetwork> ComGoogleCommonGraphGraphs_copyOfWithComGoogleCommonGraphNetwork_(id<ComGoogleCommonGraphNetwork> network);

FOUNDATION_EXPORT jint ComGoogleCommonGraphGraphs_checkNonNegativeWithInt_(jint value);

FOUNDATION_EXPORT jlong ComGoogleCommonGraphGraphs_checkNonNegativeWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonGraphGraphs_checkPositiveWithInt_(jint value);

FOUNDATION_EXPORT jlong ComGoogleCommonGraphGraphs_checkPositiveWithLong_(jlong value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphGraphs)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphGraphs")
