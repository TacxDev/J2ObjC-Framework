//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Timer.java
//

#ifndef _JavaUtilTimer_H_
#define _JavaUtilTimer_H_

#include "../../J2ObjC_header.h"

@class JavaUtilDate;
@class JavaUtilTimerTask;

/*!
 @brief Timers schedule one-shot or recurring <code>tasks</code> for execution.
 Prefer <code>ScheduledThreadPoolExecutor</code>
  for new code.
 <p>Each timer has one thread on which tasks are executed sequentially. When
 this thread is busy running a task, runnable tasks may be subject to delays.
 <p>One-shot are scheduled to run at an absolute time or after a relative
 delay.
 <p>Recurring tasks are scheduled with either a fixed period or a fixed rate:
 <ul>
 <li>With the default <strong>fixed-period execution</strong>, each
 successive run of a task is scheduled relative to the start time of
 the previous run, so two runs are never fired closer together in time
 than the specified <code>period</code>.
 <li>With <strong>fixed-rate execution</strong>, the start time of each
 successive run of a task is scheduled without regard for when the
 previous run took place. This may result in a series of bunched-up runs
 (one launched immediately after another) if delays prevent the timer
 from starting tasks on time.
 </ul>
 <p>When a timer is no longer needed, users should call <code>cancel</code>, which
 releases the timer's thread and other resources. Timers not explicitly
 cancelled may hold resources indefinitely.
 <p>This class does not offer guarantees about the real-time nature of task
 scheduling. Multiple threads can share a single timer without
 synchronization.
 */
@interface JavaUtilTimer : NSObject

#pragma mark Public

/*!
 @brief Creates a new non-daemon <code>Timer</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>Timer</code> which may be specified to be run as a daemon thread.
 @param isDaemon <code>true</code> if the <code>Timer</code>'s thread should be a daemon thread.
 */
- (instancetype)initWithBoolean:(jboolean)isDaemon;

/*!
 @brief Creates a new named <code>Timer</code> which does not run as a daemon thread.
 @param name the name of the Timer.
 @throws NullPointerException is <code>name</code> is <code>null</code>
 */
- (instancetype)initWithNSString:(NSString *)name;

/*!
 @brief Creates a new named <code>Timer</code> which may be specified to be run as a
 daemon thread.
 @param name the name of the <code>Timer</code>.
 @param isDaemon true if <code>Timer</code>'s thread should be a daemon thread.
 @throws NullPointerException is <code>name</code> is <code>null</code>
 */
- (instancetype)initWithNSString:(NSString *)name
                     withBoolean:(jboolean)isDaemon;

/*!
 @brief Cancels the <code>Timer</code> and all scheduled tasks.
 If there is a
 currently running task it is not affected. No more tasks may be scheduled
 on this <code>Timer</code>. Subsequent calls do nothing.
 */
- (void)cancel;

/*!
 @brief Removes all canceled tasks from the task queue.
 If there are no
 other references on the tasks, then after this call they are free
 to be garbage collected.
 @return the number of canceled tasks that were removed from the task
 queue.
 */
- (jint)purge;

/*!
 @brief Schedule a task for single execution.
 If <code>when</code> is less than the
 current time, it will be scheduled to be executed as soon as possible.
 @param task
 the task to schedule.
 @param when
 time of execution.
 @throws IllegalArgumentException
 if <code>when.getTime() < 0</code>.
 @throws IllegalStateException
 if the <code>Timer</code> has been canceled, or if the task has been
 scheduled or canceled.
 */
- (void)scheduleWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                     withJavaUtilDate:(JavaUtilDate *)when;

/*!
 @brief Schedule a task for repeated fixed-delay execution after a specific time
 has been reached.
 @param task
 the task to schedule.
 @param when
 time of first execution.
 @param period
 amount of time in milliseconds between subsequent executions.
 @throws IllegalArgumentException
 if <code>when.getTime() < 0</code> or <code>period <= 0</code>.
 @throws IllegalStateException
 if the <code>Timer</code> has been canceled, or if the task has been
 scheduled or canceled.
 */
- (void)scheduleWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                     withJavaUtilDate:(JavaUtilDate *)when
                             withLong:(jlong)period;

/*!
 @brief Schedule a task for single execution after a specified delay.
 @param task
 the task to schedule.
 @param delay
 amount of time in milliseconds before execution.
 @throws IllegalArgumentException
 if <code>delay < 0</code>.
 @throws IllegalStateException
 if the <code>Timer</code> has been canceled, or if the task has been
 scheduled or canceled.
 */
- (void)scheduleWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                             withLong:(jlong)delay;

/*!
 @brief Schedule a task for repeated fixed-delay execution after a specific delay.
 @param task
 the task to schedule.
 @param delay
 amount of time in milliseconds before first execution.
 @param period
 amount of time in milliseconds between subsequent executions.
 @throws IllegalArgumentException
 if <code>delay < 0</code> or <code>period <= 0</code>.
 @throws IllegalStateException
 if the <code>Timer</code> has been canceled, or if the task has been
 scheduled or canceled.
 */
- (void)scheduleWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                             withLong:(jlong)delay
                             withLong:(jlong)period;

/*!
 @brief Schedule a task for repeated fixed-rate execution after a specific time
 has been reached.
 @param task
 the task to schedule.
 @param when
 time of first execution.
 @param period
 amount of time in milliseconds between subsequent executions.
 @throws IllegalArgumentException
 if <code>when.getTime() < 0</code> or <code>period <= 0</code>.
 @throws IllegalStateException
 if the <code>Timer</code> has been canceled, or if the task has been
 scheduled or canceled.
 */
- (void)scheduleAtFixedRateWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                                withJavaUtilDate:(JavaUtilDate *)when
                                        withLong:(jlong)period;

/*!
 @brief Schedule a task for repeated fixed-rate execution after a specific delay
 has passed.
 @param task
 the task to schedule.
 @param delay
 amount of time in milliseconds before first execution.
 @param period
 amount of time in milliseconds between subsequent executions.
 @throws IllegalArgumentException
 if <code>delay < 0</code> or <code>period <= 0</code>.
 @throws IllegalStateException
 if the <code>Timer</code> has been canceled, or if the task has been
 scheduled or canceled.
 */
- (void)scheduleAtFixedRateWithJavaUtilTimerTask:(JavaUtilTimerTask *)task
                                        withLong:(jlong)delay
                                        withLong:(jlong)period;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTimer)

FOUNDATION_EXPORT void JavaUtilTimer_initWithNSString_withBoolean_(JavaUtilTimer *self, NSString *name, jboolean isDaemon);

FOUNDATION_EXPORT JavaUtilTimer *new_JavaUtilTimer_initWithNSString_withBoolean_(NSString *name, jboolean isDaemon) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTimer_initWithNSString_(JavaUtilTimer *self, NSString *name);

FOUNDATION_EXPORT JavaUtilTimer *new_JavaUtilTimer_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTimer_initWithBoolean_(JavaUtilTimer *self, jboolean isDaemon);

FOUNDATION_EXPORT JavaUtilTimer *new_JavaUtilTimer_initWithBoolean_(jboolean isDaemon) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTimer_init(JavaUtilTimer *self);

FOUNDATION_EXPORT JavaUtilTimer *new_JavaUtilTimer_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimer)

#endif // _JavaUtilTimer_H_
