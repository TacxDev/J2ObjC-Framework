//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/AbstractMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultiset || defined(INCLUDE_ComGoogleCommonCollectAbstractMultiset))
#define ComGoogleCommonCollectAbstractMultiset_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

#define RESTRICT_ComGoogleCommonCollectMultiset 1
#define INCLUDE_ComGoogleCommonCollectMultiset 1
#include "com/google/common/collect/Multiset.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionObjIntConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectAbstractMultiset : JavaUtilAbstractCollection < ComGoogleCommonCollectMultiset >

#pragma mark Public

- (jboolean)addWithId:(id)element;

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToAdd;

- (void)clear;

- (jboolean)containsWithId:(id)element;

- (id<JavaUtilSet>)elementSet;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (jboolean)removeWithId:(id)element;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToRemove;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToRetain;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (id<JavaUtilSet>)createElementSet;

- (id<JavaUtilSet>)createEntrySet;

- (jint)distinctElements;

- (id<JavaUtilIterator>)elementIterator;

- (id<JavaUtilIterator>)entryIterator;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultiset_initPackagePrivate(ComGoogleCommonCollectAbstractMultiset *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultiset)

#endif

#if !defined (ComGoogleCommonCollectAbstractMultiset_ElementSet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultiset || defined(INCLUDE_ComGoogleCommonCollectAbstractMultiset_ElementSet))
#define ComGoogleCommonCollectAbstractMultiset_ElementSet_

#define RESTRICT_ComGoogleCommonCollectMultisets 1
#define INCLUDE_ComGoogleCommonCollectMultisets_ElementSet 1
#include "com/google/common/collect/Multisets.h"

@class ComGoogleCommonCollectAbstractMultiset;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMultiset_ElementSet : ComGoogleCommonCollectMultisets_ElementSet

#pragma mark Public

- (id<JavaUtilIterator>)iterator;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMultiset:(ComGoogleCommonCollectAbstractMultiset *)outer$;

- (id<ComGoogleCommonCollectMultiset>)multiset;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultiset_ElementSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultiset_ElementSet_initWithComGoogleCommonCollectAbstractMultiset_(ComGoogleCommonCollectAbstractMultiset_ElementSet *self, ComGoogleCommonCollectAbstractMultiset *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultiset_ElementSet *new_ComGoogleCommonCollectAbstractMultiset_ElementSet_initWithComGoogleCommonCollectAbstractMultiset_(ComGoogleCommonCollectAbstractMultiset *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultiset_ElementSet *create_ComGoogleCommonCollectAbstractMultiset_ElementSet_initWithComGoogleCommonCollectAbstractMultiset_(ComGoogleCommonCollectAbstractMultiset *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultiset_ElementSet)

#endif

#if !defined (ComGoogleCommonCollectAbstractMultiset_EntrySet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMultiset || defined(INCLUDE_ComGoogleCommonCollectAbstractMultiset_EntrySet))
#define ComGoogleCommonCollectAbstractMultiset_EntrySet_

#define RESTRICT_ComGoogleCommonCollectMultisets 1
#define INCLUDE_ComGoogleCommonCollectMultisets_EntrySet 1
#include "com/google/common/collect/Multisets.h"

@class ComGoogleCommonCollectAbstractMultiset;
@class JavaLangInteger;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMultiset_EntrySet : ComGoogleCommonCollectMultisets_EntrySet

#pragma mark Public

- (id<JavaUtilIterator>)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMultiset:(ComGoogleCommonCollectAbstractMultiset *)outer$;

- (id<ComGoogleCommonCollectMultiset>)multiset;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultiset_EntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMultiset_EntrySet_initWithComGoogleCommonCollectAbstractMultiset_(ComGoogleCommonCollectAbstractMultiset_EntrySet *self, ComGoogleCommonCollectAbstractMultiset *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultiset_EntrySet *new_ComGoogleCommonCollectAbstractMultiset_EntrySet_initWithComGoogleCommonCollectAbstractMultiset_(ComGoogleCommonCollectAbstractMultiset *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMultiset_EntrySet *create_ComGoogleCommonCollectAbstractMultiset_EntrySet_initWithComGoogleCommonCollectAbstractMultiset_(ComGoogleCommonCollectAbstractMultiset *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultiset_EntrySet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMultiset")
