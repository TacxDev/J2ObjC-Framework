//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/truth/build_result/java/com/google/common/truth/GuavaOptionalSubject.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonTruthGuavaOptionalSubject")
#ifdef RESTRICT_ComGoogleCommonTruthGuavaOptionalSubject
#define INCLUDE_ALL_ComGoogleCommonTruthGuavaOptionalSubject 0
#else
#define INCLUDE_ALL_ComGoogleCommonTruthGuavaOptionalSubject 1
#endif
#undef RESTRICT_ComGoogleCommonTruthGuavaOptionalSubject

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonTruthGuavaOptionalSubject_) && (INCLUDE_ALL_ComGoogleCommonTruthGuavaOptionalSubject || defined(INCLUDE_ComGoogleCommonTruthGuavaOptionalSubject))
#define ComGoogleCommonTruthGuavaOptionalSubject_

#define RESTRICT_ComGoogleCommonTruthSubject 1
#define INCLUDE_ComGoogleCommonTruthSubject 1
#include "com/google/common/truth/Subject.h"

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonTruthFailureMetadata;

@interface ComGoogleCommonTruthGuavaOptionalSubject : ComGoogleCommonTruthSubject

#pragma mark Public

- (void)hasValueWithId:(id)expected;

- (void)isAbsent;

- (void)isPresent;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)metadata
                            withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)actual
                                               withNSString:(NSString *)typeDescription;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)arg0
                                                     withId:(id)arg1 NS_UNAVAILABLE;

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)arg0
                                                     withId:(id)arg1
                                               withNSString:(NSString *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonTruthGuavaOptionalSubject)

FOUNDATION_EXPORT void ComGoogleCommonTruthGuavaOptionalSubject_initWithComGoogleCommonTruthFailureMetadata_withComGoogleCommonBaseOptional_withNSString_(ComGoogleCommonTruthGuavaOptionalSubject *self, ComGoogleCommonTruthFailureMetadata *metadata, ComGoogleCommonBaseOptional *actual, NSString *typeDescription);

FOUNDATION_EXPORT ComGoogleCommonTruthGuavaOptionalSubject *new_ComGoogleCommonTruthGuavaOptionalSubject_initWithComGoogleCommonTruthFailureMetadata_withComGoogleCommonBaseOptional_withNSString_(ComGoogleCommonTruthFailureMetadata *metadata, ComGoogleCommonBaseOptional *actual, NSString *typeDescription) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonTruthGuavaOptionalSubject *create_ComGoogleCommonTruthGuavaOptionalSubject_initWithComGoogleCommonTruthFailureMetadata_withComGoogleCommonBaseOptional_withNSString_(ComGoogleCommonTruthFailureMetadata *metadata, ComGoogleCommonBaseOptional *actual, NSString *typeDescription);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthGuavaOptionalSubject)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonTruthGuavaOptionalSubject")
