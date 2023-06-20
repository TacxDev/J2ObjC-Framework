//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/CollectSpliterators.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators")
#ifdef RESTRICT_ComGoogleCommonCollectCollectSpliterators
#define INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCollectSpliterators
#ifdef INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble
#define INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong
#define INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt
#define INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive
#define INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject
#define INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCollectSpliterators_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators || defined(INCLUDE_ComGoogleCommonCollectCollectSpliterators))
#define ComGoogleCommonCollectCollectSpliterators_

@class JavaLangInteger;
@class JavaLangLong;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionIntFunction;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilSpliterator;
@protocol JavaUtilSpliterator_OfDouble;
@protocol JavaUtilSpliterator_OfInt;
@protocol JavaUtilSpliterator_OfLong;

@interface ComGoogleCommonCollectCollectSpliterators : NSObject

#pragma mark Package-Private

+ (id<JavaUtilSpliterator>)filterWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)fromSpliterator
                           withJavaUtilFunctionPredicate:(id<JavaUtilFunctionPredicate>)predicate;

+ (id<JavaUtilSpliterator>)flatMapWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)fromSpliterator
                             withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                                  withInt:(jint)topCharacteristics
                                                 withLong:(jlong)topSize;

+ (id<JavaUtilSpliterator_OfDouble>)flatMapToDoubleWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)fromSpliterator
                                              withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                                                   withInt:(jint)topCharacteristics
                                                                  withLong:(jlong)topSize;

+ (id<JavaUtilSpliterator_OfInt>)flatMapToIntWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)fromSpliterator
                                        withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                                             withInt:(jint)topCharacteristics
                                                            withLong:(jlong)topSize;

+ (id<JavaUtilSpliterator_OfLong>)flatMapToLongWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)fromSpliterator
                                          withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                                               withInt:(jint)topCharacteristics
                                                              withLong:(jlong)topSize;

+ (id<JavaUtilSpliterator>)indexedWithInt:(jint)size
                                  withInt:(jint)extraCharacteristics
          withJavaUtilFunctionIntFunction:(id<JavaUtilFunctionIntFunction>)function;

+ (id<JavaUtilSpliterator>)indexedWithInt:(jint)size
                                  withInt:(jint)extraCharacteristics
          withJavaUtilFunctionIntFunction:(id<JavaUtilFunctionIntFunction>)function
                   withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (id<JavaUtilSpliterator>)mapWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)fromSpliterator
                         withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectSpliterators)

FOUNDATION_EXPORT id<JavaUtilSpliterator> ComGoogleCommonCollectCollectSpliterators_indexedWithInt_withInt_withJavaUtilFunctionIntFunction_(jint size, jint extraCharacteristics, id<JavaUtilFunctionIntFunction> function);

FOUNDATION_EXPORT id<JavaUtilSpliterator> ComGoogleCommonCollectCollectSpliterators_indexedWithInt_withInt_withJavaUtilFunctionIntFunction_withJavaUtilComparator_(jint size, jint extraCharacteristics, id<JavaUtilFunctionIntFunction> function, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilSpliterator> ComGoogleCommonCollectCollectSpliterators_mapWithJavaUtilSpliterator_withJavaUtilFunctionFunction_(id<JavaUtilSpliterator> fromSpliterator, id<JavaUtilFunctionFunction> function);

FOUNDATION_EXPORT id<JavaUtilSpliterator> ComGoogleCommonCollectCollectSpliterators_filterWithJavaUtilSpliterator_withJavaUtilFunctionPredicate_(id<JavaUtilSpliterator> fromSpliterator, id<JavaUtilFunctionPredicate> predicate);

FOUNDATION_EXPORT id<JavaUtilSpliterator> ComGoogleCommonCollectCollectSpliterators_flatMapWithJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator> fromSpliterator, id<JavaUtilFunctionFunction> function, jint topCharacteristics, jlong topSize);

FOUNDATION_EXPORT id<JavaUtilSpliterator_OfInt> ComGoogleCommonCollectCollectSpliterators_flatMapToIntWithJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator> fromSpliterator, id<JavaUtilFunctionFunction> function, jint topCharacteristics, jlong topSize);

