//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/session/MockitoSessionBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoSessionMockitoSessionBuilder")
#ifdef RESTRICT_OrgMockitoSessionMockitoSessionBuilder
#define INCLUDE_ALL_OrgMockitoSessionMockitoSessionBuilder 0
#else
#define INCLUDE_ALL_OrgMockitoSessionMockitoSessionBuilder 1
#endif
#undef RESTRICT_OrgMockitoSessionMockitoSessionBuilder

#if !defined (OrgMockitoSessionMockitoSessionBuilder_) && (INCLUDE_ALL_OrgMockitoSessionMockitoSessionBuilder || defined(INCLUDE_OrgMockitoSessionMockitoSessionBuilder))
#define OrgMockitoSessionMockitoSessionBuilder_

@class IOSObjectArray;
@class OrgMockitoQualityStrictness;
@protocol OrgMockitoMockitoSession;
@protocol OrgMockitoSessionMockitoSessionLogger;

@protocol OrgMockitoSessionMockitoSessionBuilder < JavaObject >

- (id<OrgMockitoSessionMockitoSessionBuilder>)initMocksWithId:(id)testClassInstance OBJC_METHOD_FAMILY_NONE;

- (id<OrgMockitoSessionMockitoSessionBuilder>)initMocksWithNSObjectArray:(IOSObjectArray *)testClassInstances OBJC_METHOD_FAMILY_NONE;

- (id<OrgMockitoSessionMockitoSessionBuilder>)nameWithNSString:(NSString *)name;

- (id<OrgMockitoSessionMockitoSessionBuilder>)strictnessWithOrgMockitoQualityStrictness:(OrgMockitoQualityStrictness *)strictness;

- (id<OrgMockitoSessionMockitoSessionBuilder>)loggerWithOrgMockitoSessionMockitoSessionLogger:(id<OrgMockitoSessionMockitoSessionLogger>)logger;

- (id<OrgMockitoMockitoSession>)startMocking;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoSessionMockitoSessionBuilder)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoSessionMockitoSessionBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoSessionMockitoSessionBuilder")
