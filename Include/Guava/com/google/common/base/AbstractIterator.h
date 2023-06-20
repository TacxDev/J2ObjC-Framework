//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/base/AbstractIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseAbstractIterator")
#ifdef RESTRICT_ComGoogleCommonBaseAbstractIterator
#define INCLUDE_ALL_ComGoogleCommonBaseAbstractIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseAbstractIterator 1
#endif
#undef RESTRICT_ComGoogleCommonBaseAbstractIterator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseAbstractIterator_) && (INCLUDE_ALL_ComGoogleCommonBaseAbstractIterator || defined(INCLUDE_ComGoogleCommonBaseAbstractIterator))
#define ComGoogleCommonBaseAbstractIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

@class JavaLangBoolean;
@protocol JavaUtilFunctionConsumer;

@interface ComGoogleCommonBaseAbstractIterator : NSObject < JavaUtilIterator >

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Protected

- (instancetype)initPackagePrivate;

- (id)computeNext;

- (id)endOfData;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseAbstractIterator)

FOUNDATION_EXPORT void ComGoogleCommonBaseAbstractIterator_initPackagePrivate(ComGoogleCommonBaseAbstractIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseAbstractIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseAbstractIterator")
