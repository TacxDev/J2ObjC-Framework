//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/DoubleBinaryOperator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionDoubleBinaryOperator")
#ifdef RESTRICT_JavaUtilFunctionDoubleBinaryOperator
#define INCLUDE_ALL_JavaUtilFunctionDoubleBinaryOperator 0
#else
#define INCLUDE_ALL_JavaUtilFunctionDoubleBinaryOperator 1
#endif
#undef RESTRICT_JavaUtilFunctionDoubleBinaryOperator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionDoubleBinaryOperator_) && (INCLUDE_ALL_JavaUtilFunctionDoubleBinaryOperator || defined(INCLUDE_JavaUtilFunctionDoubleBinaryOperator))
#define JavaUtilFunctionDoubleBinaryOperator_

@class JavaLangDouble;

/*!
 @brief Represents an operation upon two <code>double</code>-valued operands and producing a 
 <code>double</code>-valued result.This is the primitive type specialization of 
 <code>BinaryOperator</code> for <code>double</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>applyAsDouble(double, double)</code>.
 - seealso: BinaryOperator
 - seealso: DoubleUnaryOperator
 @since 1.8
 */
@protocol JavaUtilFunctionDoubleBinaryOperator < JavaObject >

/*!
 @brief Applies this operator to the given operands.
 @param left the first operand
 @param right the second operand
 @return the operator result
 */
- (jdouble)applyAsDoubleWithDouble:(jdouble)left
                        withDouble:(jdouble)right;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionDoubleBinaryOperator)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionDoubleBinaryOperator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionDoubleBinaryOperator")
