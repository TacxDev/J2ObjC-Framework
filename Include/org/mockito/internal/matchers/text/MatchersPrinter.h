//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/matchers/text/MatchersPrinter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersTextMatchersPrinter")
#ifdef RESTRICT_OrgMockitoInternalMatchersTextMatchersPrinter
#define INCLUDE_ALL_OrgMockitoInternalMatchersTextMatchersPrinter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersTextMatchersPrinter 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersTextMatchersPrinter

#if !defined (OrgMockitoInternalMatchersTextMatchersPrinter_) && (INCLUDE_ALL_OrgMockitoInternalMatchersTextMatchersPrinter || defined(INCLUDE_OrgMockitoInternalMatchersTextMatchersPrinter))
#define OrgMockitoInternalMatchersTextMatchersPrinter_

@class OrgMockitoInternalReportingPrintSettings;
@protocol JavaUtilList;

@interface OrgMockitoInternalMatchersTextMatchersPrinter : NSObject

#pragma mark Public

- (instancetype)init;

- (NSString *)getArgumentsBlockWithJavaUtilList:(id<JavaUtilList>)matchers
   withOrgMockitoInternalReportingPrintSettings:(OrgMockitoInternalReportingPrintSettings *)printSettings;

- (NSString *)getArgumentsLineWithJavaUtilList:(id<JavaUtilList>)matchers
  withOrgMockitoInternalReportingPrintSettings:(OrgMockitoInternalReportingPrintSettings *)printSettings;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersTextMatchersPrinter)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersTextMatchersPrinter_init(OrgMockitoInternalMatchersTextMatchersPrinter *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersTextMatchersPrinter *new_OrgMockitoInternalMatchersTextMatchersPrinter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersTextMatchersPrinter *create_OrgMockitoInternalMatchersTextMatchersPrinter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersTextMatchersPrinter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersTextMatchersPrinter")
