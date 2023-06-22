//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/invocation/MatcherApplicationStrategy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationMatcherApplicationStrategy")
#ifdef RESTRICT_OrgMockitoInternalInvocationMatcherApplicationStrategy
#define INCLUDE_ALL_OrgMockitoInternalInvocationMatcherApplicationStrategy 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationMatcherApplicationStrategy 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationMatcherApplicationStrategy

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalInvocationMatcherApplicationStrategy_) && (INCLUDE_ALL_OrgMockitoInternalInvocationMatcherApplicationStrategy || defined(INCLUDE_OrgMockitoInternalInvocationMatcherApplicationStrategy))
#define OrgMockitoInternalInvocationMatcherApplicationStrategy_

@class JavaLangBoolean;
@protocol JavaUtilList;
@protocol OrgMockitoInternalInvocationArgumentMatcherAction;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalInvocationMatcherApplicationStrategy : NSObject

#pragma mark Public

- (jboolean)forEachMatcherAndArgumentWithOrgMockitoInternalInvocationArgumentMatcherAction:(id<OrgMockitoInternalInvocationArgumentMatcherAction>)action;

+ (OrgMockitoInternalInvocationMatcherApplicationStrategy *)getMatcherApplicationStrategyForWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                                                                                              withJavaUtilList:(id<JavaUtilList>)matchers;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationMatcherApplicationStrategy)

FOUNDATION_EXPORT OrgMockitoInternalInvocationMatcherApplicationStrategy *OrgMockitoInternalInvocationMatcherApplicationStrategy_getMatcherApplicationStrategyForWithOrgMockitoInvocationInvocation_withJavaUtilList_(id<OrgMockitoInvocationInvocation> invocation, id<JavaUtilList> matchers);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationMatcherApplicationStrategy)

#endif

#if !defined (OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_) && (INCLUDE_ALL_OrgMockitoInternalInvocationMatcherApplicationStrategy || defined(INCLUDE_OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType))
#define OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_Enum) {
  OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_Enum_ONE_MATCHER_PER_ARGUMENT = 0,
  OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_Enum_MATCH_EACH_VARARGS_WITH_LAST_MATCHER = 1,
  OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_Enum_ERROR_UNSUPPORTED_NUMBER_OF_MATCHERS = 2,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_ORDINAL jint
#else
#define OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_ORDINAL OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_Enum
#endif


@interface OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType : JavaLangEnum

#pragma mark Public

+ (OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_Enum)toNSEnum;

- (OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType *OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_values_[];

inline OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType *OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_get_ONE_MATCHER_PER_ARGUMENT(void);
J2OBJC_ENUM_CONSTANT(OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType, ONE_MATCHER_PER_ARGUMENT)

inline OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType *OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_get_MATCH_EACH_VARARGS_WITH_LAST_MATCHER(void);
J2OBJC_ENUM_CONSTANT(OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType, MATCH_EACH_VARARGS_WITH_LAST_MATCHER)

inline OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType *OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_get_ERROR_UNSUPPORTED_NUMBER_OF_MATCHERS(void);
J2OBJC_ENUM_CONSTANT(OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType, ERROR_UNSUPPORTED_NUMBER_OF_MATCHERS)

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_values(void);

FOUNDATION_EXPORT OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType *OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType *OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_fromOrdinal(OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationMatcherApplicationStrategy_MatcherApplicationType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationMatcherApplicationStrategy")