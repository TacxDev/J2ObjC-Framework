//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemAttributeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemAttributeSet
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemAttributeSet

#if !defined (OrgApacheXalanTemplatesElemAttributeSet_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet || defined(INCLUDE_OrgApacheXalanTemplatesElemAttributeSet))
#define OrgApacheXalanTemplatesElemAttributeSet_

#define RESTRICT_OrgApacheXalanTemplatesElemUse 1
#define INCLUDE_OrgApacheXalanTemplatesElemUse 1
#include "org/apache/xalan/templates/ElemUse.h"

@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsQName;

@interface OrgApacheXalanTemplatesElemAttributeSet : OrgApacheXalanTemplatesElemUse {
 @public
  OrgApacheXmlUtilsQName *m_qname_;
}

#pragma mark Public

- (instancetype)init;

- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildElemWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (OrgApacheXmlUtilsQName *)getName;

- (NSString *)getNodeName;

- (jint)getXSLToken;

- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

- (void)setNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemAttributeSet)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemAttributeSet, m_qname_, OrgApacheXmlUtilsQName *)

inline jlong OrgApacheXalanTemplatesElemAttributeSet_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemAttributeSet_serialVersionUID -426740318278164496LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemAttributeSet, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemAttributeSet_init(OrgApacheXalanTemplatesElemAttributeSet *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemAttributeSet *new_OrgApacheXalanTemplatesElemAttributeSet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemAttributeSet *create_OrgApacheXalanTemplatesElemAttributeSet_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemAttributeSet)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet")