//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/Function2Args.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args")
#ifdef RESTRICT_OrgApacheXpathFunctionsFunction2Args
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFunction2Args

#if !defined (OrgApacheXpathFunctionsFunction2Args_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args || defined(INCLUDE_OrgApacheXpathFunctionsFunction2Args))
#define OrgApacheXpathFunctionsFunction2Args_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathVisitor;

@interface OrgApacheXpathFunctionsFunction2Args : OrgApacheXpathFunctionsFunctionOneArg {
 @public
  OrgApacheXpathExpression *m_arg1_;
}

#pragma mark Public

- (instancetype)init;

- (void)callArgVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

- (jboolean)canTraverseOutsideSubtree;

- (void)checkNumberArgsWithInt:(jint)argNum;

- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

- (OrgApacheXpathExpression *)getArg1;

- (void)setArgWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)arg
                                   withInt:(jint)argNum;

#pragma mark Protected

- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunction2Args)

J2OBJC_FIELD_SETTER(OrgApacheXpathFunctionsFunction2Args, m_arg1_, OrgApacheXpathExpression *)

inline jlong OrgApacheXpathFunctionsFunction2Args_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFunction2Args_serialVersionUID 5574294996842710641LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFunction2Args, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunction2Args_init(OrgApacheXpathFunctionsFunction2Args *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction2Args *new_OrgApacheXpathFunctionsFunction2Args_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction2Args *create_OrgApacheXpathFunctionsFunction2Args_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunction2Args)

#endif

#if !defined (OrgApacheXpathFunctionsFunction2Args_Arg1Owner_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args || defined(INCLUDE_OrgApacheXpathFunctionsFunction2Args_Arg1Owner))
#define OrgApacheXpathFunctionsFunction2Args_Arg1Owner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathExpression;
@class OrgApacheXpathFunctionsFunction2Args;

@interface OrgApacheXpathFunctionsFunction2Args_Arg1Owner : NSObject < OrgApacheXpathExpressionOwner >

#pragma mark Public

- (OrgApacheXpathExpression *)getExpression;

- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXpathFunctionsFunction2Args:(OrgApacheXpathFunctionsFunction2Args *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunction2Args_Arg1Owner)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunction2Args_Arg1Owner_initWithOrgApacheXpathFunctionsFunction2Args_(OrgApacheXpathFunctionsFunction2Args_Arg1Owner *self, OrgApacheXpathFunctionsFunction2Args *outer$);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction2Args_Arg1Owner *new_OrgApacheXpathFunctionsFunction2Args_Arg1Owner_initWithOrgApacheXpathFunctionsFunction2Args_(OrgApacheXpathFunctionsFunction2Args *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction2Args_Arg1Owner *create_OrgApacheXpathFunctionsFunction2Args_Arg1Owner_initWithOrgApacheXpathFunctionsFunction2Args_(OrgApacheXpathFunctionsFunction2Args *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunction2Args_Arg1Owner)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args")