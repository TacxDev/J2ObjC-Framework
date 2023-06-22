//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/escape/ArrayBasedUnicodeEscaper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedUnicodeEscaper")
#ifdef RESTRICT_ComGoogleCommonEscapeArrayBasedUnicodeEscaper
#define INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedUnicodeEscaper 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedUnicodeEscaper 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeArrayBasedUnicodeEscaper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeArrayBasedUnicodeEscaper_) && (INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedUnicodeEscaper || defined(INCLUDE_ComGoogleCommonEscapeArrayBasedUnicodeEscaper))
#define ComGoogleCommonEscapeArrayBasedUnicodeEscaper_

#define RESTRICT_ComGoogleCommonEscapeUnicodeEscaper 1
#define INCLUDE_ComGoogleCommonEscapeUnicodeEscaper 1
#include "com/google/common/escape/UnicodeEscaper.h"

@class ComGoogleCommonEscapeArrayBasedEscaperMap;
@class IOSCharArray;
@class JavaLangInteger;
@protocol JavaLangCharSequence;
@protocol JavaUtilMap;

@interface ComGoogleCommonEscapeArrayBasedUnicodeEscaper : ComGoogleCommonEscapeUnicodeEscaper

#pragma mark Public

- (NSString *)escapeWithNSString:(NSString *)s;

#pragma mark Protected

- (instancetype)initWithComGoogleCommonEscapeArrayBasedEscaperMap:(ComGoogleCommonEscapeArrayBasedEscaperMap *)escaperMap
                                                          withInt:(jint)safeMin
                                                          withInt:(jint)safeMax
                                                     withNSString:(NSString *)unsafeReplacement;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)replacementMap
                            withInt:(jint)safeMin
                            withInt:(jint)safeMax
                       withNSString:(NSString *)unsafeReplacement;

- (IOSCharArray *)escapeWithInt:(jint)cp;

- (IOSCharArray *)escapeUnsafeWithInt:(jint)cp;

- (jint)nextEscapeIndexWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                        withInt:(jint)index
                                        withInt:(jint)end;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeArrayBasedUnicodeEscaper)

FOUNDATION_EXPORT void ComGoogleCommonEscapeArrayBasedUnicodeEscaper_initWithJavaUtilMap_withInt_withInt_withNSString_(ComGoogleCommonEscapeArrayBasedUnicodeEscaper *self, id<JavaUtilMap> replacementMap, jint safeMin, jint safeMax, NSString *unsafeReplacement);

FOUNDATION_EXPORT void ComGoogleCommonEscapeArrayBasedUnicodeEscaper_initWithComGoogleCommonEscapeArrayBasedEscaperMap_withInt_withInt_withNSString_(ComGoogleCommonEscapeArrayBasedUnicodeEscaper *self, ComGoogleCommonEscapeArrayBasedEscaperMap *escaperMap, jint safeMin, jint safeMax, NSString *unsafeReplacement);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeArrayBasedUnicodeEscaper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedUnicodeEscaper")
