//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemText.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemText")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemText
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemText 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemText 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemText

#if !defined (OrgApacheXalanTemplatesElemText_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemText || defined(INCLUDE_OrgApacheXalanTemplatesElemText))
#define OrgApacheXalanTemplatesElemText_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;

@interface OrgApacheXalanTemplatesElemText : OrgApacheXalanTemplatesElemTemplateElement

#pragma mark Public

- (instancetype)init;

- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

- (jboolean)getDisableOutputEscaping;

- (NSString *)getNodeName;

- (jint)getXSLToken;

- (void)setDisableOutputEscapingWithBoolean:(jboolean)v;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemText)

inline jlong OrgApacheXalanTemplatesElemText_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemText_serialVersionUID 1383140876182316711LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemText, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemText_init(OrgApacheXalanTemplatesElemText *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemText *new_OrgApacheXalanTemplatesElemText_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemText *create_OrgApacheXalanTemplatesElemText_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemText)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemText")
