//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/DOMErrorImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomDOMErrorImpl_H_
#define _OrgApacheHarmonyXmlDomDOMErrorImpl_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../org/w3c/dom/DOMError.h"

@protocol OrgW3cDomDOMLocator;

@interface OrgApacheHarmonyXmlDomDOMErrorImpl : NSObject < OrgW3cDomDOMError >

#pragma mark Public

- (instancetype)initWithShort:(jshort)severity
                 withNSString:(NSString *)type;

- (id<OrgW3cDomDOMLocator>)getLocation;

- (NSString *)getMessage;

- (id)getRelatedData;

- (id)getRelatedException;

- (jshort)getSeverity;

- (NSString *)getType;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonyXmlDomDOMErrorImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomDOMErrorImpl_initWithShort_withNSString_(OrgApacheHarmonyXmlDomDOMErrorImpl *self, jshort severity, NSString *type);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomDOMErrorImpl *new_OrgApacheHarmonyXmlDomDOMErrorImpl_initWithShort_withNSString_(jshort severity, NSString *type) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomDOMErrorImpl)

#endif // _OrgApacheHarmonyXmlDomDOMErrorImpl_H_
