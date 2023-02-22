//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tos/Desktop/hg_repo/splendo/j2objc/jsr305/build_result/java/javax/annotation/meta/When.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaWhen")
#ifdef RESTRICT_JavaxAnnotationMetaWhen
#define INCLUDE_ALL_JavaxAnnotationMetaWhen 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaWhen 1
#endif
#undef RESTRICT_JavaxAnnotationMetaWhen

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationMetaWhen_) && (INCLUDE_ALL_JavaxAnnotationMetaWhen || defined(INCLUDE_JavaxAnnotationMetaWhen))
#define JavaxAnnotationMetaWhen_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaxAnnotationMetaWhen_Enum) {
  JavaxAnnotationMetaWhen_Enum_ALWAYS = 0,
  JavaxAnnotationMetaWhen_Enum_UNKNOWN = 1,
  JavaxAnnotationMetaWhen_Enum_MAYBE = 2,
  JavaxAnnotationMetaWhen_Enum_NEVER = 3,
};

/*!
 @brief Used to describe the relationship between a qualifier T and the set of values
  S possible on an annotated element.
 In particular, an issues should be reported if an ALWAYS or MAYBE value is
  used where a NEVER value is required, or if a NEVER or MAYBE value is used
  where an ALWAYS value is required.
 */
@interface JavaxAnnotationMetaWhen : JavaLangEnum

@property (readonly, class, nonnull) JavaxAnnotationMetaWhen *ALWAYS NS_SWIFT_NAME(ALWAYS);
@property (readonly, class, nonnull) JavaxAnnotationMetaWhen *UNKNOWN NS_SWIFT_NAME(UNKNOWN);
@property (readonly, class, nonnull) JavaxAnnotationMetaWhen *MAYBE NS_SWIFT_NAME(MAYBE);
@property (readonly, class, nonnull) JavaxAnnotationMetaWhen *NEVER NS_SWIFT_NAME(NEVER);
+ (JavaxAnnotationMetaWhen * __nonnull)ALWAYS;

+ (JavaxAnnotationMetaWhen * __nonnull)UNKNOWN;

+ (JavaxAnnotationMetaWhen * __nonnull)MAYBE;

+ (JavaxAnnotationMetaWhen * __nonnull)NEVER;

#pragma mark Public

+ (JavaxAnnotationMetaWhen *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaxAnnotationMetaWhen_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaxAnnotationMetaWhen)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaxAnnotationMetaWhen *JavaxAnnotationMetaWhen_values_[];

/*!
 @brief S is a subset of T
 */
inline JavaxAnnotationMetaWhen *JavaxAnnotationMetaWhen_get_ALWAYS(void);
J2OBJC_ENUM_CONSTANT(JavaxAnnotationMetaWhen, ALWAYS)

/*!
 @brief nothing definitive is known about the relation between S and T
 */
inline JavaxAnnotationMetaWhen *JavaxAnnotationMetaWhen_get_UNKNOWN(void);
J2OBJC_ENUM_CONSTANT(JavaxAnnotationMetaWhen, UNKNOWN)

/*!
 @brief S intersection T is non empty and S - T is nonempty
 */
inline JavaxAnnotationMetaWhen *JavaxAnnotationMetaWhen_get_MAYBE(void);
J2OBJC_ENUM_CONSTANT(JavaxAnnotationMetaWhen, MAYBE)

/*!
 @brief S intersection T is empty
 */
inline JavaxAnnotationMetaWhen *JavaxAnnotationMetaWhen_get_NEVER(void);
J2OBJC_ENUM_CONSTANT(JavaxAnnotationMetaWhen, NEVER)

FOUNDATION_EXPORT IOSObjectArray *JavaxAnnotationMetaWhen_values(void);

FOUNDATION_EXPORT JavaxAnnotationMetaWhen *JavaxAnnotationMetaWhen_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaxAnnotationMetaWhen *JavaxAnnotationMetaWhen_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaWhen)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaWhen")
