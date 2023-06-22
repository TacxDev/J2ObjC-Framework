//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/errorprone/annotations/Modifier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsModifier")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsModifier
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsModifier 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsModifier 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsModifier

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsModifier_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsModifier || defined(INCLUDE_ComGoogleErrorproneAnnotationsModifier))
#define ComGoogleErrorproneAnnotationsModifier_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, ComGoogleErrorproneAnnotationsModifier_Enum) {
  ComGoogleErrorproneAnnotationsModifier_Enum_PUBLIC = 0,
  ComGoogleErrorproneAnnotationsModifier_Enum_PROTECTED = 1,
  ComGoogleErrorproneAnnotationsModifier_Enum_PRIVATE = 2,
  ComGoogleErrorproneAnnotationsModifier_Enum_ABSTRACT = 3,
  ComGoogleErrorproneAnnotationsModifier_Enum_DEFAULT = 4,
  ComGoogleErrorproneAnnotationsModifier_Enum_STATIC = 5,
  ComGoogleErrorproneAnnotationsModifier_Enum_FINAL = 6,
  ComGoogleErrorproneAnnotationsModifier_Enum_TRANSIENT = 7,
  ComGoogleErrorproneAnnotationsModifier_Enum_VOLATILE = 8,
  ComGoogleErrorproneAnnotationsModifier_Enum_SYNCHRONIZED = 9,
  ComGoogleErrorproneAnnotationsModifier_Enum_NATIVE = 10,
  ComGoogleErrorproneAnnotationsModifier_Enum_STRICTFP = 11,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleErrorproneAnnotationsModifier_ORDINAL jint
#else
#define ComGoogleErrorproneAnnotationsModifier_ORDINAL ComGoogleErrorproneAnnotationsModifier_Enum
#endif


@interface ComGoogleErrorproneAnnotationsModifier : JavaLangEnum

#pragma mark Public

+ (ComGoogleErrorproneAnnotationsModifier *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleErrorproneAnnotationsModifier_Enum)toNSEnum;

- (ComGoogleErrorproneAnnotationsModifier_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleErrorproneAnnotationsModifier)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_values_[];

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_PUBLIC(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, PUBLIC)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_PROTECTED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, PROTECTED)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_PRIVATE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, PRIVATE)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_ABSTRACT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, ABSTRACT)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_DEFAULT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, DEFAULT)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_STATIC(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, STATIC)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_FINAL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, FINAL)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_TRANSIENT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, TRANSIENT)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_VOLATILE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, VOLATILE)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_SYNCHRONIZED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, SYNCHRONIZED)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_NATIVE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, NATIVE)

inline ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_get_STRICTFP(void);
J2OBJC_ENUM_CONSTANT(ComGoogleErrorproneAnnotationsModifier, STRICTFP)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleErrorproneAnnotationsModifier_values(void);

FOUNDATION_EXPORT ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleErrorproneAnnotationsModifier *ComGoogleErrorproneAnnotationsModifier_fromOrdinal(ComGoogleErrorproneAnnotationsModifier_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsModifier)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsModifier")
