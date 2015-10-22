//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/matchers/ThrowableMessageMatcher.java
//

#ifndef _OrgJunitInternalMatchersThrowableMessageMatcher_H_
#define _OrgJunitInternalMatchersThrowableMessageMatcher_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../org/hamcrest/TypeSafeMatcher.h"

@class JavaLangThrowable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgJunitInternalMatchersThrowableMessageMatcher : OrgHamcrestTypeSafeMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)hasMessageWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

#pragma mark Protected

- (void)describeMismatchSafelyWithId:(JavaLangThrowable *)item
          withOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesSafelyWithId:(JavaLangThrowable *)item;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalMatchersThrowableMessageMatcher)

FOUNDATION_EXPORT void OrgJunitInternalMatchersThrowableMessageMatcher_initWithOrgHamcrestMatcher_(OrgJunitInternalMatchersThrowableMessageMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalMatchersThrowableMessageMatcher *new_OrgJunitInternalMatchersThrowableMessageMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitInternalMatchersThrowableMessageMatcher_hasMessageWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalMatchersThrowableMessageMatcher)

#endif // _OrgJunitInternalMatchersThrowableMessageMatcher_H_
