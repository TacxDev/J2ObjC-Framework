//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/EnumMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectEnumMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectEnumMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectEnumMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset || defined(INCLUDE_ComGoogleCommonCollectEnumMultiset))
#define ComGoogleCommonCollectEnumMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultiset 1
#include "com/google/common/collect/AbstractMultiset.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class JavaLangEnum;
@class JavaLangInteger;
@protocol JavaLangIterable;
@protocol JavaUtilFunctionObjIntConsumer;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectEnumMultiset : ComGoogleCommonCollectAbstractMultiset < JavaIoSerializable >

#pragma mark Public

- (jint)addWithId:(JavaLangEnum *)element
          withInt:(jint)occurrences;

- (void)clear;

- (jint)countWithId:(id)element;

+ (ComGoogleCommonCollectEnumMultiset *)createWithIOSClass:(IOSClass *)type;

+ (ComGoogleCommonCollectEnumMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (ComGoogleCommonCollectEnumMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements
                                                      withIOSClass:(IOSClass *)type;

- (void)forEachEntryWithJavaUtilFunctionObjIntConsumer:(id<JavaUtilFunctionObjIntConsumer>)action;

- (id<JavaUtilIterator>)iterator;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(JavaLangEnum *)element
               withInt:(jint)count;

- (jint)size;

#pragma mark Package-Private

- (jint)distinctElements;

- (id<JavaUtilIterator>)elementIterator;

- (id<JavaUtilIterator>)entryIterator;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectEnumMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithJavaLangIterable_withIOSClass_(id<JavaLangIterable> elements, IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEnumMultiset)

#endif

#if !defined (ComGoogleCommonCollectEnumMultiset_Itr_) && (INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset || defined(INCLUDE_ComGoogleCommonCollectEnumMultiset_Itr))
#define ComGoogleCommonCollectEnumMultiset_Itr_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

@class ComGoogleCommonCollectEnumMultiset;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilFunctionConsumer;

@interface ComGoogleCommonCollectEnumMultiset_Itr : NSObject < JavaUtilIterator > {
 @public
  jint index_;
  jint toRemove_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectEnumMultiset:(ComGoogleCommonCollectEnumMultiset *)outer$;

- (id)outputWithInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectEnumMultiset_Itr)

FOUNDATION_EXPORT void ComGoogleCommonCollectEnumMultiset_Itr_initWithComGoogleCommonCollectEnumMultiset_(ComGoogleCommonCollectEnumMultiset_Itr *self, ComGoogleCommonCollectEnumMultiset *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEnumMultiset_Itr)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectEnumMultiset")
