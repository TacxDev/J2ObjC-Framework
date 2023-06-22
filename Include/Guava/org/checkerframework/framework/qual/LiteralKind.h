//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/org/checkerframework/framework/qual/LiteralKind.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind")
#ifdef RESTRICT_OrgCheckerframeworkFrameworkQualLiteralKind
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind 0
#else
#define INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind 1
#endif
#undef RESTRICT_OrgCheckerframeworkFrameworkQualLiteralKind

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgCheckerframeworkFrameworkQualLiteralKind_) && (INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind || defined(INCLUDE_OrgCheckerframeworkFrameworkQualLiteralKind))
#define OrgCheckerframeworkFrameworkQualLiteralKind_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@protocol JavaUtilList;

typedef NS_ENUM(jint, OrgCheckerframeworkFrameworkQualLiteralKind_Enum) {
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_NULL = 0,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_INT = 1,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_LONG = 2,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_FLOAT = 3,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_DOUBLE = 4,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_BOOLEAN = 5,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_CHAR = 6,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_STRING = 7,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_ALL = 8,
  OrgCheckerframeworkFrameworkQualLiteralKind_Enum_PRIMITIVE = 9,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define OrgCheckerframeworkFrameworkQualLiteralKind_ORDINAL jint
#else
#define OrgCheckerframeworkFrameworkQualLiteralKind_ORDINAL OrgCheckerframeworkFrameworkQualLiteralKind_Enum
#endif


@interface OrgCheckerframeworkFrameworkQualLiteralKind : JavaLangEnum

#pragma mark Public

+ (id<JavaUtilList>)allLiteralKinds;

+ (id<JavaUtilList>)primitiveLiteralKinds;

+ (OrgCheckerframeworkFrameworkQualLiteralKind *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (OrgCheckerframeworkFrameworkQualLiteralKind_Enum)toNSEnum;

- (OrgCheckerframeworkFrameworkQualLiteralKind_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(OrgCheckerframeworkFrameworkQualLiteralKind)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_values_[];

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_NULL(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, NULL)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_INT(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, INT)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_LONG(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, LONG)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_FLOAT(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, FLOAT)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_DOUBLE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, DOUBLE)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_BOOLEAN(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, BOOLEAN)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_CHAR(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, CHAR)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_STRING(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, STRING)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_ALL(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, ALL)

inline OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_get_PRIMITIVE(void);
J2OBJC_ENUM_CONSTANT(OrgCheckerframeworkFrameworkQualLiteralKind, PRIMITIVE)

FOUNDATION_EXPORT id<JavaUtilList> OrgCheckerframeworkFrameworkQualLiteralKind_allLiteralKinds(void);

FOUNDATION_EXPORT id<JavaUtilList> OrgCheckerframeworkFrameworkQualLiteralKind_primitiveLiteralKinds(void);

FOUNDATION_EXPORT IOSObjectArray *OrgCheckerframeworkFrameworkQualLiteralKind_values(void);

FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgCheckerframeworkFrameworkQualLiteralKind *OrgCheckerframeworkFrameworkQualLiteralKind_fromOrdinal(OrgCheckerframeworkFrameworkQualLiteralKind_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgCheckerframeworkFrameworkQualLiteralKind)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgCheckerframeworkFrameworkQualLiteralKind")
