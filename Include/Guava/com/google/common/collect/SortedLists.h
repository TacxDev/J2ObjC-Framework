//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/SortedLists.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedLists")
#ifdef RESTRICT_ComGoogleCommonCollectSortedLists
#define INCLUDE_ALL_ComGoogleCommonCollectSortedLists 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSortedLists 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSortedLists

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSortedLists_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedLists || defined(INCLUDE_ComGoogleCommonCollectSortedLists))
#define ComGoogleCommonCollectSortedLists_

@class ComGoogleCommonCollectSortedLists_KeyAbsentBehavior;
@class ComGoogleCommonCollectSortedLists_KeyPresentBehavior;
@class JavaLangInteger;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangComparable;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectSortedLists : NSObject

#pragma mark Public

+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)list
                              withId:(id)key
              withJavaUtilComparator:(id<JavaUtilComparator>)comparator
withComGoogleCommonCollectSortedLists_KeyPresentBehavior:(ComGoogleCommonCollectSortedLists_KeyPresentBehavior *)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehavior:(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *)absentBehavior;

+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)list
              withJavaLangComparable:(id<JavaLangComparable>)e
withComGoogleCommonCollectSortedLists_KeyPresentBehavior:(ComGoogleCommonCollectSortedLists_KeyPresentBehavior *)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehavior:(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *)absentBehavior;

+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)list
     withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction
                              withId:(id)key
              withJavaUtilComparator:(id<JavaUtilComparator>)keyComparator
withComGoogleCommonCollectSortedLists_KeyPresentBehavior:(ComGoogleCommonCollectSortedLists_KeyPresentBehavior *)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehavior:(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *)absentBehavior;

+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)list
     withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction
              withJavaLangComparable:(id<JavaLangComparable>)key
withComGoogleCommonCollectSortedLists_KeyPresentBehavior:(ComGoogleCommonCollectSortedLists_KeyPresentBehavior *)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehavior:(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *)absentBehavior;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedLists)

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withJavaLangComparable_withComGoogleCommonCollectSortedLists_KeyPresentBehavior_withComGoogleCommonCollectSortedLists_KeyAbsentBehavior_(id<JavaUtilList> list, id<JavaLangComparable> e, ComGoogleCommonCollectSortedLists_KeyPresentBehavior *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withComGoogleCommonBaseFunction_withJavaLangComparable_withComGoogleCommonCollectSortedLists_KeyPresentBehavior_withComGoogleCommonCollectSortedLists_KeyAbsentBehavior_(id<JavaUtilList> list, id<ComGoogleCommonBaseFunction> keyFunction, id<JavaLangComparable> key, ComGoogleCommonCollectSortedLists_KeyPresentBehavior *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withComGoogleCommonBaseFunction_withId_withJavaUtilComparator_withComGoogleCommonCollectSortedLists_KeyPresentBehavior_withComGoogleCommonCollectSortedLists_KeyAbsentBehavior_(id<JavaUtilList> list, id<ComGoogleCommonBaseFunction> keyFunction, id key, id<JavaUtilComparator> keyComparator, ComGoogleCommonCollectSortedLists_KeyPresentBehavior *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withId_withJavaUtilComparator_withComGoogleCommonCollectSortedLists_KeyPresentBehavior_withComGoogleCommonCollectSortedLists_KeyAbsentBehavior_(id<JavaUtilList> list, id key, id<JavaUtilComparator> comparator, ComGoogleCommonCollectSortedLists_KeyPresentBehavior *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *absentBehavior);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists)

#endif

#if !defined (ComGoogleCommonCollectSortedLists_KeyPresentBehavior_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedLists || defined(INCLUDE_ComGoogleCommonCollectSortedLists_KeyPresentBehavior))
#define ComGoogleCommonCollectSortedLists_KeyPresentBehavior_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class JavaLangInteger;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

typedef NS_ENUM(jint, ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum) {
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_ANY_PRESENT = 0,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_LAST_PRESENT = 1,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_FIRST_PRESENT = 2,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_FIRST_AFTER = 3,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_LAST_BEFORE = 4,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonCollectSortedLists_KeyPresentBehavior_ORDINAL jint
#else
#define ComGoogleCommonCollectSortedLists_KeyPresentBehavior_ORDINAL ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum
#endif


@interface ComGoogleCommonCollectSortedLists_KeyPresentBehavior : JavaLangEnum

#pragma mark Public

+ (ComGoogleCommonCollectSortedLists_KeyPresentBehavior *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (jint)resultIndexWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                   withId:(id)key
                         withJavaUtilList:(id<JavaUtilList>)list
                                  withInt:(jint)foundIndex;

- (ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum)toNSEnum;

- (ComGoogleCommonCollectSortedLists_KeyPresentBehavior_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_values_[];

inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_ANY_PRESENT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, ANY_PRESENT)

inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_LAST_PRESENT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, LAST_PRESENT)

inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_FIRST_PRESENT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, FIRST_PRESENT)

inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_FIRST_AFTER(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, FIRST_AFTER)

inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_LAST_BEFORE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, LAST_BEFORE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_values(void);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_fromOrdinal(ComGoogleCommonCollectSortedLists_KeyPresentBehavior_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists_KeyPresentBehavior)

#endif

#if !defined (ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedLists || defined(INCLUDE_ComGoogleCommonCollectSortedLists_KeyAbsentBehavior))
#define ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class JavaLangInteger;

typedef NS_ENUM(jint, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum) {
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum_NEXT_LOWER = 0,
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum_NEXT_HIGHER = 1,
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum_INVERTED_INSERTION_INDEX = 2,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_ORDINAL jint
#else
#define ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_ORDINAL ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum
#endif


@interface ComGoogleCommonCollectSortedLists_KeyAbsentBehavior : JavaLangEnum

#pragma mark Public

+ (ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (jint)resultIndexWithInt:(jint)higherIndex;

- (ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum)toNSEnum;

- (ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_values_[];

inline ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_get_NEXT_LOWER(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior, NEXT_LOWER)

inline ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_get_NEXT_HIGHER(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior, NEXT_HIGHER)

inline ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_get_INVERTED_INSERTION_INDEX(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior, INVERTED_INSERTION_INDEX)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_values(void);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_fromOrdinal(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedLists")
