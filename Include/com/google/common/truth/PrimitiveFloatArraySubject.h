//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/truth/build_result/java/com/google/common/truth/PrimitiveFloatArraySubject.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonTruthPrimitiveFloatArraySubject")
#ifdef RESTRICT_ComGoogleCommonTruthPrimitiveFloatArraySubject
#define INCLUDE_ALL_ComGoogleCommonTruthPrimitiveFloatArraySubject 0
#else
#define INCLUDE_ALL_ComGoogleCommonTruthPrimitiveFloatArraySubject 1
#endif
#undef RESTRICT_ComGoogleCommonTruthPrimitiveFloatArraySubject

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonTruthPrimitiveFloatArraySubject_) && (INCLUDE_ALL_ComGoogleCommonTruthPrimitiveFloatArraySubject || defined(INCLUDE_ComGoogleCommonTruthPrimitiveFloatArraySubject))
#define ComGoogleCommonTruthPrimitiveFloatArraySubject_

#define RESTRICT_ComGoogleCommonTruthAbstractArraySubject 1
#define INCLUDE_ComGoogleCommonTruthAbstractArraySubject 1
#include "com/google/common/truth/AbstractArraySubject.h"

@class ComGoogleCommonTruthFailureMetadata;
@class ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable;
@class IOSFloatArray;
@class JavaLangDouble;

@interface ComGoogleCommonTruthPrimitiveFloatArraySubject : ComGoogleCommonTruthAbstractArraySubject

#pragma mark Public

- (void)isEqualToWithId:(id)expected;

- (void)isNotEqualToWithId:(id)expected;

- (ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable *)usingExactEquality;

- (ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable *)usingToleranceWithDouble:(jdouble)tolerance;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)metadata
                                             withFloatArray:(IOSFloatArray *)o
                                               withNSString:(NSString *)typeDescription;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivateWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)arg0
                                                                   withId:(id)arg1
                                                             withNSString:(NSString *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonTruthPrimitiveFloatArraySubject)

FOUNDATION_EXPORT void ComGoogleCommonTruthPrimitiveFloatArraySubject_initWithComGoogleCommonTruthFailureMetadata_withFloatArray_withNSString_(ComGoogleCommonTruthPrimitiveFloatArraySubject *self, ComGoogleCommonTruthFailureMetadata *metadata, IOSFloatArray *o, NSString *typeDescription);

FOUNDATION_EXPORT ComGoogleCommonTruthPrimitiveFloatArraySubject *new_ComGoogleCommonTruthPrimitiveFloatArraySubject_initWithComGoogleCommonTruthFailureMetadata_withFloatArray_withNSString_(ComGoogleCommonTruthFailureMetadata *metadata, IOSFloatArray *o, NSString *typeDescription) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonTruthPrimitiveFloatArraySubject *create_ComGoogleCommonTruthPrimitiveFloatArraySubject_initWithComGoogleCommonTruthFailureMetadata_withFloatArray_withNSString_(ComGoogleCommonTruthFailureMetadata *metadata, IOSFloatArray *o, NSString *typeDescription);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthPrimitiveFloatArraySubject)

#endif

#if !defined (ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable_) && (INCLUDE_ALL_ComGoogleCommonTruthPrimitiveFloatArraySubject || defined(INCLUDE_ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable))
#define ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable_

#define RESTRICT_ComGoogleCommonTruthIterableSubject 1
#define INCLUDE_ComGoogleCommonTruthIterableSubject_UsingCorrespondence 1
#include "com/google/common/truth/IterableSubject.h"

@class ComGoogleCommonTruthCorrespondence;
@class ComGoogleCommonTruthIterableSubject;
@class ComGoogleCommonTruthIterableSubject_UsingCorrespondence_Pairer;
@class IOSFloatArray;
@protocol ComGoogleCommonTruthOrdered;

@interface ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable : ComGoogleCommonTruthIterableSubject_UsingCorrespondence

#pragma mark Public

- (void)containsAnyOfWithFloatArray:(IOSFloatArray *)expected;

- (id<ComGoogleCommonTruthOrdered>)containsAtLeastWithFloatArray:(IOSFloatArray *)expected;

- (id<ComGoogleCommonTruthOrdered>)containsExactlyWithFloatArray:(IOSFloatArray *)expected;

- (void)containsNoneOfWithFloatArray:(IOSFloatArray *)excluded;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonTruthCorrespondence:(ComGoogleCommonTruthCorrespondence *)correspondence
                   withComGoogleCommonTruthIterableSubject:(ComGoogleCommonTruthIterableSubject *)subject;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonTruthIterableSubject:(ComGoogleCommonTruthIterableSubject *)arg0
                     withComGoogleCommonTruthCorrespondence:(ComGoogleCommonTruthCorrespondence *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithComGoogleCommonTruthIterableSubject:(ComGoogleCommonTruthIterableSubject *)arg0
                     withComGoogleCommonTruthCorrespondence:(ComGoogleCommonTruthCorrespondence *)arg1
withComGoogleCommonTruthIterableSubject_UsingCorrespondence_Pairer:(ComGoogleCommonTruthIterableSubject_UsingCorrespondence_Pairer *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable)

FOUNDATION_EXPORT void ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable_initWithComGoogleCommonTruthCorrespondence_withComGoogleCommonTruthIterableSubject_(ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable *self, ComGoogleCommonTruthCorrespondence *correspondence, ComGoogleCommonTruthIterableSubject *subject);

FOUNDATION_EXPORT ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable *new_ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable_initWithComGoogleCommonTruthCorrespondence_withComGoogleCommonTruthIterableSubject_(ComGoogleCommonTruthCorrespondence *correspondence, ComGoogleCommonTruthIterableSubject *subject) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable *create_ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable_initWithComGoogleCommonTruthCorrespondence_withComGoogleCommonTruthIterableSubject_(ComGoogleCommonTruthCorrespondence *correspondence, ComGoogleCommonTruthIterableSubject *subject);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthPrimitiveFloatArraySubject_FloatArrayAsIterable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonTruthPrimitiveFloatArraySubject")