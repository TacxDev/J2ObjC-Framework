//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/ECParameterSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecECParameterSpec")
#ifdef RESTRICT_JavaSecuritySpecECParameterSpec
#define INCLUDE_ALL_JavaSecuritySpecECParameterSpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecECParameterSpec 1
#endif
#undef RESTRICT_JavaSecuritySpecECParameterSpec

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecECParameterSpec_) && (INCLUDE_ALL_JavaSecuritySpecECParameterSpec || defined(INCLUDE_JavaSecuritySpecECParameterSpec))
#define JavaSecuritySpecECParameterSpec_

#define RESTRICT_JavaSecuritySpecAlgorithmParameterSpec 1
#define INCLUDE_JavaSecuritySpecAlgorithmParameterSpec 1
#include "java/security/spec/AlgorithmParameterSpec.h"

@class JavaLangInteger;
@class JavaMathBigInteger;
@class JavaSecuritySpecECPoint;
@class JavaSecuritySpecEllipticCurve;

/*!
 @brief This immutable class specifies the set of domain parameters
  used with elliptic curve cryptography (ECC).
 - seealso: AlgorithmParameterSpec
 @author Valerie Peng
 @since 1.5
 */
@interface JavaSecuritySpecECParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Creates elliptic curve domain parameters based on the
  specified values.
 @param curve the elliptic curve which this parameter  defines.
 @param g the generator which is also known as the base point.
 @param n the order of the generator <code>g</code> .
 @param h the cofactor.
 @throw NullPointerExceptionif <code>curve</code>,
  <code>g</code>, or <code>n</code> is null.
 @throw IllegalArgumentExceptionif <code>n</code>
  or <code>h</code> is not positive.
 */
- (instancetype __nonnull)initWithJavaSecuritySpecEllipticCurve:(JavaSecuritySpecEllipticCurve *)curve
                                    withJavaSecuritySpecECPoint:(JavaSecuritySpecECPoint *)g
                                         withJavaMathBigInteger:(JavaMathBigInteger *)n
                                                        withInt:(jint)h;

/*!
 @brief Returns the cofactor.
 @return the cofactor.
 */
- (jint)getCofactor;

/*!
 @brief Returns the elliptic curve that this parameter defines.
 @return the elliptic curve that this parameter defines.
 */
- (JavaSecuritySpecEllipticCurve *)getCurve;

/*!
 @brief Returns the name of the curve if this is a named curve.Returns
  <code>null</code> if this is not known to be a named curve.
 */
- (NSString *)getCurveName;

/*!
 @brief Returns the generator which is also known as the base point.
 @return the generator which is also known as the base point.
 */
- (JavaSecuritySpecECPoint *)getGenerator;

/*!
 @brief Returns the order of the generator.
 @return the order of the generator.
 */
- (JavaMathBigInteger *)getOrder;

/*!
 @brief Used to set the curve name if available.
 */
- (void)setCurveNameWithNSString:(NSString *)curveName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECParameterSpec)

FOUNDATION_EXPORT void JavaSecuritySpecECParameterSpec_initWithJavaSecuritySpecEllipticCurve_withJavaSecuritySpecECPoint_withJavaMathBigInteger_withInt_(JavaSecuritySpecECParameterSpec *self, JavaSecuritySpecEllipticCurve *curve, JavaSecuritySpecECPoint *g, JavaMathBigInteger *n, jint h);

FOUNDATION_EXPORT JavaSecuritySpecECParameterSpec *new_JavaSecuritySpecECParameterSpec_initWithJavaSecuritySpecEllipticCurve_withJavaSecuritySpecECPoint_withJavaMathBigInteger_withInt_(JavaSecuritySpecEllipticCurve *curve, JavaSecuritySpecECPoint *g, JavaMathBigInteger *n, jint h) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecECParameterSpec *create_JavaSecuritySpecECParameterSpec_initWithJavaSecuritySpecEllipticCurve_withJavaSecuritySpecECPoint_withJavaMathBigInteger_withInt_(JavaSecuritySpecEllipticCurve *curve, JavaSecuritySpecECPoint *g, JavaMathBigInteger *n, jint h);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECParameterSpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecECParameterSpec")
