//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/atomic/AtomicBoolean.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean")
#ifdef RESTRICT_JavaUtilConcurrentAtomicAtomicBoolean
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicAtomicBoolean

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentAtomicAtomicBoolean_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean || defined(INCLUDE_JavaUtilConcurrentAtomicAtomicBoolean))
#define JavaUtilConcurrentAtomicAtomicBoolean_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;

/*!
 @brief A <code>boolean</code> value that may be updated atomically.See the 
 <code>VarHandle</code> specification for descriptions of the properties
  of atomic accesses.
 An <code>AtomicBoolean</code> is used in
  applications such as atomically updated flags, and cannot be used
  as a replacement for a <code>java.lang.Boolean</code>.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicBoolean : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new <code>AtomicBoolean</code> with initial value <code>false</code>.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new <code>AtomicBoolean</code> with the given initial value.
 @param initialValue the initial value
 */
- (instancetype __nonnull)initWithBoolean:(jboolean)initialValue;

/*!
 @brief Atomically sets the value to <code>newValue</code>
  if the current value <code>== expectedValue</code>,
  with memory effects as specified by <code>VarHandle.compareAndSet</code>.
 @param expectedValue the expected value
 @param newValue the new value
 @return <code>true</code> if successful. False return indicates that
  the actual value was not equal to the expected value.
 */
- (jboolean)compareAndSetWithBoolean:(jboolean)expect
                         withBoolean:(jboolean)update;

/*!
 @brief Returns the current value,
  with memory effects as specified by <code>VarHandle.getVolatile</code>.
 @return the current value
 */
- (jboolean)get;

/*!
 @brief Atomically sets the value to <code>newValue</code> and returns the old value,
  with memory effects as specified by <code>VarHandle.getAndSet</code>.
 @param newValue the new value
 @return the previous value
 */
- (jboolean)getAndSetWithBoolean:(jboolean)newValue;

/*!
 @brief Sets the value to <code>newValue</code>,
  with memory effects as specified by <code>VarHandle.setRelease</code>.
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithBoolean:(jboolean)newValue;

/*!
 @brief Sets the value to <code>newValue</code>,
  with memory effects as specified by <code>VarHandle.setVolatile</code>.
 @param newValue the new value
 */
- (void)setWithBoolean:(jboolean)newValue;

/*!
 @brief Returns the String representation of the current value.
 @return the String representation of the current value
 */
- (NSString *)description;

/*!
 @brief Possibly atomically sets the value to <code>newValue</code>
  if the current value <code>== expectedValue</code>,
  with memory effects as specified by <code>VarHandle.weakCompareAndSetPlain</code>.
 @param expectedValue the expected value
 @param newValue the new value
 @return <code>true</code> if successful
 - seealso: #weakCompareAndSetPlain
 */
- (jboolean)weakCompareAndSetWithBoolean:(jboolean)expect
                             withBoolean:(jboolean)update;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicBoolean)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicBoolean_initWithBoolean_(JavaUtilConcurrentAtomicAtomicBoolean *self, jboolean initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicBoolean *new_JavaUtilConcurrentAtomicAtomicBoolean_initWithBoolean_(jboolean initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicBoolean *create_JavaUtilConcurrentAtomicAtomicBoolean_initWithBoolean_(jboolean initialValue);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicBoolean_init(JavaUtilConcurrentAtomicAtomicBoolean *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicBoolean *new_JavaUtilConcurrentAtomicAtomicBoolean_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicBoolean *create_JavaUtilConcurrentAtomicAtomicBoolean_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicBoolean)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean")
