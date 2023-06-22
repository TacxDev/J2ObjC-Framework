//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/TreeWalker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsTreeWalker")
#ifdef RESTRICT_OrgApacheXmlUtilsTreeWalker
#define INCLUDE_ALL_OrgApacheXmlUtilsTreeWalker 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsTreeWalker 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsTreeWalker

#if !defined (OrgApacheXmlUtilsTreeWalker_) && (INCLUDE_ALL_OrgApacheXmlUtilsTreeWalker || defined(INCLUDE_OrgApacheXmlUtilsTreeWalker))
#define OrgApacheXmlUtilsTreeWalker_

@class JavaLangBoolean;
@class OrgApacheXmlUtilsDOMHelper;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxContentHandler;

@interface OrgApacheXmlUtilsTreeWalker : NSObject {
 @public
  OrgApacheXmlUtilsDOMHelper *m_dh_;
  jboolean nextIsRaw_;
}

#pragma mark Public

- (instancetype)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)contentHandler;

- (instancetype)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)contentHandler
                 withOrgApacheXmlUtilsDOMHelper:(OrgApacheXmlUtilsDOMHelper *)dh;

- (instancetype)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)contentHandler
                 withOrgApacheXmlUtilsDOMHelper:(OrgApacheXmlUtilsDOMHelper *)dh
                                   withNSString:(NSString *)systemId;

- (id<OrgXmlSaxContentHandler>)getContentHandler;

- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

- (void)traverseWithOrgW3cDomNode:(id<OrgW3cDomNode>)pos;

- (void)traverseWithOrgW3cDomNode:(id<OrgW3cDomNode>)pos
                withOrgW3cDomNode:(id<OrgW3cDomNode>)top;

- (void)traverseFragmentWithOrgW3cDomNode:(id<OrgW3cDomNode>)pos;

#pragma mark Protected

- (void)endNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)startNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsTreeWalker)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsTreeWalker, m_dh_, OrgApacheXmlUtilsDOMHelper *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlUtilsDOMHelper_withNSString_(OrgApacheXmlUtilsTreeWalker *self, id<OrgXmlSaxContentHandler> contentHandler, OrgApacheXmlUtilsDOMHelper *dh, NSString *systemId);

FOUNDATION_EXPORT OrgApacheXmlUtilsTreeWalker *new_OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlUtilsDOMHelper_withNSString_(id<OrgXmlSaxContentHandler> contentHandler, OrgApacheXmlUtilsDOMHelper *dh, NSString *systemId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsTreeWalker *create_OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlUtilsDOMHelper_withNSString_(id<OrgXmlSaxContentHandler> contentHandler, OrgApacheXmlUtilsDOMHelper *dh, NSString *systemId);

FOUNDATION_EXPORT void OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlUtilsDOMHelper_(OrgApacheXmlUtilsTreeWalker *self, id<OrgXmlSaxContentHandler> contentHandler, OrgApacheXmlUtilsDOMHelper *dh);

FOUNDATION_EXPORT OrgApacheXmlUtilsTreeWalker *new_OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlUtilsDOMHelper_(id<OrgXmlSaxContentHandler> contentHandler, OrgApacheXmlUtilsDOMHelper *dh) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsTreeWalker *create_OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlUtilsDOMHelper_(id<OrgXmlSaxContentHandler> contentHandler, OrgApacheXmlUtilsDOMHelper *dh);

FOUNDATION_EXPORT void OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_(OrgApacheXmlUtilsTreeWalker *self, id<OrgXmlSaxContentHandler> contentHandler);

FOUNDATION_EXPORT OrgApacheXmlUtilsTreeWalker *new_OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_(id<OrgXmlSaxContentHandler> contentHandler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsTreeWalker *create_OrgApacheXmlUtilsTreeWalker_initWithOrgXmlSaxContentHandler_(id<OrgXmlSaxContentHandler> contentHandler);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsTreeWalker)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsTreeWalker")