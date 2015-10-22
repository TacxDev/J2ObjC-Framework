//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ThreadLocalRandom.java
//

#ifndef _JavaUtilConcurrentThreadLocalRandom_H_
#define _JavaUtilConcurrentThreadLocalRandom_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/util/Random.h"

/*!
 @brief A random number generator isolated to the current thread.
 Like the
 global <code>java.util.Random</code> generator used by the <code>java.lang.Math</code>
  class, a <code>ThreadLocalRandom</code> is initialized
 with an internally generated seed that may not otherwise be
 modified. When applicable, use of <code>ThreadLocalRandom</code> rather
 than shared <code>Random</code> objects in concurrent programs will
 typically encounter much less overhead and contention.  Use of
 <code>ThreadLocalRandom</code> is particularly appropriate when multiple
 tasks (for example, each a <code>ForkJoinTask</code>) use random numbers
 in parallel in thread pools.
 <p>Usages of this class should typically be of the form:
 <code>ThreadLocalRandom.current().nextX(...)</code> (where
 <code>X</code> is <code>Int</code>, <code>Long</code>, etc).
 When all usages are of this form, it is never possible to
 accidently share a <code>ThreadLocalRandom</code> across multiple threads.
 <p>This class also provides additional commonly used bounded random
 generation methods.
 @since 1.7
 @author Doug Lea
 */
@interface JavaUtilConcurrentThreadLocalRandom : JavaUtilRandom {
 @public
  /*!
   @brief Initialization flag to permit calls to setSeed to succeed only
 while executing the Random constructor.
   We can't allow others
 since it would cause setting seed in one part of a program to
 unintentionally impact other usages by the thread.
   */
  jboolean initialized_;
}

#pragma mark Public

/*!
 @brief Returns the current thread's <code>ThreadLocalRandom</code>.
 @return the current thread's <code>ThreadLocalRandom</code>
 */
+ (JavaUtilConcurrentThreadLocalRandom *)current;

/*!
 @brief Returns a pseudorandom, uniformly distributed <code>double</code> value
 between 0 (inclusive) and the specified value (exclusive).
 @param n the bound on the random number to be returned.  Must be
 positive.
 @return the next value
 @throws IllegalArgumentException if n is not positive
 */
- (jdouble)nextDoubleWithDouble:(jdouble)n;

/*!
 @brief Returns a pseudorandom, uniformly distributed value between the
 given least value (inclusive) and bound (exclusive).
 @param least the least value returned
 @param bound the upper bound (exclusive)
 @return the next value
 @throws IllegalArgumentException if least greater than or equal
 to bound
 */
- (jdouble)nextDoubleWithDouble:(jdouble)least
                     withDouble:(jdouble)bound;

/*!
 @brief Returns a pseudorandom, uniformly distributed value between the
 given least value (inclusive) and bound (exclusive).
 @param least the least value returned
 @param bound the upper bound (exclusive)
 @return the next value
 @throws IllegalArgumentException if least greater than or equal
 to bound
 */
- (jint)nextIntWithInt:(jint)least
               withInt:(jint)bound;

/*!
 @brief Returns a pseudorandom, uniformly distributed value
 between 0 (inclusive) and the specified value (exclusive).
 @param n the bound on the random number to be returned.  Must be
 positive.
 @return the next value
 @throws IllegalArgumentException if n is not positive
 */
- (jlong)nextLongWithLong:(jlong)n;

/*!
 @brief Returns a pseudorandom, uniformly distributed value between the
 given least value (inclusive) and bound (exclusive).
 @param least the least value returned
 @param bound the upper bound (exclusive)
 @return the next value
 @throws IllegalArgumentException if least greater than or equal
 to bound
 */
- (jlong)nextLongWithLong:(jlong)least
                 withLong:(jlong)bound;

/*!
 @brief Throws <code>UnsupportedOperationException</code>.
 Setting seeds in
 this generator is not supported.
 @throws UnsupportedOperationException always
 */
- (void)setSeedWithLong:(jlong)seed;

#pragma mark Protected

- (jint)nextWithInt:(jint)bits;

#pragma mark Package-Private

/*!
 @brief Constructor called only by localRandom.initialValue.
 */
- (instancetype)init;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentThreadLocalRandom)

FOUNDATION_EXPORT void JavaUtilConcurrentThreadLocalRandom_init(JavaUtilConcurrentThreadLocalRandom *self);

FOUNDATION_EXPORT JavaUtilConcurrentThreadLocalRandom *new_JavaUtilConcurrentThreadLocalRandom_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentThreadLocalRandom *JavaUtilConcurrentThreadLocalRandom_current();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadLocalRandom)

#endif // _JavaUtilConcurrentThreadLocalRandom_H_
