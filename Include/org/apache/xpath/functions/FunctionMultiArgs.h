//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FunctionMultiArgs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs")
#ifdef RESTRICT_OrgApacheXpathFunctionsFunctionMultiArgs
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFunctionMultiArgs

#if !defined (OrgApacheXpathFunctionsFunctionMultiArgs_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs || defined(INCLUDE_OrgApacheXpathFunctionsFunctionMultiArgs))
#define OrgApacheXpathFunctionsFunctionMultiArgs_

#define RESTRICT_OrgApacheXpathFunctionsFunction3Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction3Args 1
#include "org/apache/xpath/functions/Function3Args.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathVisitor;

@interface OrgApacheXpathFunctionsFunctionMultiArgs : OrgApacheXpathFunctionsFunction3Args {
 @public
  IOSObjectArray *m_args_;
}

#pragma mark Public

- (instancetype)init;

- (void)callArgVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

- (jboolean)canTraverseOutsideSubtree;

- (void)checkNumberArgsWithInt:(jint)argNum;

- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

- (IOSObjectArray *)getArgs;

- (void)setArgWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)arg
                                   withInt:(jint)argNum;

#pragma mark Protected

- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunctionMultiArgs)

J2OBJC_FIELD_SETTER(OrgApacheXpathFunctionsFunctionMultiArgs, m_args_, IOSObjectArray *)

inline jlong OrgApacheXpathFunctionsFunctionMultiArgs_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFunctionMultiArgs_serialVersionUID 7117257746138417181LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFunctionMultiArgs, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunctionMultiArgs_init(OrgApacheXpathFunctionsFunctionMultiArgs *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionMultiArgs *new_OrgApacheXpathFunctionsFunctionMultiArgs_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionMultiArgs *create_OrgApacheXpathFunctionsFunctionMultiArgs_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunctionMultiArgs)

#endif

#if !defined (OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs || defined(INCLUDE_OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner))
#define OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class JavaLangInteger;
@class OrgApacheXpathExpression;
@class OrgApacheXpathFunctionsFunctionMultiArgs;

@interface OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner : NSObject < OrgApacheXpathExpressionOwner > {
 @public
  jint m_argIndex_;
}

#pragma mark Public

- (OrgApacheXpathExpression *)getExpression;

- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXpathFunctionsFunctionMultiArgs:(OrgApacheXpathFunctionsFunctionMultiArgs *)outer$
                                                         withInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_initWithOrgApacheXpathFunctionsFunctionMultiArgs_withInt_(OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner *self, OrgApacheXpathFunctionsFunctionMultiArgs *outer$, jint index);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner *new_OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_initWithOrgApacheXpathFunctionsFunctionMultiArgs_withInt_(OrgApacheXpathFunctionsFunctionMultiArgs *outer$, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner *create_OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner_initWithOrgApacheXpathFunctionsFunctionMultiArgs_withInt_(OrgApacheXpathFunctionsFunctionMultiArgs *outer$, jint index);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunctionMultiArgs_ArgMultiOwner)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunctionMultiArgs")