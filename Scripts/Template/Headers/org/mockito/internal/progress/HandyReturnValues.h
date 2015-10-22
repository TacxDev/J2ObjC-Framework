//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/progress/HandyReturnValues.java
//

#ifndef _OrgMockitoInternalProgressHandyReturnValues_H_
#define _OrgMockitoInternalProgressHandyReturnValues_H_

#include "../../../../J2ObjC_header.h"

@class IOSClass;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface OrgMockitoInternalProgressHandyReturnValues : NSObject

#pragma mark Public

- (instancetype)init;

- (jchar)returnChar;

- (jboolean)returnFalse;

- (id)returnForWithIOSClass:(IOSClass *)clazz;

- (id)returnForWithId:(id)instance;

- (id<JavaUtilList>)returnList;

- (id<JavaUtilMap>)returnMap;

- (id)returnNull;

- (id<JavaUtilSet>)returnSet;

- (NSString *)returnString;

- (jbyte)returnZero;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalProgressHandyReturnValues)

FOUNDATION_EXPORT void OrgMockitoInternalProgressHandyReturnValues_init(OrgMockitoInternalProgressHandyReturnValues *self);

FOUNDATION_EXPORT OrgMockitoInternalProgressHandyReturnValues *new_OrgMockitoInternalProgressHandyReturnValues_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressHandyReturnValues)

#endif // _OrgMockitoInternalProgressHandyReturnValues_H_
