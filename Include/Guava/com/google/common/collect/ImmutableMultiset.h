//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/ImmutableMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset || defined(INCLUDE_ComGoogleCommonCollectImmutableMultiset))
#define ComGoogleCommonCollectImmutableMultiset_

#define RESTRICT_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies 1
#include "com/google/common/collect/ImmutableMultisetGwtSerializationDependencies.h"

#define RESTRICT_ComGoogleCommonCollectMultiset 1
#define INCLUDE_ComGoogleCommonCollectMultiset 1
#include "com/google/common/collect/Multiset.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMultiset_Builder;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionObjIntConsumer;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilIterator;
@protocol JavaUtilStreamCollector;

@interface ComGoogleCommonCollectImmutableMultiset : ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies < ComGoogleCommonCollectMultiset >

#pragma mark Public

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (ComGoogleCommonCollectImmutableList *)asList;

+ (ComGoogleCommonCollectImmutableMultiset_Builder *)builder;

- (jboolean)containsWithId:(id)object;

+ (ComGoogleCommonCollectImmutableMultiset *)copyOfWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableMultiset *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableMultiset *)copyOfWithJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSet *)elementSet;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

+ (ComGoogleCommonCollectImmutableMultiset *)of;

+ (ComGoogleCommonCollectImmutableMultiset *)ofWithId:(id)element;

+ (ComGoogleCommonCollectImmutableMultiset *)ofWithId:(id)e1
                                               withId:(id)e2;

+ (ComGoogleCommonCollectImmutableMultiset *)ofWithId:(id)e1
                                               withId:(id)e2
                                               withId:(id)e3;

+ (ComGoogleCommonCollectImmutableMultiset *)ofWithId:(id)e1
                                               withId:(id)e2
                                               withId:(id)e3
                                               withId:(id)e4;

+ (ComGoogleCommonCollectImmutableMultiset *)ofWithId:(id)e1
                                               withId:(id)e2
                                               withId:(id)e3
                                               withId:(id)e4
                                               withId:(id)e5;

+ (ComGoogleCommonCollectImmutableMultiset *)ofWithId:(id)e1
                                               withId:(id)e2
                                               withId:(id)e3
                                               withId:(id)e4
                                               withId:(id)e5
                                               withId:(id)e6
                                    withNSObjectArray:(IOSObjectArray *)others;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

+ (id<JavaUtilStreamCollector>)toImmutableMultiset;

+ (id<JavaUtilStreamCollector>)toImmutableMultisetWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)elementFunction
                                             withJavaUtilFunctionToIntFunction:(id<JavaUtilFunctionToIntFunction>)countFunction;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

+ (ComGoogleCommonCollectImmutableMultiset *)copyFromEntriesWithJavaUtilCollection:(id<JavaUtilCollection>)entries OBJC_METHOD_FAMILY_NONE;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (id<ComGoogleCommonCollectMultiset_Entry>)getEntryWithInt:(jint)index;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultiset)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableMultiset_toImmutableMultiset(void);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableMultiset_toImmutableMultisetWithJavaUtilFunctionFunction_withJavaUtilFunctionToIntFunction_(id<JavaUtilFunctionFunction> elementFunction, id<JavaUtilFunctionToIntFunction> countFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_ofWithId_(id element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_ofWithId_withId_(id e1, id e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_ofWithId_withId_withId_(id e1, id e2, id e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_ofWithId_withId_withId_withId_(id e1, id e2, id e3, id e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_ofWithId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_ofWithId_withId_withId_withId_withId_withId_withNSObjectArray_(id e1, id e2, id e3, id e4, id e5, id e6, IOSObjectArray *others);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_copyOfWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_copyOfWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_copyOfWithJavaUtilIterator_(id<JavaUtilIterator> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset *ComGoogleCommonCollectImmutableMultiset_copyFromEntriesWithJavaUtilCollection_(id<JavaUtilCollection> entries);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultiset_init(ComGoogleCommonCollectImmutableMultiset *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_Builder *ComGoogleCommonCollectImmutableMultiset_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultiset)

#endif

#if !defined (ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset || defined(INCLUDE_ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm))
#define ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableMultiset;

@interface ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm : NSObject < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableMultiset *multiset_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMultiset:(ComGoogleCommonCollectImmutableMultiset *)multiset;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm, multiset_, ComGoogleCommonCollectImmutableMultiset *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm_initWithComGoogleCommonCollectImmutableMultiset_(ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm *self, ComGoogleCommonCollectImmutableMultiset *multiset);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm *new_ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm_initWithComGoogleCommonCollectImmutableMultiset_(ComGoogleCommonCollectImmutableMultiset *multiset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm *create_ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm_initWithComGoogleCommonCollectImmutableMultiset_(ComGoogleCommonCollectImmutableMultiset *multiset);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultiset_EntrySetSerializedForm)

#endif

#if !defined (ComGoogleCommonCollectImmutableMultiset_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset || defined(INCLUDE_ComGoogleCommonCollectImmutableMultiset_Builder))
#define ComGoogleCommonCollectImmutableMultiset_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableCollection 1
#define INCLUDE_ComGoogleCommonCollectImmutableCollection_Builder 1
#include "com/google/common/collect/ImmutableCollection.h"

@class ComGoogleCommonCollectImmutableMultiset;
@class IOSObjectArray;
@class JavaLangInteger;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectImmutableMultiset_Builder : ComGoogleCommonCollectImmutableCollection_Builder {
 @public
  id<ComGoogleCommonCollectMultiset> contents_;
}

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableMultiset_Builder *)addWithId:(id)element;

- (ComGoogleCommonCollectImmutableMultiset_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectImmutableMultiset_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (ComGoogleCommonCollectImmutableMultiset_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

- (ComGoogleCommonCollectImmutableMultiset_Builder *)addCopiesWithId:(id)element
                                                             withInt:(jint)occurrences;

- (ComGoogleCommonCollectImmutableMultiset *)build;

- (ComGoogleCommonCollectImmutableMultiset_Builder *)setCountWithId:(id)element
                                                            withInt:(jint)count;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)contents;

- (ComGoogleCommonCollectImmutableMultiset *)buildJdkBacked;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultiset_Builder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultiset_Builder, contents_, id<ComGoogleCommonCollectMultiset>)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultiset_Builder_init(ComGoogleCommonCollectImmutableMultiset_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_Builder *new_ComGoogleCommonCollectImmutableMultiset_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_Builder *create_ComGoogleCommonCollectImmutableMultiset_Builder_init(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultiset_Builder_initWithComGoogleCommonCollectMultiset_(ComGoogleCommonCollectImmutableMultiset_Builder *self, id<ComGoogleCommonCollectMultiset> contents);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_Builder *new_ComGoogleCommonCollectImmutableMultiset_Builder_initWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> contents) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_Builder *create_ComGoogleCommonCollectImmutableMultiset_Builder_initWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> contents);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultiset_Builder)

#endif

#if !defined (ComGoogleCommonCollectImmutableMultiset_ElementSet_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset || defined(INCLUDE_ComGoogleCommonCollectImmutableMultiset_ElementSet))
#define ComGoogleCommonCollectImmutableMultiset_ElementSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet_Indexed 1
#include "com/google/common/collect/ImmutableSet.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectImmutableMultiset_ElementSet : ComGoogleCommonCollectImmutableSet_Indexed

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)entries
  withComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)delegate;

- (id)getWithInt:(jint)index;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultiset_ElementSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultiset_ElementSet_initWithJavaUtilList_withComGoogleCommonCollectMultiset_(ComGoogleCommonCollectImmutableMultiset_ElementSet *self, id<JavaUtilList> entries, id<ComGoogleCommonCollectMultiset> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_ElementSet *new_ComGoogleCommonCollectImmutableMultiset_ElementSet_initWithJavaUtilList_withComGoogleCommonCollectMultiset_(id<JavaUtilList> entries, id<ComGoogleCommonCollectMultiset> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_ElementSet *create_ComGoogleCommonCollectImmutableMultiset_ElementSet_initWithJavaUtilList_withComGoogleCommonCollectMultiset_(id<JavaUtilList> entries, id<ComGoogleCommonCollectMultiset> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultiset_ElementSet)

#endif

#if !defined (ComGoogleCommonCollectImmutableMultiset_SerializedForm_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset || defined(INCLUDE_ComGoogleCommonCollectImmutableMultiset_SerializedForm))
#define ComGoogleCommonCollectImmutableMultiset_SerializedForm_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSIntArray;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset;

@interface ComGoogleCommonCollectImmutableMultiset_SerializedForm : NSObject < JavaIoSerializable > {
 @public
  IOSObjectArray *elements_;
  IOSIntArray *counts_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultiset_SerializedForm)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultiset_SerializedForm, elements_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultiset_SerializedForm, counts_, IOSIntArray *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultiset_SerializedForm_initWithComGoogleCommonCollectMultiset_(ComGoogleCommonCollectImmutableMultiset_SerializedForm *self, id<ComGoogleCommonCollectMultiset> multiset);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_SerializedForm *new_ComGoogleCommonCollectImmutableMultiset_SerializedForm_initWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultiset_SerializedForm *create_ComGoogleCommonCollectImmutableMultiset_SerializedForm_initWithComGoogleCommonCollectMultiset_(id<ComGoogleCommonCollectMultiset> multiset);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultiset_SerializedForm)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMultiset")
