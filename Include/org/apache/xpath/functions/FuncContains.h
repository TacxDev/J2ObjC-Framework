//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncContains.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncContains
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncContains

#if !defined (OrgApacheXpathFunctionsFuncContains_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains || defined(INCLUDE_OrgApacheXpathFunctionsFuncContains))
#define OrgApacheXpathFunctionsFuncContains_

#define RESTRICT_OrgApacheXpathFunctionsFunction2Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction2Args 1
#include "org/apache/xpath/functions/Function2Args.h"

@class JavaLangLong;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathFunctionsFuncContains : OrgApacheXpathFunctionsFunction2Args

#pragma mark Public

- (instancetype)init;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncContains)

inline jlong OrgApacheXpathFunctionsFuncContains_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncContains_serialVersionUID 5084753781887919723LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncContains, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncContains_init(OrgApacheXpathFunctionsFuncContains *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncContains *new_OrgApacheXpathFunctionsFuncContains_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncContains *create_OrgApacheXpathFunctionsFuncContains_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncContains)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains")