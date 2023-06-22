//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/truth/build_result/java/com/google/common/truth/MathUtil.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonTruthMathUtil")
#ifdef RESTRICT_ComGoogleCommonTruthMathUtil
#define INCLUDE_ALL_ComGoogleCommonTruthMathUtil 0
#else
#define INCLUDE_ALL_ComGoogleCommonTruthMathUtil 1
#endif
#undef RESTRICT_ComGoogleCommonTruthMathUtil

#if !defined (ComGoogleCommonTruthMathUtil_) && (INCLUDE_ALL_ComGoogleCommonTruthMathUtil || defined(INCLUDE_ComGoogleCommonTruthMathUtil))
#define ComGoogleCommonTruthMathUtil_

@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangFloat;

@interface ComGoogleCommonTruthMathUtil : NSObject

#pragma mark Public

+ (jboolean)equalWithinToleranceWithDouble:(jdouble)left
                                withDouble:(jdouble)right
                                withDouble:(jdouble)tolerance;

+ (jboolean)equalWithinToleranceWithFloat:(jfloat)left
                                withFloat:(jfloat)right
                                withFloat:(jfloat)tolerance;

+ (jboolean)notEqualWithinToleranceWithDouble:(jdouble)left
                                   withDouble:(jdouble)right
                                   withDouble:(jdouble)tolerance;

+ (jboolean)notEqualWithinToleranceWithFloat:(jfloat)left
                                   withFloat:(jfloat)right
                                   withFloat:(jfloat)tolerance;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonTruthMathUtil)

FOUNDATION_EXPORT jboolean ComGoogleCommonTruthMathUtil_equalWithinToleranceWithDouble_withDouble_withDouble_(jdouble left, jdouble right, jdouble tolerance);

FOUNDATION_EXPORT jboolean ComGoogleCommonTruthMathUtil_equalWithinToleranceWithFloat_withFloat_withFloat_(jfloat left, jfloat right, jfloat tolerance);

FOUNDATION_EXPORT jboolean ComGoogleCommonTruthMathUtil_notEqualWithinToleranceWithDouble_withDouble_withDouble_(jdouble left, jdouble right, jdouble tolerance);

FOUNDATION_EXPORT jboolean ComGoogleCommonTruthMathUtil_notEqualWithinToleranceWithFloat_withFloat_withFloat_(jfloat left, jfloat right, jfloat tolerance);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonTruthMathUtil)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonTruthMathUtil")
