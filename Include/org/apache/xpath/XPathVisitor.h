//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/XPathVisitor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathXPathVisitor")
#ifdef RESTRICT_OrgApacheXpathXPathVisitor
#define INCLUDE_ALL_OrgApacheXpathXPathVisitor 0
#else
#define INCLUDE_ALL_OrgApacheXpathXPathVisitor 1
#endif
#undef RESTRICT_OrgApacheXpathXPathVisitor

#if !defined (OrgApacheXpathXPathVisitor_) && (INCLUDE_ALL_OrgApacheXpathXPathVisitor || defined(INCLUDE_OrgApacheXpathXPathVisitor))
#define OrgApacheXpathXPathVisitor_

@class JavaLangBoolean;
@class OrgApacheXpathAxesLocPathIterator;
@class OrgApacheXpathAxesUnionPathIterator;
@class OrgApacheXpathExpression;
@class OrgApacheXpathFunctionsFunction;
@class OrgApacheXpathObjectsXNumber;
@class OrgApacheXpathObjectsXString;
@class OrgApacheXpathOperationsOperation;
@class OrgApacheXpathOperationsUnaryOperation;
@class OrgApacheXpathOperationsVariable;
@class OrgApacheXpathPatternsNodeTest;
@class OrgApacheXpathPatternsStepPattern;
@class OrgApacheXpathPatternsUnionPattern;
@protocol OrgApacheXpathExpressionOwner;

@interface OrgApacheXpathXPathVisitor : NSObject

#pragma mark Public

- (instancetype)init;

- (jboolean)visitBinaryOperationWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                            withOrgApacheXpathOperationsOperation:(OrgApacheXpathOperationsOperation *)op;

- (jboolean)visitFunctionWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathFunctionsFunction:(OrgApacheXpathFunctionsFunction *)func;

- (jboolean)visitLocationPathWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                         withOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)path;

- (jboolean)visitMatchPatternWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                         withOrgApacheXpathPatternsStepPattern:(OrgApacheXpathPatternsStepPattern *)pattern;

- (jboolean)visitNumberLiteralWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                               withOrgApacheXpathObjectsXNumber:(OrgApacheXpathObjectsXNumber *)num;

- (jboolean)visitPredicateWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                               withOrgApacheXpathExpression:(OrgApacheXpathExpression *)pred;

- (jboolean)visitStepWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                    withOrgApacheXpathPatternsNodeTest:(OrgApacheXpathPatternsNodeTest *)step;

- (jboolean)visitStringLiteralWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                               withOrgApacheXpathObjectsXString:(OrgApacheXpathObjectsXString *)str;

- (jboolean)visitUnaryOperationWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                      withOrgApacheXpathOperationsUnaryOperation:(OrgApacheXpathOperationsUnaryOperation *)op;

- (jboolean)visitUnionPathWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                    withOrgApacheXpathAxesUnionPathIterator:(OrgApacheXpathAxesUnionPathIterator *)path;

- (jboolean)visitUnionPatternWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                        withOrgApacheXpathPatternsUnionPattern:(OrgApacheXpathPatternsUnionPattern *)pattern;

- (jboolean)visitVariableRefWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                         withOrgApacheXpathOperationsVariable:(OrgApacheXpathOperationsVariable *)var;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathXPathVisitor)

FOUNDATION_EXPORT void OrgApacheXpathXPathVisitor_init(OrgApacheXpathXPathVisitor *self);

FOUNDATION_EXPORT OrgApacheXpathXPathVisitor *new_OrgApacheXpathXPathVisitor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathVisitor *create_OrgApacheXpathXPathVisitor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathXPathVisitor)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathXPathVisitor")