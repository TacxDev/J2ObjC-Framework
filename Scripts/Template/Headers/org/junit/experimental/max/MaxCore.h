//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/experimental/max/MaxCore.java
//

#ifndef _OrgJunitExperimentalMaxMaxCore_H_
#define _OrgJunitExperimentalMaxMaxCore_H_

#include "../../../../J2ObjC_header.h"

@class IOSClass;
@class JavaIoFile;
@class OrgJunitRunnerJUnitCore;
@class OrgJunitRunnerRequest;
@class OrgJunitRunnerResult;
@protocol JavaUtilList;

@interface OrgJunitExperimentalMaxMaxCore : NSObject

#pragma mark Public

+ (OrgJunitExperimentalMaxMaxCore *)forFolderWithNSString:(NSString *)folderName;

- (OrgJunitRunnerResult *)runWithIOSClass:(IOSClass *)testClass;

- (OrgJunitRunnerResult *)runWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request;

- (OrgJunitRunnerResult *)runWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request
                           withOrgJunitRunnerJUnitCore:(OrgJunitRunnerJUnitCore *)core;

- (id<JavaUtilList>)sortedLeavesForTestWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request;

- (OrgJunitRunnerRequest *)sortRequestWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request;

+ (OrgJunitExperimentalMaxMaxCore *)storedLocallyWithJavaIoFile:(JavaIoFile *)storedResults;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalMaxMaxCore)

FOUNDATION_EXPORT OrgJunitExperimentalMaxMaxCore *OrgJunitExperimentalMaxMaxCore_forFolderWithNSString_(NSString *folderName);

FOUNDATION_EXPORT OrgJunitExperimentalMaxMaxCore *OrgJunitExperimentalMaxMaxCore_storedLocallyWithJavaIoFile_(JavaIoFile *storedResults);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalMaxMaxCore)

#endif // _OrgJunitExperimentalMaxMaxCore_H_
