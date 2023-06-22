//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/escape/CharEscaperBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder")
#ifdef RESTRICT_ComGoogleCommonEscapeCharEscaperBuilder
#define INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeCharEscaperBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeCharEscaperBuilder_) && (INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder || defined(INCLUDE_ComGoogleCommonEscapeCharEscaperBuilder))
#define ComGoogleCommonEscapeCharEscaperBuilder_

@class ComGoogleCommonEscapeEscaper;
@class IOSCharArray;
@class IOSObjectArray;
@class JavaLangCharacter;

@interface ComGoogleCommonEscapeCharEscaperBuilder : NSObject

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonEscapeCharEscaperBuilder *)addEscapeWithChar:(jchar)c
                                                  withNSString:(NSString *)r;

- (ComGoogleCommonEscapeCharEscaperBuilder *)addEscapesWithCharArray:(IOSCharArray *)cs
                                                        withNSString:(NSString *)r;

- (IOSObjectArray *)toArray;

- (ComGoogleCommonEscapeEscaper *)toEscaper;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeCharEscaperBuilder)

FOUNDATION_EXPORT void ComGoogleCommonEscapeCharEscaperBuilder_init(ComGoogleCommonEscapeCharEscaperBuilder *self);

FOUNDATION_EXPORT ComGoogleCommonEscapeCharEscaperBuilder *new_ComGoogleCommonEscapeCharEscaperBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEscapeCharEscaperBuilder *create_ComGoogleCommonEscapeCharEscaperBuilder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeCharEscaperBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder")
