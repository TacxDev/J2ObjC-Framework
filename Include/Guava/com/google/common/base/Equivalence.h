//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/base/Equivalence.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseEquivalence")
#ifdef RESTRICT_ComGoogleCommonBaseEquivalence
#define INCLUDE_ALL_ComGoogleCommonBaseEquivalence 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseEquivalence 1
#endif
#undef RESTRICT_ComGoogleCommonBaseEquivalence
#ifdef INCLUDE_ComGoogleCommonBaseEquivalence_Identity
#define INCLUDE_ComGoogleCommonBaseEquivalence 1
#endif
#ifdef INCLUDE_ComGoogleCommonBaseEquivalence_Equals
#define INCLUDE_ComGoogleCommonBaseEquivalence 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseEquivalence_) && (INCLUDE_ALL_ComGoogleCommonBaseEquivalence || defined(INCLUDE_ComGoogleCommonBaseEquivalence))
#define ComGoogleCommonBaseEquivalence_

#define RESTRICT_JavaUtilFunctionBiPredicate 1
#define INCLUDE_JavaUtilFunctionBiPredicate 1
#include "java/util/function/BiPredicate.h"

@class ComGoogleCommonBaseEquivalence_Wrapper;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;

@interface ComGoogleCommonBaseEquivalence : NSObject < JavaUtilFunctionBiPredicate >

#pragma mark Public

+ (ComGoogleCommonBaseEquivalence *)equals;

- (jboolean)equivalentWithId:(id)a
                      withId:(id)b;

- (id<ComGoogleCommonBasePredicate>)equivalentToWithId:(id)target;

- (jint)hash__WithId:(id)t;

+ (ComGoogleCommonBaseEquivalence *)identity;

- (ComGoogleCommonBaseEquivalence *)onResultOfWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonBaseEquivalence *)pairwise;

- (jboolean)testWithId:(id)t
                withId:(id)u;

- (ComGoogleCommonBaseEquivalence_Wrapper *)wrapWithId:(id)reference;

#pragma mark Protected

- (instancetype)init;

- (jboolean)doEquivalentWithId:(id)a
                        withId:(id)b;

- (jint)doHashWithId:(id)t;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseEquivalence)

FOUNDATION_EXPORT void ComGoogleCommonBaseEquivalence_init(ComGoogleCommonBaseEquivalence *self);

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence *ComGoogleCommonBaseEquivalence_equals(void);

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence *ComGoogleCommonBaseEquivalence_identity(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEquivalence)

#endif

#if !defined (ComGoogleCommonBaseEquivalence_Wrapper_) && (INCLUDE_ALL_ComGoogleCommonBaseEquivalence || defined(INCLUDE_ComGoogleCommonBaseEquivalence_Wrapper))
#define ComGoogleCommonBaseEquivalence_Wrapper_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;

@interface ComGoogleCommonBaseEquivalence_Wrapper : NSObject < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (id)get;

- (NSUInteger)hash;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseEquivalence_Wrapper)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEquivalence_Wrapper)

#endif

#if !defined (ComGoogleCommonBaseEquivalence_Equals_) && (INCLUDE_ALL_ComGoogleCommonBaseEquivalence || defined(INCLUDE_ComGoogleCommonBaseEquivalence_Equals))
#define ComGoogleCommonBaseEquivalence_Equals_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;

@interface ComGoogleCommonBaseEquivalence_Equals : ComGoogleCommonBaseEquivalence < JavaIoSerializable >

#pragma mark Protected

- (jboolean)doEquivalentWithId:(id)a
                        withId:(id)b;

- (jint)doHashWithId:(id)o;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseEquivalence_Equals)

inline ComGoogleCommonBaseEquivalence_Equals *ComGoogleCommonBaseEquivalence_Equals_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Equals *ComGoogleCommonBaseEquivalence_Equals_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseEquivalence_Equals, INSTANCE, ComGoogleCommonBaseEquivalence_Equals *)

FOUNDATION_EXPORT void ComGoogleCommonBaseEquivalence_Equals_init(ComGoogleCommonBaseEquivalence_Equals *self);

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Equals *new_ComGoogleCommonBaseEquivalence_Equals_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Equals *create_ComGoogleCommonBaseEquivalence_Equals_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEquivalence_Equals)

#endif

#if !defined (ComGoogleCommonBaseEquivalence_Identity_) && (INCLUDE_ALL_ComGoogleCommonBaseEquivalence || defined(INCLUDE_ComGoogleCommonBaseEquivalence_Identity))
#define ComGoogleCommonBaseEquivalence_Identity_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;

@interface ComGoogleCommonBaseEquivalence_Identity : ComGoogleCommonBaseEquivalence < JavaIoSerializable >

#pragma mark Protected

- (jboolean)doEquivalentWithId:(id)a
                        withId:(id)b;

- (jint)doHashWithId:(id)o;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseEquivalence_Identity)

inline ComGoogleCommonBaseEquivalence_Identity *ComGoogleCommonBaseEquivalence_Identity_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Identity *ComGoogleCommonBaseEquivalence_Identity_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseEquivalence_Identity, INSTANCE, ComGoogleCommonBaseEquivalence_Identity *)

FOUNDATION_EXPORT void ComGoogleCommonBaseEquivalence_Identity_init(ComGoogleCommonBaseEquivalence_Identity *self);

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Identity *new_ComGoogleCommonBaseEquivalence_Identity_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Identity *create_ComGoogleCommonBaseEquivalence_Identity_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEquivalence_Identity)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseEquivalence")
