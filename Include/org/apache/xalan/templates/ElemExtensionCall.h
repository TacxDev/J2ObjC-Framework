//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemExtensionCall.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemExtensionCall
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemExtensionCall

#if !defined (OrgApacheXalanTemplatesElemExtensionCall_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall || defined(INCLUDE_OrgApacheXalanTemplatesElemExtensionCall))
#define OrgApacheXalanTemplatesElemExtensionCall_

#define RESTRICT_OrgApacheXalanTemplatesElemLiteralResult 1
#define INCLUDE_OrgApacheXalanTemplatesElemLiteralResult 1
#include "org/apache/xalan/templates/ElemLiteralResult.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXalanTemplatesElemExtensionDecl;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@protocol OrgW3cDomNode;

@interface OrgApacheXalanTemplatesElemExtensionCall : OrgApacheXalanTemplatesElemLiteralResult {
 @public
  NSString *m_extns_;
  NSString *m_lang_;
  NSString *m_srcURL_;
  NSString *m_scriptSrc_;
  OrgApacheXalanTemplatesElemExtensionDecl *m_decl_;
}

#pragma mark Public

- (instancetype)init;

- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (NSString *)getAttributeWithNSString:(NSString *)rawName
                     withOrgW3cDomNode:(id<OrgW3cDomNode>)sourceNode
withOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (jint)getXSLToken;

#pragma mark Protected

- (jboolean)acceptWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemExtensionCall)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_extns_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_lang_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_srcURL_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_scriptSrc_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_decl_, OrgApacheXalanTemplatesElemExtensionDecl *)

inline jlong OrgApacheXalanTemplatesElemExtensionCall_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemExtensionCall_serialVersionUID 3171339708500216920LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemExtensionCall, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemExtensionCall_init(OrgApacheXalanTemplatesElemExtensionCall *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExtensionCall *new_OrgApacheXalanTemplatesElemExtensionCall_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExtensionCall *create_OrgApacheXalanTemplatesElemExtensionCall_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemExtensionCall)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall")