//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/argumentmatching/ArgumentMatchingTool.java
//

#ifndef _OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_H_
#define _OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_H_

#include "../../../../../J2ObjC_header.h"

@class IOSObjectArray;
@protocol JavaUtilList;

@interface OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool : NSObject

#pragma mark Public

- (instancetype)init;

- (IOSObjectArray *)getSuspiciouslyNotMatchingArgsIndexesWithJavaUtilList:(id<JavaUtilList>)matchers
                                                        withNSObjectArray:(IOSObjectArray *)arguments;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_init(OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool *new_OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool)

#endif // _OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_H_
