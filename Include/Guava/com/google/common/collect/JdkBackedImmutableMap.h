//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/JdkBackedImmutableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableMap")
#ifdef RESTRICT_ComGoogleCommonCollectJdkBackedImmutableMap
#define INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectJdkBackedImmutableMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectJdkBackedImmutableMap_) && (INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableMap || defined(INCLUDE_ComGoogleCommonCollectJdkBackedImmutableMap))
#define ComGoogleCommonCollectJdkBackedImmutableMap_

#define RESTRICT_ComGoogleCommonCollectImmutableMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMap 1
#include "com/google/common/collect/ImmutableMap.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectJdkBackedImmutableMap : ComGoogleCommonCollectImmutableMap

#pragma mark Public

- (void)forEachWithJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer>)action;

- (id)getWithId:(id)key;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap>)delegateMap
          withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)entries;

+ (ComGoogleCommonCollectImmutableMap *)createWithInt:(jint)n
                           withJavaUtilMap_EntryArray:(IOSObjectArray *)entryArray
                                          withBoolean:(jboolean)throwIfDuplicateKeys;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectJdkBackedImmutableMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectJdkBackedImmutableMap_createWithInt_withJavaUtilMap_EntryArray_withBoolean_(jint n, IOSObjectArray *entryArray, jboolean throwIfDuplicateKeys);

FOUNDATION_EXPORT void ComGoogleCommonCollectJdkBackedImmutableMap_initPackagePrivateWithJavaUtilMap_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectJdkBackedImmutableMap *self, id<JavaUtilMap> delegateMap, ComGoogleCommonCollectImmutableList *entries);

FOUNDATION_EXPORT ComGoogleCommonCollectJdkBackedImmutableMap *new_ComGoogleCommonCollectJdkBackedImmutableMap_initPackagePrivateWithJavaUtilMap_withComGoogleCommonCollectImmutableList_(id<JavaUtilMap> delegateMap, ComGoogleCommonCollectImmutableList *entries) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectJdkBackedImmutableMap *create_ComGoogleCommonCollectJdkBackedImmutableMap_initPackagePrivateWithJavaUtilMap_withComGoogleCommonCollectImmutableList_(id<JavaUtilMap> delegateMap, ComGoogleCommonCollectImmutableList *entries);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectJdkBackedImmutableMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableMap")