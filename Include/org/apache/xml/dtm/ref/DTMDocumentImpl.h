//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMDocumentImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMDocumentImpl")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMDocumentImpl
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMDocumentImpl 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMDocumentImpl 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMDocumentImpl

#if !defined (OrgApacheXmlDtmRefDTMDocumentImpl_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMDocumentImpl || defined(INCLUDE_OrgApacheXmlDtmRefDTMDocumentImpl))
#define OrgApacheXmlDtmRefDTMDocumentImpl_

#define RESTRICT_OrgApacheXmlDtmDTM 1
#define INCLUDE_OrgApacheXmlDtmDTM 1
#include "org/apache/xml/dtm/DTM.h"

#define RESTRICT_OrgXmlSaxContentHandler 1
#define INCLUDE_OrgXmlSaxContentHandler 1
#include "org/xml/sax/ContentHandler.h"

#define RESTRICT_OrgXmlSaxExtLexicalHandler 1
#define INCLUDE_OrgXmlSaxExtLexicalHandler 1
#include "org/xml/sax/ext/LexicalHandler.h"

@class IOSCharArray;
@class IOSIntArray;
@class JavaLangBoolean;
@class JavaLangByte;
@class JavaLangInteger;
@class JavaLangShort;
@class OrgApacheXmlDtmDTMAxisTraverser;
@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXmlDtmRefChunkedIntArray;
@class OrgApacheXmlDtmRefDTMStringPool;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXmlUtilsXMLStringFactory;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgApacheXmlDtmDTMAxisIterator;
@protocol OrgApacheXmlDtmDTMWSFilter;
@protocol OrgApacheXmlDtmRefIncrementalSAXSource;
@protocol OrgApacheXmlUtilsXMLString;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;
@protocol OrgXmlSaxExtDeclHandler;
@protocol OrgXmlSaxLocator;

@interface OrgApacheXmlDtmRefDTMDocumentImpl : NSObject < OrgApacheXmlDtmDTM, OrgXmlSaxContentHandler, OrgXmlSaxExtLexicalHandler > {
 @public
  jint m_docHandle_;
  jint m_docElement_;
  jint currentParent_;
  jint previousSibling_;
  jint m_currentNode_;
  IOSIntArray *gotslot_;
  jboolean m_isError_;
  NSString *m_documentBaseURI_;
  OrgApacheXmlDtmRefChunkedIntArray *nodes_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)mgr
                                          withInt:(jint)documentNumber
                   withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)whiteSpaceFilter
            withOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)xstringfactory;

- (void)appendChildWithInt:(jint)newChild
               withBoolean:(jboolean)clone
               withBoolean:(jboolean)cloneDepth;

- (void)appendTextChildWithNSString:(NSString *)str;

- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

- (void)dispatchCharactersEventsWithInt:(jint)nodeHandle
            withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch
                            withBoolean:(jboolean)normalize;

- (void)dispatchToEventsWithInt:(jint)nodeHandle
    withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

- (void)documentRegistration;

- (void)documentRelease;

- (void)endCDATA;

- (void)endDocument;

- (void)endDTD;

- (void)endElementWithNSString:(NSString *)namespaceURI
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

- (void)endEntityWithNSString:(NSString *)name;

- (void)endPrefixMappingWithNSString:(NSString *)prefix;

- (jint)getAttributeNodeWithInt:(jint)nodeHandle
                   withNSString:(NSString *)namespaceURI
                   withNSString:(NSString *)name;

- (id<OrgApacheXmlDtmDTMAxisIterator>)getAxisIteratorWithInt:(jint)axis;

- (OrgApacheXmlDtmDTMAxisTraverser *)getAxisTraverserWithInt:(jint)axis;

- (id<OrgXmlSaxContentHandler>)getContentHandler;

- (id<OrgXmlSaxExtDeclHandler>)getDeclHandler;

- (jint)getDocument;

- (jboolean)getDocumentAllDeclarationsProcessed;

- (NSString *)getDocumentBaseURI;

- (NSString *)getDocumentEncodingWithInt:(jint)nodeHandle;

- (jint)getDocumentRoot;

- (jint)getDocumentRootWithInt:(jint)nodeHandle;

- (NSString *)getDocumentStandaloneWithInt:(jint)nodeHandle;

- (NSString *)getDocumentSystemIdentifierWithInt:(jint)nodeHandle;

- (NSString *)getDocumentTypeDeclarationPublicIdentifier;

- (NSString *)getDocumentTypeDeclarationSystemIdentifier;

- (NSString *)getDocumentVersionWithInt:(jint)documentHandle;

- (id<OrgXmlSaxDTDHandler>)getDTDHandler;

- (jint)getElementByIdWithNSString:(NSString *)elementId;

- (id<OrgXmlSaxEntityResolver>)getEntityResolver;

- (id<OrgXmlSaxErrorHandler>)getErrorHandler;

- (jint)getExpandedTypeIDWithInt:(jint)nodeHandle;

- (jint)getExpandedTypeIDWithNSString:(NSString *)namespace_
                         withNSString:(NSString *)localName
                              withInt:(jint)type;

- (jint)getFirstAttributeWithInt:(jint)nodeHandle;

- (jint)getFirstChildWithInt:(jint)nodeHandle;

- (jint)getFirstNamespaceNodeWithInt:(jint)nodeHandle
                         withBoolean:(jboolean)inScope;

- (jint)getLastChildWithInt:(jint)nodeHandle;

- (jshort)getLevelWithInt:(jint)nodeHandle;

- (id<OrgXmlSaxExtLexicalHandler>)getLexicalHandler;

- (NSString *)getLocalNameWithInt:(jint)nodeHandle;

- (NSString *)getLocalNameFromExpandedNameIDWithInt:(jint)ExpandedNameID;

- (OrgApacheXmlDtmRefDTMStringPool *)getLocalNameTable;

- (NSString *)getNamespaceFromExpandedNameIDWithInt:(jint)ExpandedNameID;

- (NSString *)getNamespaceURIWithInt:(jint)nodeHandle;

- (jint)getNextAttributeWithInt:(jint)nodeHandle;

- (jint)getNextDescendantWithInt:(jint)subtreeRootHandle
                         withInt:(jint)nodeHandle;

- (jint)getNextFollowingWithInt:(jint)axisContextHandle
                        withInt:(jint)nodeHandle;

- (jint)getNextNamespaceNodeWithInt:(jint)baseHandle
                            withInt:(jint)namespaceHandle
                        withBoolean:(jboolean)inScope;

- (jint)getNextPrecedingWithInt:(jint)axisContextHandle
                        withInt:(jint)nodeHandle;

- (jint)getNextSiblingWithInt:(jint)nodeHandle;

- (id<OrgW3cDomNode>)getNodeWithInt:(jint)nodeHandle;

- (NSString *)getNodeNameWithInt:(jint)nodeHandle;

- (NSString *)getNodeNameXWithInt:(jint)nodeHandle;

- (jshort)getNodeTypeWithInt:(jint)nodeHandle;

- (NSString *)getNodeValueWithInt:(jint)nodeHandle;

- (OrgApacheXmlDtmRefDTMStringPool *)getNsNameTable;

- (jint)getOwnerDocumentWithInt:(jint)nodeHandle;

- (jint)getParentWithInt:(jint)nodeHandle;

- (NSString *)getPrefixWithInt:(jint)nodeHandle;

- (OrgApacheXmlDtmRefDTMStringPool *)getPrefixNameTable;

- (jint)getPreviousSiblingWithInt:(jint)nodeHandle;

- (id<JavaxXmlTransformSourceLocator>)getSourceLocatorForWithInt:(jint)node;

- (id<OrgApacheXmlUtilsXMLString>)getStringValueWithInt:(jint)nodeHandle;

- (IOSCharArray *)getStringValueChunkWithInt:(jint)nodeHandle
                                     withInt:(jint)chunkIndex
                                withIntArray:(IOSIntArray *)startAndLen;

- (jint)getStringValueChunkCountWithInt:(jint)nodeHandle;

- (id<OrgApacheXmlDtmDTMAxisIterator>)getTypedAxisIteratorWithInt:(jint)axis
                                                          withInt:(jint)type;

- (NSString *)getUnparsedEntityURIWithNSString:(NSString *)name;

- (jboolean)hasChildNodesWithInt:(jint)nodeHandle;

- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

- (jboolean)isAttributeSpecifiedWithInt:(jint)attributeHandle;

- (jboolean)isCharacterElementContentWhitespaceWithInt:(jint)nodeHandle;

- (jboolean)isDocumentAllDeclarationsProcessedWithInt:(jint)documentHandle;

- (jboolean)isNodeAfterWithInt:(jint)nodeHandle1
                       withInt:(jint)nodeHandle2;

- (jboolean)isSupportedWithNSString:(NSString *)feature
                       withNSString:(NSString *)version_;

- (void)migrateToWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)manager;

- (jboolean)needsTwoThreads;

- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

