//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/SourceTreeManager.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathSourceTreeManager")
#ifdef RESTRICT_OrgApacheXpathSourceTreeManager
#define INCLUDE_ALL_OrgApacheXpathSourceTreeManager 0
#else
#define INCLUDE_ALL_OrgApacheXpathSourceTreeManager 1
#endif
#undef RESTRICT_OrgApacheXpathSourceTreeManager

#if !defined (OrgApacheXpathSourceTreeManager_) && (INCLUDE_ALL_OrgApacheXpathSourceTreeManager || defined(INCLUDE_OrgApacheXpathSourceTreeManager))
#define OrgApacheXpathSourceTreeManager_

@class JavaLangInteger;
@class OrgApacheXpathXPathContext;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformSourceLocator;
@protocol JavaxXmlTransformURIResolver;
@protocol OrgXmlSaxXMLReader;

@interface OrgApacheXpathSourceTreeManager : NSObject {
 @public
  id<JavaxXmlTransformURIResolver> m_uriResolver_;
}

#pragma mark Public

- (instancetype)init;

- (NSString *)findURIFromDocWithInt:(jint)owner;

- (jint)getNodeWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source;

- (jint)getSourceTreeWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
              withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
                  withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (jint)getSourceTreeWithNSString:(NSString *)base
                     withNSString:(NSString *)urlString
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
   withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (id<JavaxXmlTransformURIResolver>)getURIResolver;

+ (id<OrgXmlSaxXMLReader>)getXMLReaderWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)inputSource
                               withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

- (jint)parseToNodeWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
            withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
                withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (void)putDocumentInCacheWithInt:(jint)n
      withJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source;

- (void)removeDocumentFromCacheWithInt:(jint)n;

- (void)reset;

- (id<JavaxXmlTransformSource>)resolveURIWithNSString:(NSString *)base
                                         withNSString:(NSString *)urlString
                   withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathSourceTreeManager)

J2OBJC_FIELD_SETTER(OrgApacheXpathSourceTreeManager, m_uriResolver_, id<JavaxXmlTransformURIResolver>)

FOUNDATION_EXPORT void OrgApacheXpathSourceTreeManager_init(OrgApacheXpathSourceTreeManager *self);

FOUNDATION_EXPORT OrgApacheXpathSourceTreeManager *new_OrgApacheXpathSourceTreeManager_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathSourceTreeManager *create_OrgApacheXpathSourceTreeManager_init(void);

FOUNDATION_EXPORT id<OrgXmlSaxXMLReader> OrgApacheXpathSourceTreeManager_getXMLReaderWithJavaxXmlTransformSource_withJavaxXmlTransformSourceLocator_(id<JavaxXmlTransformSource> inputSource, id<JavaxXmlTransformSourceLocator> locator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathSourceTreeManager)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathSourceTreeManager")