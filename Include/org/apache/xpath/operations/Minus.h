//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Minus.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsMinus")
#ifdef RESTRICT_OrgApacheXpathOperationsMinus
#define INCLUDE_ALL_OrgApacheXpathOperationsMinus 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsMinus 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsMinus

#if !defined (OrgApacheXpathOperationsMinus_) && (INCLUDE_ALL_OrgApacheXpathOperationsMinus || defined(INCLUDE_OrgApacheXpathOperationsMinus))
#define OrgApacheXpathOperationsMinus_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class JavaLangDouble;
@class JavaLangLong;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathOperationsMinus : OrgApacheXpathOperationsOperation

#pragma mark Public

- (instancetype)init;

- (jdouble)numWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsMinus)

inline jlong OrgApacheXpathOperationsMinus_get_serialVersionUID(void);
#define OrgApacheXpathOperationsMinus_serialVersionUID -5297672838170871043LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsMinus, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsMinus_init(OrgApacheXpathOperationsMinus *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsMinus *new_OrgApacheXpathOperationsMinus_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsMinus *create_OrgApacheXpathOperationsMinus_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsMinus)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsMinus")