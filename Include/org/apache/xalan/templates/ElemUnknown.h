//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemUnknown.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemUnknown
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemUnknown

#if !defined (OrgApacheXalanTemplatesElemUnknown_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown || defined(INCLUDE_OrgApacheXalanTemplatesElemUnknown))
#define OrgApacheXalanTemplatesElemUnknown_

#define RESTRICT_OrgApacheXalanTemplatesElemLiteralResult 1
#define INCLUDE_OrgApacheXalanTemplatesElemLiteralResult 1
#include "org/apache/xalan/templates/ElemLiteralResult.h"

@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXalanTransformerTransformerImpl;

@interface OrgApacheXalanTemplatesElemUnknown : OrgApacheXalanTemplatesElemLiteralResult

#pragma mark Public

- (instancetype)init;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (jint)getXSLToken;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemUnknown)

inline jlong OrgApacheXalanTemplatesElemUnknown_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemUnknown_serialVersionUID -4573981712648730168LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemUnknown, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemUnknown_init(OrgApacheXalanTemplatesElemUnknown *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemUnknown *new_OrgApacheXalanTemplatesElemUnknown_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemUnknown *create_OrgApacheXalanTemplatesElemUnknown_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemUnknown)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown")