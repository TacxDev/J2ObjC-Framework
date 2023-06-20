//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/util/concurrent/DirectExecutor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentDirectExecutor")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentDirectExecutor
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentDirectExecutor 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentDirectExecutor 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentDirectExecutor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentDirectExecutor_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentDirectExecutor || defined(INCLUDE_ComGoogleCommonUtilConcurrentDirectExecutor))
#define ComGoogleCommonUtilConcurrentDirectExecutor_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_JavaUtilConcurrentExecutor 1
#define INCLUDE_JavaUtilConcurrentExecutor 1
#include "java/util/concurrent/Executor.h"

@class IOSObjectArray;
@protocol JavaLangRunnable;

typedef NS_ENUM(jint, ComGoogleCommonUtilConcurrentDirectExecutor_Enum) {
  ComGoogleCommonUtilConcurrentDirectExecutor_Enum_INSTANCE = 0,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonUtilConcurrentDirectExecutor_ORDINAL jint
#else
#define ComGoogleCommonUtilConcurrentDirectExecutor_ORDINAL ComGoogleCommonUtilConcurrentDirectExecutor_Enum
#endif


@interface ComGoogleCommonUtilConcurrentDirectExecutor : JavaLangEnum < JavaUtilConcurrentExecutor >

#pragma mark Public

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

- (NSString *)description;

+ (ComGoogleCommonUtilConcurrentDirectExecutor *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonUtilConcurrentDirectExecutor_Enum)toNSEnum;

- (ComGoogleCommonUtilConcurrentDirectExecutor_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentDirectExecutor)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentDirectExecutor *ComGoogleCommonUtilConcurrentDirectExecutor_values_[];

inline ComGoogleCommonUtilConcurrentDirectExecutor *ComGoogleCommonUtilConcurrentDirectExecutor_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentDirectExecutor, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentDirectExecutor_values(void);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentDirectExecutor *ComGoogleCommonUtilConcurrentDirectExecutor_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentDirectExecutor *ComGoogleCommonUtilConcurrentDirectExecutor_fromOrdinal(ComGoogleCommonUtilConcurrentDirectExecutor_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentDirectExecutor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentDirectExecutor")
