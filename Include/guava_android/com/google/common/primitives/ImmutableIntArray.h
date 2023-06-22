//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/primitives/ImmutableIntArray.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray")
#ifdef RESTRICT_ComGoogleCommonPrimitivesImmutableIntArray
#define INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesImmutableIntArray

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesImmutableIntArray_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableIntArray))
#define ComGoogleCommonPrimitivesImmutableIntArray_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonPrimitivesImmutableIntArray_Builder;
@class IOSIntArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesImmutableIntArray : NSObject < JavaIoSerializable >

#pragma mark Public

- (id<JavaUtilList>)asList;

+ (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)builder;

+ (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)builderWithInt:(jint)initialCapacity;

- (jboolean)containsWithInt:(jint)target;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection>)values OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)copyOfWithIntArray:(IOSIntArray *)values OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)values OBJC_METHOD_FAMILY_NONE;

- (jboolean)isEqual:(id)object;

- (jint)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithInt:(jint)target;

- (jboolean)isEmpty;

- (jint)lastIndexOfWithInt:(jint)target;

- (jint)length;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)of;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)first
                                             withIntArray:(IOSIntArray *)rest;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1
                                                  withInt:(jint)e2;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1
                                                  withInt:(jint)e2
                                                  withInt:(jint)e3;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1
                                                  withInt:(jint)e2
                                                  withInt:(jint)e3
                                                  withInt:(jint)e4;

+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1
                                                  withInt:(jint)e2
                                                  withInt:(jint)e3
                                                  withInt:(jint)e4
                                                  withInt:(jint)e5;

- (ComGoogleCommonPrimitivesImmutableIntArray *)subArrayWithInt:(jint)startIndex
                                                        withInt:(jint)endIndex;

- (IOSIntArray *)toArray;

- (NSString *)description;

- (ComGoogleCommonPrimitivesImmutableIntArray *)trimmed;

#pragma mark Package-Private

- (id)readResolve;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesImmutableIntArray)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_of(void);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_(jint e0);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_(jint e0, jint e1);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_withInt_(jint e0, jint e1, jint e2);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_withInt_withInt_(jint e0, jint e1, jint e2, jint e3);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_withInt_withInt_withInt_(jint e0, jint e1, jint e2, jint e3, jint e4);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_withInt_withInt_withInt_withInt_(jint e0, jint e1, jint e2, jint e3, jint e4, jint e5);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withIntArray_(jint first, IOSIntArray *rest);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_copyOfWithIntArray_(IOSIntArray *values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_copyOfWithJavaLangIterable_(id<JavaLangIterable> values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray_Builder *ComGoogleCommonPrimitivesImmutableIntArray_builderWithInt_(jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray_Builder *ComGoogleCommonPrimitivesImmutableIntArray_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableIntArray)

#endif

#if !defined (ComGoogleCommonPrimitivesImmutableIntArray_Builder_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableIntArray_Builder))
#define ComGoogleCommonPrimitivesImmutableIntArray_Builder_

@class ComGoogleCommonPrimitivesImmutableIntArray;
@class IOSIntArray;
@class JavaLangInteger;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;

@interface ComGoogleCommonPrimitivesImmutableIntArray_Builder : NSObject

#pragma mark Public

- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addWithInt:(jint)value;

- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)values;

- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addAllWithComGoogleCommonPrimitivesImmutableIntArray:(ComGoogleCommonPrimitivesImmutableIntArray *)values;

- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addAllWithIntArray:(IOSIntArray *)values;

- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)values;

- (ComGoogleCommonPrimitivesImmutableIntArray *)build;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)initialCapacity;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesImmutableIntArray_Builder)

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesImmutableIntArray_Builder_initWithInt_(ComGoogleCommonPrimitivesImmutableIntArray_Builder *self, jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray_Builder *new_ComGoogleCommonPrimitivesImmutableIntArray_Builder_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray_Builder *create_ComGoogleCommonPrimitivesImmutableIntArray_Builder_initWithInt_(jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableIntArray_Builder)

#endif

#if !defined (ComGoogleCommonPrimitivesImmutableIntArray_AsList_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableIntArray_AsList))
#define ComGoogleCommonPrimitivesImmutableIntArray_AsList_

#define RESTRICT_JavaUtilAbstractList 1
#define INCLUDE_JavaUtilAbstractList 1
#include "java/util/AbstractList.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "java/util/RandomAccess.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesImmutableIntArray_AsList : JavaUtilAbstractList < JavaUtilRandomAccess, JavaIoSerializable >

#pragma mark Public

- (jboolean)containsWithId:(id)target;

- (jboolean)isEqual:(id)object;

- (JavaLangInteger *)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)target;

- (jint)lastIndexOfWithId:(id)target;

- (JavaLangInteger *)removeWithInt:(jint)arg0;

- (JavaLangInteger *)setWithInt:(jint)arg0
                         withId:(id)arg1;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (NSString *)description;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesImmutableIntArray_AsList)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableIntArray_AsList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray")