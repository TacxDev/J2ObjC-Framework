//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncDoclocation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncDoclocation
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncDoclocation

#if !defined (OrgApacheXpathFunctionsFuncDoclocation_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation || defined(INCLUDE_OrgApacheXpathFunctionsFuncDoclocation))
#define OrgApacheXpathFunctionsFuncDoclocation_

#define RESTRICT_OrgApacheXpathFunctionsFunctionDef1Arg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionDef1Arg 1
#include "org/apache/xpath/functions/FunctionDef1Arg.h"

@class JavaLangLong;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathFunctionsFuncDoclocation : OrgApacheXpathFunctionsFunctionDef1Arg

#pragma mark Public

- (instancetype)init;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncDoclocation)

inline jlong OrgApacheXpathFunctionsFuncDoclocation_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncDoclocation_serialVersionUID 7469213946343568769LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncDoclocation, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncDoclocation_init(OrgApacheXpathFunctionsFuncDoclocation *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncDoclocation *new_OrgApacheXpathFunctionsFuncDoclocation_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncDoclocation *create_OrgApacheXpathFunctionsFuncDoclocation_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncDoclocation)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncDoclocation")