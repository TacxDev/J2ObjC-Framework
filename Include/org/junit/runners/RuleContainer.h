//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runners/RuleContainer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersRuleContainer")
#ifdef RESTRICT_OrgJunitRunnersRuleContainer
#define INCLUDE_ALL_OrgJunitRunnersRuleContainer 0
#else
#define INCLUDE_ALL_OrgJunitRunnersRuleContainer 1
#endif
#undef RESTRICT_OrgJunitRunnersRuleContainer

#if !defined (OrgJunitRunnersRuleContainer_) && (INCLUDE_ALL_OrgJunitRunnersRuleContainer || defined(INCLUDE_OrgJunitRunnersRuleContainer))
#define OrgJunitRunnersRuleContainer_

@class JavaLangInteger;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelStatement;
@protocol JavaUtilComparator;
@protocol JavaUtilList;
@protocol OrgJunitRulesMethodRule;
@protocol OrgJunitRulesTestRule;

@interface OrgJunitRunnersRuleContainer : NSObject

#pragma mark Public

- (void)addWithOrgJunitRulesMethodRule:(id<OrgJunitRulesMethodRule>)methodRule;

- (void)addWithOrgJunitRulesTestRule:(id<OrgJunitRulesTestRule>)testRule;

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                  withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
                                                                         withId:(id)target
                                              withOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (void)setOrderWithId:(id)rule
               withInt:(jint)order;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (id<JavaUtilList>)getSortedRules;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnersRuleContainer)

inline id<JavaUtilComparator> OrgJunitRunnersRuleContainer_get_ENTRY_COMPARATOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> OrgJunitRunnersRuleContainer_ENTRY_COMPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJunitRunnersRuleContainer, ENTRY_COMPARATOR, id<JavaUtilComparator>)

FOUNDATION_EXPORT void OrgJunitRunnersRuleContainer_initPackagePrivate(OrgJunitRunnersRuleContainer *self);

FOUNDATION_EXPORT OrgJunitRunnersRuleContainer *new_OrgJunitRunnersRuleContainer_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersRuleContainer *create_OrgJunitRunnersRuleContainer_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersRuleContainer)

#endif

#if !defined (OrgJunitRunnersRuleContainer_RuleEntry_) && (INCLUDE_ALL_OrgJunitRunnersRuleContainer || defined(INCLUDE_OrgJunitRunnersRuleContainer_RuleEntry))
#define OrgJunitRunnersRuleContainer_RuleEntry_

@class JavaLangInteger;

@interface OrgJunitRunnersRuleContainer_RuleEntry : NSObject {
 @public
  id rule_;
  jint type_;
  jint order_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)rule
                   withInt:(jint)type
       withJavaLangInteger:(JavaLangInteger *)order;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersRuleContainer_RuleEntry)

J2OBJC_FIELD_SETTER(OrgJunitRunnersRuleContainer_RuleEntry, rule_, id)

inline jint OrgJunitRunnersRuleContainer_RuleEntry_get_TYPE_TEST_RULE(void);
#define OrgJunitRunnersRuleContainer_RuleEntry_TYPE_TEST_RULE 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgJunitRunnersRuleContainer_RuleEntry, TYPE_TEST_RULE, jint)

inline jint OrgJunitRunnersRuleContainer_RuleEntry_get_TYPE_METHOD_RULE(void);
#define OrgJunitRunnersRuleContainer_RuleEntry_TYPE_METHOD_RULE 0
J2OBJC_STATIC_FIELD_CONSTANT(OrgJunitRunnersRuleContainer_RuleEntry, TYPE_METHOD_RULE, jint)

FOUNDATION_EXPORT void OrgJunitRunnersRuleContainer_RuleEntry_initWithId_withInt_withJavaLangInteger_(OrgJunitRunnersRuleContainer_RuleEntry *self, id rule, jint type, JavaLangInteger *order);

FOUNDATION_EXPORT OrgJunitRunnersRuleContainer_RuleEntry *new_OrgJunitRunnersRuleContainer_RuleEntry_initWithId_withInt_withJavaLangInteger_(id rule, jint type, JavaLangInteger *order) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersRuleContainer_RuleEntry *create_OrgJunitRunnersRuleContainer_RuleEntry_initWithId_withInt_withJavaLangInteger_(id rule, jint type, JavaLangInteger *order);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersRuleContainer_RuleEntry)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersRuleContainer")