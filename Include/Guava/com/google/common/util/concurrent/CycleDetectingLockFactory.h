//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/util/concurrent/CycleDetectingLockFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock
#define INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock
#define INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException
#define INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering
#define INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory 1
#endif
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies
#define INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering;
@class IOSClass;
@class JavaLangBoolean;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory : NSObject {
 @public
  id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy_;
}

#pragma mark Public

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *)newInstanceWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *)newInstanceWithExplicitOrderingWithIOSClass:(IOSClass *)enumClass
                                                           withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithNSString:(NSString *)lockName OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithNSString:(NSString *)lockName
                                                           withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithNSString:(NSString *)lockName OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithNSString:(NSString *)lockName
                                                                             withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

+ (id<JavaUtilMap>)createNodesWithIOSClass:(IOSClass *)clazz;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory, policy_, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_newInstanceWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_newInstanceWithExplicitOrderingWithIOSClass_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_(IOSClass *enumClass, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_createNodesWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException;

@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy < JavaObject >

- (void)handlePotentialDeadlockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException *)exception;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_Enum) {
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_Enum_THROW = 0,
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_Enum_WARN = 1,
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_Enum_DISABLED = 2,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_ORDINAL jint
#else
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_ORDINAL ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_Enum
#endif


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies : JavaLangEnum < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy >

#pragma mark Public

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_Enum)toNSEnum;

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_values_[];

inline ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_get_THROW(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies, THROW)

inline ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_get_WARN(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies, WARN)

inline ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_get_DISABLED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies, DISABLED)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_values(void);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_fromOrdinal(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_

@class JavaLangBoolean;
@class JavaLangEnum;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory

#pragma mark Public

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithJavaLangEnum:(JavaLangEnum *)rank OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithJavaLangEnum:(JavaLangEnum *)rank
                                                               withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithJavaLangEnum:(JavaLangEnum *)rank OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithJavaLangEnum:(JavaLangEnum *)rank
                                                                                 withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                                                                      withJavaUtilMap:(id<JavaUtilMap>)lockGraphNodes;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_withJavaUtilMap_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *self, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy, id<JavaUtilMap> lockGraphNodes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *new_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_withJavaUtilMap_(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy, id<JavaUtilMap> lockGraphNodes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *create_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_withJavaUtilMap_(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy, id<JavaUtilMap> lockGraphNodes);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class IOSObjectArray;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace : JavaLangIllegalStateException

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)node1
                    withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)node2;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace)

inline IOSObjectArray *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_get_EMPTY_STACK_TRACE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_EMPTY_STACK_TRACE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace, EMPTY_STACK_TRACE, IOSObjectArray *)

inline ComGoogleCommonCollectImmutableSet *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_get_EXCLUDED_CLASS_NAMES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_EXCLUDED_CLASS_NAMES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace, EXCLUDED_CLASS_NAMES, ComGoogleCommonCollectImmutableSet *)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *self, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node1, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node2);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *new_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node1, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node2) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *create_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node1, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *node2);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace;
@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *)getConflictingStackTrace;

- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)arg0
                    withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaLangBoolean;

@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock < JavaObject >

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_

@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilList;
@protocol JavaUtilMap;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode : NSObject {
 @public
  id<JavaUtilMap> allowedPriorLocks_;
  id<JavaUtilMap> disallowedPriorLocks_;
  NSString *lockName_;
}

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)lockName;

- (void)checkAcquiredLockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                  withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)acquiredLock;

- (void)checkAcquiredLocksWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                                                                           withJavaUtilList:(id<JavaUtilList>)acquiredLocks;

- (NSString *)getLockName;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, allowedPriorLocks_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, disallowedPriorLocks_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, lockName_, NSString *)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_initWithNSString_(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *self, NSString *lockName);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *new_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_initWithNSString_(NSString *lockName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *create_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_initWithNSString_(NSString *lockName);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_

#define RESTRICT_JavaUtilConcurrentLocksReentrantLock 1
#define INCLUDE_JavaUtilConcurrentLocksReentrantLock 1
#include "java/util/concurrent/locks/ReentrantLock.h"

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaLangBoolean;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock : JavaUtilConcurrentLocksReentrantLock < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock >

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

- (void)lock;

- (void)lockInterruptibly;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)unlock;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithBoolean:(jboolean)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory || defined(INCLUDE_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock))
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_

#define RESTRICT_JavaUtilConcurrentLocksReentrantReadWriteLock 1
#define INCLUDE_JavaUtilConcurrentLocksReentrantReadWriteLock 1
#include "java/util/concurrent/locks/ReentrantReadWriteLock.h"

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaLangBoolean;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock;

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock : JavaUtilConcurrentLocksReentrantReadWriteLock < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock >

#pragma mark Public

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock *)readLock;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock *)writeLock;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithBoolean:(jboolean)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory")
