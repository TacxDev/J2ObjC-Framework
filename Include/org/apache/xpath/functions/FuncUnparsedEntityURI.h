//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncUnparsedEntityURI.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncUnparsedEntityURI
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncUnparsedEntityURI

#if !defined (OrgApacheXpathFunctionsFuncUnparsedEntityURI_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI || defined(INCLUDE_OrgApacheXpathFunctionsFuncUnparsedEntityURI))
#define OrgApacheXpathFunctionsFuncUnparsedEntityURI_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class JavaLangLong;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathFunctionsFuncUnparsedEntityURI : OrgApacheXpathFunctionsFunctionOneArg

#pragma mark Public

- (instancetype)init;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncUnparsedEntityURI)

inline jlong OrgApacheXpathFunctionsFuncUnparsedEntityURI_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncUnparsedEntityURI_serialVersionUID 845309759097448178LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncUnparsedEntityURI, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncUnparsedEntityURI_init(OrgApacheXpathFunctionsFuncUnparsedEntityURI *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncUnparsedEntityURI *new_OrgApacheXpathFunctionsFuncUnparsedEntityURI_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncUnparsedEntityURI *create_OrgApacheXpathFunctionsFuncUnparsedEntityURI_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncUnparsedEntityURI)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncUnparsedEntityURI")