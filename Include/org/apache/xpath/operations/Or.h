//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Or.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsOr")
#ifdef RESTRICT_OrgApacheXpathOperationsOr
#define INCLUDE_ALL_OrgApacheXpathOperationsOr 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsOr 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsOr

#if !defined (OrgApacheXpathOperationsOr_) && (INCLUDE_ALL_OrgApacheXpathOperationsOr || defined(INCLUDE_OrgApacheXpathOperationsOr))
#define OrgApacheXpathOperationsOr_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class JavaLangBoolean;
@class JavaLangLong;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathOperationsOr : OrgApacheXpathOperationsOperation

#pragma mark Public

- (instancetype)init;

- (jboolean)bool__WithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsOr)

inline jlong OrgApacheXpathOperationsOr_get_serialVersionUID(void);
#define OrgApacheXpathOperationsOr_serialVersionUID -644107191353853079LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsOr, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsOr_init(OrgApacheXpathOperationsOr *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsOr *new_OrgApacheXpathOperationsOr_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsOr *create_OrgApacheXpathOperationsOr_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsOr)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsOr")
