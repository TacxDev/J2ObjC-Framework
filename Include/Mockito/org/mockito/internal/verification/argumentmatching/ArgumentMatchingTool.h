//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/verification/argumentmatching/ArgumentMatchingTool.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool")
#ifdef RESTRICT_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool
#define INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool

#if !defined (OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_) && (INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool || defined(INCLUDE_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool))
#define OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_

@class IOSObjectArray;
@protocol JavaUtilList;

@interface OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool : NSObject

#pragma mark Public

+ (IOSObjectArray *)getSuspiciouslyNotMatchingArgsIndexesWithJavaUtilList:(id<JavaUtilList>)matchers
                                                        withNSObjectArray:(IOSObjectArray *)arguments;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool)

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_getSuspiciouslyNotMatchingArgsIndexesWithJavaUtilList_withNSObjectArray_(id<JavaUtilList> matchers, IOSObjectArray *arguments);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool")
