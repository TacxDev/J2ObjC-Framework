//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/util/concurrent/UncheckedExecutionException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedExecutionException")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentUncheckedExecutionException
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedExecutionException 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedExecutionException 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentUncheckedExecutionException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentUncheckedExecutionException_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedExecutionException || defined(INCLUDE_ComGoogleCommonUtilConcurrentUncheckedExecutionException))
#define ComGoogleCommonUtilConcurrentUncheckedExecutionException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangBoolean;
@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentUncheckedExecutionException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Protected

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUncheckedExecutionException)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedExecutionException_init(ComGoogleCommonUtilConcurrentUncheckedExecutionException *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *new_ComGoogleCommonUtilConcurrentUncheckedExecutionException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *create_ComGoogleCommonUtilConcurrentUncheckedExecutionException_init(void);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_(ComGoogleCommonUtilConcurrentUncheckedExecutionException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *new_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *create_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_withJavaLangThrowable_(ComGoogleCommonUtilConcurrentUncheckedExecutionException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *new_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *create_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithJavaLangThrowable_(ComGoogleCommonUtilConcurrentUncheckedExecutionException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *new_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *create_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncheckedExecutionException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncheckedExecutionException")
