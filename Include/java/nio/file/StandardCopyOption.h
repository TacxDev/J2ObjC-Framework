//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/StandardCopyOption.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileStandardCopyOption")
#ifdef RESTRICT_JavaNioFileStandardCopyOption
#define INCLUDE_ALL_JavaNioFileStandardCopyOption 0
#else
#define INCLUDE_ALL_JavaNioFileStandardCopyOption 1
#endif
#undef RESTRICT_JavaNioFileStandardCopyOption

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileStandardCopyOption_) && (INCLUDE_ALL_JavaNioFileStandardCopyOption || defined(INCLUDE_JavaNioFileStandardCopyOption))
#define JavaNioFileStandardCopyOption_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_JavaNioFileCopyOption 1
#define INCLUDE_JavaNioFileCopyOption 1
#include "java/nio/file/CopyOption.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, JavaNioFileStandardCopyOption_Enum) {
  JavaNioFileStandardCopyOption_Enum_REPLACE_EXISTING = 0,
  JavaNioFileStandardCopyOption_Enum_COPY_ATTRIBUTES = 1,
  JavaNioFileStandardCopyOption_Enum_ATOMIC_MOVE = 2,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define JavaNioFileStandardCopyOption_ORDINAL jint
#else
#define JavaNioFileStandardCopyOption_ORDINAL JavaNioFileStandardCopyOption_Enum
#endif


/*!
 @brief Defines the standard copy options.
 @since 1.7
 */
@interface JavaNioFileStandardCopyOption : JavaLangEnum < JavaNioFileCopyOption >

#pragma mark Public

+ (JavaNioFileStandardCopyOption *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaNioFileStandardCopyOption_Enum)toNSEnum;

- (JavaNioFileStandardCopyOption_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(JavaNioFileStandardCopyOption)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaNioFileStandardCopyOption *JavaNioFileStandardCopyOption_values_[];

/*!
 @brief Replace an existing file if it exists.
 */
inline JavaNioFileStandardCopyOption *JavaNioFileStandardCopyOption_get_REPLACE_EXISTING(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileStandardCopyOption, REPLACE_EXISTING)

/*!
 @brief Copy attributes to the new file.
 */
inline JavaNioFileStandardCopyOption *JavaNioFileStandardCopyOption_get_COPY_ATTRIBUTES(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileStandardCopyOption, COPY_ATTRIBUTES)

/*!
 @brief Move the file as an atomic file system operation.
 */
inline JavaNioFileStandardCopyOption *JavaNioFileStandardCopyOption_get_ATOMIC_MOVE(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileStandardCopyOption, ATOMIC_MOVE)

FOUNDATION_EXPORT IOSObjectArray *JavaNioFileStandardCopyOption_values(void);

FOUNDATION_EXPORT JavaNioFileStandardCopyOption *JavaNioFileStandardCopyOption_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaNioFileStandardCopyOption *JavaNioFileStandardCopyOption_fromOrdinal(JavaNioFileStandardCopyOption_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileStandardCopyOption)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioFileStandardCopyOption")