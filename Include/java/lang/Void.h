//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Void.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangVoid")
#ifdef RESTRICT_JavaLangVoid
#define INCLUDE_ALL_JavaLangVoid 0
#else
#define INCLUDE_ALL_JavaLangVoid 1
#endif
#undef RESTRICT_JavaLangVoid

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangVoid_) && (INCLUDE_ALL_JavaLangVoid || defined(INCLUDE_JavaLangVoid))
#define JavaLangVoid_

@class IOSClass;

/*!
 @brief The <code>Void</code> class is an uninstantiable placeholder class to hold a
  reference to the <code>Class</code> object representing the Java keyword
  void.
 @since 1.1
 */
@interface JavaLangVoid : NSObject

@end

J2OBJC_STATIC_INIT(JavaLangVoid)

/*!
 @brief The <code>Class</code> object representing the pseudo-type corresponding to
  the keyword <code>void</code>.
 */
inline IOSClass *JavaLangVoid_get_TYPE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSClass *JavaLangVoid_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangVoid, TYPE, IOSClass *)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangVoid)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangVoid")
