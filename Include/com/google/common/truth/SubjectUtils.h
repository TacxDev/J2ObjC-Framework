//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/truth/build_result/java/com/google/common/truth/SubjectUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonTruthSubjectUtils")
#ifdef RESTRICT_ComGoogleCommonTruthSubjectUtils
#define INCLUDE_ALL_ComGoogleCommonTruthSubjectUtils 0
#else
#define INCLUDE_ALL_ComGoogleCommonTruthSubjectUtils 1
#endif
#undef RESTRICT_ComGoogleCommonTruthSubjectUtils

#if !defined (ComGoogleCommonTruthSubjectUtils_) && (INCLUDE_ALL_ComGoogleCommonTruthSubjectUtils || defined(INCLUDE_ComGoogleCommonTruthSubjectUtils))
#define ComGoogleCommonTruthSubjectUtils_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

@interface ComGoogleCommonTruthSubjectUtils : NSObject

#pragma mark Package-Private

+ (id<JavaUtilList>)accumulateWithId:(id)first
                              withId:(id)second
                   withNSObjectArray:(IOSObjectArray *)rest;

+ (id<JavaLangIterable>)annotateEmptyStringsWithJavaLangIterable:(id<JavaLangIterable>)items;

+ (ComGoogleCommonCollectImmutableList *)appendWithNSObjectArray:(IOSObjectArray *)array
                                                          withId:(id)object;

+ (ComGoogleCommonCollectImmutableList *)appendWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)list
                                                                                withId:(id)object;

+ (ComGoogleCommonCollectImmutableList *)concatWithJavaLangIterableArray:(IOSObjectArray *)inputs;

+ (NSString *)countDuplicatesWithJavaLangIterable:(id<JavaLangIterable>)items;

+ (NSString *)countDuplicatesAndAddTypeInfoWithJavaLangIterable:(id<JavaLangIterable>)itemsIterable;

+ (ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped *)countDuplicatesAndMaybeAddTypeInfoReturnObjectWithJavaLangIterable:(id<JavaLangIterable>)itemsIterable
                                                                                                                      withBoolean:(jboolean)addTypeInfo;

+ (jint)countOfWithId:(id)t
 withJavaLangIterable:(id<JavaLangIterable>)items;

+ (NSString *)entryStringWithComGoogleCommonCollectMultiset_Entry:(id<ComGoogleCommonCollectMultiset_Entry>)entry_;

+ (jboolean)hasMatchingToStringPairWithJavaLangIterable:(id<JavaLangIterable>)items1
                                   withJavaLangIterable:(id<JavaLangIterable>)items2;

+ (id<JavaUtilCollection>)iterableToCollectionWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (id<JavaUtilList>)iterableToListWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (NSString *)iterableToStringWithTypeInfoWithJavaLangIterable:(id<JavaLangIterable>)itemsIterable;

+ (NSString *)objectToTypeNameWithId:(id)item;

+ (id<JavaUtilList>)retainMatchingToStringWithJavaLangIterable:(id<JavaLangIterable>)items
                                          withJavaLangIterable:(id<JavaLangIterable>)itemsToCheck;

+ (ComGoogleCommonCollectImmutableList *)sandwichWithId:(id)first
                                      withNSObjectArray:(IOSObjectArray *)array
                                                 withId:(id)last;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonTruthSubjectUtils)

inline NSString *ComGoogleCommonTruthSubjectUtils_get_HUMAN_UNDERSTANDABLE_EMPTY_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonTruthSubjectUtils_HUMAN_UNDERSTANDABLE_EMPTY_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonTruthSubjectUtils, HUMAN_UNDERSTANDABLE_EMPTY_STRING, NSString *)

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonTruthSubjectUtils_accumulateWithId_withId_withNSObjectArray_(id first, id second, IOSObjectArray *rest);

FOUNDATION_EXPORT jint ComGoogleCommonTruthSubjectUtils_countOfWithId_withJavaLangIterable_(id t, id<JavaLangIterable> items);

FOUNDATION_EXPORT NSString *ComGoogleCommonTruthSubjectUtils_countDuplicatesWithJavaLangIterable_(id<JavaLangIterable> items);

FOUNDATION_EXPORT NSString *ComGoogleCommonTruthSubjectUtils_entryStringWithComGoogleCommonCollectMultiset_Entry_(id<ComGoogleCommonCollectMultiset_Entry> entry_);

FOUNDATION_EXPORT NSString *ComGoogleCommonTruthSubjectUtils_countDuplicatesAndAddTypeInfoWithJavaLangIterable_(id<JavaLangIterable> itemsIterable);

FOUNDATION_EXPORT ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped *ComGoogleCommonTruthSubjectUtils_countDuplicatesAndMaybeAddTypeInfoReturnObjectWithJavaLangIterable_withBoolean_(id<JavaLangIterable> itemsIterable, jboolean addTypeInfo);

FOUNDATION_EXPORT NSString *ComGoogleCommonTruthSubjectUtils_iterableToStringWithTypeInfoWithJavaLangIterable_(id<JavaLangIterable> itemsIterable);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonTruthSubjectUtils_retainMatchingToStringWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> items, id<JavaLangIterable> itemsToCheck);

FOUNDATION_EXPORT jboolean ComGoogleCommonTruthSubjectUtils_hasMatchingToStringPairWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> items1, id<JavaLangIterable> items2);

FOUNDATION_EXPORT NSString *ComGoogleCommonTruthSubjectUtils_objectToTypeNameWithId_(id item);

FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonTruthSubjectUtils_iterableToCollectionWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonTruthSubjectUtils_iterableToListWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonTruthSubjectUtils_annotateEmptyStringsWithJavaLangIterable_(id<JavaLangIterable> items);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonTruthSubjectUtils_concatWithJavaLangIterableArray_(IOSObjectArray *inputs);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonTruthSubjectUtils_appendWithNSObjectArray_withId_(IOSObjectArray *array, id object);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonTruthSubjectUtils_appendWithComGoogleCommonCollectImmutableList_withId_(ComGoogleCommonCollectImmutableList *list, id object);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonTruthSubjectUtils_sandwichWithId_withNSObjectArray_withId_(id first, IOSObjectArray *array, id last);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthSubjectUtils)

#endif

#if !defined (ComGoogleCommonTruthSubjectUtils_NonHashingMultiset_) && (INCLUDE_ALL_ComGoogleCommonTruthSubjectUtils || defined(INCLUDE_ComGoogleCommonTruthSubjectUtils_NonHashingMultiset))
#define ComGoogleCommonTruthSubjectUtils_NonHashingMultiset_

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaLangIterable;

@interface ComGoogleCommonTruthSubjectUtils_NonHashingMultiset : NSObject

#pragma mark Public

- (NSString *)description;

#pragma mark Package-Private

- (void)addWithId:(id)element;

- (id<JavaLangIterable>)entrySet;

- (jboolean)isEmpty;

- (jboolean)removeWithId:(id)element;

- (NSString *)toStringWithBrackets;

- (jint)totalCopies;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonTruthSubjectUtils_NonHashingMultiset)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthSubjectUtils_NonHashingMultiset)

#endif

#if !defined (ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped_) && (INCLUDE_ALL_ComGoogleCommonTruthSubjectUtils || defined(INCLUDE_ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped))
#define ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped_

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonTruthSubjectUtils_NonHashingMultiset;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaLangIterable;

@interface ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped : NSObject {
 @public
  ComGoogleCommonTruthSubjectUtils_NonHashingMultiset *valuesAndMaybeTypes_;
  ComGoogleCommonBaseOptional *homogeneousTypeToDisplay_;
}

#pragma mark Public

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonTruthSubjectUtils_NonHashingMultiset:(ComGoogleCommonTruthSubjectUtils_NonHashingMultiset *)valuesAndMaybeTypes
                                            withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)homogeneousTypeToDisplay;

- (id<JavaLangIterable>)entrySet;

- (jboolean)isEmpty;

- (jint)totalCopies;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped)

J2OBJC_FIELD_SETTER(ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped, valuesAndMaybeTypes_, ComGoogleCommonTruthSubjectUtils_NonHashingMultiset *)
J2OBJC_FIELD_SETTER(ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped, homogeneousTypeToDisplay_, ComGoogleCommonBaseOptional *)

FOUNDATION_EXPORT void ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped_initWithComGoogleCommonTruthSubjectUtils_NonHashingMultiset_withComGoogleCommonBaseOptional_(ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped *self, ComGoogleCommonTruthSubjectUtils_NonHashingMultiset *valuesAndMaybeTypes, ComGoogleCommonBaseOptional *homogeneousTypeToDisplay);

FOUNDATION_EXPORT ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped *new_ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped_initWithComGoogleCommonTruthSubjectUtils_NonHashingMultiset_withComGoogleCommonBaseOptional_(ComGoogleCommonTruthSubjectUtils_NonHashingMultiset *valuesAndMaybeTypes, ComGoogleCommonBaseOptional *homogeneousTypeToDisplay) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped *create_ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped_initWithComGoogleCommonTruthSubjectUtils_NonHashingMultiset_withComGoogleCommonBaseOptional_(ComGoogleCommonTruthSubjectUtils_NonHashingMultiset *valuesAndMaybeTypes, ComGoogleCommonBaseOptional *homogeneousTypeToDisplay);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthSubjectUtils_DuplicateGroupedAndTyped)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonTruthSubjectUtils")