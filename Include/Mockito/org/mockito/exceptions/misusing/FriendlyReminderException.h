//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/exceptions/misusing/FriendlyReminderException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingFriendlyReminderException")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingFriendlyReminderException
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingFriendlyReminderException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingFriendlyReminderException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingFriendlyReminderException

#if !defined (OrgMockitoExceptionsMisusingFriendlyReminderException_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingFriendlyReminderException || defined(INCLUDE_OrgMockitoExceptionsMisusingFriendlyReminderException))
#define OrgMockitoExceptionsMisusingFriendlyReminderException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

@interface OrgMockitoExceptionsMisusingFriendlyReminderException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingFriendlyReminderException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingFriendlyReminderException_initWithNSString_(OrgMockitoExceptionsMisusingFriendlyReminderException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingFriendlyReminderException *new_OrgMockitoExceptionsMisusingFriendlyReminderException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingFriendlyReminderException *create_OrgMockitoExceptionsMisusingFriendlyReminderException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingFriendlyReminderException)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingFriendlyReminderException")
