//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/session/DefaultMockitoSessionBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalSessionDefaultMockitoSessionBuilder")
#ifdef RESTRICT_OrgMockitoInternalSessionDefaultMockitoSessionBuilder
#define INCLUDE_ALL_OrgMockitoInternalSessionDefaultMockitoSessionBuilder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalSessionDefaultMockitoSessionBuilder 1
#endif
#undef RESTRICT_OrgMockitoInternalSessionDefaultMockitoSessionBuilder

#if !defined (OrgMockitoInternalSessionDefaultMockitoSessionBuilder_) && (INCLUDE_ALL_OrgMockitoInternalSessionDefaultMockitoSessionBuilder || defined(INCLUDE_OrgMockitoInternalSessionDefaultMockitoSessionBuilder))
#define OrgMockitoInternalSessionDefaultMockitoSessionBuilder_

#define RESTRICT_OrgMockitoSessionMockitoSessionBuilder 1
#define INCLUDE_OrgMockitoSessionMockitoSessionBuilder 1
#include "org/mockito/session/MockitoSessionBuilder.h"

@class IOSObjectArray;
@class OrgMockitoQualityStrictness;
@protocol OrgMockitoMockitoSession;
@protocol OrgMockitoSessionMockitoSessionLogger;

@interface OrgMockitoInternalSessionDefaultMockitoSessionBuilder : NSObject < OrgMockitoSessionMockitoSessionBuilder >

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoSessionMockitoSessionBuilder>)initMocksWithId:(id)testClassInstance OBJC_METHOD_FAMILY_NONE;

- (id<OrgMockitoSessionMockitoSessionBuilder>)initMocksWithNSObjectArray:(IOSObjectArray *)testClassInstances OBJC_METHOD_FAMILY_NONE;

- (id<OrgMockitoSessionMockitoSessionBuilder>)loggerWithOrgMockitoSessionMockitoSessionLogger:(id<OrgMockitoSessionMockitoSessionLogger>)logger;

- (id<OrgMockitoSessionMockitoSessionBuilder>)nameWithNSString:(NSString *)name;

- (id<OrgMockitoMockitoSession>)startMocking;

- (id<OrgMockitoSessionMockitoSessionBuilder>)strictnessWithOrgMockitoQualityStrictness:(OrgMockitoQualityStrictness *)strictness;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalSessionDefaultMockitoSessionBuilder)

FOUNDATION_EXPORT void OrgMockitoInternalSessionDefaultMockitoSessionBuilder_init(OrgMockitoInternalSessionDefaultMockitoSessionBuilder *self);

FOUNDATION_EXPORT OrgMockitoInternalSessionDefaultMockitoSessionBuilder *new_OrgMockitoInternalSessionDefaultMockitoSessionBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalSessionDefaultMockitoSessionBuilder *create_OrgMockitoInternalSessionDefaultMockitoSessionBuilder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalSessionDefaultMockitoSessionBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalSessionDefaultMockitoSessionBuilder")
