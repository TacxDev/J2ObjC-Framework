//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/base/Enums.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseEnums")
#ifdef RESTRICT_ComGoogleCommonBaseEnums
#define INCLUDE_ALL_ComGoogleCommonBaseEnums 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseEnums 1
#endif
#undef RESTRICT_ComGoogleCommonBaseEnums

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseEnums_) && (INCLUDE_ALL_ComGoogleCommonBaseEnums || defined(INCLUDE_ComGoogleCommonBaseEnums))
#define ComGoogleCommonBaseEnums_

@class ComGoogleCommonBaseConverter;
@class ComGoogleCommonBaseOptional;
@class IOSClass;
@class JavaLangEnum;
@class JavaLangReflectField;
@protocol JavaUtilMap;

@interface ComGoogleCommonBaseEnums : NSObject

#pragma mark Public

+ (JavaLangReflectField *)getFieldWithJavaLangEnum:(JavaLangEnum *)enumValue;

+ (ComGoogleCommonBaseOptional *)getIfPresentWithIOSClass:(IOSClass *)enumClass
                                             withNSString:(NSString *)value;

+ (ComGoogleCommonBaseConverter *)stringConverterWithIOSClass:(IOSClass *)enumClass;

#pragma mark Package-Private

+ (id<JavaUtilMap>)getEnumConstantsWithIOSClass:(IOSClass *)enumClass;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseEnums)

FOUNDATION_EXPORT JavaLangReflectField *ComGoogleCommonBaseEnums_getFieldWithJavaLangEnum_(JavaLangEnum *enumValue);

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBaseEnums_getIfPresentWithIOSClass_withNSString_(IOSClass *enumClass, NSString *value);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonBaseEnums_getEnumConstantsWithIOSClass_(IOSClass *enumClass);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonBaseEnums_stringConverterWithIOSClass_(IOSClass *enumClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEnums)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseEnums")
