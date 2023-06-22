//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/AttList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsAttList")
#ifdef RESTRICT_OrgApacheXmlUtilsAttList
#define INCLUDE_ALL_OrgApacheXmlUtilsAttList 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsAttList 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsAttList

#if !defined (OrgApacheXmlUtilsAttList_) && (INCLUDE_ALL_OrgApacheXmlUtilsAttList || defined(INCLUDE_OrgApacheXmlUtilsAttList))
#define OrgApacheXmlUtilsAttList_

#define RESTRICT_OrgXmlSaxAttributes 1
#define INCLUDE_OrgXmlSaxAttributes 1
#include "org/xml/sax/Attributes.h"

@class JavaLangInteger;
@class OrgApacheXmlUtilsDOMHelper;
@protocol OrgW3cDomNamedNodeMap;

@interface OrgApacheXmlUtilsAttList : NSObject < OrgXmlSaxAttributes > {
 @public
  id<OrgW3cDomNamedNodeMap> m_attrs_;
  jint m_lastIndex_;
  OrgApacheXmlUtilsDOMHelper *m_dh_;
}

#pragma mark Public

- (instancetype)initWithOrgW3cDomNamedNodeMap:(id<OrgW3cDomNamedNodeMap>)attrs
               withOrgApacheXmlUtilsDOMHelper:(OrgApacheXmlUtilsDOMHelper *)dh;

- (jint)getIndexWithNSString:(NSString *)qName;

- (jint)getIndexWithNSString:(NSString *)uri
                withNSString:(NSString *)localPart;

- (jint)getLength;

- (NSString *)getLocalNameWithInt:(jint)index;

- (NSString *)getQNameWithInt:(jint)i;

- (NSString *)getTypeWithInt:(jint)i;

- (NSString *)getTypeWithNSString:(NSString *)name;

- (NSString *)getTypeWithNSString:(NSString *)uri
                     withNSString:(NSString *)localName;

- (NSString *)getURIWithInt:(jint)index;

- (NSString *)getValueWithInt:(jint)i;

- (NSString *)getValueWithNSString:(NSString *)name;

- (NSString *)getValueWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsAttList)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsAttList, m_attrs_, id<OrgW3cDomNamedNodeMap>)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsAttList, m_dh_, OrgApacheXmlUtilsDOMHelper *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsAttList_initWithOrgW3cDomNamedNodeMap_withOrgApacheXmlUtilsDOMHelper_(OrgApacheXmlUtilsAttList *self, id<OrgW3cDomNamedNodeMap> attrs, OrgApacheXmlUtilsDOMHelper *dh);

FOUNDATION_EXPORT OrgApacheXmlUtilsAttList *new_OrgApacheXmlUtilsAttList_initWithOrgW3cDomNamedNodeMap_withOrgApacheXmlUtilsDOMHelper_(id<OrgW3cDomNamedNodeMap> attrs, OrgApacheXmlUtilsDOMHelper *dh) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsAttList *create_OrgApacheXmlUtilsAttList_initWithOrgW3cDomNamedNodeMap_withOrgApacheXmlUtilsDOMHelper_(id<OrgW3cDomNamedNodeMap> attrs, OrgApacheXmlUtilsDOMHelper *dh);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsAttList)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsAttList")