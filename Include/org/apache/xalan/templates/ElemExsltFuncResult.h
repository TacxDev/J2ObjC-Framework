//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemExsltFuncResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemExsltFuncResult
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemExsltFuncResult

#if !defined (OrgApacheXalanTemplatesElemExsltFuncResult_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult || defined(INCLUDE_OrgApacheXalanTemplatesElemExsltFuncResult))
#define OrgApacheXalanTemplatesElemExsltFuncResult_

#define RESTRICT_OrgApacheXalanTemplatesElemVariable 1
#define INCLUDE_OrgApacheXalanTemplatesElemVariable 1
#include "org/apache/xalan/templates/ElemVariable.h"

@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXalanTransformerTransformerImpl;

@interface OrgApacheXalanTemplatesElemExsltFuncResult : OrgApacheXalanTemplatesElemVariable

#pragma mark Public

- (instancetype)init;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (NSString *)getNodeName;

- (jint)getXSLToken;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXalanTemplatesElemVariable:(OrgApacheXalanTemplatesElemVariable *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemExsltFuncResult)

inline jlong OrgApacheXalanTemplatesElemExsltFuncResult_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemExsltFuncResult_serialVersionUID -3478311949388304563LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemExsltFuncResult, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemExsltFuncResult_init(OrgApacheXalanTemplatesElemExsltFuncResult *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExsltFuncResult *new_OrgApacheXalanTemplatesElemExsltFuncResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExsltFuncResult *create_OrgApacheXalanTemplatesElemExsltFuncResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemExsltFuncResult)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFuncResult")