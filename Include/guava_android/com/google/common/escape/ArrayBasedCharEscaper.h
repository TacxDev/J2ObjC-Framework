//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/escape/ArrayBasedCharEscaper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper")
#ifdef RESTRICT_ComGoogleCommonEscapeArrayBasedCharEscaper
#define INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeArrayBasedCharEscaper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeArrayBasedCharEscaper_) && (INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper || defined(INCLUDE_ComGoogleCommonEscapeArrayBasedCharEscaper))
#define ComGoogleCommonEscapeArrayBasedCharEscaper_

#define RESTRICT_ComGoogleCommonEscapeCharEscaper 1
#define INCLUDE_ComGoogleCommonEscapeCharEscaper 1
#include "com/google/common/escape/CharEscaper.h"

@class ComGoogleCommonEscapeArrayBasedEscaperMap;
@class IOSCharArray;
@class JavaLangCharacter;
@protocol JavaUtilMap;

@interface ComGoogleCommonEscapeArrayBasedCharEscaper : ComGoogleCommonEscapeCharEscaper

#pragma mark Public

- (NSString *)escapeWithNSString:(NSString *)s;

#pragma mark Protected

- (instancetype)initWithComGoogleCommonEscapeArrayBasedEscaperMap:(ComGoogleCommonEscapeArrayBasedEscaperMap *)escaperMap
                                                         withChar:(jchar)safeMin
                                                         withChar:(jchar)safeMax;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)replacementMap
                           withChar:(jchar)safeMin
                           withChar:(jchar)safeMax;

- (IOSCharArray *)escapeWithChar:(jchar)c;

- (IOSCharArray *)escapeUnsafeWithChar:(jchar)c;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeArrayBasedCharEscaper)

FOUNDATION_EXPORT void ComGoogleCommonEscapeArrayBasedCharEscaper_initWithJavaUtilMap_withChar_withChar_(ComGoogleCommonEscapeArrayBasedCharEscaper *self, id<JavaUtilMap> replacementMap, jchar safeMin, jchar safeMax);

FOUNDATION_EXPORT void ComGoogleCommonEscapeArrayBasedCharEscaper_initWithComGoogleCommonEscapeArrayBasedEscaperMap_withChar_withChar_(ComGoogleCommonEscapeArrayBasedCharEscaper *self, ComGoogleCommonEscapeArrayBasedEscaperMap *escaperMap, jchar safeMin, jchar safeMax);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeArrayBasedCharEscaper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper")
