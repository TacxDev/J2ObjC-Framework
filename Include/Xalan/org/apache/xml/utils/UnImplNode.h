//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/UnImplNode.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsUnImplNode")
#ifdef RESTRICT_OrgApacheXmlUtilsUnImplNode
#define INCLUDE_ALL_OrgApacheXmlUtilsUnImplNode 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsUnImplNode 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsUnImplNode

#if !defined (OrgApacheXmlUtilsUnImplNode_) && (INCLUDE_ALL_OrgApacheXmlUtilsUnImplNode || defined(INCLUDE_OrgApacheXmlUtilsUnImplNode))
#define OrgApacheXmlUtilsUnImplNode_

#define RESTRICT_OrgW3cDomNode 1
#define INCLUDE_OrgW3cDomNode 1
#include "org/w3c/dom/Node.h"

#define RESTRICT_OrgW3cDomElement 1
#define INCLUDE_OrgW3cDomElement 1
#include "org/w3c/dom/Element.h"

#define RESTRICT_OrgW3cDomNodeList 1
#define INCLUDE_OrgW3cDomNodeList 1
#include "org/w3c/dom/NodeList.h"

#define RESTRICT_OrgW3cDomDocument 1
#define INCLUDE_OrgW3cDomDocument 1
#include "org/w3c/dom/Document.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangShort;
@protocol OrgW3cDomAttr;
@protocol OrgW3cDomCDATASection;
@protocol OrgW3cDomComment;
@protocol OrgW3cDomDOMConfiguration;
@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDocumentFragment;
@protocol OrgW3cDomDocumentType;
@protocol OrgW3cDomEntityReference;
@protocol OrgW3cDomNamedNodeMap;
@protocol OrgW3cDomProcessingInstruction;
@protocol OrgW3cDomText;
@protocol OrgW3cDomTypeInfo;
@protocol OrgW3cDomUserDataHandler;

@interface OrgApacheXmlUtilsUnImplNode : NSObject < OrgW3cDomNode, OrgW3cDomElement, OrgW3cDomNodeList, OrgW3cDomDocument > {
 @public
  NSString *fDocumentURI_;
  NSString *actualEncoding_;
}

#pragma mark Public

- (instancetype)init;

- (id<OrgW3cDomNode>)adoptNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)source;

- (id<OrgW3cDomNode>)appendChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild;

- (void)appendDataWithNSString:(NSString *)arg;

- (id<OrgW3cDomNode>)cloneNodeWithBoolean:(jboolean)deep;

- (jshort)compareDocumentPositionWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

- (id<OrgW3cDomAttr>)createAttributeWithNSString:(NSString *)name;

- (id<OrgW3cDomAttr>)createAttributeNSWithNSString:(NSString *)namespaceURI
                                      withNSString:(NSString *)qualifiedName;

- (id<OrgW3cDomCDATASection>)createCDATASectionWithNSString:(NSString *)data;

- (id<OrgW3cDomComment>)createCommentWithNSString:(NSString *)data;

- (id<OrgW3cDomDocumentFragment>)createDocumentFragment;

- (id<OrgW3cDomElement>)createElementWithNSString:(NSString *)tagName;

- (id<OrgW3cDomElement>)createElementNSWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)qualifiedName;

- (id<OrgW3cDomEntityReference>)createEntityReferenceWithNSString:(NSString *)name;

- (id<OrgW3cDomProcessingInstruction>)createProcessingInstructionWithNSString:(NSString *)target
                                                                 withNSString:(NSString *)data;

- (id<OrgW3cDomText>)createTextNodeWithNSString:(NSString *)data;

- (void)deleteDataWithInt:(jint)offset
                  withInt:(jint)count;

- (void)errorWithNSString:(NSString *)msg;

- (void)errorWithNSString:(NSString *)msg
        withNSObjectArray:(IOSObjectArray *)args;

- (NSString *)getActualEncoding;

- (NSString *)getAttributeWithNSString:(NSString *)name;

- (id<OrgW3cDomAttr>)getAttributeNodeWithNSString:(NSString *)name;

- (id<OrgW3cDomAttr>)getAttributeNodeNSWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)localName;

- (NSString *)getAttributeNSWithNSString:(NSString *)namespaceURI
                            withNSString:(NSString *)localName;

- (id<OrgW3cDomNamedNodeMap>)getAttributes;

- (NSString *)getBaseURI;

- (id<OrgW3cDomNodeList>)getChildNodes;

- (id<OrgW3cDomDocumentType>)getDoctype;

- (id<OrgW3cDomElement>)getDocumentElement;

- (NSString *)getDocumentURI;

- (id<OrgW3cDomDOMConfiguration>)getDomConfig;

- (id<OrgW3cDomElement>)getElementByIdWithNSString:(NSString *)elementId;

- (id<OrgW3cDomNodeList>)getElementsByTagNameWithNSString:(NSString *)name;

- (id<OrgW3cDomNodeList>)getElementsByTagNameNSWithNSString:(NSString *)namespaceURI
                                               withNSString:(NSString *)localName;

- (id)getFeatureWithNSString:(NSString *)feature
                withNSString:(NSString *)version_;

- (id<OrgW3cDomNode>)getFirstChild;

- (id<OrgW3cDomDOMImplementation>)getImplementation;

