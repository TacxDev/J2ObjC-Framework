//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/TransformedListIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTransformedListIterator")
#ifdef RESTRICT_ComGoogleCommonCollectTransformedListIterator
#define INCLUDE_ALL_ComGoogleCommonCollectTransformedListIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTransformedListIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTransformedListIterator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTransformedListIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectTransformedListIterator || defined(INCLUDE_ComGoogleCommonCollectTransformedListIterator))
#define ComGoogleCommonCollectTransformedListIterator_

#define RESTRICT_ComGoogleCommonCollectTransformedIterator 1
#define INCLUDE_ComGoogleCommonCollectTransformedIterator 1
#include "com/google/common/collect/TransformedIterator.h"

#define RESTRICT_JavaUtilListIterator 1
#define INCLUDE_JavaUtilListIterator 1
#include "java/util/ListIterator.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectTransformedListIterator : ComGoogleCommonCollectTransformedIterator < JavaUtilListIterator >

#pragma mark Public

- (void)addWithId:(id)element;

- (jboolean)hasPrevious;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

- (void)setWithId:(id)element;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithJavaUtilListIterator:(id<JavaUtilListIterator>)backingIterator;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivateWithJavaUtilIterator:(id<JavaUtilIterator>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTransformedListIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectTransformedListIterator_initPackagePrivateWithJavaUtilListIterator_(ComGoogleCommonCollectTransformedListIterator *self, id<JavaUtilListIterator> backingIterator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTransformedListIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTransformedListIterator")