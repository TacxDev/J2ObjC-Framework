//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemCopyOf.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemCopyOf
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemCopyOf

#if !defined (OrgApacheXalanTemplatesElemCopyOf_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf || defined(INCLUDE_OrgApacheXalanTemplatesElemCopyOf))
#define OrgApacheXalanTemplatesElemCopyOf_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXpathXPath;

@interface OrgApacheXalanTemplatesElemCopyOf : OrgApacheXalanTemplatesElemTemplateElement {
 @public
  OrgApacheXpathXPath *m_selectExpression_;
}

#pragma mark Public

- (instancetype)init;

- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (NSString *)getNodeName;

- (OrgApacheXpathXPath *)getSelect;

- (jint)getXSLToken;

- (void)setSelectWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)expr;

#pragma mark Protected

- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemCopyOf)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemCopyOf, m_selectExpression_, OrgApacheXpathXPath *)

inline jlong OrgApacheXalanTemplatesElemCopyOf_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemCopyOf_serialVersionUID -7433828829497411127LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemCopyOf, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemCopyOf_init(OrgApacheXalanTemplatesElemCopyOf *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemCopyOf *new_OrgApacheXalanTemplatesElemCopyOf_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemCopyOf *create_OrgApacheXalanTemplatesElemCopyOf_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemCopyOf)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf")