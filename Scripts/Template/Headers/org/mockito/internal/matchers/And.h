//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/And.java
//

#ifndef _OrgMockitoInternalMatchersAnd_H_
#define _OrgMockitoInternalMatchersAnd_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../java/io/Serializable.h"
#include "../../../../org/mockito/ArgumentMatcher.h"

@protocol JavaUtilList;
@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersAnd : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)matchers;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersAnd)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersAnd_initWithJavaUtilList_(OrgMockitoInternalMatchersAnd *self, id<JavaUtilList> matchers);

FOUNDATION_EXPORT OrgMockitoInternalMatchersAnd *new_OrgMockitoInternalMatchersAnd_initWithJavaUtilList_(id<JavaUtilList> matchers) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersAnd)

#endif // _OrgMockitoInternalMatchersAnd_H_
