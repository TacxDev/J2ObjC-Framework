//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/graph/AbstractDirectedNetworkConnections.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections")
#ifdef RESTRICT_ComGoogleCommonGraphAbstractDirectedNetworkConnections
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections 1
#endif
#undef RESTRICT_ComGoogleCommonGraphAbstractDirectedNetworkConnections

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphAbstractDirectedNetworkConnections_) && (INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections || defined(INCLUDE_ComGoogleCommonGraphAbstractDirectedNetworkConnections))
#define ComGoogleCommonGraphAbstractDirectedNetworkConnections_

#define RESTRICT_ComGoogleCommonGraphNetworkConnections 1
#define INCLUDE_ComGoogleCommonGraphNetworkConnections 1
#include "com/google/common/graph/NetworkConnections.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonGraphAbstractDirectedNetworkConnections : NSObject < ComGoogleCommonGraphNetworkConnections > {
 @public
  id<JavaUtilMap> inEdgeMap_;
  id<JavaUtilMap> outEdgeMap_;
}

#pragma mark Public

- (void)addInEdgeWithId:(id)edge
                 withId:(id)node
            withBoolean:(jboolean)isSelfLoop;

- (void)addOutEdgeWithId:(id)edge
                  withId:(id)node;

- (id)adjacentNodeWithId:(id)edge;

- (id<JavaUtilSet>)adjacentNodes;

- (id<JavaUtilSet>)incidentEdges;

- (id<JavaUtilSet>)inEdges;

- (id<JavaUtilSet>)outEdges;

- (id)removeInEdgeWithId:(id)edge
             withBoolean:(jboolean)isSelfLoop;

- (id)removeOutEdgeWithId:(id)edge;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap>)inEdgeMap
                                  withJavaUtilMap:(id<JavaUtilMap>)outEdgeMap
                                          withInt:(jint)selfLoopCount;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphAbstractDirectedNetworkConnections)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphAbstractDirectedNetworkConnections, inEdgeMap_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonGraphAbstractDirectedNetworkConnections, outEdgeMap_, id<JavaUtilMap>)

FOUNDATION_EXPORT void ComGoogleCommonGraphAbstractDirectedNetworkConnections_initPackagePrivateWithJavaUtilMap_withJavaUtilMap_withInt_(ComGoogleCommonGraphAbstractDirectedNetworkConnections *self, id<JavaUtilMap> inEdgeMap, id<JavaUtilMap> outEdgeMap, jint selfLoopCount);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphAbstractDirectedNetworkConnections)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections")