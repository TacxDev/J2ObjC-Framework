//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/ClassToInstanceMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonCollectClassToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectClassToInstanceMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectClassToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap || defined(INCLUDE_ComGoogleCommonCollectClassToInstanceMap))
#define ComGoogleCommonCollectClassToInstanceMap_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "java/util/Map.h"

@class IOSClass;

@protocol ComGoogleCommonCollectClassToInstanceMap < JavaUtilMap, JavaObject >

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectClassToInstanceMap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectClassToInstanceMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap")