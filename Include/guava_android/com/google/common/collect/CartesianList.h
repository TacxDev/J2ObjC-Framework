//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/CartesianList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCartesianList")
#ifdef RESTRICT_ComGoogleCommonCollectCartesianList
#define INCLUDE_ALL_ComGoogleCommonCollectCartesianList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCartesianList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCartesianList

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCartesianList_) && (INCLUDE_ALL_ComGoogleCommonCollectCartesianList || defined(INCLUDE_ComGoogleCommonCollectCartesianList))
#define ComGoogleCommonCollectCartesianList_

#define RESTRICT_JavaUtilAbstractList 1
#define INCLUDE_JavaUtilAbstractList 1
#include "java/util/AbstractList.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "java/util/RandomAccess.h"

@class ComGoogleCommonCollectImmutableList;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectCartesianList : JavaUtilAbstractList < JavaUtilRandomAccess >

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (ComGoogleCommonCollectImmutableList *)getWithInt:(jint)index;

- (jint)indexOfWithId:(id)o;

- (jint)lastIndexOfWithId:(id)o;

- (id<JavaUtilList>)removeWithInt:(jint)arg0;

- (id<JavaUtilList>)setWithInt:(jint)arg0
                        withId:(id)arg1;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)axes;

+ (id<JavaUtilList>)createWithJavaUtilList:(id<JavaUtilList>)lists;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCartesianList)

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectCartesianList_createWithJavaUtilList_(id<JavaUtilList> lists);

FOUNDATION_EXPORT void ComGoogleCommonCollectCartesianList_initPackagePrivateWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectCartesianList *self, ComGoogleCommonCollectImmutableList *axes);

FOUNDATION_EXPORT ComGoogleCommonCollectCartesianList *new_ComGoogleCommonCollectCartesianList_initPackagePrivateWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableList *axes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCartesianList *create_ComGoogleCommonCollectCartesianList_initPackagePrivateWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableList *axes);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCartesianList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCartesianList")