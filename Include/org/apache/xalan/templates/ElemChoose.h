//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemChoose.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemChoose")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemChoose
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemChoose 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemChoose 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemChoose

#if !defined (OrgApacheXalanTemplatesElemChoose_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemChoose || defined(INCLUDE_OrgApacheXalanTemplatesElemChoose))
#define OrgApacheXalanTemplatesElemChoose_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXalanTransformerTransformerImpl;

@interface OrgApacheXalanTemplatesElemChoose : OrgApacheXalanTemplatesElemTemplateElement

#pragma mark Public

- (instancetype)init;

- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

- (jboolean)canAcceptVariables;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (NSString *)getNodeName;

- (jint)getXSLToken;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemChoose)

inline jlong OrgApacheXalanTemplatesElemChoose_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemChoose_serialVersionUID -3070117361903102033LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemChoose, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemChoose_init(OrgApacheXalanTemplatesElemChoose *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemChoose *new_OrgApacheXalanTemplatesElemChoose_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemChoose *create_OrgApacheXalanTemplatesElemChoose_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemChoose)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemChoose")