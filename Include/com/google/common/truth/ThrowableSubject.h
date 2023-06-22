//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/truth/build_result/java/com/google/common/truth/ThrowableSubject.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonTruthThrowableSubject")
#ifdef RESTRICT_ComGoogleCommonTruthThrowableSubject
#define INCLUDE_ALL_ComGoogleCommonTruthThrowableSubject 0
#else
#define INCLUDE_ALL_ComGoogleCommonTruthThrowableSubject 1
#endif
#undef RESTRICT_ComGoogleCommonTruthThrowableSubject

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonTruthThrowableSubject_) && (INCLUDE_ALL_ComGoogleCommonTruthThrowableSubject || defined(INCLUDE_ComGoogleCommonTruthThrowableSubject))
#define ComGoogleCommonTruthThrowableSubject_

#define RESTRICT_ComGoogleCommonTruthSubject 1
#define INCLUDE_ComGoogleCommonTruthSubject 1
#include "com/google/common/truth/Subject.h"

@class ComGoogleCommonTruthFailureMetadata;
@class ComGoogleCommonTruthStringSubject;
@class JavaLangThrowable;

@interface ComGoogleCommonTruthThrowableSubject : ComGoogleCommonTruthSubject

#pragma mark Public

- (ComGoogleCommonTruthThrowableSubject *)hasCauseThat;

- (ComGoogleCommonTruthStringSubject *)hasMessageThat;

#pragma mark Protected

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)metadata
                                      withJavaLangThrowable:(JavaLangThrowable *)throwable;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)metadata
                                      withJavaLangThrowable:(JavaLangThrowable *)throwable
                                               withNSString:(NSString *)typeDescription;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)arg0
                                                     withId:(id)arg1 NS_UNAVAILABLE;

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)arg0
                                                     withId:(id)arg1
                                               withNSString:(NSString *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonTruthThrowableSubject)

FOUNDATION_EXPORT void ComGoogleCommonTruthThrowableSubject_initWithComGoogleCommonTruthFailureMetadata_withJavaLangThrowable_(ComGoogleCommonTruthThrowableSubject *self, ComGoogleCommonTruthFailureMetadata *metadata, JavaLangThrowable *throwable);

FOUNDATION_EXPORT ComGoogleCommonTruthThrowableSubject *new_ComGoogleCommonTruthThrowableSubject_initWithComGoogleCommonTruthFailureMetadata_withJavaLangThrowable_(ComGoogleCommonTruthFailureMetadata *metadata, JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonTruthThrowableSubject *create_ComGoogleCommonTruthThrowableSubject_initWithComGoogleCommonTruthFailureMetadata_withJavaLangThrowable_(ComGoogleCommonTruthFailureMetadata *metadata, JavaLangThrowable *throwable);

FOUNDATION_EXPORT void ComGoogleCommonTruthThrowableSubject_initWithComGoogleCommonTruthFailureMetadata_withJavaLangThrowable_withNSString_(ComGoogleCommonTruthThrowableSubject *self, ComGoogleCommonTruthFailureMetadata *metadata, JavaLangThrowable *throwable, NSString *typeDescription);

FOUNDATION_EXPORT ComGoogleCommonTruthThrowableSubject *new_ComGoogleCommonTruthThrowableSubject_initWithComGoogleCommonTruthFailureMetadata_withJavaLangThrowable_withNSString_(ComGoogleCommonTruthFailureMetadata *metadata, JavaLangThrowable *throwable, NSString *typeDescription) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonTruthThrowableSubject *create_ComGoogleCommonTruthThrowableSubject_initWithComGoogleCommonTruthFailureMetadata_withJavaLangThrowable_withNSString_(ComGoogleCommonTruthFailureMetadata *metadata, JavaLangThrowable *throwable, NSString *typeDescription);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthThrowableSubject)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonTruthThrowableSubject")