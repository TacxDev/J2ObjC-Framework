//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/cache/CacheBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder")
#ifdef RESTRICT_ComGoogleCommonCacheCacheBuilder
#define INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonCacheCacheBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheCacheBuilder_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder))
#define ComGoogleCommonCacheCacheBuilder_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonBaseTicker;
@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheCacheLoader;
@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCacheLocalCache_Strength;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCacheCache;
@protocol ComGoogleCommonCacheLoadingCache;
@protocol ComGoogleCommonCacheRemovalListener;
@protocol ComGoogleCommonCacheWeigher;

@interface ComGoogleCommonCacheCacheBuilder : NSObject {
 @public
  jboolean strictParsing_;
  jint initialCapacity_;
  jint concurrencyLevel_;
  jlong maximumSize_;
  jlong maximumWeight_;
  id<ComGoogleCommonCacheWeigher> weigher_;
  ComGoogleCommonCacheLocalCache_Strength *keyStrength_;
  ComGoogleCommonCacheLocalCache_Strength *valueStrength_;
  jlong expireAfterWriteNanos_;
  jlong expireAfterAccessNanos_;
  jlong refreshNanos_;
  ComGoogleCommonBaseEquivalence *keyEquivalence_;
  ComGoogleCommonBaseEquivalence *valueEquivalence_;
  id<ComGoogleCommonCacheRemovalListener> removalListener_;
  ComGoogleCommonBaseTicker *ticker_;
  id<ComGoogleCommonBaseSupplier> statsCounterSupplier_;
}

#pragma mark Public

- (id<ComGoogleCommonCacheCache>)build;

- (id<ComGoogleCommonCacheLoadingCache>)buildWithComGoogleCommonCacheCacheLoader:(ComGoogleCommonCacheCacheLoader *)loader;

- (ComGoogleCommonCacheCacheBuilder *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (ComGoogleCommonCacheCacheBuilder *)expireAfterAccessWithLong:(jlong)duration
                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (ComGoogleCommonCacheCacheBuilder *)expireAfterWriteWithLong:(jlong)duration
                                withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (ComGoogleCommonCacheCacheBuilder *)fromWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec;

+ (ComGoogleCommonCacheCacheBuilder *)fromWithNSString:(NSString *)spec;

- (ComGoogleCommonCacheCacheBuilder *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCacheCacheBuilder *)maximumSizeWithLong:(jlong)maximumSize;

- (ComGoogleCommonCacheCacheBuilder *)maximumWeightWithLong:(jlong)maximumWeight;

+ (ComGoogleCommonCacheCacheBuilder *)newBuilder OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCacheCacheBuilder *)recordStats;

- (ComGoogleCommonCacheCacheBuilder *)refreshAfterWriteWithLong:(jlong)duration
                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (ComGoogleCommonCacheCacheBuilder *)removalListenerWithComGoogleCommonCacheRemovalListener:(id<ComGoogleCommonCacheRemovalListener>)listener;

- (ComGoogleCommonCacheCacheBuilder *)softValues;

- (ComGoogleCommonCacheCacheBuilder *)tickerWithComGoogleCommonBaseTicker:(ComGoogleCommonBaseTicker *)ticker;

- (NSString *)description;

- (ComGoogleCommonCacheCacheBuilder *)weakKeys;

- (ComGoogleCommonCacheCacheBuilder *)weakValues;

- (ComGoogleCommonCacheCacheBuilder *)weigherWithComGoogleCommonCacheWeigher:(id<ComGoogleCommonCacheWeigher>)weigher;

#pragma mark Package-Private

- (jint)getConcurrencyLevel;

- (jlong)getExpireAfterAccessNanos;

- (jlong)getExpireAfterWriteNanos;

- (jint)getInitialCapacity;

- (ComGoogleCommonBaseEquivalence *)getKeyEquivalence;

- (ComGoogleCommonCacheLocalCache_Strength *)getKeyStrength;

- (jlong)getMaximumWeight;

- (jlong)getRefreshNanos;

- (id<ComGoogleCommonCacheRemovalListener>)getRemovalListener;

- (id<ComGoogleCommonBaseSupplier>)getStatsCounterSupplier;

- (ComGoogleCommonBaseTicker *)getTickerWithBoolean:(jboolean)recordsTime;

- (ComGoogleCommonBaseEquivalence *)getValueEquivalence;

- (ComGoogleCommonCacheLocalCache_Strength *)getValueStrength;

- (id<ComGoogleCommonCacheWeigher>)getWeigher;

- (jboolean)isRecordingStats;

- (ComGoogleCommonCacheCacheBuilder *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (ComGoogleCommonCacheCacheBuilder *)lenientParsing;

- (ComGoogleCommonCacheCacheBuilder *)setKeyStrengthWithComGoogleCommonCacheLocalCache_Strength:(ComGoogleCommonCacheLocalCache_Strength *)strength;

- (ComGoogleCommonCacheCacheBuilder *)setValueStrengthWithComGoogleCommonCacheLocalCache_Strength:(ComGoogleCommonCacheLocalCache_Strength *)strength;

- (ComGoogleCommonCacheCacheBuilder *)valueEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, weigher_, id<ComGoogleCommonCacheWeigher>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, keyStrength_, ComGoogleCommonCacheLocalCache_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, valueStrength_, ComGoogleCommonCacheLocalCache_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, keyEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, valueEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, removalListener_, id<ComGoogleCommonCacheRemovalListener>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, ticker_, ComGoogleCommonBaseTicker *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, statsCounterSupplier_, id<ComGoogleCommonBaseSupplier>)

inline id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_get_NULL_STATS_COUNTER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_NULL_STATS_COUNTER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, NULL_STATS_COUNTER, id<ComGoogleCommonBaseSupplier>)

inline ComGoogleCommonCacheCacheStats *ComGoogleCommonCacheCacheBuilder_get_EMPTY_STATS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheStats *ComGoogleCommonCacheCacheBuilder_EMPTY_STATS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, EMPTY_STATS, ComGoogleCommonCacheCacheStats *)

inline id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_get_CACHE_STATS_COUNTER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_CACHE_STATS_COUNTER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, CACHE_STATS_COUNTER, id<ComGoogleCommonBaseSupplier>)

inline ComGoogleCommonBaseTicker *ComGoogleCommonCacheCacheBuilder_get_NULL_TICKER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonBaseTicker *ComGoogleCommonCacheCacheBuilder_NULL_TICKER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, NULL_TICKER, ComGoogleCommonBaseTicker *)

inline jint ComGoogleCommonCacheCacheBuilder_get_UNSET_INT(void);
#define ComGoogleCommonCacheCacheBuilder_UNSET_INT -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCacheCacheBuilder, UNSET_INT, jint)

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_newBuilder(void);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_fromWithComGoogleCommonCacheCacheBuilderSpec_(ComGoogleCommonCacheCacheBuilderSpec *spec);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_fromWithNSString_(NSString *spec);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilder_NullListener_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder_NullListener))
#define ComGoogleCommonCacheCacheBuilder_NullListener_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonCacheRemovalListener 1
#define INCLUDE_ComGoogleCommonCacheRemovalListener 1
#include "com/google/common/cache/RemovalListener.h"

@class ComGoogleCommonCacheRemovalNotification;
@class IOSObjectArray;

typedef NS_ENUM(jint, ComGoogleCommonCacheCacheBuilder_NullListener_Enum) {
  ComGoogleCommonCacheCacheBuilder_NullListener_Enum_INSTANCE = 0,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonCacheCacheBuilder_NullListener_ORDINAL jint
#else
#define ComGoogleCommonCacheCacheBuilder_NullListener_ORDINAL ComGoogleCommonCacheCacheBuilder_NullListener_Enum
#endif


@interface ComGoogleCommonCacheCacheBuilder_NullListener : JavaLangEnum < ComGoogleCommonCacheRemovalListener >

#pragma mark Public

- (void)onRemovalWithComGoogleCommonCacheRemovalNotification:(ComGoogleCommonCacheRemovalNotification *)notification;

+ (ComGoogleCommonCacheCacheBuilder_NullListener *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonCacheCacheBuilder_NullListener_Enum)toNSEnum;

- (ComGoogleCommonCacheCacheBuilder_NullListener_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder_NullListener)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_values_[];

inline ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCacheCacheBuilder_NullListener, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheCacheBuilder_NullListener_values(void);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_fromOrdinal(ComGoogleCommonCacheCacheBuilder_NullListener_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder_NullListener)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilder_OneWeigher_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder_OneWeigher))
#define ComGoogleCommonCacheCacheBuilder_OneWeigher_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonCacheWeigher 1
#define INCLUDE_ComGoogleCommonCacheWeigher 1
#include "com/google/common/cache/Weigher.h"

@class IOSObjectArray;
@class JavaLangInteger;

typedef NS_ENUM(jint, ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum) {
  ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum_INSTANCE = 0,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonCacheCacheBuilder_OneWeigher_ORDINAL jint
#else
#define ComGoogleCommonCacheCacheBuilder_OneWeigher_ORDINAL ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum
#endif


@interface ComGoogleCommonCacheCacheBuilder_OneWeigher : JavaLangEnum < ComGoogleCommonCacheWeigher >

#pragma mark Public

+ (ComGoogleCommonCacheCacheBuilder_OneWeigher *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

- (jint)weighWithId:(id)key
             withId:(id)value;

#pragma mark Package-Private

- (ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum)toNSEnum;

- (ComGoogleCommonCacheCacheBuilder_OneWeigher_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder_OneWeigher)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_values_[];

inline ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCacheCacheBuilder_OneWeigher, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheCacheBuilder_OneWeigher_values(void);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_fromOrdinal(ComGoogleCommonCacheCacheBuilder_OneWeigher_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder_OneWeigher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder")