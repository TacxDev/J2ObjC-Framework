//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/graph/UndirectedNetworkConnections.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphUndirectedNetworkConnections")
#ifdef RESTRICT_ComGoogleCommonGraphUndirectedNetworkConnections
#define INCLUDE_ALL_ComGoogleCommonGraphUndirectedNetworkConnections 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphUndirectedNetworkConnections 1
#endif
#undef RESTRICT_ComGoogleCommonGraphUndirectedNetworkConnections

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphUndirectedNetworkConnections_) && (INCLUDE_ALL_ComGoogleCommonGraphUndirectedNetworkConnections || defined(INCLUDE_ComGoogleCommonGraphUndirectedNetworkConnections))
#define ComGoogleCommonGraphUndirectedNetworkConnections_

#define RESTRICT_ComGoogleCommonGraphAbstractUndirectedNetworkConnections 1
#define INCLUDE_ComGoogleCommonGraphAbstractUndirectedNetworkConnections 1
#include "com/google/common/graph/AbstractUndirectedNetworkConnections.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonGraphUndirectedNetworkConnections : ComGoogleCommonGraphAbstractUndirectedNetworkConnections

#pragma mark Public

- (id<JavaUtilSet>)adjacentNodes;

- (id<JavaUtilSet>)edgesConnectingWithId:(id)node;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap>)incidentEdgeMap;

+ (ComGoogleCommonGraphUndirectedNetworkConnections *)of;

+ (ComGoogleCommonGraphUndirectedNetworkConnections *)ofImmutableWithJavaUtilMap:(id<JavaUtilMap>)incidentEdges;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphUndirectedNetworkConnections)

FOUNDATION_EXPORT void ComGoogleCommonGraphUndirectedNetworkConnections_initPackagePrivateWithJavaUtilMap_(ComGoogleCommonGraphUndirectedNetworkConnections *self, id<JavaUtilMap> incidentEdgeMap);

FOUNDATION_EXPORT ComGoogleCommonGraphUndirectedNetworkConnections *new_ComGoogleCommonGraphUndirectedNetworkConnections_initPackagePrivateWithJavaUtilMap_(id<JavaUtilMap> incidentEdgeMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphUndirectedNetworkConnections *create_ComGoogleCommonGraphUndirectedNetworkConnections_initPackagePrivateWithJavaUtilMap_(id<JavaUtilMap> incidentEdgeMap);

FOUNDATION_EXPORT ComGoogleCommonGraphUndirectedNetworkConnections *ComGoogleCommonGraphUndirectedNetworkConnections_of(void);

FOUNDATION_EXPORT ComGoogleCommonGraphUndirectedNetworkConnections *ComGoogleCommonGraphUndirectedNetworkConnections_ofImmutableWithJavaUtilMap_(id<JavaUtilMap> incidentEdges);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphUndirectedNetworkConnections)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphUndirectedNetworkConnections")
