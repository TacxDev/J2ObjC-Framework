//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/Iterators.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectIterators")
#ifdef RESTRICT_ComGoogleCommonCollectIterators
#define INCLUDE_ALL_ComGoogleCommonCollectIterators 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectIterators 1
#endif
#undef RESTRICT_ComGoogleCommonCollectIterators

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectIterators_) && (INCLUDE_ALL_ComGoogleCommonCollectIterators || defined(INCLUDE_ComGoogleCommonCollectIterators))
#define ComGoogleCommonCollectIterators_

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class ComGoogleCommonCollectUnmodifiableListIterator;
@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectPeekingIterator;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilEnumeration;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;

@interface ComGoogleCommonCollectIterators : NSObject

#pragma mark Public

+ (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)addTo
                    withJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (jint)advanceWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                            withInt:(jint)numberToAdvance;

+ (jboolean)allWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jboolean)anyWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<JavaUtilEnumeration>)asEnumerationWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id<JavaUtilIterator>)concatWithJavaUtilIteratorArray:(IOSObjectArray *)inputs;

+ (id<JavaUtilIterator>)concatWithJavaUtilIterator:(id<JavaUtilIterator>)inputs;

+ (id<JavaUtilIterator>)concatWithJavaUtilIterator:(id<JavaUtilIterator>)a
                              withJavaUtilIterator:(id<JavaUtilIterator>)b;

+ (id<JavaUtilIterator>)concatWithJavaUtilIterator:(id<JavaUtilIterator>)a
                              withJavaUtilIterator:(id<JavaUtilIterator>)b
                              withJavaUtilIterator:(id<JavaUtilIterator>)c;

+ (id<JavaUtilIterator>)concatWithJavaUtilIterator:(id<JavaUtilIterator>)a
                              withJavaUtilIterator:(id<JavaUtilIterator>)b
                              withJavaUtilIterator:(id<JavaUtilIterator>)c
                              withJavaUtilIterator:(id<JavaUtilIterator>)d;

+ (id<JavaUtilIterator>)consumingIteratorWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (jboolean)containsWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                  withId:(id)element;

+ (id<JavaUtilIterator>)cycleWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (id<JavaUtilIterator>)cycleWithNSObjectArray:(IOSObjectArray *)elements;

+ (jboolean)elementsEqualWithJavaUtilIterator:(id<JavaUtilIterator>)iterator1
                         withJavaUtilIterator:(id<JavaUtilIterator>)iterator2;

+ (ComGoogleCommonCollectUnmodifiableIterator *)filterWithJavaUtilIterator:(id<JavaUtilIterator>)unfiltered
                                                              withIOSClass:(IOSClass *)desiredType;

+ (ComGoogleCommonCollectUnmodifiableIterator *)filterWithJavaUtilIterator:(id<JavaUtilIterator>)unfiltered
                                          withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)retainIfTrue;

+ (id)findWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id)findWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate
                        withId:(id)defaultValue;

+ (ComGoogleCommonCollectUnmodifiableIterator *)forArrayWithNSObjectArray:(IOSObjectArray *)array;

+ (ComGoogleCommonCollectUnmodifiableIterator *)forEnumerationWithJavaUtilEnumeration:(id<JavaUtilEnumeration>)enumeration;

+ (jint)frequencyWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                               withId:(id)element;

+ (id)getWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                      withInt:(jint)position;

+ (id)getWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                      withInt:(jint)position
                       withId:(id)defaultValue;

+ (id)getLastWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id)getLastWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                           withId:(id)defaultValue;

+ (id)getNextWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                           withId:(id)defaultValue;

+ (id)getOnlyElementWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id)getOnlyElementWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                  withId:(id)defaultValue;

+ (jint)indexOfWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<JavaUtilIterator>)limitWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                          withInt:(jint)limitSize;

+ (ComGoogleCommonCollectUnmodifiableIterator *)mergeSortedWithJavaLangIterable:(id<JavaLangIterable>)iterators
                                                         withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectUnmodifiableIterator *)paddedPartitionWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                                                            withInt:(jint)size;

+ (ComGoogleCommonCollectUnmodifiableIterator *)partitionWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                                                      withInt:(jint)size;

+ (id<ComGoogleCommonCollectPeekingIterator>)peekingIteratorWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id<ComGoogleCommonCollectPeekingIterator>)peekingIteratorWithComGoogleCommonCollectPeekingIterator:(id<ComGoogleCommonCollectPeekingIterator>)iterator;

+ (jboolean)removeAllWithJavaUtilIterator:(id<JavaUtilIterator>)removeFrom
                   withJavaUtilCollection:(id<JavaUtilCollection>)elementsToRemove;

+ (jboolean)removeIfWithJavaUtilIterator:(id<JavaUtilIterator>)removeFrom
        withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jboolean)retainAllWithJavaUtilIterator:(id<JavaUtilIterator>)removeFrom
                   withJavaUtilCollection:(id<JavaUtilCollection>)elementsToRetain;

+ (ComGoogleCommonCollectUnmodifiableIterator *)singletonIteratorWithId:(id)value;

+ (jint)sizeWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (IOSObjectArray *)toArrayWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                   withIOSClass:(IOSClass *)type;

+ (NSString *)toStringWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id<JavaUtilIterator>)transformWithJavaUtilIterator:(id<JavaUtilIterator>)fromIterator
                      withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (ComGoogleCommonBaseOptional *)tryFindWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                            withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (ComGoogleCommonCollectUnmodifiableIterator *)unmodifiableIteratorWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (ComGoogleCommonCollectUnmodifiableIterator *)unmodifiableIteratorWithComGoogleCommonCollectUnmodifiableIterator:(ComGoogleCommonCollectUnmodifiableIterator *)iterator;

#pragma mark Package-Private

+ (id<JavaUtilListIterator>)castWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (void)checkNonnegativeWithInt:(jint)position;

+ (void)clearWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id<JavaUtilIterator>)concatNoDefensiveCopyWithJavaUtilIteratorArray:(IOSObjectArray *)inputs;

+ (ComGoogleCommonCollectUnmodifiableIterator *)emptyIterator;

+ (ComGoogleCommonCollectUnmodifiableListIterator *)emptyListIterator;

+ (id<JavaUtilIterator>)emptyModifiableIterator;

+ (ComGoogleCommonCollectUnmodifiableListIterator *)forArrayWithNSObjectArray:(IOSObjectArray *)array
                                                                      withInt:(jint)offset
                                                                      withInt:(jint)length
                                                                      withInt:(jint)index;

+ (id)pollNextWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectIterators)

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_emptyIterator(void);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableListIterator *ComGoogleCommonCollectIterators_emptyListIterator(void);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_emptyModifiableIterator(void);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_unmodifiableIteratorWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_unmodifiableIteratorWithComGoogleCommonCollectUnmodifiableIterator_(ComGoogleCommonCollectUnmodifiableIterator *iterator);

FOUNDATION_EXPORT jint ComGoogleCommonCollectIterators_sizeWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_containsWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id element);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_removeAllWithJavaUtilIterator_withJavaUtilCollection_(id<JavaUtilIterator> removeFrom, id<JavaUtilCollection> elementsToRemove);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_removeIfWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> removeFrom, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_retainAllWithJavaUtilIterator_withJavaUtilCollection_(id<JavaUtilIterator> removeFrom, id<JavaUtilCollection> elementsToRetain);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_elementsEqualWithJavaUtilIterator_withJavaUtilIterator_(id<JavaUtilIterator> iterator1, id<JavaUtilIterator> iterator2);

FOUNDATION_EXPORT NSString *ComGoogleCommonCollectIterators_toStringWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getOnlyElementWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getOnlyElementWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id defaultValue);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectIterators_toArrayWithJavaUtilIterator_withIOSClass_(id<JavaUtilIterator> iterator, IOSClass *type);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_addAllWithJavaUtilCollection_withJavaUtilIterator_(id<JavaUtilCollection> addTo, id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT jint ComGoogleCommonCollectIterators_frequencyWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id element);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_cycleWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_cycleWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIterator_withJavaUtilIterator_(id<JavaUtilIterator> a, id<JavaUtilIterator> b);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIterator_withJavaUtilIterator_withJavaUtilIterator_(id<JavaUtilIterator> a, id<JavaUtilIterator> b, id<JavaUtilIterator> c);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIterator_withJavaUtilIterator_withJavaUtilIterator_withJavaUtilIterator_(id<JavaUtilIterator> a, id<JavaUtilIterator> b, id<JavaUtilIterator> c, id<JavaUtilIterator> d);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIteratorArray_(IOSObjectArray *inputs);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIterator_(id<JavaUtilIterator> inputs);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatNoDefensiveCopyWithJavaUtilIteratorArray_(IOSObjectArray *inputs);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_partitionWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_paddedPartitionWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_filterWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> unfiltered, id<ComGoogleCommonBasePredicate> retainIfTrue);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_filterWithJavaUtilIterator_withIOSClass_(id<JavaUtilIterator> unfiltered, IOSClass *desiredType);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_anyWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_allWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_findWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_findWithJavaUtilIterator_withComGoogleCommonBasePredicate_withId_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate, id defaultValue);

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonCollectIterators_tryFindWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT jint ComGoogleCommonCollectIterators_indexOfWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_transformWithJavaUtilIterator_withComGoogleCommonBaseFunction_(id<JavaUtilIterator> fromIterator, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint position);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getWithJavaUtilIterator_withInt_withId_(id<JavaUtilIterator> iterator, jint position, id defaultValue);

FOUNDATION_EXPORT void ComGoogleCommonCollectIterators_checkNonnegativeWithInt_(jint position);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getNextWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id defaultValue);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getLastWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getLastWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id defaultValue);

FOUNDATION_EXPORT jint ComGoogleCommonCollectIterators_advanceWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint numberToAdvance);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_limitWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint limitSize);

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_consumingIteratorWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_pollNextWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT void ComGoogleCommonCollectIterators_clearWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_forArrayWithNSObjectArray_(IOSObjectArray *array);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableListIterator *ComGoogleCommonCollectIterators_forArrayWithNSObjectArray_withInt_withInt_withInt_(IOSObjectArray *array, jint offset, jint length, jint index);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_singletonIteratorWithId_(id value);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_forEnumerationWithJavaUtilEnumeration_(id<JavaUtilEnumeration> enumeration);

FOUNDATION_EXPORT id<JavaUtilEnumeration> ComGoogleCommonCollectIterators_asEnumerationWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT id<ComGoogleCommonCollectPeekingIterator> ComGoogleCommonCollectIterators_peekingIteratorWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT id<ComGoogleCommonCollectPeekingIterator> ComGoogleCommonCollectIterators_peekingIteratorWithComGoogleCommonCollectPeekingIterator_(id<ComGoogleCommonCollectPeekingIterator> iterator);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_mergeSortedWithJavaLangIterable_withJavaUtilComparator_(id<JavaLangIterable> iterators, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilListIterator> ComGoogleCommonCollectIterators_castWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectIterators)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectIterators")
