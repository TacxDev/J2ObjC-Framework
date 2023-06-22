//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/graph/StandardMutableNetwork.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphStandardMutableNetwork")
#ifdef RESTRICT_ComGoogleCommonGraphStandardMutableNetwork
#define INCLUDE_ALL_ComGoogleCommonGraphStandardMutableNetwork 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphStandardMutableNetwork 1
#endif
#undef RESTRICT_ComGoogleCommonGraphStandardMutableNetwork

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphStandardMutableNetwork_) && (INCLUDE_ALL_ComGoogleCommonGraphStandardMutableNetwork || defined(INCLUDE_ComGoogleCommonGraphStandardMutableNetwork))
#define ComGoogleCommonGraphStandardMutableNetwork_

#define RESTRICT_ComGoogleCommonGraphStandardNetwork 1
#define INCLUDE_ComGoogleCommonGraphStandardNetwork 1
#include "com/google/common/graph/StandardNetwork.h"

#define RESTRICT_ComGoogleCommonGraphMutableNetwork 1
#define INCLUDE_ComGoogleCommonGraphMutableNetwork 1
#include "com/google/common/graph/MutableNetwork.h"

@class ComGoogleCommonGraphEndpointPair;
@class ComGoogleCommonGraphNetworkBuilder;
@class JavaLangBoolean;
@protocol JavaUtilMap;

@interface ComGoogleCommonGraphStandardMutableNetwork : ComGoogleCommonGraphStandardNetwork < ComGoogleCommonGraphMutableNetwork >

#pragma mark Public

- (jboolean)addEdgeWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair *)endpoints
                                                 withId:(id)edge;

- (jboolean)addEdgeWithId:(id)nodeU
                   withId:(id)nodeV
                   withId:(id)edge;

- (jboolean)addNodeWithId:(id)node;

- (jboolean)removeEdgeWithId:(id)edge;

- (jboolean)removeNodeWithId:(id)node;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithComGoogleCommonGraphNetworkBuilder:(ComGoogleCommonGraphNetworkBuilder *)builder;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivateWithComGoogleCommonGraphNetworkBuilder:(ComGoogleCommonGraphNetworkBuilder *)arg0
                                                         withJavaUtilMap:(id<JavaUtilMap>)arg1
                                                         withJavaUtilMap:(id<JavaUtilMap>)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphStandardMutableNetwork)

FOUNDATION_EXPORT void ComGoogleCommonGraphStandardMutableNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphStandardMutableNetwork *self, ComGoogleCommonGraphNetworkBuilder *builder);

FOUNDATION_EXPORT ComGoogleCommonGraphStandardMutableNetwork *new_ComGoogleCommonGraphStandardMutableNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphNetworkBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphStandardMutableNetwork *create_ComGoogleCommonGraphStandardMutableNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphNetworkBuilder *builder);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphStandardMutableNetwork)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphStandardMutableNetwork")
