//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/invocation/RealMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationRealMethod")
#ifdef RESTRICT_OrgMockitoInternalInvocationRealMethod
#define INCLUDE_ALL_OrgMockitoInternalInvocationRealMethod 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationRealMethod 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationRealMethod
#ifdef INCLUDE_OrgMockitoInternalInvocationRealMethod_FromCallable
#define INCLUDE_OrgMockitoInternalInvocationRealMethod_FromBehavior 1
#define INCLUDE_OrgMockitoInternalInvocationRealMethod 1
#endif
#ifdef INCLUDE_OrgMockitoInternalInvocationRealMethod_FromBehavior
#define INCLUDE_OrgMockitoInternalInvocationRealMethod 1
#endif
#ifdef INCLUDE_OrgMockitoInternalInvocationRealMethod_IsIllegal
#define INCLUDE_OrgMockitoInternalInvocationRealMethod 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalInvocationRealMethod_) && (INCLUDE_ALL_OrgMockitoInternalInvocationRealMethod || defined(INCLUDE_OrgMockitoInternalInvocationRealMethod))
#define OrgMockitoInternalInvocationRealMethod_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;

@protocol OrgMockitoInternalInvocationRealMethod < JavaIoSerializable, JavaObject >

- (jboolean)isInvokable;

- (id)invoke;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationRealMethod)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationRealMethod)

#endif

#if !defined (OrgMockitoInternalInvocationRealMethod_IsIllegal_) && (INCLUDE_ALL_OrgMockitoInternalInvocationRealMethod || defined(INCLUDE_OrgMockitoInternalInvocationRealMethod_IsIllegal))
#define OrgMockitoInternalInvocationRealMethod_IsIllegal_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class JavaLangBoolean;

typedef NS_ENUM(jint, OrgMockitoInternalInvocationRealMethod_IsIllegal_Enum) {
  OrgMockitoInternalInvocationRealMethod_IsIllegal_Enum_INSTANCE = 0,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define OrgMockitoInternalInvocationRealMethod_IsIllegal_ORDINAL jint
#else
#define OrgMockitoInternalInvocationRealMethod_IsIllegal_ORDINAL OrgMockitoInternalInvocationRealMethod_IsIllegal_Enum
#endif


@interface OrgMockitoInternalInvocationRealMethod_IsIllegal : JavaLangEnum < OrgMockitoInternalInvocationRealMethod >

#pragma mark Public

- (id)invoke;

- (jboolean)isInvokable;

+ (OrgMockitoInternalInvocationRealMethod_IsIllegal *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (OrgMockitoInternalInvocationRealMethod_IsIllegal_Enum)toNSEnum;

- (OrgMockitoInternalInvocationRealMethod_IsIllegal_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalInvocationRealMethod_IsIllegal)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgMockitoInternalInvocationRealMethod_IsIllegal *OrgMockitoInternalInvocationRealMethod_IsIllegal_values_[];

inline OrgMockitoInternalInvocationRealMethod_IsIllegal *OrgMockitoInternalInvocationRealMethod_IsIllegal_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(OrgMockitoInternalInvocationRealMethod_IsIllegal, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoInternalInvocationRealMethod_IsIllegal_values(void);

FOUNDATION_EXPORT OrgMockitoInternalInvocationRealMethod_IsIllegal *OrgMockitoInternalInvocationRealMethod_IsIllegal_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgMockitoInternalInvocationRealMethod_IsIllegal *OrgMockitoInternalInvocationRealMethod_IsIllegal_fromOrdinal(OrgMockitoInternalInvocationRealMethod_IsIllegal_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationRealMethod_IsIllegal)

#endif

#if !defined (OrgMockitoInternalInvocationRealMethod_FromBehavior_) && (INCLUDE_ALL_OrgMockitoInternalInvocationRealMethod || defined(INCLUDE_OrgMockitoInternalInvocationRealMethod_FromBehavior))
#define OrgMockitoInternalInvocationRealMethod_FromBehavior_

@class JavaLangBoolean;
@protocol OrgMockitoInvocationInvocationFactory_RealMethodBehavior;

@interface OrgMockitoInternalInvocationRealMethod_FromBehavior : NSObject < OrgMockitoInternalInvocationRealMethod >

#pragma mark Public

- (id)invoke;

- (jboolean)isInvokable;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInvocationInvocationFactory_RealMethodBehavior:(id<OrgMockitoInvocationInvocationFactory_RealMethodBehavior>)behavior;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationRealMethod_FromBehavior)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationRealMethod_FromBehavior_initWithOrgMockitoInvocationInvocationFactory_RealMethodBehavior_(OrgMockitoInternalInvocationRealMethod_FromBehavior *self, id<OrgMockitoInvocationInvocationFactory_RealMethodBehavior> behavior);

FOUNDATION_EXPORT OrgMockitoInternalInvocationRealMethod_FromBehavior *new_OrgMockitoInternalInvocationRealMethod_FromBehavior_initWithOrgMockitoInvocationInvocationFactory_RealMethodBehavior_(id<OrgMockitoInvocationInvocationFactory_RealMethodBehavior> behavior) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationRealMethod_FromBehavior *create_OrgMockitoInternalInvocationRealMethod_FromBehavior_initWithOrgMockitoInvocationInvocationFactory_RealMethodBehavior_(id<OrgMockitoInvocationInvocationFactory_RealMethodBehavior> behavior);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationRealMethod_FromBehavior)

#endif

#if !defined (OrgMockitoInternalInvocationRealMethod_FromCallable_) && (INCLUDE_ALL_OrgMockitoInternalInvocationRealMethod || defined(INCLUDE_OrgMockitoInternalInvocationRealMethod_FromCallable))
#define OrgMockitoInternalInvocationRealMethod_FromCallable_

@protocol JavaUtilConcurrentCallable;
@protocol OrgMockitoInvocationInvocationFactory_RealMethodBehavior;

@interface OrgMockitoInternalInvocationRealMethod_FromCallable : OrgMockitoInternalInvocationRealMethod_FromBehavior < OrgMockitoInternalInvocationRealMethod >

#pragma mark Public

- (instancetype)initWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgMockitoInvocationInvocationFactory_RealMethodBehavior:(id<OrgMockitoInvocationInvocationFactory_RealMethodBehavior>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationRealMethod_FromCallable)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationRealMethod_FromCallable_initWithJavaUtilConcurrentCallable_(OrgMockitoInternalInvocationRealMethod_FromCallable *self, id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT OrgMockitoInternalInvocationRealMethod_FromCallable *new_OrgMockitoInternalInvocationRealMethod_FromCallable_initWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationRealMethod_FromCallable *create_OrgMockitoInternalInvocationRealMethod_FromCallable_initWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationRealMethod_FromCallable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationRealMethod")