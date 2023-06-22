//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/reflect/MutableTypeToInstanceMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonReflectMutableTypeToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonReflectMutableTypeToInstanceMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectMutableTypeToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap || defined(INCLUDE_ComGoogleCommonReflectMutableTypeToInstanceMap))
#define ComGoogleCommonReflectMutableTypeToInstanceMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "com/google/common/collect/ForwardingMap.h"

#define RESTRICT_ComGoogleCommonReflectTypeToInstanceMap 1
#define INCLUDE_ComGoogleCommonReflectTypeToInstanceMap 1
#include "com/google/common/reflect/TypeToInstanceMap.h"

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonReflectMutableTypeToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonReflectTypeToInstanceMap >

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilSet>)entrySet;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

- (id)putWithId:(ComGoogleCommonReflectTypeToken *)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

- (id)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                                              withId:(id)value;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectMutableTypeToInstanceMap)

FOUNDATION_EXPORT void ComGoogleCommonReflectMutableTypeToInstanceMap_init(ComGoogleCommonReflectMutableTypeToInstanceMap *self);

FOUNDATION_EXPORT ComGoogleCommonReflectMutableTypeToInstanceMap *new_ComGoogleCommonReflectMutableTypeToInstanceMap_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectMutableTypeToInstanceMap *create_ComGoogleCommonReflectMutableTypeToInstanceMap_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectMutableTypeToInstanceMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap")