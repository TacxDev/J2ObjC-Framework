//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/matchers/JUnitMatchers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitMatchersJUnitMatchers")
#ifdef RESTRICT_OrgJunitMatchersJUnitMatchers
#define INCLUDE_ALL_OrgJunitMatchersJUnitMatchers 0
#else
#define INCLUDE_ALL_OrgJunitMatchersJUnitMatchers 1
#endif
#undef RESTRICT_OrgJunitMatchersJUnitMatchers

#if !defined (OrgJunitMatchersJUnitMatchers_) && (INCLUDE_ALL_OrgJunitMatchersJUnitMatchers || defined(INCLUDE_OrgJunitMatchersJUnitMatchers))
#define OrgJunitMatchersJUnitMatchers_

@class IOSObjectArray;
@class OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher;
@class OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher;
@protocol OrgHamcrestMatcher;

@interface OrgJunitMatchersJUnitMatchers : NSObject

#pragma mark Public

- (instancetype)init;

+ (OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *)bothWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (id<OrgHamcrestMatcher>)containsStringWithNSString:(NSString *)substring;

+ (OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *)eitherWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (id<OrgHamcrestMatcher>)everyItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)elementMatcher;

+ (id<OrgHamcrestMatcher>)hasItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)elementMatcher;

+ (id<OrgHamcrestMatcher>)hasItemWithId:(id)element;

+ (id<OrgHamcrestMatcher>)hasItemsWithOrgHamcrestMatcherArray:(IOSObjectArray *)elementMatchers;

+ (id<OrgHamcrestMatcher>)hasItemsWithNSObjectArray:(IOSObjectArray *)elements;

+ (id<OrgHamcrestMatcher>)isExceptionWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)exceptionMatcher;

+ (id<OrgHamcrestMatcher>)isThrowableWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)throwableMatcher;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitMatchersJUnitMatchers)

FOUNDATION_EXPORT void OrgJunitMatchersJUnitMatchers_init(OrgJunitMatchersJUnitMatchers *self);

FOUNDATION_EXPORT OrgJunitMatchersJUnitMatchers *new_OrgJunitMatchersJUnitMatchers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitMatchersJUnitMatchers *create_OrgJunitMatchersJUnitMatchers_init(void);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_hasItemWithId_(id element);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_hasItemWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> elementMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_hasItemsWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_hasItemsWithOrgHamcrestMatcherArray_(IOSObjectArray *elementMatchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_everyItemWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> elementMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_containsStringWithNSString_(NSString *substring);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *OrgJunitMatchersJUnitMatchers_bothWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *OrgJunitMatchersJUnitMatchers_eitherWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_isThrowableWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> throwableMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitMatchersJUnitMatchers_isExceptionWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> exceptionMatcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitMatchersJUnitMatchers)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitMatchersJUnitMatchers")
