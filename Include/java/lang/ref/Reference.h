//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ref/Reference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRefReference")
#ifdef RESTRICT_JavaLangRefReference
#define INCLUDE_ALL_JavaLangRefReference 0
#else
#define INCLUDE_ALL_JavaLangRefReference 1
#endif
#undef RESTRICT_JavaLangRefReference

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangRefReference_) && (INCLUDE_ALL_JavaLangRefReference || defined(INCLUDE_JavaLangRefReference))
#define JavaLangRefReference_

@class JavaLangBoolean;
@class JavaLangRefReferenceQueue;

/*!
 @brief Abstract base class for reference objects.This class defines the operations common to all
  reference objects.
 Because reference objects are implemented in close cooperation with the
  garbage collector, this class may not be subclassed directly.
 @author Mark Reinhold
 @since 1.2
 */
@interface JavaLangRefReference : NSObject {
 @public
  /*!
   @brief Slow path flag for the reference processor.Used by the reference processor to determine
  whether or not the referent can be immediately returned.
   Because the referent might get swept
  during GC, the slow path, which passes through JNI, must be taken. After initialization, this
  is only accessed by native code. It is not used with the concurrent copying collector. It is
  enabled with mutators suspended, but disabled asynchronously.
   */
  volatile_id referent_;
  WEAK_ JavaLangRefReferenceQueue *queue_;
  JavaLangRefReference *queueNext_;
  /*!
   @brief The pendingNext field is initially set by the GC.After the GC forms a
  complete circularly linked list, the list is handed off to the
  ReferenceQueueDaemon using the ReferenceQueue.class lock.
   The
  ReferenceQueueDaemon can then read the pendingNext fields without
  additional synchronization.
   */
  JavaLangRefReference *pendingNext_;
}

#pragma mark Public

/*!
 @brief Clears this reference object.Invoking this method will not cause this object to be enqueued.
 <p>This method is invoked only by Java code; when the garbage collector clears references it
  does so directly, without invoking this method.
 */
- (void)clear;

/*!
 @brief Adds this reference object to the queue with which it is registered,
  if any.
 <p> This method is invoked only by Java code; when the garbage collector
  enqueues references it does so directly, without invoking this method.
 @return <code>true</code> if this reference object was successfully
            enqueued; <code>false</code> if it was already enqueued or if
            it was not registered with a queue when it was created
 */
- (jboolean)enqueue;

- (id)get;

/*!
 @brief Tests if this reference object is in its associated queue, if any.This method returns <code>true</code>
  only if all of the following conditions are met: 
 <ul>
    <li>this reference object was registered with a queue when it was created; and
    <li>the garbage collector has added this reference object to the queue or <code>enqueue()</code>
        is called; and   
 <li>this reference object is not yet removed from the queue.
 </ul>
  Otherwise, this method returns <code>false</code>. This method may return <code>false</code> if this
  reference object has been cleared but not enqueued due to the race condition.
 @return <code>true</code> if and only if this reference object is in its associated queue (if any).
 */
- (jboolean)isEnqueued;

#pragma mark Protected

/*!
 @brief Ensures that the object referenced by the given reference remains <a href="package-summary.html#reachability">
 <em>strongly reachable</em></a>, regardless of any
  prior actions of the program that might otherwise cause the object to become unreachable; thus,
  the referenced object is not reclaimable by garbage collection at least until after the
  invocation of this method.Invocation of this method does not itself initiate garbage
  collection or finalization.
 <p>This method establishes an ordering for <a href="package-summary.html#reachability">
 <em>strong reachability</em></a> with respect to
  garbage collection. It controls relations that are otherwise only implicit in a program -- the
  reachability conditions triggering garbage collection. This method is designed for use in
  uncommon situations of premature finalization where using <code>synchronized</code> blocks or
  methods, or using other synchronization facilities are not possible or do not provide the
  desired control. This method is applicable only when reclamation may have visible effects,
  which is possible for objects with finalizers (See <a href="https://docs.oracle.com/javase/specs/jls/se8/html/jls-12.html#jls-12.6">
 Section 12.6 17
  of <cite>The Java&trade; Language Specification</cite></a>) that are implemented in ways that
  rely on ordering control for correctness.
 @param ref the reference. If <code>null</code> , this method has no effect.
 @since 9
 */
- (void)java_finalize;

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id)referent;

- (instancetype __nonnull)initWithId:(id)referent
       withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)queue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefReference)

J2OBJC_FIELD_SETTER(JavaLangRefReference, queueNext_, JavaLangRefReference *)
J2OBJC_FIELD_SETTER(JavaLangRefReference, pendingNext_, JavaLangRefReference *)

FOUNDATION_EXPORT void JavaLangRefReference_initWithId_(JavaLangRefReference *self, id referent);

FOUNDATION_EXPORT void JavaLangRefReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefReference *self, id referent, JavaLangRefReferenceQueue *queue);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefReference)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangRefReference")
