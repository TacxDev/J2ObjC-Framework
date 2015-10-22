//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/TypeVariable.java
//

#ifndef _JavaLangReflectTypeVariable_H_
#define _JavaLangReflectTypeVariable_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/lang/reflect/Type.h"

@class IOSObjectArray;
@protocol JavaLangReflectGenericDeclaration;

/*!
 @brief This interface represents a type variables such as <code>'T'</code> in <code>'public interface Comparable<T>'</code>
 , the bounded <code>'T'</code> in <code>'public interface A<T extends Number>'</code>
  or the multiple bounded <code>'T'</code>
  in <code>'public interface B<T extends Number & Cloneable>'</code>.
 @since 1.5
 */
@protocol JavaLangReflectTypeVariable < JavaLangReflectType, NSObject, JavaObject >

/*!
 @brief Returns the upper bounds of this type variable.
 <code>Object</code> is the
 implicit upper bound if no other bounds are declared.
 @return the upper bounds of this type variable
 @throws TypeNotPresentException
 if any of the bounds points to a missing type
 @throws MalformedParameterizedTypeException
 if any of the bounds points to a type that cannot be
 instantiated for some reason
 */
- (IOSObjectArray *)getBounds;

/*!
 @brief Returns the language construct that declares this type variable.
 @return the generic declaration
 */
- (id)getGenericDeclaration;

/*!
 @brief Returns the name of this type variable as it is specified in source
 code.
 @return the name of this type variable
 */
- (NSString *)getName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectTypeVariable)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectTypeVariable)

#endif // _JavaLangReflectTypeVariable_H_
