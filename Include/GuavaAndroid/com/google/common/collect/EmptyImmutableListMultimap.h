//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/EmptyImmutableListMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableListMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectEmptyImmutableListMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableListMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableListMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectEmptyImmutableListMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectEmptyImmutableListMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableListMultimap || defined(INCLUDE_ComGoogleCommonCollectEmptyImmutableListMultimap))
#define ComGoogleCommonCollectEmptyImmutableListMultimap_

#define RESTRICT_ComGoogleCommonCollectImmutableListMultimap 1
#define INCLUDE_ComGoogleCommonCollectImmutableListMultimap 1
#include "com/google/common/collect/ImmutableListMultimap.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMultiset;
@class ComGoogleCommonCollectImmutableSet;
@class JavaLangInteger;

@interface ComGoogleCommonCollectEmptyImmutableListMultimap : ComGoogleCommonCollectImmutableListMultimap

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)asMap;

- (ComGoogleCommonCollectImmutableCollection *)entries;

- (ComGoogleCommonCollectImmutableMultiset *)keys;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (ComGoogleCommonCollectImmutableCollection *)values;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)arg0
                                                   withInt:(jint)arg1 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectEmptyImmutableListMultimap)

inline ComGoogleCommonCollectEmptyImmutableListMultimap *ComGoogleCommonCollectEmptyImmutableListMultimap_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectEmptyImmutableListMultimap *ComGoogleCommonCollectEmptyImmutableListMultimap_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectEmptyImmutableListMultimap, INSTANCE, ComGoogleCommonCollectEmptyImmutableListMultimap *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEmptyImmutableListMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableListMultimap")