- (NSString *)getInputEncoding;

- (id<OrgW3cDomNode>)getLastChild;

- (jint)getLength;

- (NSString *)getLocalName;

- (NSString *)getNamespaceURI;

- (id<OrgW3cDomNode>)getNextSibling;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getNodeValue;

- (id<OrgW3cDomDocument>)getOwnerDocument;

- (id<OrgW3cDomElement>)getOwnerElement;

- (id<OrgW3cDomNode>)getParentNode;

- (NSString *)getPrefix;

- (id<OrgW3cDomNode>)getPreviousSibling;

- (id<OrgW3cDomTypeInfo>)getSchemaTypeInfo;

- (jboolean)getSpecified;

- (jboolean)getStrictErrorChecking;

- (NSString *)getTagName;

- (NSString *)getTextContent;

- (id)getUserDataWithNSString:(NSString *)key;

- (NSString *)getWholeText;

- (NSString *)getXmlEncoding;

- (jboolean)getXmlStandalone;

- (NSString *)getXmlVersion;

- (jboolean)hasAttributeWithNSString:(NSString *)name;

- (jboolean)hasAttributeNSWithNSString:(NSString *)name
                          withNSString:(NSString *)x;

- (jboolean)hasAttributes;

- (jboolean)hasChildNodes;

- (id<OrgW3cDomNode>)importNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)importedNode
                                     withBoolean:(jboolean)deep;

- (id<OrgW3cDomNode>)insertBeforeWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)refChild;

- (void)insertDataWithInt:(jint)offset
             withNSString:(NSString *)arg;

- (jboolean)isDefaultNamespaceWithNSString:(NSString *)namespaceURI;

- (jboolean)isEqualNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)arg;

- (jboolean)isId;

- (jboolean)isSameNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

- (jboolean)isSupportedWithNSString:(NSString *)feature
                       withNSString:(NSString *)version_;

- (jboolean)isWhitespaceInElementContent;

- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

- (NSString *)lookupNamespaceURIWithNSString:(NSString *)specifiedPrefix;

- (NSString *)lookupPrefixWithNSString:(NSString *)namespaceURI;

- (void)normalize;

- (void)normalizeDocument;

- (void)removeAttributeWithNSString:(NSString *)name;

- (id<OrgW3cDomAttr>)removeAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)oldAttr;

- (void)removeAttributeNSWithNSString:(NSString *)namespaceURI
                         withNSString:(NSString *)localName;

- (id<OrgW3cDomNode>)removeChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

- (id<OrgW3cDomNode>)renameNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n
                                    withNSString:(NSString *)namespaceURI
                                    withNSString:(NSString *)name;

- (id<OrgW3cDomNode>)replaceChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

- (void)replaceDataWithInt:(jint)offset
                   withInt:(jint)count
              withNSString:(NSString *)arg;

- (id<OrgW3cDomText>)replaceWholeTextWithNSString:(NSString *)content;

- (void)setActualEncodingWithNSString:(NSString *)value;

- (void)setAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

- (id<OrgW3cDomAttr>)setAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)newAttr;

- (id<OrgW3cDomAttr>)setAttributeNodeNSWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)newAttr;

- (void)setAttributeNSWithNSString:(NSString *)namespaceURI
                      withNSString:(NSString *)qualifiedName
                      withNSString:(NSString *)value;

- (void)setDataWithNSString:(NSString *)data;

- (void)setDocumentURIWithNSString:(NSString *)documentURI;

- (void)setIdAttributeWithBoolean:(jboolean)id_;

- (void)setIdAttributeWithNSString:(NSString *)name
                       withBoolean:(jboolean)makeId;

- (void)setIdAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)at
                                withBoolean:(jboolean)makeId;

- (void)setIdAttributeNSWithNSString:(NSString *)namespaceURI
                        withNSString:(NSString *)localName
                         withBoolean:(jboolean)makeId;

- (void)setInputEncodingWithNSString:(NSString *)encoding;

- (void)setNodeValueWithNSString:(NSString *)nodeValue;

- (void)setPrefixWithNSString:(NSString *)prefix;

- (void)setStrictErrorCheckingWithBoolean:(jboolean)strictErrorChecking;

- (void)setTextContentWithNSString:(NSString *)textContent;

- (id)setUserDataWithNSString:(NSString *)key
                       withId:(id)data
 withOrgW3cDomUserDataHandler:(id<OrgW3cDomUserDataHandler>)handler;

- (void)setValueWithNSString:(NSString *)value;

- (void)setXmlEncodingWithNSString:(NSString *)xmlEncoding;

- (void)setXmlStandaloneWithBoolean:(jboolean)xmlStandalone;

- (void)setXmlVersionWithNSString:(NSString *)xmlVersion;

- (id<OrgW3cDomText>)splitTextWithInt:(jint)offset;

- (NSString *)substringDataWithInt:(jint)offset
                           withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsUnImplNode)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsUnImplNode, fDocumentURI_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsUnImplNode, actualEncoding_, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsUnImplNode_init(OrgApacheXmlUtilsUnImplNode *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsUnImplNode *new_OrgApacheXmlUtilsUnImplNode_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsUnImplNode *create_OrgApacheXmlUtilsUnImplNode_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsUnImplNode)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsUnImplNode")
