//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemVariable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemVariable
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemVariable

#if !defined (OrgApacheXalanTemplatesElemVariable_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable || defined(INCLUDE_OrgApacheXalanTemplatesElemVariable))
#define OrgApacheXalanTemplatesElemVariable_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPath;

@interface OrgApacheXalanTemplatesElemVariable : OrgApacheXalanTemplatesElemTemplateElement {
 @public
  jint m_index_;
  jint m_frameSize_;
  OrgApacheXmlUtilsQName *m_qname_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgApacheXalanTemplatesElemVariable:(OrgApacheXalanTemplatesElemVariable *)param;

- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

- (void)endComposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (jint)getIndex;

- (jboolean)getIsTopLevel;

- (OrgApacheXmlUtilsQName *)getName;

- (NSString *)getNodeName;

- (OrgApacheXpathXPath *)getSelect;

- (OrgApacheXpathObjectsXObject *)getValueWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                                               withInt:(jint)sourceNode;

- (jint)getXSLToken;

- (jboolean)isPsuedoVar;

- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

- (void)setIndexWithInt:(jint)index;

- (void)setIsTopLevelWithBoolean:(jboolean)v;

- (void)setNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)v;

- (void)setParentElemWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)p;

- (void)setSelectWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

#pragma mark Protected

- (jboolean)acceptWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

#pragma mark Package-Private

+ (OrgApacheXpathXPath *)rewriteChildToExpressionWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)varElem;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemVariable)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemVariable, m_qname_, OrgApacheXmlUtilsQName *)

inline jlong OrgApacheXalanTemplatesElemVariable_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemVariable_serialVersionUID 9111131075322790061LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemVariable, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemVariable_init(OrgApacheXalanTemplatesElemVariable *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariable *new_OrgApacheXalanTemplatesElemVariable_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariable *create_OrgApacheXalanTemplatesElemVariable_init(void);

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemVariable_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesElemVariable *self, OrgApacheXalanTemplatesElemVariable *param);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariable *new_OrgApacheXalanTemplatesElemVariable_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesElemVariable *param) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariable *create_OrgApacheXalanTemplatesElemVariable_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesElemVariable *param);

FOUNDATION_EXPORT OrgApacheXpathXPath *OrgApacheXalanTemplatesElemVariable_rewriteChildToExpressionWithOrgApacheXalanTemplatesElemTemplateElement_(OrgApacheXalanTemplatesElemTemplateElement *varElem);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemVariable)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable")
