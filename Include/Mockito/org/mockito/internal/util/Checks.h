//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/util/Checks.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilChecks")
#ifdef RESTRICT_OrgMockitoInternalUtilChecks
#define INCLUDE_ALL_OrgMockitoInternalUtilChecks 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilChecks 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilChecks

#if !defined (OrgMockitoInternalUtilChecks_) && (INCLUDE_ALL_OrgMockitoInternalUtilChecks || defined(INCLUDE_OrgMockitoInternalUtilChecks))
#define OrgMockitoInternalUtilChecks_

@protocol JavaLangIterable;

@interface OrgMockitoInternalUtilChecks : NSObject

#pragma mark Public

- (instancetype)init;

+ (id<JavaLangIterable>)checkItemsNotNullWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                                 withNSString:(NSString *)checkedIterable;

+ (id)checkNotNullWithId:(id)value
            withNSString:(NSString *)checkedValue;

+ (id)checkNotNullWithId:(id)value
            withNSString:(NSString *)checkedValue
            withNSString:(NSString *)additionalMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilChecks)

FOUNDATION_EXPORT void OrgMockitoInternalUtilChecks_init(OrgMockitoInternalUtilChecks *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilChecks *new_OrgMockitoInternalUtilChecks_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilChecks *create_OrgMockitoInternalUtilChecks_init(void);

FOUNDATION_EXPORT id OrgMockitoInternalUtilChecks_checkNotNullWithId_withNSString_(id value, NSString *checkedValue);

FOUNDATION_EXPORT id OrgMockitoInternalUtilChecks_checkNotNullWithId_withNSString_withNSString_(id value, NSString *checkedValue, NSString *additionalMessage);

FOUNDATION_EXPORT id<JavaLangIterable> OrgMockitoInternalUtilChecks_checkItemsNotNullWithJavaLangIterable_withNSString_(id<JavaLangIterable> iterable, NSString *checkedIterable);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilChecks)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilChecks")
