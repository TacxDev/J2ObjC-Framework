//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/ImmutableBiMapFauxverideShim.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMapFauxverideShim")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableBiMapFauxverideShim
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMapFauxverideShim 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMapFauxverideShim 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableBiMapFauxverideShim

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableBiMapFauxverideShim_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMapFauxverideShim || defined(INCLUDE_ComGoogleCommonCollectImmutableBiMapFauxverideShim))
#define ComGoogleCommonCollectImmutableBiMapFauxverideShim_

#define RESTRICT_ComGoogleCommonCollectImmutableMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMap 1
#include "com/google/common/collect/ImmutableMap.h"

@protocol JavaUtilFunctionBinaryOperator;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilStreamCollector;

@interface ComGoogleCommonCollectImmutableBiMapFauxverideShim : ComGoogleCommonCollectImmutableMap

#pragma mark Public

+ (id<JavaUtilStreamCollector>)toImmutableMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyFunction
                                             withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)valueFunction;

+ (id<JavaUtilStreamCollector>)toImmutableMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyFunction
                                             withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)valueFunction
                                       withJavaUtilFunctionBinaryOperator:(id<JavaUtilFunctionBinaryOperator>)mergeFunction;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableBiMapFauxverideShim)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMapFauxverideShim_initPackagePrivate(ComGoogleCommonCollectImmutableBiMapFauxverideShim *self);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableBiMapFauxverideShim_toImmutableMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableBiMapFauxverideShim_toImmutableMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_withJavaUtilFunctionBinaryOperator_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction, id<JavaUtilFunctionBinaryOperator> mergeFunction);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableBiMapFauxverideShim)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMapFauxverideShim")