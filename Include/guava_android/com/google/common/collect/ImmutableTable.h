//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/ImmutableTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableTable")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableTable
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableTable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableTable_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableTable || defined(INCLUDE_ComGoogleCommonCollectImmutableTable))
#define ComGoogleCommonCollectImmutableTable_

#define RESTRICT_ComGoogleCommonCollectAbstractTable 1
#define INCLUDE_ComGoogleCommonCollectAbstractTable 1
#include "com/google/common/collect/AbstractTable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableTable_Builder;
@class ComGoogleCommonCollectImmutableTable_SerializedForm;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class JavaLangBoolean;
@protocol ComGoogleCommonCollectTable;
@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectImmutableTable : ComGoogleCommonCollectAbstractTable < JavaIoSerializable >

#pragma mark Public

+ (ComGoogleCommonCollectImmutableTable_Builder *)builder;

- (ComGoogleCommonCollectImmutableSet *)cellSet;

- (void)clear;

- (ComGoogleCommonCollectImmutableMap *)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectImmutableTable *)copyOfWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableTable *)of;

+ (ComGoogleCommonCollectImmutableTable *)ofWithId:(id)rowKey
                                            withId:(id)columnKey
                                            withId:(id)value;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (ComGoogleCommonCollectImmutableMap *)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectUnmodifiableIterator *)cellIterator;

+ (id<ComGoogleCommonCollectTable_Cell>)cellOfWithId:(id)rowKey
                                              withId:(id)columnKey
                                              withId:(id)value;

+ (ComGoogleCommonCollectImmutableTable *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)cells OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSet *)createCellSet;

- (ComGoogleCommonCollectImmutableTable_SerializedForm *)createSerializedForm;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

- (id<JavaUtilIterator>)valuesIterator;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableTable)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectImmutableTable_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectImmutableTable_ofWithId_withId_withId_(id rowKey, id columnKey, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectImmutableTable_copyOfWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectImmutableTable_copyOfWithJavaLangIterable_(id<JavaLangIterable> cells);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable_Builder *ComGoogleCommonCollectImmutableTable_builder(void);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable_Cell> ComGoogleCommonCollectImmutableTable_cellOfWithId_withId_withId_(id rowKey, id columnKey, id value);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableTable_init(ComGoogleCommonCollectImmutableTable *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableTable)

#endif

#if !defined (ComGoogleCommonCollectImmutableTable_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableTable || defined(INCLUDE_ComGoogleCommonCollectImmutableTable_Builder))
#define ComGoogleCommonCollectImmutableTable_Builder_

@class ComGoogleCommonCollectImmutableTable;
@protocol ComGoogleCommonCollectTable;
@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectImmutableTable_Builder : NSObject

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableTable *)build;

- (ComGoogleCommonCollectImmutableTable *)buildOrThrow;

- (ComGoogleCommonCollectImmutableTable_Builder *)orderColumnsByWithJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

- (ComGoogleCommonCollectImmutableTable_Builder *)orderRowsByWithJavaUtilComparator:(id<JavaUtilComparator>)rowComparator;

- (ComGoogleCommonCollectImmutableTable_Builder *)putWithComGoogleCommonCollectTable_Cell:(id<ComGoogleCommonCollectTable_Cell>)cell;

- (ComGoogleCommonCollectImmutableTable_Builder *)putWithId:(id)rowKey
                                                     withId:(id)columnKey
                                                     withId:(id)value;

- (ComGoogleCommonCollectImmutableTable_Builder *)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableTable_Builder *)combineWithComGoogleCommonCollectImmutableTable_Builder:(ComGoogleCommonCollectImmutableTable_Builder *)other;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableTable_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableTable_Builder_init(ComGoogleCommonCollectImmutableTable_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable_Builder *new_ComGoogleCommonCollectImmutableTable_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable_Builder *create_ComGoogleCommonCollectImmutableTable_Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableTable_Builder)

#endif

#if !defined (ComGoogleCommonCollectImmutableTable_SerializedForm_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableTable || defined(INCLUDE_ComGoogleCommonCollectImmutableTable_SerializedForm))
#define ComGoogleCommonCollectImmutableTable_SerializedForm_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableTable;
@class IOSIntArray;

@interface ComGoogleCommonCollectImmutableTable_SerializedForm : NSObject < JavaIoSerializable >

#pragma mark Package-Private

+ (ComGoogleCommonCollectImmutableTable_SerializedForm *)createWithComGoogleCommonCollectImmutableTable:(ComGoogleCommonCollectImmutableTable *)table
                                                                                           withIntArray:(IOSIntArray *)cellRowIndices
                                                                                           withIntArray:(IOSIntArray *)cellColumnIndices;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableTable_SerializedForm)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable_SerializedForm *ComGoogleCommonCollectImmutableTable_SerializedForm_createWithComGoogleCommonCollectImmutableTable_withIntArray_withIntArray_(ComGoogleCommonCollectImmutableTable *table, IOSIntArray *cellRowIndices, IOSIntArray *cellColumnIndices);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableTable_SerializedForm)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableTable")