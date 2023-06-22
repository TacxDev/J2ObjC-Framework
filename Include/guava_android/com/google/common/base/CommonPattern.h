//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/base/CommonPattern.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseCommonPattern")
#ifdef RESTRICT_ComGoogleCommonBaseCommonPattern
#define INCLUDE_ALL_ComGoogleCommonBaseCommonPattern 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseCommonPattern 1
#endif
#undef RESTRICT_ComGoogleCommonBaseCommonPattern

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseCommonPattern_) && (INCLUDE_ALL_ComGoogleCommonBaseCommonPattern || defined(INCLUDE_ComGoogleCommonBaseCommonPattern))
#define ComGoogleCommonBaseCommonPattern_

@class ComGoogleCommonBaseCommonMatcher;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonBaseCommonPattern : NSObject

#pragma mark Public

+ (ComGoogleCommonBaseCommonPattern *)compileWithNSString:(NSString *)pattern;

- (jint)flags;

+ (jboolean)isPcreLike;

- (ComGoogleCommonBaseCommonMatcher *)matcherWithJavaLangCharSequence:(id<JavaLangCharSequence>)t;

- (NSString *)pattern;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCommonPattern)

FOUNDATION_EXPORT void ComGoogleCommonBaseCommonPattern_initPackagePrivate(ComGoogleCommonBaseCommonPattern *self);

FOUNDATION_EXPORT ComGoogleCommonBaseCommonPattern *ComGoogleCommonBaseCommonPattern_compileWithNSString_(NSString *pattern);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseCommonPattern_isPcreLike(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCommonPattern)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseCommonPattern")
