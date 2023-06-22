//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/DOMErrorImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3DOMErrorImpl
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3DOMErrorImpl

#if !defined (OrgApacheXmlSerializerDom3DOMErrorImpl_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl || defined(INCLUDE_OrgApacheXmlSerializerDom3DOMErrorImpl))
#define OrgApacheXmlSerializerDom3DOMErrorImpl_

#define RESTRICT_OrgW3cDomDOMError 1
#define INCLUDE_OrgW3cDomDOMError 1
#include "org/w3c/dom/DOMError.h"

@class JavaLangException;
@class JavaLangShort;
@class OrgApacheXmlSerializerDom3DOMLocatorImpl;
@protocol OrgW3cDomDOMLocator;

@interface OrgApacheXmlSerializerDom3DOMErrorImpl : NSObject < OrgW3cDomDOMError >

#pragma mark Public

- (instancetype)initWithShort:(jshort)severity
                 withNSString:(NSString *)message
                 withNSString:(NSString *)type;

- (instancetype)initWithShort:(jshort)severity
                 withNSString:(NSString *)message
                 withNSString:(NSString *)type
        withJavaLangException:(JavaLangException *)exception;

- (instancetype)initWithShort:(jshort)severity
                 withNSString:(NSString *)message
                 withNSString:(NSString *)type
        withJavaLangException:(JavaLangException *)exception
                       withId:(id)relatedData
withOrgApacheXmlSerializerDom3DOMLocatorImpl:(OrgApacheXmlSerializerDom3DOMLocatorImpl *)location;

- (id<OrgW3cDomDOMLocator>)getLocation;

- (NSString *)getMessage;

- (id)getRelatedData;

- (id)getRelatedException;

- (jshort)getSeverity;

- (NSString *)getType;

- (void)reset;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDom3DOMErrorImpl)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorImpl_init(OrgApacheXmlSerializerDom3DOMErrorImpl *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *new_OrgApacheXmlSerializerDom3DOMErrorImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *create_OrgApacheXmlSerializerDom3DOMErrorImpl_init(void);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_(OrgApacheXmlSerializerDom3DOMErrorImpl *self, jshort severity, NSString *message, NSString *type);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *new_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_(jshort severity, NSString *message, NSString *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *create_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_(jshort severity, NSString *message, NSString *type);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_(OrgApacheXmlSerializerDom3DOMErrorImpl *self, jshort severity, NSString *message, NSString *type, JavaLangException *exception);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *new_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_(jshort severity, NSString *message, NSString *type, JavaLangException *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *create_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_(jshort severity, NSString *message, NSString *type, JavaLangException *exception);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_withId_withOrgApacheXmlSerializerDom3DOMLocatorImpl_(OrgApacheXmlSerializerDom3DOMErrorImpl *self, jshort severity, NSString *message, NSString *type, JavaLangException *exception, id relatedData, OrgApacheXmlSerializerDom3DOMLocatorImpl *location);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *new_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_withId_withOrgApacheXmlSerializerDom3DOMLocatorImpl_(jshort severity, NSString *message, NSString *type, JavaLangException *exception, id relatedData, OrgApacheXmlSerializerDom3DOMLocatorImpl *location) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *create_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_withId_withOrgApacheXmlSerializerDom3DOMLocatorImpl_(jshort severity, NSString *message, NSString *type, JavaLangException *exception, id relatedData, OrgApacheXmlSerializerDom3DOMLocatorImpl *location);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3DOMErrorImpl)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl")
