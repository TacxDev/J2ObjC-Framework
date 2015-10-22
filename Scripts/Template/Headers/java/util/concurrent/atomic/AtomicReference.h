//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicReference.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicReference_H_
#define _JavaUtilConcurrentAtomicAtomicReference_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../java/io/Serializable.h"

/*!
 @brief An object reference that may be updated atomically.
 See the <code>java.util.concurrent.atomic</code>
  package specification for description
 of the properties of atomic variables.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicReference : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new AtomicReference with null initial value.
 */
- (instancetype)init;

/*!
 @brief Creates a new AtomicReference with the given initial value.
 @param initialValue the initial value
 */
- (instancetype)initWithId:(id)initialValue;

/*!
 @brief Atomically sets the value to the given updated value
 if the current value <code>==</code> the expected value.
 @param expect the expected value
 @param update the new value
 @return true if successful. False return indicates that
 the actual value was not equal to the expected value.
 */
- (jboolean)compareAndSetWithId:(id)expect
                         withId:(id)update;

/*!
 @brief Gets the current value.
 @return the current value
 */
- (id)get;

/*!
 @brief Atomically sets to the given value and returns the old value.
 @param newValue the new value
 @return the previous value
 */
- (id)getAndSetWithId:(id)newValue;

/*!
 @brief Eventually sets to the given value.
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithId:(id)newValue;

/*!
 @brief Sets to the given value.
 @param newValue the new value
 */
- (void)setWithId:(id)newValue;

/*!
 @brief Returns the String representation of the current value.
 @return the String representation of the current value
 */
- (NSString *)description;

/*!
 @brief Atomically sets the value to the given updated value
 if the current value <code>==</code> the expected value.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
 spuriously and does not provide ordering guarantees</a>, so is
 only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param expect the expected value
 @param update the new value
 @return true if successful
 */
- (jboolean)weakCompareAndSetWithId:(id)expect
                             withId:(id)update;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicReference)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReference_initWithId_(JavaUtilConcurrentAtomicAtomicReference *self, id initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *new_JavaUtilConcurrentAtomicAtomicReference_initWithId_(id initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReference_init(JavaUtilConcurrentAtomicAtomicReference *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *new_JavaUtilConcurrentAtomicAtomicReference_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicReference)

#endif // _JavaUtilConcurrentAtomicAtomicReference_H_
