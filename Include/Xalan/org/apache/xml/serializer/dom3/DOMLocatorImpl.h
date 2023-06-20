//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/DOMLocatorImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3DOMLocatorImpl
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3DOMLocatorImpl

#if !defined (OrgApacheXmlSerializerDom3DOMLocatorImpl_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl || defined(INCLUDE_OrgApacheXmlSerializerDom3DOMLocatorImpl))
#define OrgApacheXmlSerializerDom3DOMLocatorImpl_

#define RESTRICT_OrgW3cDomDOMLocator 1
#define INCLUDE_OrgW3cDomDOMLocator 1
#include "org/w3c/dom/DOMLocator.h"

@class JavaLangInteger;
@protocol OrgW3cDomNode;

@interface OrgApacheXmlSerializerDom3DOMLocatorImpl : NSObject < OrgW3cDomDOMLocator >

#pragma mark Public

- (jint)getByteOffset;

- (jint)getColumnNumber;

- (jint)getLineNumber;

- (id<OrgW3cDomNode>)getRelatedNode;

- (NSString *)getUri;

- (jint)getUtf16Offset;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (instancetype)initPackagePrivateWithInt:(jint)lineNumber
                                  withInt:(jint)columnNumber
                                  withInt:(jint)byteoffset
                        withOrgW3cDomNode:(id<OrgW3cDomNode>)relatedData
                             withNSString:(NSString *)uri;

- (instancetype)initPackagePrivateWithInt:(jint)lineNumber
                                  withInt:(jint)columnNumber
                                  withInt:(jint)byteoffset
                        withOrgW3cDomNode:(id<OrgW3cDomNode>)relatedData
                             withNSString:(NSString *)uri
                                  withInt:(jint)utf16Offset;

- (instancetype)initPackagePrivateWithInt:(jint)lineNumber
                                  withInt:(jint)columnNumber
                                  withInt:(jint)utf16Offset
                             withNSString:(NSString *)uri;

- (instancetype)initPackagePrivateWithInt:(jint)lineNumber
                                  withInt:(jint)columnNumber
                             withNSString:(NSString *)uri;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDom3DOMLocatorImpl)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivate(OrgApacheXmlSerializerDom3DOMLocatorImpl *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivate(void);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withNSString_(OrgApacheXmlSerializerDom3DOMLocatorImpl *self, jint lineNumber, jint columnNumber, NSString *uri);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withNSString_(jint lineNumber, jint columnNumber, NSString *uri) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withNSString_(jint lineNumber, jint columnNumber, NSString *uri);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withNSString_(OrgApacheXmlSerializerDom3DOMLocatorImpl *self, jint lineNumber, jint columnNumber, jint utf16Offset, NSString *uri);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withNSString_(jint lineNumber, jint columnNumber, jint utf16Offset, NSString *uri) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withNSString_(jint lineNumber, jint columnNumber, jint utf16Offset, NSString *uri);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_(OrgApacheXmlSerializerDom3DOMLocatorImpl *self, jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_(jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_(jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_withInt_(OrgApacheXmlSerializerDom3DOMLocatorImpl *self, jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri, jint utf16Offset);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_withInt_(jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri, jint utf16Offset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initPackagePrivateWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_withInt_(jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri, jint utf16Offset);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3DOMLocatorImpl)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl")
