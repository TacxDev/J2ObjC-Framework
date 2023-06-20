//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/reporting/PrintSettings.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalReportingPrintSettings")
#ifdef RESTRICT_OrgMockitoInternalReportingPrintSettings
#define INCLUDE_ALL_OrgMockitoInternalReportingPrintSettings 0
#else
#define INCLUDE_ALL_OrgMockitoInternalReportingPrintSettings 1
#endif
#undef RESTRICT_OrgMockitoInternalReportingPrintSettings

#if !defined (OrgMockitoInternalReportingPrintSettings_) && (INCLUDE_ALL_OrgMockitoInternalReportingPrintSettings || defined(INCLUDE_OrgMockitoInternalReportingPrintSettings))
#define OrgMockitoInternalReportingPrintSettings_

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationMatchableInvocation;

@interface OrgMockitoInternalReportingPrintSettings : NSObject

#pragma mark Public

- (instancetype)init;

- (jboolean)extraTypeInfoForWithInt:(jint)argumentIndex;

- (jboolean)isMultiline;

- (NSString *)printWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (NSString *)printWithJavaUtilList:(id<JavaUtilList>)matchers
 withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (NSString *)printWithOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)invocation;

- (void)setMatchersToBeDescribedWithExtraTypeInfoWithJavaLangIntegerArray:(IOSObjectArray *)indexesOfMatchers;

- (void)setMultilineWithBoolean:(jboolean)multiline;

+ (OrgMockitoInternalReportingPrintSettings *)verboseMatchersWithJavaLangIntegerArray:(IOSObjectArray *)indexesOfMatchers;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalReportingPrintSettings)

inline jint OrgMockitoInternalReportingPrintSettings_get_MAX_LINE_LENGTH(void);
#define OrgMockitoInternalReportingPrintSettings_MAX_LINE_LENGTH 45
J2OBJC_STATIC_FIELD_CONSTANT(OrgMockitoInternalReportingPrintSettings, MAX_LINE_LENGTH, jint)

FOUNDATION_EXPORT void OrgMockitoInternalReportingPrintSettings_init(OrgMockitoInternalReportingPrintSettings *self);

FOUNDATION_EXPORT OrgMockitoInternalReportingPrintSettings *new_OrgMockitoInternalReportingPrintSettings_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalReportingPrintSettings *create_OrgMockitoInternalReportingPrintSettings_init(void);

FOUNDATION_EXPORT OrgMockitoInternalReportingPrintSettings *OrgMockitoInternalReportingPrintSettings_verboseMatchersWithJavaLangIntegerArray_(IOSObjectArray *indexesOfMatchers);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalReportingPrintSettings)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalReportingPrintSettings")
