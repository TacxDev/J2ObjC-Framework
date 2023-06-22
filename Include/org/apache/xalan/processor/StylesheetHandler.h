//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/StylesheetHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler")
#ifdef RESTRICT_OrgApacheXalanProcessorStylesheetHandler
#define INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorStylesheetHandler

#if !defined (OrgApacheXalanProcessorStylesheetHandler_) && (INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler || defined(INCLUDE_OrgApacheXalanProcessorStylesheetHandler))
#define OrgApacheXalanProcessorStylesheetHandler_

#define RESTRICT_OrgXmlSaxHelpersDefaultHandler 1
#define INCLUDE_OrgXmlSaxHelpersDefaultHandler 1
#include "org/xml/sax/helpers/DefaultHandler.h"

#define RESTRICT_JavaxXmlTransformSaxTemplatesHandler 1
#define INCLUDE_JavaxXmlTransformSaxTemplatesHandler 1
#include "javax/xml/transform/sax/TemplatesHandler.h"

#define RESTRICT_OrgApacheXmlUtilsPrefixResolver 1
#define INCLUDE_OrgApacheXmlUtilsPrefixResolver 1
#include "org/apache/xml/utils/PrefixResolver.h"

#define RESTRICT_OrgApacheXmlUtilsNodeConsumer 1
#define INCLUDE_OrgApacheXmlUtilsNodeConsumer 1
#include "org/apache/xml/utils/NodeConsumer.h"

@class IOSCharArray;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangException;
@class JavaLangInteger;
@class JavaUtilStack;
@class OrgApacheXalanProcessorTransformerFactoryImpl;
@class OrgApacheXalanProcessorXSLTElementProcessor;
@class OrgApacheXalanProcessorXSLTSchema;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXmlUtilsSAXSourceLocator;
@class OrgApacheXpathXPath;
@class OrgXmlSaxHelpersNamespaceSupport;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXParseException;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformTemplates;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxLocator;

@interface OrgApacheXalanProcessorStylesheetHandler : OrgXmlSaxHelpersDefaultHandler < JavaxXmlTransformSaxTemplatesHandler, OrgApacheXmlUtilsPrefixResolver, OrgApacheXmlUtilsNodeConsumer > {
 @public
  OrgApacheXalanTemplatesStylesheetRoot *m_stylesheetRoot_;
  OrgApacheXalanTemplatesStylesheet *m_lastPoppedStylesheet_;
  JavaUtilStack *m_baseIdentifiers_;
  JavaUtilStack *m_nsSupportStack_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheXalanProcessorTransformerFactoryImpl:(OrgApacheXalanProcessorTransformerFactoryImpl *)processor;

- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

- (OrgApacheXpathXPath *)createXPathWithNSString:(NSString *)str
  withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)owningTemplate;

- (void)endDocument;

- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)rawName;

- (void)endPrefixMappingWithNSString:(NSString *)prefix;

- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

- (NSString *)getBaseIdentifier;

- (jboolean)getIncremental;

- (OrgApacheXmlUtilsSAXSourceLocator *)getLocator;

- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix;

- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)context;

- (jboolean)getOptimize;

- (id<OrgW3cDomNode>)getOriginatingNode;

- (OrgApacheXalanProcessorXSLTSchema *)getSchema;

- (jboolean)getSource_location;

- (OrgApacheXalanProcessorTransformerFactoryImpl *)getStylesheetProcessor;

- (OrgApacheXalanTemplatesStylesheetRoot *)getStylesheetRoot;

- (NSString *)getSystemId;

- (id<JavaxXmlTransformTemplates>)getTemplates;

- (jboolean)handlesNullPrefixes;

- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

- (jboolean)isStylesheetParsingComplete;

- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

- (void)pushStylesheetWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)s;

- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;

- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

- (void)setOriginatingNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

- (void)setSystemIdWithNSString:(NSString *)baseID;

- (void)skippedEntityWithNSString:(NSString *)name;

- (void)startDocument;

- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

- (void)warnWithNSString:(NSString *)msg
       withNSObjectArray:(IOSObjectArray *)args;

- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

#pragma mark Protected

- (void)errorWithNSString:(NSString *)msg
    withJavaLangException:(JavaLangException *)e;

- (void)errorWithNSString:(NSString *)msg
        withNSObjectArray:(IOSObjectArray *)args
    withJavaLangException:(JavaLangException *)e;

#pragma mark Package-Private

