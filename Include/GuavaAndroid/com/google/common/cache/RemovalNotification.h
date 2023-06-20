//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/cache/RemovalNotification.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalNotification")
#ifdef RESTRICT_ComGoogleCommonCacheRemovalNotification
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalNotification 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalNotification 1
#endif
#undef RESTRICT_ComGoogleCommonCacheRemovalNotification

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheRemovalNotification_) && (INCLUDE_ALL_ComGoogleCommonCacheRemovalNotification || defined(INCLUDE_ComGoogleCommonCacheRemovalNotification))
#define ComGoogleCommonCacheRemovalNotification_

#define RESTRICT_JavaUtilAbstractMap 1
#define INCLUDE_JavaUtilAbstractMap_SimpleImmutableEntry 1
#include "java/util/AbstractMap.h"

@class ComGoogleCommonCacheRemovalCause;
@class JavaLangBoolean;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCacheRemovalNotification : JavaUtilAbstractMap_SimpleImmutableEntry

#pragma mark Public

+ (ComGoogleCommonCacheRemovalNotification *)createWithId:(id)key
                                                   withId:(id)value
                     withComGoogleCommonCacheRemovalCause:(ComGoogleCommonCacheRemovalCause *)cause;

- (ComGoogleCommonCacheRemovalCause *)getCause;

- (jboolean)wasEvicted;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithId:(id)arg0
                    withId:(id)arg1 NS_UNAVAILABLE;

- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheRemovalNotification)

FOUNDATION_EXPORT ComGoogleCommonCacheRemovalNotification *ComGoogleCommonCacheRemovalNotification_createWithId_withId_withComGoogleCommonCacheRemovalCause_(id key, id value, ComGoogleCommonCacheRemovalCause *cause);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalNotification)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalNotification")
