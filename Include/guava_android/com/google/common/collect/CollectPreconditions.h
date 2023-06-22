//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/CollectPreconditions.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCollectPreconditions")
#ifdef RESTRICT_ComGoogleCommonCollectCollectPreconditions
#define INCLUDE_ALL_ComGoogleCommonCollectCollectPreconditions 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCollectPreconditions 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCollectPreconditions

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCollectPreconditions_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectPreconditions || defined(INCLUDE_ComGoogleCommonCollectCollectPreconditions))
#define ComGoogleCommonCollectCollectPreconditions_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;

@interface ComGoogleCommonCollectCollectPreconditions : NSObject

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

+ (void)checkEntryNotNullWithId:(id)key
                         withId:(id)value;

+ (jint)checkNonnegativeWithInt:(jint)value
                   withNSString:(NSString *)name;

+ (jlong)checkNonnegativeWithLong:(jlong)value
                     withNSString:(NSString *)name;

+ (void)checkPositiveWithInt:(jint)value
                withNSString:(NSString *)name;

+ (void)checkRemoveWithBoolean:(jboolean)canRemove;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectPreconditions)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectPreconditions_initPackagePrivate(ComGoogleCommonCollectCollectPreconditions *self);

FOUNDATION_EXPORT ComGoogleCommonCollectCollectPreconditions *new_ComGoogleCommonCollectCollectPreconditions_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCollectPreconditions *create_ComGoogleCommonCollectCollectPreconditions_initPackagePrivate(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectPreconditions_checkEntryNotNullWithId_withId_(id key, id value);

FOUNDATION_EXPORT jint ComGoogleCommonCollectCollectPreconditions_checkNonnegativeWithInt_withNSString_(jint value, NSString *name);

FOUNDATION_EXPORT jlong ComGoogleCommonCollectCollectPreconditions_checkNonnegativeWithLong_withNSString_(jlong value, NSString *name);

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectPreconditions_checkPositiveWithInt_withNSString_(jint value, NSString *name);

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectPreconditions_checkRemoveWithBoolean_(jboolean canRemove);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectPreconditions)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCollectPreconditions")