- (void)setDocumentBaseURIWithNSString:(NSString *)baseURI;

- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

- (void)setFeatureWithNSString:(NSString *)featureId
                   withBoolean:(jboolean)state;

- (void)setIncrementalSAXSourceWithOrgApacheXmlDtmRefIncrementalSAXSource:(id<OrgApacheXmlDtmRefIncrementalSAXSource>)source;

- (void)setLocalNameTableWithOrgApacheXmlDtmRefDTMStringPool:(OrgApacheXmlDtmRefDTMStringPool *)poolRef;

- (void)setNsNameTableWithOrgApacheXmlDtmRefDTMStringPool:(OrgApacheXmlDtmRefDTMStringPool *)poolRef;

- (void)setPrefixNameTableWithOrgApacheXmlDtmRefDTMStringPool:(OrgApacheXmlDtmRefDTMStringPool *)poolRef;

- (void)setPropertyWithNSString:(NSString *)property
                         withId:(id)value;

- (void)skippedEntityWithNSString:(NSString *)name;

- (void)startCDATA;

- (void)startDocument;

- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;

- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

- (void)startEntityWithNSString:(NSString *)name;

- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

- (jboolean)supportsPreStripping;

#pragma mark Package-Private

- (void)appendAttributeWithInt:(jint)namespaceIndex
                       withInt:(jint)localNameIndex
                       withInt:(jint)prefixIndex
                   withBoolean:(jboolean)isID
                       withInt:(jint)m_char_current_start
                       withInt:(jint)contentLength;

- (void)appendCommentWithInt:(jint)m_char_current_start
                     withInt:(jint)contentLength;

- (void)appendEndDocument;

- (void)appendEndElement;

- (void)appendNSDeclarationWithInt:(jint)prefixIndex
                           withInt:(jint)namespaceIndex
                       withBoolean:(jboolean)isID;

- (void)appendStartDocument;

- (void)appendStartElementWithInt:(jint)namespaceIndex
                          withInt:(jint)localNameIndex
                          withInt:(jint)prefixIndex;

- (void)appendTextChildWithInt:(jint)m_char_current_start
                       withInt:(jint)contentLength;

- (OrgApacheXmlUtilsFastStringBuffer *)getContentBuffer;

- (void)initDocumentWithInt:(jint)documentNumber OBJC_METHOD_FAMILY_NONE;

- (void)setContentBufferWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)buffer;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlDtmRefDTMDocumentImpl)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMDocumentImpl, gotslot_, IOSIntArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMDocumentImpl, m_documentBaseURI_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMDocumentImpl, nodes_, OrgApacheXmlDtmRefChunkedIntArray *)

inline jbyte OrgApacheXmlDtmRefDTMDocumentImpl_get_DOCHANDLE_SHIFT(void);
#define OrgApacheXmlDtmRefDTMDocumentImpl_DOCHANDLE_SHIFT 22
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefDTMDocumentImpl, DOCHANDLE_SHIFT, jbyte)

inline jint OrgApacheXmlDtmRefDTMDocumentImpl_get_NODEHANDLE_MASK(void);
#define OrgApacheXmlDtmRefDTMDocumentImpl_NODEHANDLE_MASK 8388607
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefDTMDocumentImpl, NODEHANDLE_MASK, jint)

inline jint OrgApacheXmlDtmRefDTMDocumentImpl_get_DOCHANDLE_MASK(void);
#define OrgApacheXmlDtmRefDTMDocumentImpl_DOCHANDLE_MASK -8388608
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefDTMDocumentImpl, DOCHANDLE_MASK, jint)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMDocumentImpl_initWithOrgApacheXmlDtmDTMManager_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_(OrgApacheXmlDtmRefDTMDocumentImpl *self, OrgApacheXmlDtmDTMManager *mgr, jint documentNumber, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMDocumentImpl *new_OrgApacheXmlDtmRefDTMDocumentImpl_initWithOrgApacheXmlDtmDTMManager_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_(OrgApacheXmlDtmDTMManager *mgr, jint documentNumber, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMDocumentImpl *create_OrgApacheXmlDtmRefDTMDocumentImpl_initWithOrgApacheXmlDtmDTMManager_withInt_withOrgApacheXmlDtmDTMWSFilter_withOrgApacheXmlUtilsXMLStringFactory_(OrgApacheXmlDtmDTMManager *mgr, jint documentNumber, id<OrgApacheXmlDtmDTMWSFilter> whiteSpaceFilter, OrgApacheXmlUtilsXMLStringFactory *xstringfactory);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMDocumentImpl)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMDocumentImpl")