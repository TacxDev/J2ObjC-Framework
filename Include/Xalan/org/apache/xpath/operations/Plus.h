//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Plus.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsPlus")
#ifdef RESTRICT_OrgApacheXpathOperationsPlus
#define INCLUDE_ALL_OrgApacheXpathOperationsPlus 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsPlus 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsPlus

#if !defined (OrgApacheXpathOperationsPlus_) && (INCLUDE_ALL_OrgApacheXpathOperationsPlus || defined(INCLUDE_OrgApacheXpathOperationsPlus))
#define OrgApacheXpathOperationsPlus_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class JavaLangDouble;
@class JavaLangLong;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathOperationsPlus : OrgApacheXpathOperationsOperation

#pragma mark Public

- (instancetype)init;

- (jdouble)numWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsPlus)

inline jlong OrgApacheXpathOperationsPlus_get_serialVersionUID(void);
#define OrgApacheXpathOperationsPlus_serialVersionUID -4492072861616504256LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsPlus, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsPlus_init(OrgApacheXpathOperationsPlus *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsPlus *new_OrgApacheXpathOperationsPlus_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsPlus *create_OrgApacheXpathOperationsPlus_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsPlus)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsPlus")
