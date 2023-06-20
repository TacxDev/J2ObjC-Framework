//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/TimeUnit.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentTimeUnit")
#ifdef RESTRICT_JavaUtilConcurrentTimeUnit
#define INCLUDE_ALL_JavaUtilConcurrentTimeUnit 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentTimeUnit 1
#endif
#undef RESTRICT_JavaUtilConcurrentTimeUnit

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentTimeUnit_) && (INCLUDE_ALL_JavaUtilConcurrentTimeUnit || defined(INCLUDE_JavaUtilConcurrentTimeUnit))
#define JavaUtilConcurrentTimeUnit_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class JavaLangLong;
@class JavaLangThread;
@class JavaTimeDuration;

typedef NS_ENUM(jint, JavaUtilConcurrentTimeUnit_Enum) {
  JavaUtilConcurrentTimeUnit_Enum_NANOSECONDS = 0,
  JavaUtilConcurrentTimeUnit_Enum_MICROSECONDS = 1,
  JavaUtilConcurrentTimeUnit_Enum_MILLISECONDS = 2,
  JavaUtilConcurrentTimeUnit_Enum_SECONDS = 3,
  JavaUtilConcurrentTimeUnit_Enum_MINUTES = 4,
  JavaUtilConcurrentTimeUnit_Enum_HOURS = 5,
  JavaUtilConcurrentTimeUnit_Enum_DAYS = 6,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define JavaUtilConcurrentTimeUnit_ORDINAL jint
#else
#define JavaUtilConcurrentTimeUnit_ORDINAL JavaUtilConcurrentTimeUnit_Enum
#endif


/*!
 @brief A <code>TimeUnit</code> represents time durations at a given unit of
  granularity and provides utility methods to convert across units,
  and to perform timing and delay operations in these units.A
  <code>TimeUnit</code> does not maintain time information, but only
  helps organize and use time representations that may be maintained
  separately across various contexts.
 A nanosecond is defined as one
  thousandth of a microsecond, a microsecond as one thousandth of a
  millisecond, a millisecond as one thousandth of a second, a minute
  as sixty seconds, an hour as sixty minutes, and a day as twenty four
  hours. 
 <p>A <code>TimeUnit</code> is mainly used to inform time-based methods
  how a given timing parameter should be interpreted. For example,
  the following code will timeout in 50 milliseconds if the <code>lock</code>
  is not available: 
 @code
  Lock lock = ...;
  if (lock.tryLock(50L, TimeUnit.MILLISECONDS)) ...
 
@endcode
  while this code will timeout in 50 seconds: 
 @code
  Lock lock = ...;
  if (lock.tryLock(50L, TimeUnit.SECONDS)) ...
 
@endcode
  Note however, that there is no guarantee that a particular timeout
  implementation will be able to notice the passage of time at the
  same granularity as the given <code>TimeUnit</code>.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentTimeUnit : JavaLangEnum

#pragma mark Public

/*!
 @brief Converts the given time duration to this unit.
 <p>For any TimeUnit <code>unit</code>,
  <code>unit.convert(Duration.ofNanos(n))</code>
  is equivalent to 
 <code>unit.convert(n, NANOSECONDS)</code>, and 
 <code>unit.convert(Duration.of(n, unit.toChronoUnit()))</code>
  is equivalent to <code>n</code> (in the absence of overflow).
 @param duration the time duration
 @return the converted duration in this unit,
  or <code>Long.MIN_VALUE</code> if conversion would negatively overflow,
  or <code>Long.MAX_VALUE</code> if it would positively overflow.
 @throw NullPointerExceptionif <code>duration</code> is null
 - seealso: Duration#of(long,TemporalUnit)
 @since 11
 */
- (jlong)convertWithJavaTimeDuration:(JavaTimeDuration *)duration;

/*!
 @brief Converts the given time duration in the given unit to this unit.
 Conversions from finer to coarser granularities truncate, so
  lose precision. For example, converting <code>999</code> milliseconds
  to seconds results in <code>0</code>. Conversions from coarser to
  finer granularities with arguments that would numerically
  overflow saturate to <code>Long.MIN_VALUE</code> if negative or 
 <code>Long.MAX_VALUE</code> if positive. 
 <p>For example, to convert 10 minutes to milliseconds, use: 
 <code>TimeUnit.MILLISECONDS.convert(10L, TimeUnit.MINUTES)</code>
 @param sourceDuration the time duration in the given <code>sourceUnit</code>
 @param sourceUnit the unit of the <code>sourceDuration</code>  argument
 @return the converted duration in this unit,
  or <code>Long.MIN_VALUE</code> if conversion would negatively overflow,
  or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)convertWithLong:(jlong)sourceDuration
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)sourceUnit;

/*!
 @brief Performs a <code>Thread.sleep</code> using
  this time unit.
 This is a convenience method that converts time arguments into the
  form required by the <code>Thread.sleep</code> method.
 @param timeout the minimum time to sleep. If less than  or equal to zero, do not sleep at all.
 @throw InterruptedExceptionif interrupted while sleeping
 */
- (void)sleepWithLong:(jlong)timeout;

/*!
 @brief Performs a timed <code>Thread.join</code>
  using this time unit.
 This is a convenience method that converts time arguments into the
  form required by the <code>Thread.join</code> method.
 @param thread the thread to wait for
 @param timeout the maximum time to wait. If less than  or equal to zero, do not wait at all.
 @throw InterruptedExceptionif interrupted while waiting
 */
- (void)timedJoinWithJavaLangThread:(JavaLangThread *)thread
                           withLong:(jlong)timeout;

/*!
 @brief Performs a timed <code>Object.wait</code>
  using this time unit.
 This is a convenience method that converts timeout arguments
  into the form required by the <code>Object.wait</code> method. 
 <p>For example, you could implement a blocking <code>poll</code> method
  (see <code>BlockingQueue.poll</code>)
  using: 
 @code
  public E poll(long timeout, TimeUnit unit)
      throws InterruptedException {
    synchronized (lock) {
      while (isEmpty()) {
        unit.timedWait(lock, timeout);
        ...
      }    }    }
 
@endcode
 @param obj the object to wait on
 @param timeout the maximum time to wait. If less than  or equal to zero, do not wait at all.
 @throw InterruptedExceptionif interrupted while waiting
 */
- (void)timedWaitWithId:(id)obj
               withLong:(jlong)timeout;

/*!
 @brief Equivalent to 
 <code>DAYS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration
 @since 1.6
 */
- (jlong)toDaysWithLong:(jlong)duration;

/*!
 @brief Equivalent to 
 <code>HOURS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
  or <code>Long.MIN_VALUE</code> if conversion would negatively overflow,
  or <code>Long.MAX_VALUE</code> if it would positively overflow.
 @since 1.6
 */
- (jlong)toHoursWithLong:(jlong)duration;

/*!
 @brief Equivalent to 
 <code>MICROSECONDS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
  or <code>Long.MIN_VALUE</code> if conversion would negatively overflow,
  or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)toMicrosWithLong:(jlong)duration;

/*!
 @brief Equivalent to 
 <code>MILLISECONDS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
  or <code>Long.MIN_VALUE</code> if conversion would negatively overflow,
  or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)toMillisWithLong:(jlong)duration;

/*!
 @brief Equivalent to 
 <code>MINUTES.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
  or <code>Long.MIN_VALUE</code> if conversion would negatively overflow,
  or <code>Long.MAX_VALUE</code> if it would positively overflow.
 @since 1.6
 */
- (jlong)toMinutesWithLong:(jlong)duration;

/*!
 @brief Equivalent to 
 <code>NANOSECONDS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
  or <code>Long.MIN_VALUE</code> if conversion would negatively overflow,
  or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)toNanosWithLong:(jlong)duration;

/*!
 @brief Equivalent to 
 <code>SECONDS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
  or <code>Long.MIN_VALUE</code> if conversion would negatively overflow,
  or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)toSecondsWithLong:(jlong)duration;

+ (JavaUtilConcurrentTimeUnit *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaUtilConcurrentTimeUnit_Enum)toNSEnum;

- (JavaUtilConcurrentTimeUnit_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentTimeUnit)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_values_[];

/*!
 @brief Time unit representing one thousandth of a microsecond.
 */
inline JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_get_NANOSECONDS(void);
J2OBJC_ENUM_CONSTANT(JavaUtilConcurrentTimeUnit, NANOSECONDS)

/*!
 @brief Time unit representing one thousandth of a millisecond.
 */
inline JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_get_MICROSECONDS(void);
J2OBJC_ENUM_CONSTANT(JavaUtilConcurrentTimeUnit, MICROSECONDS)

/*!
 @brief Time unit representing one thousandth of a second.
 */
inline JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_get_MILLISECONDS(void);
J2OBJC_ENUM_CONSTANT(JavaUtilConcurrentTimeUnit, MILLISECONDS)

/*!
 @brief Time unit representing one second.
 */
inline JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_get_SECONDS(void);
J2OBJC_ENUM_CONSTANT(JavaUtilConcurrentTimeUnit, SECONDS)

/*!
 @brief Time unit representing sixty seconds.
 @since 1.6
 */
inline JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_get_MINUTES(void);
J2OBJC_ENUM_CONSTANT(JavaUtilConcurrentTimeUnit, MINUTES)

/*!
 @brief Time unit representing sixty minutes.
 @since 1.6
 */
inline JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_get_HOURS(void);
J2OBJC_ENUM_CONSTANT(JavaUtilConcurrentTimeUnit, HOURS)

/*!
 @brief Time unit representing twenty four hours.
 @since 1.6
 */
inline JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_get_DAYS(void);
J2OBJC_ENUM_CONSTANT(JavaUtilConcurrentTimeUnit, DAYS)

FOUNDATION_EXPORT IOSObjectArray *JavaUtilConcurrentTimeUnit_values(void);

FOUNDATION_EXPORT JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilConcurrentTimeUnit *JavaUtilConcurrentTimeUnit_fromOrdinal(JavaUtilConcurrentTimeUnit_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentTimeUnit)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentTimeUnit")
