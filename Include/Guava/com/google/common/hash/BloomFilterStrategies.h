//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/hash/BloomFilterStrategies.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies")
#ifdef RESTRICT_ComGoogleCommonHashBloomFilterStrategies
#define INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies 1
#endif
#undef RESTRICT_ComGoogleCommonHashBloomFilterStrategies

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashBloomFilterStrategies_) && (INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies || defined(INCLUDE_ComGoogleCommonHashBloomFilterStrategies))
#define ComGoogleCommonHashBloomFilterStrategies_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonHashBloomFilter 1
#define INCLUDE_ComGoogleCommonHashBloomFilter_Strategy 1
#include "com/google/common/hash/BloomFilter.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, ComGoogleCommonHashBloomFilterStrategies_Enum) {
  ComGoogleCommonHashBloomFilterStrategies_Enum_MURMUR128_MITZ_32 = 0,
  ComGoogleCommonHashBloomFilterStrategies_Enum_MURMUR128_MITZ_64 = 1,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonHashBloomFilterStrategies_ORDINAL jint
#else
#define ComGoogleCommonHashBloomFilterStrategies_ORDINAL ComGoogleCommonHashBloomFilterStrategies_Enum
#endif


@interface ComGoogleCommonHashBloomFilterStrategies : JavaLangEnum < ComGoogleCommonHashBloomFilter_Strategy >

#pragma mark Public

+ (ComGoogleCommonHashBloomFilterStrategies *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonHashBloomFilterStrategies_Enum)toNSEnum;

- (ComGoogleCommonHashBloomFilterStrategies_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashBloomFilterStrategies)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_values_[];

inline ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_get_MURMUR128_MITZ_32(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonHashBloomFilterStrategies, MURMUR128_MITZ_32)

inline ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_get_MURMUR128_MITZ_64(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonHashBloomFilterStrategies, MURMUR128_MITZ_64)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonHashBloomFilterStrategies_values(void);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies *ComGoogleCommonHashBloomFilterStrategies_fromOrdinal(ComGoogleCommonHashBloomFilterStrategies_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilterStrategies)

#endif

#if !defined (ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_) && (INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies || defined(INCLUDE_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray))
#define ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_

@class IOSLongArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentAtomicAtomicLongArray;

@interface ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray : NSObject {
 @public
  JavaUtilConcurrentAtomicAtomicLongArray *data_;
}

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

+ (IOSLongArray *)toPlainArrayWithJavaUtilConcurrentAtomicAtomicLongArray:(JavaUtilConcurrentAtomicAtomicLongArray *)atomicLongArray;

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)bits;

- (instancetype)initWithLongArray:(IOSLongArray *)data;

- (jlong)bitCount;

- (jlong)bitSize;

- (ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *)copy__ OBJC_METHOD_FAMILY_NONE;

- (jint)dataLength;

- (jboolean)getWithLong:(jlong)bitIndex;

- (void)putAllWithComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray:(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *)other;

- (void)putDataWithInt:(jint)i
              withLong:(jlong)longValue;

- (jboolean)setWithLong:(jlong)bitIndex;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray)

J2OBJC_FIELD_SETTER(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray, data_, JavaUtilConcurrentAtomicAtomicLongArray *)

FOUNDATION_EXPORT void ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLong_(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *self, jlong bits);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *new_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLong_(jlong bits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *create_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLong_(jlong bits);

FOUNDATION_EXPORT void ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLongArray_(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *self, IOSLongArray *data);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *new_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLongArray_(IOSLongArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray *create_ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_initWithLongArray_(IOSLongArray *data);

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray_toPlainArrayWithJavaUtilConcurrentAtomicAtomicLongArray_(JavaUtilConcurrentAtomicAtomicLongArray *atomicLongArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilterStrategies_LockFreeBitArray)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashBloomFilterStrategies")