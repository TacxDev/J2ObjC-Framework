//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/rules/MethodRule.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesMethodRule")
#ifdef RESTRICT_OrgJunitRulesMethodRule
#define INCLUDE_ALL_OrgJunitRulesMethodRule 0
#else
#define INCLUDE_ALL_OrgJunitRulesMethodRule 1
#endif
#undef RESTRICT_OrgJunitRulesMethodRule

#if !defined (OrgJunitRulesMethodRule_) && (INCLUDE_ALL_OrgJunitRulesMethodRule || defined(INCLUDE_OrgJunitRulesMethodRule))
#define OrgJunitRulesMethodRule_

@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelStatement;

@protocol OrgJunitRulesMethodRule < JavaObject >

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                  withOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                   withId:(id)target;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesMethodRule)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesMethodRule)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesMethodRule")