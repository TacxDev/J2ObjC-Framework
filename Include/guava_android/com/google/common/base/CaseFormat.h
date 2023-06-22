//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/base/CaseFormat.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseCaseFormat")
#ifdef RESTRICT_ComGoogleCommonBaseCaseFormat
#define INCLUDE_ALL_ComGoogleCommonBaseCaseFormat 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseCaseFormat 1
#endif
#undef RESTRICT_ComGoogleCommonBaseCaseFormat

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseCaseFormat_) && (INCLUDE_ALL_ComGoogleCommonBaseCaseFormat || defined(INCLUDE_ComGoogleCommonBaseCaseFormat))
#define ComGoogleCommonBaseCaseFormat_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class ComGoogleCommonBaseConverter;
@class IOSObjectArray;

typedef NS_ENUM(jint, ComGoogleCommonBaseCaseFormat_Enum) {
  ComGoogleCommonBaseCaseFormat_Enum_LOWER_HYPHEN = 0,
  ComGoogleCommonBaseCaseFormat_Enum_LOWER_UNDERSCORE = 1,
  ComGoogleCommonBaseCaseFormat_Enum_LOWER_CAMEL = 2,
  ComGoogleCommonBaseCaseFormat_Enum_UPPER_CAMEL = 3,
  ComGoogleCommonBaseCaseFormat_Enum_UPPER_UNDERSCORE = 4,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonBaseCaseFormat_ORDINAL jint
#else
#define ComGoogleCommonBaseCaseFormat_ORDINAL ComGoogleCommonBaseCaseFormat_Enum
#endif


@interface ComGoogleCommonBaseCaseFormat : JavaLangEnum

#pragma mark Public

- (ComGoogleCommonBaseConverter *)converterToWithComGoogleCommonBaseCaseFormat:(ComGoogleCommonBaseCaseFormat *)targetFormat;

- (NSString *)toWithComGoogleCommonBaseCaseFormat:(ComGoogleCommonBaseCaseFormat *)format
                                     withNSString:(NSString *)str;

+ (ComGoogleCommonBaseCaseFormat *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (NSString *)convertWithComGoogleCommonBaseCaseFormat:(ComGoogleCommonBaseCaseFormat *)format
                                          withNSString:(NSString *)s;

- (NSString *)normalizeFirstWordWithNSString:(NSString *)word;

- (NSString *)normalizeWordWithNSString:(NSString *)word;

- (ComGoogleCommonBaseCaseFormat_Enum)toNSEnum;

- (ComGoogleCommonBaseCaseFormat_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseCaseFormat)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_values_[];

inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_LOWER_HYPHEN(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, LOWER_HYPHEN)

inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_LOWER_UNDERSCORE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, LOWER_UNDERSCORE)

inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_LOWER_CAMEL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, LOWER_CAMEL)

inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_UPPER_CAMEL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, UPPER_CAMEL)

inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_UPPER_UNDERSCORE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, UPPER_UNDERSCORE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBaseCaseFormat_values(void);

FOUNDATION_EXPORT ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_fromOrdinal(ComGoogleCommonBaseCaseFormat_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCaseFormat)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseCaseFormat")
