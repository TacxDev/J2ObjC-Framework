//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/truth/build_result/java/com/google/common/truth/StackTraceCleaner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonTruthStackTraceCleaner")
#ifdef RESTRICT_ComGoogleCommonTruthStackTraceCleaner
#define INCLUDE_ALL_ComGoogleCommonTruthStackTraceCleaner 0
#else
#define INCLUDE_ALL_ComGoogleCommonTruthStackTraceCleaner 1
#endif
#undef RESTRICT_ComGoogleCommonTruthStackTraceCleaner

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonTruthStackTraceCleaner_) && (INCLUDE_ALL_ComGoogleCommonTruthStackTraceCleaner || defined(INCLUDE_ComGoogleCommonTruthStackTraceCleaner))
#define ComGoogleCommonTruthStackTraceCleaner_

@class JavaLangThrowable;

@interface ComGoogleCommonTruthStackTraceCleaner : NSObject

#pragma mark Package-Private

+ (void)cleanStackTraceWithJavaLangThrowable:(JavaLangThrowable *)throwable;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonTruthStackTraceCleaner)

inline NSString *ComGoogleCommonTruthStackTraceCleaner_get_CLEANER_LINK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonTruthStackTraceCleaner_CLEANER_LINK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonTruthStackTraceCleaner, CLEANER_LINK, NSString *)

FOUNDATION_EXPORT void ComGoogleCommonTruthStackTraceCleaner_cleanStackTraceWithJavaLangThrowable_(JavaLangThrowable *throwable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthStackTraceCleaner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonTruthStackTraceCleaner")
