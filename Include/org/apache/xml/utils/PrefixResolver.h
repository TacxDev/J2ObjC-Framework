//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/PrefixResolver.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver")
#ifdef RESTRICT_OrgApacheXmlUtilsPrefixResolver
#define INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsPrefixResolver

#if !defined (OrgApacheXmlUtilsPrefixResolver_) && (INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver || defined(INCLUDE_OrgApacheXmlUtilsPrefixResolver))
#define OrgApacheXmlUtilsPrefixResolver_

@class JavaLangBoolean;
@protocol OrgW3cDomNode;

@protocol OrgApacheXmlUtilsPrefixResolver < JavaObject >

- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix;

- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)context;

- (NSString *)getBaseIdentifier;

- (jboolean)handlesNullPrefixes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsPrefixResolver)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsPrefixResolver)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsPrefixResolver")