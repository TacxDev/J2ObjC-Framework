//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/ECPoint.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecECPoint")
#ifdef RESTRICT_JavaSecuritySpecECPoint
#define INCLUDE_ALL_JavaSecuritySpecECPoint 0
#else
#define INCLUDE_ALL_JavaSecuritySpecECPoint 1
#endif
#undef RESTRICT_JavaSecuritySpecECPoint

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecECPoint_) && (INCLUDE_ALL_JavaSecuritySpecECPoint || defined(INCLUDE_JavaSecuritySpecECPoint))
#define JavaSecuritySpecECPoint_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaMathBigInteger;

/*!
 @brief This immutable class represents a point on an elliptic curve (EC)
  in affine coordinates.Other coordinate systems can
  extend this class to represent this point in other
  coordinates.
 @author Valerie Peng
 @since 1.5
 */
@interface JavaSecuritySpecECPoint : NSObject

#pragma mark Public

/*!
 @brief Creates an ECPoint from the specified affine x-coordinate 
 <code>x</code> and affine y-coordinate <code>y</code>.
 @param x the affine x-coordinate.
 @param y the affine y-coordinate.
 @throw NullPointerExceptionif <code>x</code> or 
 <code>y</code> is null.
 */
- (instancetype __nonnull)initWithJavaMathBigInteger:(JavaMathBigInteger *)x
                              withJavaMathBigInteger:(JavaMathBigInteger *)y;

/*!
 @brief Compares this elliptic curve point for equality with
  the specified object.
 @param obj the object to be compared.
 @return true if <code>obj</code> is an instance of
  ECPoint and the affine coordinates match, false otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the affine x-coordinate <code>x</code>.
 Note: POINT_INFINITY has a null affine x-coordinate.
 @return the affine x-coordinate.
 */
- (JavaMathBigInteger *)getAffineX;

/*!
 @brief Returns the affine y-coordinate <code>y</code>.
 Note: POINT_INFINITY has a null affine y-coordinate.
 @return the affine y-coordinate.
 */
- (JavaMathBigInteger *)getAffineY;

/*!
 @brief Returns a hash code value for this elliptic curve point.
 @return a hash code value.
 */
- (NSUInteger)hash;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecECPoint)

/*!
 @brief This defines the point at infinity.
 */
inline JavaSecuritySpecECPoint *JavaSecuritySpecECPoint_get_POINT_INFINITY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecECPoint *JavaSecuritySpecECPoint_POINT_INFINITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecECPoint, POINT_INFINITY, JavaSecuritySpecECPoint *)

FOUNDATION_EXPORT void JavaSecuritySpecECPoint_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecECPoint *self, JavaMathBigInteger *x, JavaMathBigInteger *y);

FOUNDATION_EXPORT JavaSecuritySpecECPoint *new_JavaSecuritySpecECPoint_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *x, JavaMathBigInteger *y) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecECPoint *create_JavaSecuritySpecECPoint_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *x, JavaMathBigInteger *y);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECPoint)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecECPoint")
