//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/serialize/SerializerUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanSerializeSerializerUtils")
#ifdef RESTRICT_OrgApacheXalanSerializeSerializerUtils
#define INCLUDE_ALL_OrgApacheXalanSerializeSerializerUtils 0
#else
#define INCLUDE_ALL_OrgApacheXalanSerializeSerializerUtils 1
#endif
#undef RESTRICT_OrgApacheXalanSerializeSerializerUtils

#if !defined (OrgApacheXalanSerializeSerializerUtils_) && (INCLUDE_ALL_OrgApacheXalanSerializeSerializerUtils || defined(INCLUDE_OrgApacheXalanSerializeSerializerUtils))
#define OrgApacheXalanSerializeSerializerUtils_

@class JavaLangBoolean;
@class JavaLangInteger;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXmlSerializerSerializationHandler;

@interface OrgApacheXalanSerializeSerializerUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)addAttributeWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)handler
                                                           withInt:(jint)attr;

+ (void)addAttributesWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)handler
                                                            withInt:(jint)src;

+ (void)ensureNamespaceDeclDeclaredWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)handler
                                                           withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                                                          withInt:(jint)namespace_;

+ (jboolean)isDefinedNSDeclWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)serializer
                                                                  withInt:(jint)attr
                                                   withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

+ (void)outputResultTreeFragmentWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)handler
                                              withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj
                                                withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

+ (void)processNSDeclsWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)handler
                                                             withInt:(jint)src
                                                             withInt:(jint)type
                                              withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanSerializeSerializerUtils)

FOUNDATION_EXPORT void OrgApacheXalanSerializeSerializerUtils_init(OrgApacheXalanSerializeSerializerUtils *self);

FOUNDATION_EXPORT OrgApacheXalanSerializeSerializerUtils *new_OrgApacheXalanSerializeSerializerUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanSerializeSerializerUtils *create_OrgApacheXalanSerializeSerializerUtils_init(void);

FOUNDATION_EXPORT void OrgApacheXalanSerializeSerializerUtils_addAttributeWithOrgApacheXmlSerializerSerializationHandler_withInt_(id<OrgApacheXmlSerializerSerializationHandler> handler, jint attr);

FOUNDATION_EXPORT void OrgApacheXalanSerializeSerializerUtils_addAttributesWithOrgApacheXmlSerializerSerializationHandler_withInt_(id<OrgApacheXmlSerializerSerializationHandler> handler, jint src);

FOUNDATION_EXPORT void OrgApacheXalanSerializeSerializerUtils_outputResultTreeFragmentWithOrgApacheXmlSerializerSerializationHandler_withOrgApacheXpathObjectsXObject_withOrgApacheXpathXPathContext_(id<OrgApacheXmlSerializerSerializationHandler> handler, OrgApacheXpathObjectsXObject *obj, OrgApacheXpathXPathContext *support);

FOUNDATION_EXPORT void OrgApacheXalanSerializeSerializerUtils_processNSDeclsWithOrgApacheXmlSerializerSerializationHandler_withInt_withInt_withOrgApacheXmlDtmDTM_(id<OrgApacheXmlSerializerSerializationHandler> handler, jint src, jint type, id<OrgApacheXmlDtmDTM> dtm);

FOUNDATION_EXPORT jboolean OrgApacheXalanSerializeSerializerUtils_isDefinedNSDeclWithOrgApacheXmlSerializerSerializationHandler_withInt_withOrgApacheXmlDtmDTM_(id<OrgApacheXmlSerializerSerializationHandler> serializer, jint attr, id<OrgApacheXmlDtmDTM> dtm);

FOUNDATION_EXPORT void OrgApacheXalanSerializeSerializerUtils_ensureNamespaceDeclDeclaredWithOrgApacheXmlSerializerSerializationHandler_withOrgApacheXmlDtmDTM_withInt_(id<OrgApacheXmlSerializerSerializationHandler> handler, id<OrgApacheXmlDtmDTM> dtm, jint namespace_);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanSerializeSerializerUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanSerializeSerializerUtils")
