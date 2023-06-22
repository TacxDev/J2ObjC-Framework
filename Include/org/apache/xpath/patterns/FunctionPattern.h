//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/patterns/FunctionPattern.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern")
#ifdef RESTRICT_OrgApacheXpathPatternsFunctionPattern
#define INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern 0
#else
#define INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern 1
#endif
#undef RESTRICT_OrgApacheXpathPatternsFunctionPattern

#if !defined (OrgApacheXpathPatternsFunctionPattern_) && (INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern || defined(INCLUDE_OrgApacheXpathPatternsFunctionPattern))
#define OrgApacheXpathPatternsFunctionPattern_

#define RESTRICT_OrgApacheXpathPatternsStepPattern 1
#define INCLUDE_OrgApacheXpathPatternsStepPattern 1
#include "org/apache/xpath/patterns/StepPattern.h"

@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXmlDtmDTM;

@interface OrgApacheXpathPatternsFunctionPattern : OrgApacheXpathPatternsStepPattern {
 @public
  OrgApacheXpathExpression *m_functionExpr_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr
                                         withInt:(jint)axis
                                         withInt:(jint)predaxis;

- (void)calcScore;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)context;

- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)context
                                                 withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                                                withInt:(jint)expType;

- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

#pragma mark Protected

- (void)callSubtreeVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithInt:(jint)arg0
                    withInt:(jint)arg1
                    withInt:(jint)arg2 NS_UNAVAILABLE;

- (instancetype)initWithInt:(jint)arg0
               withNSString:(NSString *)arg1
               withNSString:(NSString *)arg2
                    withInt:(jint)arg3
                    withInt:(jint)arg4 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathPatternsFunctionPattern)

J2OBJC_FIELD_SETTER(OrgApacheXpathPatternsFunctionPattern, m_functionExpr_, OrgApacheXpathExpression *)

inline jlong OrgApacheXpathPatternsFunctionPattern_get_serialVersionUID(void);
#define OrgApacheXpathPatternsFunctionPattern_serialVersionUID -5426793413091209944LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathPatternsFunctionPattern, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathPatternsFunctionPattern_initWithOrgApacheXpathExpression_withInt_withInt_(OrgApacheXpathPatternsFunctionPattern *self, OrgApacheXpathExpression *expr, jint axis, jint predaxis);

FOUNDATION_EXPORT OrgApacheXpathPatternsFunctionPattern *new_OrgApacheXpathPatternsFunctionPattern_initWithOrgApacheXpathExpression_withInt_withInt_(OrgApacheXpathExpression *expr, jint axis, jint predaxis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsFunctionPattern *create_OrgApacheXpathPatternsFunctionPattern_initWithOrgApacheXpathExpression_withInt_withInt_(OrgApacheXpathExpression *expr, jint axis, jint predaxis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathPatternsFunctionPattern)

#endif

#if !defined (OrgApacheXpathPatternsFunctionPattern_FunctionOwner_) && (INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern || defined(INCLUDE_OrgApacheXpathPatternsFunctionPattern_FunctionOwner))
#define OrgApacheXpathPatternsFunctionPattern_FunctionOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathExpression;
@class OrgApacheXpathPatternsFunctionPattern;

@interface OrgApacheXpathPatternsFunctionPattern_FunctionOwner : NSObject < OrgApacheXpathExpressionOwner >

#pragma mark Public

- (OrgApacheXpathExpression *)getExpression;

- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXpathPatternsFunctionPattern:(OrgApacheXpathPatternsFunctionPattern *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathPatternsFunctionPattern_FunctionOwner)

FOUNDATION_EXPORT void OrgApacheXpathPatternsFunctionPattern_FunctionOwner_initWithOrgApacheXpathPatternsFunctionPattern_(OrgApacheXpathPatternsFunctionPattern_FunctionOwner *self, OrgApacheXpathPatternsFunctionPattern *outer$);

FOUNDATION_EXPORT OrgApacheXpathPatternsFunctionPattern_FunctionOwner *new_OrgApacheXpathPatternsFunctionPattern_FunctionOwner_initWithOrgApacheXpathPatternsFunctionPattern_(OrgApacheXpathPatternsFunctionPattern *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsFunctionPattern_FunctionOwner *create_OrgApacheXpathPatternsFunctionPattern_FunctionOwner_initWithOrgApacheXpathPatternsFunctionPattern_(OrgApacheXpathPatternsFunctionPattern *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathPatternsFunctionPattern_FunctionOwner)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathPatternsFunctionPattern")