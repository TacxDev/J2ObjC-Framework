//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/math/BigDecimalMath.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathBigDecimalMath")
#ifdef RESTRICT_ComGoogleCommonMathBigDecimalMath
#define INCLUDE_ALL_ComGoogleCommonMathBigDecimalMath 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathBigDecimalMath 1
#endif
#undef RESTRICT_ComGoogleCommonMathBigDecimalMath

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathBigDecimalMath_) && (INCLUDE_ALL_ComGoogleCommonMathBigDecimalMath || defined(INCLUDE_ComGoogleCommonMathBigDecimalMath))
#define ComGoogleCommonMathBigDecimalMath_

@class JavaLangDouble;
@class JavaMathBigDecimal;
@class JavaMathRoundingMode;

@interface ComGoogleCommonMathBigDecimalMath : NSObject

#pragma mark Public

+ (jdouble)roundToDoubleWithJavaMathBigDecimal:(JavaMathBigDecimal *)x
                      withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathBigDecimalMath)

FOUNDATION_EXPORT jdouble ComGoogleCommonMathBigDecimalMath_roundToDoubleWithJavaMathBigDecimal_withJavaMathRoundingMode_(JavaMathBigDecimal *x, JavaMathRoundingMode *mode);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathBigDecimalMath)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathBigDecimalMath")
