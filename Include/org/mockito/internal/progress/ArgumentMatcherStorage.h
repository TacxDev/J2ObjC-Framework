//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/progress/ArgumentMatcherStorage.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage")
#ifdef RESTRICT_OrgMockitoInternalProgressArgumentMatcherStorage
#define INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage 0
#else
#define INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage 1
#endif
#undef RESTRICT_OrgMockitoInternalProgressArgumentMatcherStorage

#if !defined (OrgMockitoInternalProgressArgumentMatcherStorage_) && (INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage || defined(INCLUDE_OrgMockitoInternalProgressArgumentMatcherStorage))
#define OrgMockitoInternalProgressArgumentMatcherStorage_

@protocol JavaUtilList;
@protocol OrgMockitoArgumentMatcher;

@protocol OrgMockitoInternalProgressArgumentMatcherStorage < JavaObject >

- (void)reportMatcherWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

- (id<JavaUtilList>)pullLocalizedMatchers;

- (void)reportAnd;

- (void)reportNot;

- (void)reportOr;

- (void)validateState;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalProgressArgumentMatcherStorage)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressArgumentMatcherStorage)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage")
