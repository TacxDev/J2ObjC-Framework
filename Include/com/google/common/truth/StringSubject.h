//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/truth/build_result/java/com/google/common/truth/StringSubject.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonTruthStringSubject")
#ifdef RESTRICT_ComGoogleCommonTruthStringSubject
#define INCLUDE_ALL_ComGoogleCommonTruthStringSubject 0
#else
#define INCLUDE_ALL_ComGoogleCommonTruthStringSubject 1
#endif
#undef RESTRICT_ComGoogleCommonTruthStringSubject

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonTruthStringSubject_) && (INCLUDE_ALL_ComGoogleCommonTruthStringSubject || defined(INCLUDE_ComGoogleCommonTruthStringSubject))
#define ComGoogleCommonTruthStringSubject_

#define RESTRICT_ComGoogleCommonTruthComparableSubject 1
#define INCLUDE_ComGoogleCommonTruthComparableSubject 1
#include "com/google/common/truth/ComparableSubject.h"

@class ComGoogleCommonTruthFailureMetadata;
@class ComGoogleCommonTruthStringSubject_CaseInsensitiveStringComparison;
@class JavaLangInteger;
@class JavaUtilRegexPattern;
@protocol JavaLangCharSequence;
@protocol JavaLangComparable;

@interface ComGoogleCommonTruthStringSubject : ComGoogleCommonTruthComparableSubject

#pragma mark Public

- (void)containsWithJavaLangCharSequence:(id<JavaLangCharSequence>)string;

- (void)containsMatchWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)regex;

- (void)containsMatchWithNSString:(NSString *)regex;

- (void)doesNotContainWithJavaLangCharSequence:(id<JavaLangCharSequence>)string;

- (void)doesNotContainMatchWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)regex;

- (void)doesNotContainMatchWithNSString:(NSString *)regex;

- (void)doesNotMatchWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)regex;

- (void)doesNotMatchWithNSString:(NSString *)regex;

- (void)endsWithWithNSString:(NSString *)string;

- (void)hasLengthWithInt:(jint)expectedLength;

- (ComGoogleCommonTruthStringSubject_CaseInsensitiveStringComparison *)ignoringCase;

- (void)isEmpty;

- (void)isEquivalentAccordingToCompareToWithJavaLangComparable:(NSString *)other;

- (void)isNotEmpty;

- (void)matchesWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)regex;

- (void)matchesWithNSString:(NSString *)regex;

- (void)startsWithWithNSString:(NSString *)string;

#pragma mark Protected

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)metadata
                                               withNSString:(NSString *)string;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonTruthFailureMetadata:(ComGoogleCommonTruthFailureMetadata *)arg0
                                     withJavaLangComparable:(id<JavaLangComparable>)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonTruthStringSubject)

FOUNDATION_EXPORT void ComGoogleCommonTruthStringSubject_initWithComGoogleCommonTruthFailureMetadata_withNSString_(ComGoogleCommonTruthStringSubject *self, ComGoogleCommonTruthFailureMetadata *metadata, NSString *string);

FOUNDATION_EXPORT ComGoogleCommonTruthStringSubject *new_ComGoogleCommonTruthStringSubject_initWithComGoogleCommonTruthFailureMetadata_withNSString_(ComGoogleCommonTruthFailureMetadata *metadata, NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonTruthStringSubject *create_ComGoogleCommonTruthStringSubject_initWithComGoogleCommonTruthFailureMetadata_withNSString_(ComGoogleCommonTruthFailureMetadata *metadata, NSString *string);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthStringSubject)

#endif

#if !defined (ComGoogleCommonTruthStringSubject_CaseInsensitiveStringComparison_) && (INCLUDE_ALL_ComGoogleCommonTruthStringSubject || defined(INCLUDE_ComGoogleCommonTruthStringSubject_CaseInsensitiveStringComparison))
#define ComGoogleCommonTruthStringSubject_CaseInsensitiveStringComparison_

@protocol JavaLangCharSequence;

@interface ComGoogleCommonTruthStringSubject_CaseInsensitiveStringComparison : NSObject

#pragma mark Public

- (void)containsWithJavaLangCharSequence:(id<JavaLangCharSequence>)expectedSequence;

- (void)doesNotContainWithJavaLangCharSequence:(id<JavaLangCharSequence>)expectedSequence;

- (void)isEqualToWithNSString:(NSString *)expected;

- (void)isNotEqualToWithNSString:(NSString *)unexpected;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonTruthStringSubject_CaseInsensitiveStringComparison)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthStringSubject_CaseInsensitiveStringComparison)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonTruthStringSubject")