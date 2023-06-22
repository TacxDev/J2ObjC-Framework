//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/base/Predicates.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBasePredicates")
#ifdef RESTRICT_ComGoogleCommonBasePredicates
#define INCLUDE_ALL_ComGoogleCommonBasePredicates 0
#else
#define INCLUDE_ALL_ComGoogleCommonBasePredicates 1
#endif
#undef RESTRICT_ComGoogleCommonBasePredicates

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBasePredicates_) && (INCLUDE_ALL_ComGoogleCommonBasePredicates || defined(INCLUDE_ComGoogleCommonBasePredicates))
#define ComGoogleCommonBasePredicates_

@class IOSClass;
@class IOSObjectArray;
@class JavaUtilRegexPattern;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

@interface ComGoogleCommonBasePredicates : NSObject

#pragma mark Public

+ (id<ComGoogleCommonBasePredicate>)alwaysFalse;

+ (id<ComGoogleCommonBasePredicate>)alwaysTrue;

+ (id<ComGoogleCommonBasePredicate>)and__WithJavaLangIterable:(id<JavaLangIterable>)components;

+ (id<ComGoogleCommonBasePredicate>)and__WithComGoogleCommonBasePredicateArray:(IOSObjectArray *)components;

+ (id<ComGoogleCommonBasePredicate>)and__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)first
                                         withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)second;

+ (id<ComGoogleCommonBasePredicate>)composeWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate
                                            withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonBasePredicate>)containsWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

+ (id<ComGoogleCommonBasePredicate>)containsPatternWithNSString:(NSString *)pattern;

+ (id<ComGoogleCommonBasePredicate>)equalToWithId:(id)target;

+ (id<ComGoogleCommonBasePredicate>)inWithJavaUtilCollection:(id<JavaUtilCollection>)target;

+ (id<ComGoogleCommonBasePredicate>)instanceOfWithIOSClass:(IOSClass *)clazz;

+ (id<ComGoogleCommonBasePredicate>)isNull;

+ (id<ComGoogleCommonBasePredicate>)not__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<ComGoogleCommonBasePredicate>)notNull;

+ (id<ComGoogleCommonBasePredicate>)or__WithJavaLangIterable:(id<JavaLangIterable>)components;

+ (id<ComGoogleCommonBasePredicate>)or__WithComGoogleCommonBasePredicateArray:(IOSObjectArray *)components;

+ (id<ComGoogleCommonBasePredicate>)or__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)first
                                        withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)second;

+ (id<ComGoogleCommonBasePredicate>)subtypeOfWithIOSClass:(IOSClass *)clazz;

#pragma mark Package-Private

+ (id<JavaUtilList>)defensiveCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBasePredicates)

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_alwaysTrue(void);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_alwaysFalse(void);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_isNull(void);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_notNull(void);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_not__WithComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithJavaLangIterable_(id<JavaLangIterable> components);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithComGoogleCommonBasePredicateArray_(IOSObjectArray *components);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithComGoogleCommonBasePredicate_withComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> first, id<ComGoogleCommonBasePredicate> second);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithJavaLangIterable_(id<JavaLangIterable> components);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithComGoogleCommonBasePredicateArray_(IOSObjectArray *components);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithComGoogleCommonBasePredicate_withComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> first, id<ComGoogleCommonBasePredicate> second);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_equalToWithId_(id target);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_instanceOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_subtypeOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_inWithJavaUtilCollection_(id<JavaUtilCollection> target);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_composeWithComGoogleCommonBasePredicate_withComGoogleCommonBaseFunction_(id<ComGoogleCommonBasePredicate> predicate, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_containsPatternWithNSString_(NSString *pattern);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_containsWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonBasePredicates_defensiveCopyWithJavaLangIterable_(id<JavaLangIterable> iterable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBasePredicates)

#endif

#if !defined (ComGoogleCommonBasePredicates_ObjectPredicate_) && (INCLUDE_ALL_ComGoogleCommonBasePredicates || defined(INCLUDE_ComGoogleCommonBasePredicates_ObjectPredicate))
#define ComGoogleCommonBasePredicates_ObjectPredicate_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonBasePredicate 1
#define INCLUDE_ComGoogleCommonBasePredicate 1
#include "com/google/common/base/Predicate.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, ComGoogleCommonBasePredicates_ObjectPredicate_Enum) {
  ComGoogleCommonBasePredicates_ObjectPredicate_Enum_ALWAYS_TRUE = 0,
  ComGoogleCommonBasePredicates_ObjectPredicate_Enum_ALWAYS_FALSE = 1,
  ComGoogleCommonBasePredicates_ObjectPredicate_Enum_IS_NULL = 2,
  ComGoogleCommonBasePredicates_ObjectPredicate_Enum_NOT_NULL = 3,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonBasePredicates_ObjectPredicate_ORDINAL jint
#else
#define ComGoogleCommonBasePredicates_ObjectPredicate_ORDINAL ComGoogleCommonBasePredicates_ObjectPredicate_Enum
#endif


@interface ComGoogleCommonBasePredicates_ObjectPredicate : JavaLangEnum < ComGoogleCommonBasePredicate >

#pragma mark Public

+ (ComGoogleCommonBasePredicates_ObjectPredicate *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id<ComGoogleCommonBasePredicate>)withNarrowedType;

- (ComGoogleCommonBasePredicates_ObjectPredicate_Enum)toNSEnum;

- (ComGoogleCommonBasePredicates_ObjectPredicate_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBasePredicates_ObjectPredicate)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_values_[];

inline ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_get_ALWAYS_TRUE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBasePredicates_ObjectPredicate, ALWAYS_TRUE)

inline ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_get_ALWAYS_FALSE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBasePredicates_ObjectPredicate, ALWAYS_FALSE)

inline ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_get_IS_NULL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBasePredicates_ObjectPredicate, IS_NULL)

inline ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_get_NOT_NULL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBasePredicates_ObjectPredicate, NOT_NULL)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBasePredicates_ObjectPredicate_values(void);

FOUNDATION_EXPORT ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_fromOrdinal(ComGoogleCommonBasePredicates_ObjectPredicate_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBasePredicates_ObjectPredicate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBasePredicates")
