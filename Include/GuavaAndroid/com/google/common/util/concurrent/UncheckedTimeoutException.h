//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/util/concurrent/UncheckedTimeoutException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedTimeoutException")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentUncheckedTimeoutException
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedTimeoutException 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedTimeoutException 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentUncheckedTimeoutException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentUncheckedTimeoutException_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedTimeoutException || defined(INCLUDE_ComGoogleCommonUtilConcurrentUncheckedTimeoutException))
#define ComGoogleCommonUtilConcurrentUncheckedTimeoutException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangBoolean;
@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentUncheckedTimeoutException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUncheckedTimeoutException)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_init(ComGoogleCommonUtilConcurrentUncheckedTimeoutException *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *new_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *create_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_init(void);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_(ComGoogleCommonUtilConcurrentUncheckedTimeoutException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *new_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *create_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithJavaLangThrowable_(ComGoogleCommonUtilConcurrentUncheckedTimeoutException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *new_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *create_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_withJavaLangThrowable_(ComGoogleCommonUtilConcurrentUncheckedTimeoutException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *new_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *create_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncheckedTimeoutException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedTimeoutException")
