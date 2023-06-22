//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/org/checkerframework/framework/qual/TypeKind.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualTypeKind")
#ifdef RESTRICT_OrgCheckerframeworkFrameworkQualTypeKind
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualTypeKind 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualTypeKind 1
#endif
#undef RESTRICT_OrgCheckerframeworkFrameworkQualTypeKind

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkFrameworkQualTypeKind_) && (INCLUDE_ALL_OrgCheckerframeworkFrameworkQualTypeKind || defined(INCLUDE_OrgCheckerframeworkFrameworkQualTypeKind))
#define OrgCheckerframeworkFrameworkQualTypeKind_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, OrgCheckerframeworkFrameworkQualTypeKind_Enum) {
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_BOOLEAN = 0,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_BYTE = 1,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_SHORT = 2,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_INT = 3,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_LONG = 4,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_CHAR = 5,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_FLOAT = 6,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_DOUBLE = 7,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_VOID = 8,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_NONE = 9,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_NULL = 10,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_ARRAY = 11,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_DECLARED = 12,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_ERROR = 13,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_TYPEVAR = 14,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_WILDCARD = 15,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_PACKAGE = 16,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_EXECUTABLE = 17,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_OTHER = 18,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_UNION = 19,
  OrgCheckerframeworkFrameworkQualTypeKind_Enum_INTERSECTION = 20,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define OrgCheckerframeworkFrameworkQualTypeKind_ORDINAL jint
#else
#define OrgCheckerframeworkFrameworkQualTypeKind_ORDINAL OrgCheckerframeworkFrameworkQualTypeKind_Enum
#endif


@interface OrgCheckerframeworkFrameworkQualTypeKind : JavaLangEnum

#pragma mark Public

+ (OrgCheckerframeworkFrameworkQualTypeKind *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (OrgCheckerframeworkFrameworkQualTypeKind_Enum)toNSEnum;

- (OrgCheckerframeworkFrameworkQualTypeKind_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(OrgCheckerframeworkFrameworkQualTypeKind)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_values_[];

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_BOOLEAN(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, BOOLEAN)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_BYTE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, BYTE)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_SHORT(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, SHORT)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_INT(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, INT)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_LONG(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, LONG)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_CHAR(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, CHAR)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_FLOAT(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, FLOAT)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_DOUBLE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, DOUBLE)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_VOID(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, VOID)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_NONE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, NONE)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_NULL(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, NULL)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_ARRAY(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, ARRAY)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_DECLARED(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, DECLARED)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_ERROR(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, ERROR)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_TYPEVAR(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, TYPEVAR)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_WILDCARD(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, WILDCARD)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_PACKAGE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, PACKAGE)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_EXECUTABLE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, EXECUTABLE)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_OTHER(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, OTHER)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_UNION(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, UNION)

inline OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_get_INTERSECTION(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualTypeKind, INTERSECTION)

FOUNDATION_EXPORT IOSObjectArray *OrgCheckerframeworkFrameworkQualTypeKind_values(void);

FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualTypeKind *OrgCheckerframeworkFrameworkQualTypeKind_fromOrdinal(OrgCheckerframeworkFrameworkQualTypeKind_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkFrameworkQualTypeKind)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualTypeKind")