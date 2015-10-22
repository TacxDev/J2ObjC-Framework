//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/ios/IosMockMaker.java
//

#ifndef _OrgMockitoInternalCreationIosIosMockMaker_H_
#define _OrgMockitoInternalCreationIosIosMockMaker_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../org/mockito/plugins/MockMaker.h"

@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangReflectInvocationHandler;
@protocol OrgMockitoInvocationMockHandler;
@protocol OrgMockitoMockMockCreationSettings;

@interface OrgMockitoInternalCreationIosIosMockMaker : NSObject < OrgMockitoPluginsMockMaker >

#pragma mark Public

- (instancetype)init;

- (id)createMockWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings
                   withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

- (id<OrgMockitoInvocationMockHandler>)getHandlerWithId:(id)mock;

- (void)resetMockWithId:(id)mock
withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)newHandler
withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

#pragma mark Package-Private

- (IOSClass *)getProxyClassWithIOSClass:(IOSClass *)typeToMock
                      withIOSClassArray:(IOSObjectArray *)interfaces;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalCreationIosIosMockMaker)

FOUNDATION_EXPORT void OrgMockitoInternalCreationIosIosMockMaker_init(OrgMockitoInternalCreationIosIosMockMaker *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationIosIosMockMaker *new_OrgMockitoInternalCreationIosIosMockMaker_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationIosIosMockMaker)

@interface OrgMockitoInternalCreationIosIosMockMaker_ClassProxy : NSObject {
 @public
  id<JavaLangReflectInvocationHandler> $__handler_;
}

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaLangReflectInvocationHandler>)getHandler;

- (void)setHandlerWithJavaLangReflectInvocationHandler:(id<JavaLangReflectInvocationHandler>)handler;


@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationIosIosMockMaker_ClassProxy)

J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationIosIosMockMaker_ClassProxy, $__handler_, id<JavaLangReflectInvocationHandler>)

FOUNDATION_EXPORT void OrgMockitoInternalCreationIosIosMockMaker_ClassProxy_init(OrgMockitoInternalCreationIosIosMockMaker_ClassProxy *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationIosIosMockMaker_ClassProxy *new_OrgMockitoInternalCreationIosIosMockMaker_ClassProxy_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationIosIosMockMaker_ClassProxy)

#endif // _OrgMockitoInternalCreationIosIosMockMaker_H_
