//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/hamcrest/MatcherAssert.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestMatcherAssert")
#ifdef RESTRICT_OrgHamcrestMatcherAssert
#define INCLUDE_ALL_OrgHamcrestMatcherAssert 0
#else
#define INCLUDE_ALL_OrgHamcrestMatcherAssert 1
#endif
#undef RESTRICT_OrgHamcrestMatcherAssert

#if !defined (OrgHamcrestMatcherAssert_) && (INCLUDE_ALL_OrgHamcrestMatcherAssert || defined(INCLUDE_OrgHamcrestMatcherAssert))
#define OrgHamcrestMatcherAssert_

@class JavaLangBoolean;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestMatcherAssert : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)assertThatWithNSString:(NSString *)reason
                   withBoolean:(jboolean)assertion;

+ (void)assertThatWithNSString:(NSString *)reason
                        withId:(id)actual
        withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (void)assertThatWithId:(id)actual
  withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestMatcherAssert)

FOUNDATION_EXPORT void OrgHamcrestMatcherAssert_init(OrgHamcrestMatcherAssert *self);

FOUNDATION_EXPORT OrgHamcrestMatcherAssert *new_OrgHamcrestMatcherAssert_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestMatcherAssert *create_OrgHamcrestMatcherAssert_init(void);

FOUNDATION_EXPORT void OrgHamcrestMatcherAssert_assertThatWithId_withOrgHamcrestMatcher_(id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgHamcrestMatcherAssert_assertThatWithNSString_withId_withOrgHamcrestMatcher_(NSString *reason, id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgHamcrestMatcherAssert_assertThatWithNSString_withBoolean_(NSString *reason, jboolean assertion);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestMatcherAssert)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgHamcrestMatcherAssert")
