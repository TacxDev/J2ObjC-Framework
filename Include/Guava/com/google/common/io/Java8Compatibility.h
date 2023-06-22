//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/io/Java8Compatibility.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoJava8Compatibility")
#ifdef RESTRICT_ComGoogleCommonIoJava8Compatibility
#define INCLUDE_ALL_ComGoogleCommonIoJava8Compatibility 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoJava8Compatibility 1
#endif
#undef RESTRICT_ComGoogleCommonIoJava8Compatibility

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoJava8Compatibility_) && (INCLUDE_ALL_ComGoogleCommonIoJava8Compatibility || defined(INCLUDE_ComGoogleCommonIoJava8Compatibility))
#define ComGoogleCommonIoJava8Compatibility_

@class JavaLangInteger;
@class JavaNioBuffer;

@interface ComGoogleCommonIoJava8Compatibility : NSObject

#pragma mark Package-Private

+ (void)clearWithJavaNioBuffer:(JavaNioBuffer *)b;

+ (void)flipWithJavaNioBuffer:(JavaNioBuffer *)b;

+ (void)limitWithJavaNioBuffer:(JavaNioBuffer *)b
                       withInt:(jint)limit;

+ (void)markWithJavaNioBuffer:(JavaNioBuffer *)b;

+ (void)positionWithJavaNioBuffer:(JavaNioBuffer *)b
                          withInt:(jint)position;

+ (void)resetWithJavaNioBuffer:(JavaNioBuffer *)b;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoJava8Compatibility)

FOUNDATION_EXPORT void ComGoogleCommonIoJava8Compatibility_clearWithJavaNioBuffer_(JavaNioBuffer *b);

FOUNDATION_EXPORT void ComGoogleCommonIoJava8Compatibility_flipWithJavaNioBuffer_(JavaNioBuffer *b);

FOUNDATION_EXPORT void ComGoogleCommonIoJava8Compatibility_limitWithJavaNioBuffer_withInt_(JavaNioBuffer *b, jint limit);

FOUNDATION_EXPORT void ComGoogleCommonIoJava8Compatibility_markWithJavaNioBuffer_(JavaNioBuffer *b);

FOUNDATION_EXPORT void ComGoogleCommonIoJava8Compatibility_positionWithJavaNioBuffer_withInt_(JavaNioBuffer *b, jint position);

FOUNDATION_EXPORT void ComGoogleCommonIoJava8Compatibility_resetWithJavaNioBuffer_(JavaNioBuffer *b);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoJava8Compatibility)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoJava8Compatibility")