FOUNDATION_EXPORT id<JavaUtilSpliterator_OfLong> ComGoogleCommonCollectCollectSpliterators_flatMapToLongWithJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator> fromSpliterator, id<JavaUtilFunctionFunction> function, jint topCharacteristics, jlong topSize);

FOUNDATION_EXPORT id<JavaUtilSpliterator_OfDouble> ComGoogleCommonCollectCollectSpliterators_flatMapToDoubleWithJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator> fromSpliterator, id<JavaUtilFunctionFunction> function, jint topCharacteristics, jlong topSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectSpliterators)

#endif

#if !defined (ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators || defined(INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator))
#define ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "java/util/Spliterator.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@protocol ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionFunction;

@interface ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator : NSObject < JavaUtilSpliterator > {
 @public
  WEAK_ id<JavaUtilSpliterator> prefix_;
  id<JavaUtilSpliterator> from_;
  id<JavaUtilFunctionFunction> function_;
  id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory> factory_;
  jint characteristics_;
  jlong estimatedSize_;
}

#pragma mark Public

- (jint)characteristics;

- (jlong)estimateSize;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (id<JavaUtilSpliterator>)trySplit;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)prefix
                    withJavaUtilSpliterator:(id<JavaUtilSpliterator>)from
               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory:(id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory>)factory
                                    withInt:(jint)characteristics
                                   withLong:(jlong)estimatedSize;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator, from_, id<JavaUtilSpliterator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator, function_, id<JavaUtilFunctionFunction>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator, factory_, id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory>)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_initWithJavaUtilSpliterator_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory_withInt_withLong_(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator *self, id<JavaUtilSpliterator> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory> factory, jint characteristics, jlong estimatedSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator)

#endif

#if !defined (ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators || defined(INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory))
#define ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory_

@class JavaLangInteger;
@class JavaLangLong;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSpliterator;

@protocol ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory < JavaObject >

- (id<JavaUtilSpliterator>)newFlatMapSpliteratorWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)prefix
                                                withJavaUtilSpliterator:(id<JavaUtilSpliterator>)fromSplit
                                           withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                                                withInt:(jint)splitCharacteristics
                                                               withLong:(jlong)estSplitSize OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory)

#endif

#if !defined (ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators || defined(INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject))
#define ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject_

@class JavaLangInteger;
@class JavaLangLong;
@protocol ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject : ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)prefix
                    withJavaUtilSpliterator:(id<JavaUtilSpliterator>)from
               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                    withInt:(jint)characteristics
                                   withLong:(jlong)estimatedSize;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)arg0
                    withJavaUtilSpliterator:(id<JavaUtilSpliterator>)arg1
               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg2
withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory:(id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory>)arg3
                                    withInt:(jint)arg4
                                   withLong:(jlong)arg5 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject_initWithJavaUtilSpliterator_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject *self, id<JavaUtilSpliterator> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject *new_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject_initWithJavaUtilSpliterator_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject *create_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject_initWithJavaUtilSpliterator_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfObject)

#endif

#if !defined (ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators || defined(INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive))
#define ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfPrimitive 1
#include "java/util/Spliterator.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@protocol ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive : ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator < JavaUtilSpliterator_OfPrimitive >

#pragma mark Public

- (void)forEachRemainingWithId:(id)action;

- (jboolean)tryAdvanceWithId:(id)action;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator_OfPrimitive:(id<JavaUtilSpliterator_OfPrimitive>)prefix
                                withJavaUtilSpliterator:(id<JavaUtilSpliterator>)from
                           withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory:(id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory>)factory
                                                withInt:(jint)characteristics
                                               withLong:(jlong)estimatedSize;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)arg0
                    withJavaUtilSpliterator:(id<JavaUtilSpliterator>)arg1
               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg2
withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory:(id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory>)arg3
                                    withInt:(jint)arg4
                                   withLong:(jlong)arg5 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive_initWithJavaUtilSpliterator_OfPrimitive_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory_withInt_withLong_(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive *self, id<JavaUtilSpliterator_OfPrimitive> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory> factory, jint characteristics, jlong estimatedSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive)

#endif

#if !defined (ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators || defined(INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt))
#define ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfInt 1
#include "java/util/Spliterator.h"

@class JavaLangInteger;
@class JavaLangLong;
@protocol ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSpliterator;
@protocol JavaUtilSpliterator_OfPrimitive;

@interface ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt : ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive < JavaUtilSpliterator_OfInt >

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator_OfInt:(id<JavaUtilSpliterator_OfInt>)prefix
                          withJavaUtilSpliterator:(id<JavaUtilSpliterator>)from
                     withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                          withInt:(jint)characteristics
                                         withLong:(jlong)estimatedSize;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaUtilSpliterator_OfPrimitive:(id<JavaUtilSpliterator_OfPrimitive>)arg0
                                withJavaUtilSpliterator:(id<JavaUtilSpliterator>)arg1
                           withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg2
withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory:(id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory>)arg3
                                                withInt:(jint)arg4
                                               withLong:(jlong)arg5 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt_initWithJavaUtilSpliterator_OfInt_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt *self, id<JavaUtilSpliterator_OfInt> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt *new_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt_initWithJavaUtilSpliterator_OfInt_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator_OfInt> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt *create_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt_initWithJavaUtilSpliterator_OfInt_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator_OfInt> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfInt)

#endif

#if !defined (ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators || defined(INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong))
#define ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfLong 1
#include "java/util/Spliterator.h"

@class JavaLangInteger;
@class JavaLangLong;
@protocol ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSpliterator;
@protocol JavaUtilSpliterator_OfPrimitive;

@interface ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong : ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive < JavaUtilSpliterator_OfLong >

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator_OfLong:(id<JavaUtilSpliterator_OfLong>)prefix
                           withJavaUtilSpliterator:(id<JavaUtilSpliterator>)from
                      withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                           withInt:(jint)characteristics
                                          withLong:(jlong)estimatedSize;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaUtilSpliterator_OfPrimitive:(id<JavaUtilSpliterator_OfPrimitive>)arg0
                                withJavaUtilSpliterator:(id<JavaUtilSpliterator>)arg1
                           withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg2
withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory:(id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory>)arg3
                                                withInt:(jint)arg4
                                               withLong:(jlong)arg5 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong_initWithJavaUtilSpliterator_OfLong_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong *self, id<JavaUtilSpliterator_OfLong> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong *new_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong_initWithJavaUtilSpliterator_OfLong_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator_OfLong> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong *create_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong_initWithJavaUtilSpliterator_OfLong_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator_OfLong> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfLong)

#endif

#if !defined (ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators || defined(INCLUDE_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble))
#define ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator_OfDouble 1
#include "java/util/Spliterator.h"

@class JavaLangInteger;
@class JavaLangLong;
@protocol ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSpliterator;
@protocol JavaUtilSpliterator_OfPrimitive;

@interface ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble : ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfPrimitive < JavaUtilSpliterator_OfDouble >

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSpliterator_OfDouble:(id<JavaUtilSpliterator_OfDouble>)prefix
                             withJavaUtilSpliterator:(id<JavaUtilSpliterator>)from
                        withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)function
                                             withInt:(jint)characteristics
                                            withLong:(jlong)estimatedSize;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaUtilSpliterator_OfPrimitive:(id<JavaUtilSpliterator_OfPrimitive>)arg0
                                withJavaUtilSpliterator:(id<JavaUtilSpliterator>)arg1
                           withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg2
withComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory:(id<ComGoogleCommonCollectCollectSpliterators_FlatMapSpliterator_Factory>)arg3
                                                withInt:(jint)arg4
                                               withLong:(jlong)arg5 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble_initWithJavaUtilSpliterator_OfDouble_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble *self, id<JavaUtilSpliterator_OfDouble> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble *new_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble_initWithJavaUtilSpliterator_OfDouble_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator_OfDouble> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble *create_ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble_initWithJavaUtilSpliterator_OfDouble_withJavaUtilSpliterator_withJavaUtilFunctionFunction_withInt_withLong_(id<JavaUtilSpliterator_OfDouble> prefix, id<JavaUtilSpliterator> from, id<JavaUtilFunctionFunction> function, jint characteristics, jlong estimatedSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectSpliterators_FlatMapSpliteratorOfDouble)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCollectSpliterators")
