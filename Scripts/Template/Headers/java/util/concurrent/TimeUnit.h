//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/TimeUnit.java
//

#ifndef _JavaUtilConcurrentTimeUnit_H_
#define _JavaUtilConcurrentTimeUnit_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/lang/Enum.h"

@class JavaLangThread;

#define JavaUtilConcurrentTimeUnitEnum_C0 1LL
#define JavaUtilConcurrentTimeUnitEnum_C1 1000LL
#define JavaUtilConcurrentTimeUnitEnum_C2 1000000LL
#define JavaUtilConcurrentTimeUnitEnum_C3 1000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C4 60000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C5 3600000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C6 86400000000000LL
#define JavaUtilConcurrentTimeUnitEnum_MAX 9223372036854775807LL

typedef NS_ENUM(NSUInteger, JavaUtilConcurrentTimeUnit) {
  JavaUtilConcurrentTimeUnit_NANOSECONDS = 0,
  JavaUtilConcurrentTimeUnit_MICROSECONDS = 1,
  JavaUtilConcurrentTimeUnit_MILLISECONDS = 2,
  JavaUtilConcurrentTimeUnit_SECONDS = 3,
  JavaUtilConcurrentTimeUnit_MINUTES = 4,
  JavaUtilConcurrentTimeUnit_HOURS = 5,
  JavaUtilConcurrentTimeUnit_DAYS = 6,
};

/*!
 @brief A <code>TimeUnit</code> represents time durations at a given unit of
 granularity and provides utility methods to convert across units,
 and to perform timing and delay operations in these units.
 A
 <code>TimeUnit</code> does not maintain time information, but only
 helps organize and use time representations that may be maintained
 separately across various contexts.  A nanosecond is defined as one
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
@interface JavaUtilConcurrentTimeUnitEnum : JavaLangEnum < NSCopying >

#pragma mark Public

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
 @param sourceUnit the unit of the <code>sourceDuration</code> argument
 @return the converted duration in this unit,
 or <code>Long.MIN_VALUE</code> if conversion would negatively
 overflow, or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)convertWithLong:(jlong)sourceDuration
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)sourceUnit;

/*!
 @brief Performs a <code>Thread.sleep</code> using
 this time unit.
 This is a convenience method that converts time arguments into the
 form required by the <code>Thread.sleep</code> method.
 @param timeout the minimum time to sleep. If less than
 or equal to zero, do not sleep at all.
 @throws InterruptedException if interrupted while sleeping
 */
- (void)sleepWithLong:(jlong)timeout;

/*!
 @brief Performs a timed <code>Thread.join</code>
 using this time unit.
 This is a convenience method that converts time arguments into the
 form required by the <code>Thread.join</code> method.
 @param thread the thread to wait for
 @param timeout the maximum time to wait. If less than
 or equal to zero, do not wait at all.
 @throws InterruptedException if interrupted while waiting
 */
- (void)timedJoinWithJavaLangThread:(JavaLangThread *)thread
                           withLong:(jlong)timeout;

/*!
 @brief Performs a timed <code>Object.wait</code>
 using this time unit.
 This is a convenience method that converts timeout arguments
 into the form required by the <code>Object.wait</code> method.
 <p>For example, you could implement a blocking <code>poll</code>
 method (see <code>BlockingQueue.poll</code>)
 using:
 @code
  public synchronized Object poll(long timeout, TimeUnit unit)
     throws InterruptedException 
   while (empty) {
     unit.timedWait(this, timeout);
     ...
   }
  
@endcode
 @param obj the object to wait on
 @param timeout the maximum time to wait. If less than
 or equal to zero, do not wait at all.
 @throws InterruptedException if interrupted while waiting
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
 or <code>Long.MIN_VALUE</code> if conversion would negatively
 overflow, or <code>Long.MAX_VALUE</code> if it would positively overflow.
 @since 1.6
 */
- (jlong)toHoursWithLong:(jlong)duration;

/*!
 @brief Equivalent to
 <code>MICROSECONDS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
 or <code>Long.MIN_VALUE</code> if conversion would negatively
 overflow, or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)toMicrosWithLong:(jlong)duration;

/*!
 @brief Equivalent to
 <code>MILLISECONDS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
 or <code>Long.MIN_VALUE</code> if conversion would negatively
 overflow, or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)toMillisWithLong:(jlong)duration;

/*!
 @brief Equivalent to
 <code>MINUTES.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
 or <code>Long.MIN_VALUE</code> if conversion would negatively
 overflow, or <code>Long.MAX_VALUE</code> if it would positively overflow.
 @since 1.6
 */
- (jlong)toMinutesWithLong:(jlong)duration;

/*!
 @brief Equivalent to
 <code>NANOSECONDS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
 or <code>Long.MIN_VALUE</code> if conversion would negatively
 overflow, or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)toNanosWithLong:(jlong)duration;

/*!
 @brief Equivalent to
 <code>SECONDS.convert(duration, this)</code>.
 @param duration the duration
 @return the converted duration,
 or <code>Long.MIN_VALUE</code> if conversion would negatively
 overflow, or <code>Long.MAX_VALUE</code> if it would positively overflow.
 */
- (jlong)toSecondsWithLong:(jlong)duration;

#pragma mark Package-Private

/*!
 @brief Utility to compute the excess-nanosecond argument to wait,
 sleep, join.
 @param d the duration
 @param m the number of milliseconds
 @return the number of nanoseconds
 */
- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

/*!
 @brief Scale d by m, checking for overflow.
 This has a short name to make above code more readable.
 */
+ (jlong)xWithLong:(jlong)d
          withLong:(jlong)m
          withLong:(jlong)over;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaUtilConcurrentTimeUnitEnum_values();

+ (JavaUtilConcurrentTimeUnitEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT JavaUtilConcurrentTimeUnitEnum *JavaUtilConcurrentTimeUnitEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentTimeUnitEnum)

FOUNDATION_EXPORT JavaUtilConcurrentTimeUnitEnum *JavaUtilConcurrentTimeUnitEnum_values_[];

#define JavaUtilConcurrentTimeUnitEnum_NANOSECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_NANOSECONDS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, NANOSECONDS)

#define JavaUtilConcurrentTimeUnitEnum_MICROSECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MICROSECONDS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, MICROSECONDS)

#define JavaUtilConcurrentTimeUnitEnum_MILLISECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MILLISECONDS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, MILLISECONDS)

#define JavaUtilConcurrentTimeUnitEnum_SECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_SECONDS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, SECONDS)

#define JavaUtilConcurrentTimeUnitEnum_MINUTES JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MINUTES]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, MINUTES)

#define JavaUtilConcurrentTimeUnitEnum_HOURS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_HOURS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, HOURS)

#define JavaUtilConcurrentTimeUnitEnum_DAYS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_DAYS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, DAYS)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C0, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C1, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C2, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C3, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C4, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C5, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C6, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, MAX, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentTimeUnitEnum_xWithLong_withLong_withLong_(jlong d, jlong m, jlong over);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentTimeUnitEnum)

#endif // _JavaUtilConcurrentTimeUnit_H_
