//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/atomic/DoubleAdder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicDoubleAdder")
#ifdef RESTRICT_JavaUtilConcurrentAtomicDoubleAdder
#define INCLUDE_ALL_JavaUtilConcurrentAtomicDoubleAdder 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicDoubleAdder 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicDoubleAdder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentAtomicDoubleAdder_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicDoubleAdder || defined(INCLUDE_JavaUtilConcurrentAtomicDoubleAdder))
#define JavaUtilConcurrentAtomicDoubleAdder_

#define RESTRICT_JavaUtilConcurrentAtomicStriped64 1
#define INCLUDE_JavaUtilConcurrentAtomicStriped64 1
#include "java/util/concurrent/atomic/Striped64.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangFloat;
@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief One or more variables that together maintain an initially zero 
 <code>double</code> sum.When updates (method <code>add</code>) are
  contended across threads, the set of variables may grow dynamically
  to reduce contention.
 Method <code>sum</code> (or, equivalently <code>doubleValue</code>
 ) returns the current total combined across the
  variables maintaining the sum. The order of accumulation within or
  across threads is not guaranteed. Thus, this class may not be
  applicable if numerical stability is required, especially when
  combining values of substantially different orders of magnitude. 
 <p>This class is usually preferable to alternatives when multiple
  threads update a common value that is used for purposes such as
  summary statistics that are frequently updated but less frequently
  read. 
 <p>This class extends <code>Number</code>, but does <em>not</em> define
  methods such as <code>equals</code>, <code>hashCode</code> and <code>compareTo</code>
  because instances are expected to be mutated, and so are
  not useful as collection keys.
 @since 1.8
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicDoubleAdder : JavaUtilConcurrentAtomicStriped64 < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new adder with initial sum of zero.
 */
- (instancetype __nonnull)init;

/*!
 @brief Adds the given value.
 @param x the value to add
 */
- (void)addWithDouble:(jdouble)x;

/*!
 @brief Equivalent to <code>sum</code>.
 @return the sum
 */
- (jdouble)doubleValue;

/*!
 @brief Returns the <code>sum</code> as a <code>float</code>
  after a narrowing primitive conversion.
 */
- (jfloat)floatValue;

- (NSUInteger)hash;

/*!
 @brief Returns the <code>sum</code> as an <code>int</code> after a
  narrowing primitive conversion.
 */
- (jint)intValue;

- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the <code>sum</code> as a <code>long</code> after a
  narrowing primitive conversion.
 */
- (jlong)longLongValue;

/*!
 @brief Resets variables maintaining the sum to zero.This method may
  be a useful alternative to creating a new adder, but is only
  effective if there are no concurrent updates.
 Because this
  method is intrinsically racy, it should only be used when it is
  known that no threads are concurrently updating.
 */
- (void)reset;

/*!
 @brief Returns the current sum.The returned value is <em>NOT</em> an
  atomic snapshot; invocation in the absence of concurrent
  updates returns an accurate result, but concurrent updates that
  occur while the sum is being calculated might not be
  incorporated.
 Also, because floating-point arithmetic is not
  strictly associative, the returned result need not be identical
  to the value that would be obtained in a sequential series of
  updates to a single variable.
 @return the sum
 */
- (jdouble)sum;

/*!
 @brief Equivalent in effect to <code>sum</code> followed by <code>reset</code>
 .This method may apply for example during quiescent
  points between multithreaded computations.
 If there are
  updates concurrent with this method, the returned value is 
 <em>not</em> guaranteed to be the final value occurring before
  the reset.
 @return the sum
 */
- (jdouble)sumThenReset;

/*!
 @brief Returns the String representation of the <code>sum</code>.
 @return the String representation of the <code>sum</code>
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicDoubleAdder)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicDoubleAdder_init(JavaUtilConcurrentAtomicDoubleAdder *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicDoubleAdder *new_JavaUtilConcurrentAtomicDoubleAdder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicDoubleAdder *create_JavaUtilConcurrentAtomicDoubleAdder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicDoubleAdder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicDoubleAdder")
