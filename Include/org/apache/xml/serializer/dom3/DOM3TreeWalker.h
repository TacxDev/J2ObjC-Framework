//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/DOM3TreeWalker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3TreeWalker")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3DOM3TreeWalker
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3TreeWalker 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3TreeWalker 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3DOM3TreeWalker

#if !defined (OrgApacheXmlSerializerDom3DOM3TreeWalker_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3TreeWalker || defined(INCLUDE_OrgApacheXmlSerializerDom3DOM3TreeWalker))
#define OrgApacheXmlSerializerDom3DOM3TreeWalker_

@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangInteger;
@class JavaUtilProperties;
@class OrgApacheXmlSerializerDom3NamespaceSupport;
@protocol OrgApacheXmlSerializerSerializationHandler;
@protocol OrgW3cDomCDATASection;
@protocol OrgW3cDomComment;
@protocol OrgW3cDomDOMErrorHandler;
@protocol OrgW3cDomDocumentType;
@protocol OrgW3cDomElement;
@protocol OrgW3cDomEntityReference;
@protocol OrgW3cDomLsLSSerializerFilter;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomProcessingInstruction;
@protocol OrgW3cDomText;

@interface OrgApacheXmlSerializerDom3DOM3TreeWalker : NSObject {
 @public
  jboolean fNextIsRaw_;
  OrgApacheXmlSerializerDom3NamespaceSupport *fNSBinder_;
  OrgApacheXmlSerializerDom3NamespaceSupport *fLocalNSBinder_;
}

#pragma mark Public

- (void)traverseWithOrgW3cDomNode:(id<OrgW3cDomNode>)pos;

- (void)traverseWithOrgW3cDomNode:(id<OrgW3cDomNode>)pos
                withOrgW3cDomNode:(id<OrgW3cDomNode>)top;

#pragma mark Protected

- (jboolean)applyFilterWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                                 withInt:(jint)nodeType;

- (void)checkUnboundPrefixInEntRefWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)endNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)fixupElementNSWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)initPropertiesWithJavaUtilProperties:(JavaUtilProperties *)properties OBJC_METHOD_FAMILY_NONE;

- (void)isAttributeWellFormedWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)isCDATASectionWellFormedWithOrgW3cDomCDATASection:(id<OrgW3cDomCDATASection>)node;

- (void)isCommentWellFormedWithNSString:(NSString *)data;

- (void)isElementWellFormedWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)isEntityReferneceWellFormedWithOrgW3cDomEntityReference:(id<OrgW3cDomEntityReference>)node;

- (void)isPIWellFormedWithOrgW3cDomProcessingInstruction:(id<OrgW3cDomProcessingInstruction>)node;

- (void)isTextWellFormedWithOrgW3cDomText:(id<OrgW3cDomText>)node;

- (jboolean)isValidQNameWithNSString:(NSString *)prefix
                        withNSString:(NSString *)local
                         withBoolean:(jboolean)xml11Version;

- (JavaLangCharacter *)isWFXMLCharWithNSString:(NSString *)chardata;

- (jboolean)isWFXMLCharWithNSString:(NSString *)chardata
              withJavaLangCharacter:(JavaLangCharacter *)refInvalidChar;

- (jboolean)isXMLNameWithNSString:(NSString *)s
                      withBoolean:(jboolean)xml11Version;

- (void)recordLocalNSDeclWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)serializeAttListWithOrgW3cDomElement:(id<OrgW3cDomElement>)node;

- (void)serializeCDATASectionWithOrgW3cDomCDATASection:(id<OrgW3cDomCDATASection>)node;

- (void)serializeCommentWithOrgW3cDomComment:(id<OrgW3cDomComment>)node;

- (void)serializeDocTypeWithOrgW3cDomDocumentType:(id<OrgW3cDomDocumentType>)node
                                      withBoolean:(jboolean)bStart;

- (void)serializeElementWithOrgW3cDomElement:(id<OrgW3cDomElement>)node
                                 withBoolean:(jboolean)bStart;

- (void)serializeEntityReferenceWithOrgW3cDomEntityReference:(id<OrgW3cDomEntityReference>)node
                                                 withBoolean:(jboolean)bStart;

- (void)serializePIWithOrgW3cDomProcessingInstruction:(id<OrgW3cDomProcessingInstruction>)node;

- (void)serializeTextWithOrgW3cDomText:(id<OrgW3cDomText>)node;

- (void)startNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)serialHandler
                                                    withOrgW3cDomDOMErrorHandler:(id<OrgW3cDomDOMErrorHandler>)errHandler
                                               withOrgW3cDomLsLSSerializerFilter:(id<OrgW3cDomLsLSSerializerFilter>)filter
                                                                    withNSString:(NSString *)newLine;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerDom3DOM3TreeWalker)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerDom3DOM3TreeWalker, fNSBinder_, OrgApacheXmlSerializerDom3NamespaceSupport *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerDom3DOM3TreeWalker, fLocalNSBinder_, OrgApacheXmlSerializerDom3NamespaceSupport *)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOM3TreeWalker_initPackagePrivateWithOrgApacheXmlSerializerSerializationHandler_withOrgW3cDomDOMErrorHandler_withOrgW3cDomLsLSSerializerFilter_withNSString_(OrgApacheXmlSerializerDom3DOM3TreeWalker *self, id<OrgApacheXmlSerializerSerializationHandler> serialHandler, id<OrgW3cDomDOMErrorHandler> errHandler, id<OrgW3cDomLsLSSerializerFilter> filter, NSString *newLine);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOM3TreeWalker *new_OrgApacheXmlSerializerDom3DOM3TreeWalker_initPackagePrivateWithOrgApacheXmlSerializerSerializationHandler_withOrgW3cDomDOMErrorHandler_withOrgW3cDomLsLSSerializerFilter_withNSString_(id<OrgApacheXmlSerializerSerializationHandler> serialHandler, id<OrgW3cDomDOMErrorHandler> errHandler, id<OrgW3cDomLsLSSerializerFilter> filter, NSString *newLine) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOM3TreeWalker *create_OrgApacheXmlSerializerDom3DOM3TreeWalker_initPackagePrivateWithOrgApacheXmlSerializerSerializationHandler_withOrgW3cDomDOMErrorHandler_withOrgW3cDomLsLSSerializerFilter_withNSString_(id<OrgApacheXmlSerializerSerializationHandler> serialHandler, id<OrgW3cDomDOMErrorHandler> errHandler, id<OrgW3cDomLsLSSerializerFilter> filter, NSString *newLine);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3DOM3TreeWalker)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3TreeWalker")
