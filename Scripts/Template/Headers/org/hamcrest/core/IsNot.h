//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/IsNot.java
//

#ifndef _OrgHamcrestCoreIsNot_H_
#define _OrgHamcrestCoreIsNot_H_

#include "../../../J2ObjC_header.h"
#include "../../../org/hamcrest/BaseMatcher.h"

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIsNot : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)arg;

+ (id<OrgHamcrestMatcher>)not__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (id<OrgHamcrestMatcher>)not__WithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsNot)

FOUNDATION_EXPORT void OrgHamcrestCoreIsNot_initWithOrgHamcrestMatcher_(OrgHamcrestCoreIsNot *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreIsNot *new_OrgHamcrestCoreIsNot_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsNot_not__WithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsNot_not__WithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsNot)

#endif // _OrgHamcrestCoreIsNot_H_
