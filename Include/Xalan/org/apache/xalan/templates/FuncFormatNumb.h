//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/FuncFormatNumb.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb")
#ifdef RESTRICT_OrgApacheXalanTemplatesFuncFormatNumb
#define INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesFuncFormatNumb

#if !defined (OrgApacheXalanTemplatesFuncFormatNumb_) && (INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb || defined(INCLUDE_OrgApacheXalanTemplatesFuncFormatNumb))
#define OrgApacheXalanTemplatesFuncFormatNumb_

#define RESTRICT_OrgApacheXpathFunctionsFunction3Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction3Args 1
#include "org/apache/xpath/functions/Function3Args.h"

@class IOSObjectArray;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXalanTemplatesFuncFormatNumb : OrgApacheXpathFunctionsFunction3Args

#pragma mark Public

- (instancetype)init;

- (void)checkNumberArgsWithInt:(jint)argNum;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (void)warnWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                              withNSString:(NSString *)msg
                         withNSObjectArray:(IOSObjectArray *)args;

#pragma mark Protected

- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesFuncFormatNumb)

inline jlong OrgApacheXalanTemplatesFuncFormatNumb_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesFuncFormatNumb_serialVersionUID -8869935264870858636LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesFuncFormatNumb, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesFuncFormatNumb_init(OrgApacheXalanTemplatesFuncFormatNumb *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesFuncFormatNumb *new_OrgApacheXalanTemplatesFuncFormatNumb_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesFuncFormatNumb *create_OrgApacheXalanTemplatesFuncFormatNumb_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesFuncFormatNumb)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesFuncFormatNumb")
