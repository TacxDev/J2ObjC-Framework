//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncRound.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncRound
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncRound

#if !defined (OrgApacheXpathFunctionsFuncRound_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound || defined(INCLUDE_OrgApacheXpathFunctionsFuncRound))
#define OrgApacheXpathFunctionsFuncRound_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class JavaLangLong;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathFunctionsFuncRound : OrgApacheXpathFunctionsFunctionOneArg

#pragma mark Public

- (instancetype)init;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncRound)

inline jlong OrgApacheXpathFunctionsFuncRound_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncRound_serialVersionUID -7970583902573826611LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncRound, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncRound_init(OrgApacheXpathFunctionsFuncRound *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncRound *new_OrgApacheXpathFunctionsFuncRound_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncRound *create_OrgApacheXpathFunctionsFuncRound_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncRound)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound")