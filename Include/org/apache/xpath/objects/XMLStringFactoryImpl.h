//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XMLStringFactoryImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl")
#ifdef RESTRICT_OrgApacheXpathObjectsXMLStringFactoryImpl
#define INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXMLStringFactoryImpl

#if !defined (OrgApacheXpathObjectsXMLStringFactoryImpl_) && (INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl || defined(INCLUDE_OrgApacheXpathObjectsXMLStringFactoryImpl))
#define OrgApacheXpathObjectsXMLStringFactoryImpl_

#define RESTRICT_OrgApacheXmlUtilsXMLStringFactory 1
#define INCLUDE_OrgApacheXmlUtilsXMLStringFactory 1
#include "org/apache/xml/utils/XMLStringFactory.h"

@class IOSCharArray;
@class JavaLangInteger;
@class OrgApacheXmlUtilsFastStringBuffer;
@protocol OrgApacheXmlUtilsXMLString;

@interface OrgApacheXpathObjectsXMLStringFactoryImpl : OrgApacheXmlUtilsXMLStringFactory

#pragma mark Public

- (instancetype)init;

- (id<OrgApacheXmlUtilsXMLString>)emptystr;

+ (OrgApacheXmlUtilsXMLStringFactory *)getFactory;

- (id<OrgApacheXmlUtilsXMLString>)newstrWithCharArray:(IOSCharArray *)string
                                              withInt:(jint)start
                                              withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

- (id<OrgApacheXmlUtilsXMLString>)newstrWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)fsb
                                                                      withInt:(jint)start
                                                                      withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

- (id<OrgApacheXmlUtilsXMLString>)newstrWithNSString:(NSString *)string OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathObjectsXMLStringFactoryImpl)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXMLStringFactoryImpl_init(OrgApacheXpathObjectsXMLStringFactoryImpl *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsXMLStringFactoryImpl *new_OrgApacheXpathObjectsXMLStringFactoryImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXMLStringFactoryImpl *create_OrgApacheXpathObjectsXMLStringFactoryImpl_init(void);

FOUNDATION_EXPORT OrgApacheXmlUtilsXMLStringFactory *OrgApacheXpathObjectsXMLStringFactoryImpl_getFactory(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXMLStringFactoryImpl)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl")