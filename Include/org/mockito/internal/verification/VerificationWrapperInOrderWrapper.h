//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/verification/VerificationWrapperInOrderWrapper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper")
#ifdef RESTRICT_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper
#define INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper

#if !defined (OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper_) && (INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper || defined(INCLUDE_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper))
#define OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper_

#define RESTRICT_OrgMockitoVerificationVerificationMode 1
#define INCLUDE_OrgMockitoVerificationVerificationMode 1
#include "org/mockito/verification/VerificationMode.h"

@class OrgMockitoInternalInOrderImpl;
@class OrgMockitoInternalVerificationVerificationWrapper;
@protocol OrgMockitoInternalVerificationApiVerificationData;

@interface OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper : NSObject < OrgMockitoVerificationVerificationMode >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalVerificationVerificationWrapper:(OrgMockitoInternalVerificationVerificationWrapper *)verificationWrapper
                                        withOrgMockitoInternalInOrderImpl:(OrgMockitoInternalInOrderImpl *)inOrder;

- (id<OrgMockitoVerificationVerificationMode>)description__WithNSString:(NSString *)description_;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper_initWithOrgMockitoInternalVerificationVerificationWrapper_withOrgMockitoInternalInOrderImpl_(OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper *self, OrgMockitoInternalVerificationVerificationWrapper *verificationWrapper, OrgMockitoInternalInOrderImpl *inOrder);

FOUNDATION_EXPORT OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper *new_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper_initWithOrgMockitoInternalVerificationVerificationWrapper_withOrgMockitoInternalInOrderImpl_(OrgMockitoInternalVerificationVerificationWrapper *verificationWrapper, OrgMockitoInternalInOrderImpl *inOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper *create_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper_initWithOrgMockitoInternalVerificationVerificationWrapper_withOrgMockitoInternalInOrderImpl_(OrgMockitoInternalVerificationVerificationWrapper *verificationWrapper, OrgMockitoInternalInOrderImpl *inOrder);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWrapperInOrderWrapper")