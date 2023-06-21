// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Common definitions needed by all J2ObjC generated files.

#ifndef _J2OBJC_COMMON_H_
#define _J2OBJC_COMMON_H_

#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "J2ObjC_types.h"

@class IOSClass;
@class JavaLangRefWeakReference;
@protocol JavaLangIterable;

#ifndef __has_feature
#define __has_feature(x) 0  // Compatibility with non-clang compilers.
#endif

# ifndef OBJC_METHOD_FAMILY_NONE
#  if __has_attribute(objc_method_family)
#   define OBJC_METHOD_FAMILY_NONE __attribute__((objc_method_family(none)))
#  else
#   define OBJC_METHOD_FAMILY_NONE
#  endif
# endif

# if __has_feature(objc_arc)
#  define ARCBRIDGE __bridge
#  define ARCBRIDGE_TRANSFER __bridge_transfer
#  define ARC_CONSUME_PARAMETER __attribute((ns_consumed))
#  define AUTORELEASE(x) x
#  define RELEASE_(x) x
#  define RETAIN_(x) x
#  define RETAIN_AND_AUTORELEASE(x) x
# else
#  define ARCBRIDGE
#  define ARCBRIDGE_TRANSFER
#  define ARC_CONSUME_PARAMETER
#  define AUTORELEASE(x) [x autorelease]
#  define RELEASE_(x) [x release]
#  define RETAIN_(x) [x retain]
#  define RETAIN_AND_AUTORELEASE(x) [[x retain] autorelease]
# endif

// Support for -Xretain-autorelease-returns and -Xarc-autorelease-returns
#if __has_feature(objc_arc)

// ARC takes precedence for return values. Under ARC the return value is passed
// through objc_autoreleaseReturnValue() as needed automatically.
#define X_AUTORELEASED_RETURN_VALUE(x) x
#define X_RETAINED_AUTORELEASED_RETURN_VALUE(x) x
#define ALWAYS_AUTORELEASED_RETURN_VALUE(x) x
#define ALWAYS_RETAINED_AUTORELEASED_RETURN_VALUE(x) x

#elif J2OBJC_RETAIN_AUTORELEASE_RETURNS && J2OBJC_ARC_AUTORELEASE_RETURNS
// -Xretain-autorelease-returns on, -Xarc-autorelease-returns on

// These functions are not declared publicly, but are always present in the runtime:
// https://clang.llvm.org/docs/AutomaticReferenceCounting.html
//
// These are safe to call as normal functions. However, the fast-path they enable
// requires them to be tail-called since the handoff between caller and
// callee is based on the return address of the called function containing the
// magic value that indicates the caller will use objc_retainAutoreleasedReturnValue().
// Compiling with ARC always tail-calls these functions regardless of optimization
// level.
extern id objc_autoreleaseReturnValue(id);
extern id objc_retainAutoreleaseReturnValue(id);  // Not objc_retainAutoreleasedReturnValue!

// Macros for hand-written code.
// For now call the ARC functions as normal functions. In practice this means that for optimization
// levels less than -O2 we are not getting the fast-path variant of the callee/caller
// handoff. At -O2 and above they will usually be tail-called and the handoff will
// occur.
#define X_AUTORELEASED_RETURN_VALUE(x) objc_autoreleaseReturnValue(x)
#define X_RETAINED_AUTORELEASED_RETURN_VALUE(x) objc_retainAutoreleaseReturnValue(x)
#define ALWAYS_AUTORELEASED_RETURN_VALUE(x) objc_autoreleaseReturnValue(x)
#define ALWAYS_RETAINED_AUTORELEASED_RETURN_VALUE(x) objc_retainAutoreleaseReturnValue(x)

#elif J2OBJC_RETAIN_AUTORELEASE_RETURNS
// -Xretain-autorelease-returns on, -Xarc-autorelease-returns off

// Function used by the transpiler to retain/autorelease a return value without ARC.
// The transpiler needs a function instead of a macro because generated code
// often has multiple commas within the generated return statement
// (avoiding "too many arguments provided to function like macro").
__attribute__((always_inline)) inline id JreRetainedAutoreleasedReturnValue(id value) {
  return [[value retain] autorelease];
}

// Macros for hand-written code.
#define X_AUTORELEASED_RETURN_VALUE(x) [x autorelease]
#define X_RETAINED_AUTORELEASED_RETURN_VALUE(x) [[x retain] autorelease]
#define ALWAYS_AUTORELEASED_RETURN_VALUE(x) [x autorelease]
#define ALWAYS_RETAINED_AUTORELEASED_RETURN_VALUE(x) [[x retain] autorelease]

#else
// -Xretain-autorelease-returns off, -Xarc-autorelease-returns off

// Return values not autoreleased with -Xretain-autorelease-returns off. These values
// are only autoreleased when -Xretain-autorelease-returns is enabled.
#define X_AUTORELEASED_RETURN_VALUE(x) x
#define X_RETAINED_AUTORELEASED_RETURN_VALUE(x) x

// Always returned autoreleased regardless of transpiler flags. These macros exist
// to allow ARC-style returns of these values when -Xarc-autorelease-returns is on.
#define ALWAYS_AUTORELEASED_RETURN_VALUE(x) [x autorelease]
#define ALWAYS_RETAINED_AUTORELEASED_RETURN_VALUE(x) [[x retain] autorelease]

#endif  // __has_feature(objc_arc)

#if __has_feature(objc_arc_weak)
# define WEAK_ __weak
#else
# define WEAK_ __unsafe_unretained
#endif

CF_EXTERN_C_BEGIN

id JreThrowNullPointerException(void) __attribute__((noreturn));
void JreThrowClassCastException(id p, Class cls) __attribute__((noreturn));
void JreThrowClassCastExceptionWithIOSClass(id p, IOSClass *cls) __attribute__((noreturn));
void JreThrowArithmeticExceptionWithNSString(NSString *msg) __attribute__((noreturn));

id JreStrongAssign(__strong id *pIvar, id value);
id JreStrongAssignAndConsume(__strong id *pIvar, NS_RELEASES_ARGUMENT id value);

id JreStrictFieldStrongAssign(__strong id *pIvar, id value);
id JreStrictFieldStrongLoad(__strong id *pIvar);
void JreStrictFieldStrongRelease(__strong id *pIvar);

id JreLoadVolatileId(volatile_id *pVar);
id JreAssignVolatileId(volatile_id *pVar, id value);
id JreVolatileStrongAssign(volatile_id *pIvar, id value);
jboolean JreCompareAndSwapVolatileStrongId(volatile_id *pVar, id expected, id newValue);
id JreExchangeVolatileStrongId(volatile_id *pVar, id newValue);
void JreCloneVolatile(volatile_id *pVar, volatile_id *pOther);
void JreCloneVolatileStrong(volatile_id *pVar, volatile_id *pOther);
void JreReleaseVolatile(volatile_id *pVar);
id JreRetainedLocalValue(id value);

id JreRetainedWithAssign(id parent, __strong id *pIvar, id value);
id JreVolatileRetainedWithAssign(id parent, volatile_id *pIvar, id value);
void JreRetainedWithRelease(id parent, id child);
void JreVolatileRetainedWithRelease(id parent, volatile_id *pVar);
void JreStrictFieldRetainedWithRelease(id parent, id *pVar);

NSString *JreStrcat(const char *types, ...);

jboolean JreAnnotationEquals(id a1, id a2);
jint JreAnnotationHashCode(id a);

NSUInteger JreDefaultFastEnumeration(
    id<JavaLangIterable> obj, NSFastEnumerationState *state, id __unsafe_unretained *stackbuf);

CF_EXTERN_C_END

/*!
 * The nil_chk macro is used wherever a Java object is dereferenced and needs to
 * be checked for null. A macro is used instead of an inline function because it
 * allows the line number of the dereference to be derived from the stack frame.
 *
 * @param p The object to check for nil.
 */
#define nil_chk(p) (p ?: JreThrowNullPointerException())

#if !__has_feature(objc_arc)
__attribute__((always_inline)) inline id JreAutoreleasedAssign(
    id *pIvar, NS_RELEASES_ARGUMENT id value) {
  [*pIvar autorelease];
  return *pIvar = value;
}
#endif

/*!
 * Utility macro for passing an argument that contains a comma.
 */
#define J2OBJC_ARG(...) __VA_ARGS__

#define J2OBJC_VOLATILE_ACCESS_DEFN(NAME, TYPE) \
  __attribute__((always_inline)) inline TYPE JreLoadVolatile##NAME(volatile_##TYPE *pVar) { \
    return __c11_atomic_load(pVar, __ATOMIC_SEQ_CST); \
  } \
  __attribute__((always_inline)) inline TYPE JreAssignVolatile##NAME( \
      volatile_##TYPE *pVar, TYPE value) { \
    __c11_atomic_store(pVar, value, __ATOMIC_SEQ_CST); \
    return value; \
  }

J2OBJC_VOLATILE_ACCESS_DEFN(Boolean, jboolean)
J2OBJC_VOLATILE_ACCESS_DEFN(Char, jchar)
J2OBJC_VOLATILE_ACCESS_DEFN(Byte, jbyte)
J2OBJC_VOLATILE_ACCESS_DEFN(Short, jshort)
J2OBJC_VOLATILE_ACCESS_DEFN(Int, jint)
J2OBJC_VOLATILE_ACCESS_DEFN(Long, jlong)
J2OBJC_VOLATILE_ACCESS_DEFN(Float, jfloat)
J2OBJC_VOLATILE_ACCESS_DEFN(Double, jdouble)
#undef J2OBJC_VOLATILE_ACCESS_DEFN

/*!
 * Defines the initialized flag for a class.
 *
 * @define J2OBJC_INITIALIZED_DEFN
 * @param CLASS The class for which the initialized flag is defined.
 */
#define J2OBJC_INITIALIZED_DEFN(CLASS) \
  _Atomic(jboolean) CLASS##__initialized = false;

/*!
 * Defines the code to set a class's initialized flag. This should be used at
 * the end of each class's initialize class method.
 *
 * @define J2OBJC_SET_INITIALIZED
 * @param CLASS The class who's flag is to be set.
 */
#define J2OBJC_SET_INITIALIZED(CLASS) \
  __c11_atomic_store(&CLASS##__initialized, true, __ATOMIC_RELEASE);

/*!
 * Defines an init function for a class that will ensure that the class is
 * initialized. For class "Foo" the function will have the following signature:
 *   inline void Foo_initialize();
 *
 * @define J2OBJC_STATIC_INIT
 * @param CLASS The class to declare the init function for.
 */
#define J2OBJC_STATIC_INIT(CLASS)                                                           \
  FOUNDATION_EXPORT _Atomic(jboolean) CLASS##__initialized;                                 \
  __attribute__((always_inline)) inline void CLASS##_initialize(void) {                     \
    if (__builtin_expect(!__c11_atomic_load(&CLASS##__initialized, __ATOMIC_ACQUIRE), 0)) { \
      [CLASS class];                                                                        \
    }                                                                                       \
  }

/*!
 * Defines an empty init function for a class that has no initialization code.
 *
 * @define J2OBJC_EMPTY_STATIC_INIT
 * @param CLASS The class to declare the init function for.
 */
#define J2OBJC_EMPTY_STATIC_INIT(CLASS) \
  __attribute__((always_inline)) inline void CLASS##_initialize(void) {}

/*!
 * Declares the type literal accessor for a type. This macro should be added to
 * the header of each generated Java type.
 *
 * @define J2OBJC_TYPE_LITERAL_HEADER
 * @param TYPE The name of the type to declare the accessor for.
 */
#define J2OBJC_TYPE_LITERAL_HEADER(TYPE) \
  FOUNDATION_EXPORT IOSClass *TYPE##_class_(void);

/*!
 * Defines the type literal accessor for a class or enum type. This macro should
 * be added to the implementation of each generated Java type.
 *
 * @define J2OBJC_CLASS_TYPE_LITERAL_SOURCE
 * @param TYPE The name of the type to define the accessor for.
 */
#define J2OBJC_CLASS_TYPE_LITERAL_SOURCE(TYPE) \
  IOSClass *TYPE##_class_() { \
    static IOSClass *cls; \
    static dispatch_once_t token; \
    TYPE##_initialize(); \
    dispatch_once(&token, ^{ cls = IOSClass_fromClass([TYPE class]); }); \
    return cls; \
  }

/*!
 * Defines the type literal accessor for a interface or annotation type. This
 * macro should be added to the implementation of each generated Java type.
 *
 * @define J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE
 * @param TYPE The name of the type to define the accessor for.
 */
#define J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(TYPE) \
  IOSClass *TYPE##_class_() { \
    static IOSClass *cls; \
    static dispatch_once_t token; \
    TYPE##_initialize(); \
    dispatch_once(&token, ^{ cls = IOSClass_fromProtocol(@protocol(TYPE)); }); \
    return cls; \
  }

#ifdef J2OBJC_STRICT_FIELD_ASSIGN

#define J2OBJC_FIELD_SETTER(CLASS, FIELD, TYPE)                                                 \
  __attribute__((unused)) static inline TYPE CLASS##_set_##FIELD(CLASS *instance, TYPE value) { \
    return JreStrictFieldStrongAssign(&instance->FIELD, value);                                 \
  }

#else  // J2OBJC_STRICT_FIELD_ASSIGN

#if __has_feature(objc_arc)
#define J2OBJC_FIELD_SETTER(CLASS, FIELD, TYPE) \
  __attribute__((unused)) static inline TYPE CLASS##_set_##FIELD(CLASS *instance, TYPE value) { \
    return instance->FIELD = value; \
  }
#else
#define J2OBJC_FIELD_SETTER(CLASS, FIELD, TYPE) \
  __attribute__((unused)) static inline TYPE CLASS##_set_##FIELD(CLASS *instance, TYPE value) { \
    return JreStrongAssign(&instance->FIELD, value); \
  }\
  __attribute__((unused)) static inline TYPE CLASS##_setAndConsume_##FIELD( \
        CLASS *instance, NS_RELEASES_ARGUMENT TYPE value) { \
    return JreStrongAssignAndConsume(&instance->FIELD, value); \
  }
#endif

#endif  // J2OBJC_STRICT_FIELD_ASSIGN

#define J2OBJC_VOLATILE_FIELD_SETTER(CLASS, FIELD, TYPE) \
  __attribute__((unused)) static inline TYPE CLASS##_set_##FIELD(CLASS *instance, TYPE value) { \
    return JreVolatileStrongAssign(&instance->FIELD, value); \
  }

/*!
 * Adds noop implementations for the memory management methods. This helps to
 * avoid the cost of incrementing and decrementing the retain count for objects
 * that should never be dealloc'ed.
 *
 * @define J2OBJC_ETERNAL_SINGLETON
 */
#define J2OBJC_ETERNAL_SINGLETON \
  - (id)retain { return self; } \
  - (oneway void)release {} \
  - (id)autorelease { return self; }

/*!
 A type to represent an Objective C class.
 This is actually an `objc_class` but the runtime headers will not allow us to
 reference `objc_class`, so we have defined our own.

 Adapted from:
 https://github.com/protocolbuffers/protobuf/blob/master/objectivec/GPBRuntimeTypes.h
*/
typedef struct J2ObjCClass_t J2ObjCClass_t;

/*!
 Macros for generating a Class from a class name. These are used wherever a
 static Objective C class reference is needed for a generated class. Unlike
 "[classname class]", this macro doesn't trigger class initialization, avoiding
 the chance of Objective C initialization deadlocks.

 Adapted from:
 https://github.com/protocolbuffers/protobuf/blob/master/objectivec/GPBUtilities_PackagePrivate.h
 */
#define J2OBJC_CLASS_SYMBOL(name) OBJC_CLASS_$_##name
#define J2OBJC_CLASS_REFERENCE(name) \
    ((__bridge Class)&(J2OBJC_CLASS_SYMBOL(name)))
#define J2OBJC_CLASS_DECLARATION(name) \
    extern const J2ObjCClass_t J2OBJC_CLASS_SYMBOL(name)

#endif // _J2OBJC_COMMON_H_
