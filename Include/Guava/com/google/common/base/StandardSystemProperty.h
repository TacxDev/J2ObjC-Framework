//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/base/StandardSystemProperty.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty")
#ifdef RESTRICT_ComGoogleCommonBaseStandardSystemProperty
#define INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty 1
#endif
#undef RESTRICT_ComGoogleCommonBaseStandardSystemProperty

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseStandardSystemProperty_) && (INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty || defined(INCLUDE_ComGoogleCommonBaseStandardSystemProperty))
#define ComGoogleCommonBaseStandardSystemProperty_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, ComGoogleCommonBaseStandardSystemProperty_Enum) {
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VERSION = 0,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VENDOR = 1,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VENDOR_URL = 2,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_HOME = 3,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_SPECIFICATION_VERSION = 4,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_SPECIFICATION_VENDOR = 5,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_SPECIFICATION_NAME = 6,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_VERSION = 7,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_VENDOR = 8,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_VM_NAME = 9,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_SPECIFICATION_VERSION = 10,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_SPECIFICATION_VENDOR = 11,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_SPECIFICATION_NAME = 12,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_CLASS_VERSION = 13,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_CLASS_PATH = 14,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_LIBRARY_PATH = 15,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_IO_TMPDIR = 16,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_COMPILER = 17,
  ComGoogleCommonBaseStandardSystemProperty_Enum_JAVA_EXT_DIRS = 18,
  ComGoogleCommonBaseStandardSystemProperty_Enum_OS_NAME = 19,
  ComGoogleCommonBaseStandardSystemProperty_Enum_OS_ARCH = 20,
  ComGoogleCommonBaseStandardSystemProperty_Enum_OS_VERSION = 21,
  ComGoogleCommonBaseStandardSystemProperty_Enum_FILE_SEPARATOR = 22,
  ComGoogleCommonBaseStandardSystemProperty_Enum_PATH_SEPARATOR = 23,
  ComGoogleCommonBaseStandardSystemProperty_Enum_LINE_SEPARATOR = 24,
  ComGoogleCommonBaseStandardSystemProperty_Enum_USER_NAME = 25,
  ComGoogleCommonBaseStandardSystemProperty_Enum_USER_HOME = 26,
  ComGoogleCommonBaseStandardSystemProperty_Enum_USER_DIR = 27,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonBaseStandardSystemProperty_ORDINAL jint
#else
#define ComGoogleCommonBaseStandardSystemProperty_ORDINAL ComGoogleCommonBaseStandardSystemProperty_Enum
#endif


@interface ComGoogleCommonBaseStandardSystemProperty : JavaLangEnum

#pragma mark Public

- (NSString *)key;

- (NSString *)description;

- (NSString *)value;

+ (ComGoogleCommonBaseStandardSystemProperty *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonBaseStandardSystemProperty_Enum)toNSEnum;

- (ComGoogleCommonBaseStandardSystemProperty_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseStandardSystemProperty)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_values_[];

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VERSION)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VENDOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VENDOR)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VENDOR_URL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VENDOR_URL)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_HOME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_HOME)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_SPECIFICATION_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_SPECIFICATION_VERSION)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_SPECIFICATION_VENDOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_SPECIFICATION_VENDOR)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_SPECIFICATION_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_SPECIFICATION_NAME)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_VERSION)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_VENDOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_VENDOR)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_VM_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_VM_NAME)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_SPECIFICATION_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_SPECIFICATION_VERSION)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_SPECIFICATION_VENDOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_SPECIFICATION_VENDOR)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_SPECIFICATION_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_SPECIFICATION_NAME)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_CLASS_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_CLASS_VERSION)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_CLASS_PATH(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_CLASS_PATH)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_LIBRARY_PATH(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_LIBRARY_PATH)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_IO_TMPDIR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_IO_TMPDIR)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_COMPILER(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_COMPILER)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_JAVA_EXT_DIRS(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, JAVA_EXT_DIRS)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_OS_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, OS_NAME)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_OS_ARCH(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, OS_ARCH)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_OS_VERSION(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, OS_VERSION)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_FILE_SEPARATOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, FILE_SEPARATOR)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_PATH_SEPARATOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, PATH_SEPARATOR)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_LINE_SEPARATOR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, LINE_SEPARATOR)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_USER_NAME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, USER_NAME)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_USER_HOME(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, USER_HOME)

inline ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_get_USER_DIR(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseStandardSystemProperty, USER_DIR)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBaseStandardSystemProperty_values(void);

FOUNDATION_EXPORT ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonBaseStandardSystemProperty *ComGoogleCommonBaseStandardSystemProperty_fromOrdinal(ComGoogleCommonBaseStandardSystemProperty_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseStandardSystemProperty)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseStandardSystemProperty")
