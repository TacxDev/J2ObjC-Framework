//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/junit/ExceptionFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory")
#ifdef RESTRICT_OrgMockitoInternalJunitExceptionFactory
#define INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory 0
#else
#define INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory 1
#endif
#undef RESTRICT_OrgMockitoInternalJunitExceptionFactory

#if !defined (OrgMockitoInternalJunitExceptionFactory_) && (INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory || defined(INCLUDE_OrgMockitoInternalJunitExceptionFactory))
#define OrgMockitoInternalJunitExceptionFactory_

@class JavaLangAssertionError;

@interface OrgMockitoInternalJunitExceptionFactory : NSObject

#pragma mark Public

+ (JavaLangAssertionError *)createArgumentsAreDifferentExceptionWithNSString:(NSString *)message
                                                                withNSString:(NSString *)wanted
                                                                withNSString:(NSString *)actual;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalJunitExceptionFactory)

FOUNDATION_EXPORT JavaLangAssertionError *OrgMockitoInternalJunitExceptionFactory_createArgumentsAreDifferentExceptionWithNSString_withNSString_withNSString_(NSString *message, NSString *wanted, NSString *actual);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalJunitExceptionFactory)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory")