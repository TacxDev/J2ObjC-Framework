//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/MockSettingsImpl.java
//

#ifndef _OrgMockitoInternalCreationMockSettingsImpl_H_
#define _OrgMockitoInternalCreationMockSettingsImpl_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../org/mockito/MockSettings.h"
#include "../../../../org/mockito/internal/creation/settings/CreationSettings.h"
#include "../../../../org/mockito/mock/MockCreationSettings.h"

@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilList;
@protocol JavaUtilSet;
@protocol OrgMockitoMockMockName;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalCreationMockSettingsImpl : OrgMockitoInternalCreationSettingsCreationSettings < OrgMockitoMockSettings, OrgMockitoMockMockCreationSettings >

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoMockMockCreationSettings>)confirmWithIOSClass:(IOSClass *)typeToMock;

- (id<OrgMockitoMockSettings>)defaultAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)defaultAnswer;

- (id<OrgMockitoMockSettings>)extraInterfacesWithIOSClassArray:(IOSObjectArray *)extraInterfaces;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

- (id<JavaUtilSet>)getExtraInterfaces;

- (id<JavaUtilList>)getInvocationListeners;

- (id<OrgMockitoMockMockName>)getMockName;

- (id)getSpiedInstance;

- (IOSClass *)getTypeToMock;

- (jboolean)hasInvocationListeners;

- (id<OrgMockitoMockSettings>)invocationListenersWithOrgMockitoListenersInvocationListenerArray:(IOSObjectArray *)listeners;

- (jboolean)isSerializable;

- (id<OrgMockitoMockSettings>)nameWithNSString:(NSString *)name;

- (id<OrgMockitoMockSettings>)serializable;

- (id<OrgMockitoMockSettings>)spiedInstanceWithId:(id)spiedInstance;

- (id<OrgMockitoMockSettings>)verboseLogging;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationMockSettingsImpl)

FOUNDATION_EXPORT void OrgMockitoInternalCreationMockSettingsImpl_init(OrgMockitoInternalCreationMockSettingsImpl *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationMockSettingsImpl *new_OrgMockitoInternalCreationMockSettingsImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationMockSettingsImpl)

#endif // _OrgMockitoInternalCreationMockSettingsImpl_H_
