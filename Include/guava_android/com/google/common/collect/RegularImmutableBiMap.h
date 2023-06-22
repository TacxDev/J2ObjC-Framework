//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/RegularImmutableBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectRegularImmutableBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRegularImmutableBiMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRegularImmutableBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectRegularImmutableBiMap))
#define ComGoogleCommonCollectRegularImmutableBiMap_

#define RESTRICT_ComGoogleCommonCollectImmutableBiMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableBiMap 1
#include "com/google/common/collect/ImmutableBiMap.h"

@class ComGoogleCommonCollectImmutableSet;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;

@interface ComGoogleCommonCollectRegularImmutableBiMap : ComGoogleCommonCollectImmutableBiMap {
 @public
  IOSObjectArray *alternatingKeysAndValues_;
}

#pragma mark Public

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithNSObjectArray:(IOSObjectArray *)alternatingKeysAndValues
                                            withInt:(jint)size;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRegularImmutableBiMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectRegularImmutableBiMap, alternatingKeysAndValues_, IOSObjectArray *)

inline ComGoogleCommonCollectRegularImmutableBiMap *ComGoogleCommonCollectRegularImmutableBiMap_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableBiMap *ComGoogleCommonCollectRegularImmutableBiMap_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRegularImmutableBiMap, EMPTY, ComGoogleCommonCollectRegularImmutableBiMap *)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableBiMap_initPackagePrivateWithNSObjectArray_withInt_(ComGoogleCommonCollectRegularImmutableBiMap *self, IOSObjectArray *alternatingKeysAndValues, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableBiMap *new_ComGoogleCommonCollectRegularImmutableBiMap_initPackagePrivateWithNSObjectArray_withInt_(IOSObjectArray *alternatingKeysAndValues, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableBiMap *create_ComGoogleCommonCollectRegularImmutableBiMap_initPackagePrivateWithNSObjectArray_withInt_(IOSObjectArray *alternatingKeysAndValues, jint size);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableBiMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap")
