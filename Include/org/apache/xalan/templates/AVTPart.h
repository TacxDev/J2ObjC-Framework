//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/AVTPart.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart")
#ifdef RESTRICT_OrgApacheXalanTemplatesAVTPart
#define INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesAVTPart

#if !defined (OrgApacheXalanTemplatesAVTPart_) && (INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart || defined(INCLUDE_OrgApacheXalanTemplatesAVTPart))
#define OrgApacheXalanTemplatesAVTPart_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_OrgApacheXalanTemplatesXSLTVisitable 1
#define INCLUDE_OrgApacheXalanTemplatesXSLTVisitable 1
#include "org/apache/xalan/templates/XSLTVisitable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilVector;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlUtilsPrefixResolver;

@interface OrgApacheXalanTemplatesAVTPart : NSObject < JavaIoSerializable, OrgApacheXalanTemplatesXSLTVisitable >

#pragma mark Public

- (instancetype)init;

- (jboolean)canTraverseOutsideSubtree;

- (void)evaluateWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
         withOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)buf
                                       withInt:(jint)context
           withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)nsNode;

- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

- (NSString *)getSimpleString;

- (void)setXPathSupportWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesAVTPart)

inline jlong OrgApacheXalanTemplatesAVTPart_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesAVTPart_serialVersionUID -1747749903613916025LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesAVTPart, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesAVTPart_init(OrgApacheXalanTemplatesAVTPart *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesAVTPart)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesAVTPart")