- (OrgApacheXpathXPath *)createMatchPatternXPathWithNSString:(NSString *)str
              withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)owningTemplate;

- (OrgApacheXalanProcessorXSLTElementProcessor *)getCurrentProcessor;

- (OrgApacheXalanTemplatesElemTemplateElement *)getElemTemplateElement;

- (OrgApacheXalanTemplatesStylesheet *)getLastPoppedStylesheet;

- (OrgXmlSaxHelpersNamespaceSupport *)getNamespaceSupport;

- (OrgApacheXalanProcessorXSLTElementProcessor *)getProcessorForWithNSString:(NSString *)uri
                                                                withNSString:(NSString *)localName
                                                                withNSString:(NSString *)rawName;

- (OrgApacheXalanTemplatesStylesheet *)getStylesheet;

- (jint)getStylesheetType;

- (jboolean)importStackContainsWithNSString:(NSString *)hrefUrl;

- (void)init__WithOrgApacheXalanProcessorTransformerFactoryImpl:(OrgApacheXalanProcessorTransformerFactoryImpl *)processor OBJC_METHOD_FAMILY_NONE;

- (jboolean)isSpacePreserve;

- (jint)nextUid;

- (NSString *)peekImportURL;

- (id<JavaxXmlTransformSource>)peekSourceFromURIResolver;

- (NSString *)popBaseIndentifier;

- (OrgApacheXalanTemplatesElemTemplateElement *)popElemTemplateElement;

- (id<JavaxXmlTransformSource>)popImportSource;

- (NSString *)popImportURL;

- (void)popNamespaceSupport;

- (OrgApacheXalanProcessorXSLTElementProcessor *)popProcessor;

- (void)popSpaceHandling;

- (OrgApacheXalanTemplatesStylesheet *)popStylesheet;

- (void)pushBaseIndentifierWithNSString:(NSString *)baseID;

- (void)pushElemTemplateElementWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

- (void)pushImportSourceWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)sourceFromURIResolver;

- (void)pushImportURLWithNSString:(NSString *)hrefUrl;

- (void)pushNewNamespaceSupport;

- (void)pushProcessorWithOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)processor;

- (void)pushSpaceHandlingWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attrs;

- (void)pushSpaceHandlingWithBoolean:(jboolean)b;

- (void)setStylesheetTypeWithInt:(jint)type;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorStylesheetHandler)

J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorStylesheetHandler, m_stylesheetRoot_, OrgApacheXalanTemplatesStylesheetRoot *)
J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorStylesheetHandler, m_lastPoppedStylesheet_, OrgApacheXalanTemplatesStylesheet *)
J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorStylesheetHandler, m_baseIdentifiers_, JavaUtilStack *)
J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorStylesheetHandler, m_nsSupportStack_, JavaUtilStack *)

inline jint OrgApacheXalanProcessorStylesheetHandler_get_STYPE_ROOT(void);
#define OrgApacheXalanProcessorStylesheetHandler_STYPE_ROOT 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorStylesheetHandler, STYPE_ROOT, jint)

inline jint OrgApacheXalanProcessorStylesheetHandler_get_STYPE_INCLUDE(void);
#define OrgApacheXalanProcessorStylesheetHandler_STYPE_INCLUDE 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorStylesheetHandler, STYPE_INCLUDE, jint)

inline jint OrgApacheXalanProcessorStylesheetHandler_get_STYPE_IMPORT(void);
#define OrgApacheXalanProcessorStylesheetHandler_STYPE_IMPORT 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorStylesheetHandler, STYPE_IMPORT, jint)

FOUNDATION_EXPORT void OrgApacheXalanProcessorStylesheetHandler_initWithOrgApacheXalanProcessorTransformerFactoryImpl_(OrgApacheXalanProcessorStylesheetHandler *self, OrgApacheXalanProcessorTransformerFactoryImpl *processor);

FOUNDATION_EXPORT OrgApacheXalanProcessorStylesheetHandler *new_OrgApacheXalanProcessorStylesheetHandler_initWithOrgApacheXalanProcessorTransformerFactoryImpl_(OrgApacheXalanProcessorTransformerFactoryImpl *processor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorStylesheetHandler *create_OrgApacheXalanProcessorStylesheetHandler_initWithOrgApacheXalanProcessorTransformerFactoryImpl_(OrgApacheXalanProcessorTransformerFactoryImpl *processor);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorStylesheetHandler)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorStylesheetHandler")