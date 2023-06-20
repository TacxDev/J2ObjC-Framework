//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/jaxp/JAXPPrefixResolver.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver")
#ifdef RESTRICT_OrgApacheXpathJaxpJAXPPrefixResolver
#define INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver 0
#else
#define INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver 1
#endif
#undef RESTRICT_OrgApacheXpathJaxpJAXPPrefixResolver

#if !defined (OrgApacheXpathJaxpJAXPPrefixResolver_) && (INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver || defined(INCLUDE_OrgApacheXpathJaxpJAXPPrefixResolver))
#define OrgApacheXpathJaxpJAXPPrefixResolver_

#define RESTRICT_OrgApacheXmlUtilsPrefixResolver 1
#define INCLUDE_OrgApacheXmlUtilsPrefixResolver 1
#include "org/apache/xml/utils/PrefixResolver.h"

@class JavaLangBoolean;
@protocol JavaxXmlNamespaceNamespaceContext;
@protocol OrgW3cDomNode;

@interface OrgApacheXpathJaxpJAXPPrefixResolver : NSObject < OrgApacheXmlUtilsPrefixResolver >

#pragma mark Public

- (instancetype)initWithJavaxXmlNamespaceNamespaceContext:(id<JavaxXmlNamespaceNamespaceContext>)nsContext;

- (NSString *)getBaseIdentifier;

- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix;

- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)namespaceContext;

- (jboolean)handlesNullPrefixes;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathJaxpJAXPPrefixResolver)

inline NSString *OrgApacheXpathJaxpJAXPPrefixResolver_get_S_XMLNAMESPACEURI(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathJaxpJAXPPrefixResolver_S_XMLNAMESPACEURI;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathJaxpJAXPPrefixResolver, S_XMLNAMESPACEURI, NSString *)

FOUNDATION_EXPORT void OrgApacheXpathJaxpJAXPPrefixResolver_initWithJavaxXmlNamespaceNamespaceContext_(OrgApacheXpathJaxpJAXPPrefixResolver *self, id<JavaxXmlNamespaceNamespaceContext> nsContext);

FOUNDATION_EXPORT OrgApacheXpathJaxpJAXPPrefixResolver *new_OrgApacheXpathJaxpJAXPPrefixResolver_initWithJavaxXmlNamespaceNamespaceContext_(id<JavaxXmlNamespaceNamespaceContext> nsContext) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathJaxpJAXPPrefixResolver *create_OrgApacheXpathJaxpJAXPPrefixResolver_initWithJavaxXmlNamespaceNamespaceContext_(id<JavaxXmlNamespaceNamespaceContext> nsContext);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathJaxpJAXPPrefixResolver)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver")
