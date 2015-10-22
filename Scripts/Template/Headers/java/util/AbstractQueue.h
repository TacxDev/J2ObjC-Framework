//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractQueue.java
//

#ifndef _JavaUtilAbstractQueue_H_
#define _JavaUtilAbstractQueue_H_

#include "../../J2ObjC_header.h"
#include "../../java/util/AbstractCollection.h"
#include "../../java/util/Queue.h"

@protocol JavaUtilCollection;

/*!
 @brief This class provides skeletal implementations of some <code>Queue</code>
 operations.
 The implementations in this class are appropriate when
 the base implementation does <em>not</em> allow <tt>null</tt>
 elements.  Methods <code>add</code>, <code>remove</code>, and
 <code>element</code> are based on <code>offer</code>, <code>poll</code>
 , and <code>peek</code>, respectively, but throw
 exceptions instead of indicating failure via <tt>false</tt> or
 <tt>null</tt> returns.
 <p>A <tt>Queue</tt> implementation that extends this class must
 minimally define a method <code>Queue.offer</code> which does not permit
 insertion of <tt>null</tt> elements, along with methods <code>Queue.peek</code>
 , <code>Queue.poll</code>, <code>Collection.size</code>, and
 <code>Collection.iterator</code>.  Typically, additional methods will be
 overridden as well.  If these requirements cannot be met, consider
 instead subclassing <code>AbstractCollection</code>.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilAbstractQueue : JavaUtilAbstractCollection < JavaUtilQueue >

#pragma mark Public

/*!
 @brief Inserts the specified element into this queue if it is possible to do so
 immediately without violating capacity restrictions, returning
 <tt>true</tt> upon success and throwing an <tt>IllegalStateException</tt>
 if no space is currently available.
 <p>This implementation returns <tt>true</tt> if <tt>offer</tt> succeeds,
 else throws an <tt>IllegalStateException</tt>.
 @param e the element to add
 @return <tt>true</tt> (as specified by <code>Collection.add</code>)
 @throws IllegalStateException if the element cannot be added at this
 time due to capacity restrictions
 @throws ClassCastException if the class of the specified element
 prevents it from being added to this queue
 @throws NullPointerException if the specified element is null and
 this queue does not permit null elements
 @throws IllegalArgumentException if some property of this element
 prevents it from being added to this queue
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Adds all of the elements in the specified collection to this
 queue.
 Attempts to addAll of a queue to itself result in
 <tt>IllegalArgumentException</tt>. Further, the behavior of
 this operation is undefined if the specified collection is
 modified while the operation is in progress.
 <p>This implementation iterates over the specified collection,
 and adds each element returned by the iterator to this
 queue, in turn.  A runtime exception encountered while
 trying to add an element (including, in particular, a
 <tt>null</tt> element) may result in only some of the elements
 having been successfully added when the associated exception is
 thrown.
 @param c collection containing elements to be added to this queue
 @return <tt>true</tt> if this queue changed as a result of the call
 @throws ClassCastException if the class of an element of the specified
 collection prevents it from being added to this queue
 @throws NullPointerException if the specified collection contains a
 null element and this queue does not permit null elements,
 or if the specified collection is null
 @throws IllegalArgumentException if some property of an element of the
 specified collection prevents it from being added to this
 queue, or if the specified collection is this queue
 @throws IllegalStateException if not all the elements can be added at
 this time due to insertion restrictions
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Removes all of the elements from this queue.
 The queue will be empty after this call returns.
 <p>This implementation repeatedly invokes <code>poll</code> until it
 returns <tt>null</tt>.
 */
- (void)clear;

/*!
 @brief Retrieves, but does not remove, the head of this queue.
 This method
 differs from <code>peek</code> only in that it throws an exception if
 this queue is empty.
 <p>This implementation returns the result of <tt>peek</tt>
 unless the queue is empty.
 @return the head of this queue
 @throws NoSuchElementException if this queue is empty
 */
- (id)element;

/*!
 @brief Retrieves and removes the head of this queue.
 This method differs
 from <code>poll</code> only in that it throws an exception if this
 queue is empty.
 <p>This implementation returns the result of <tt>poll</tt>
 unless the queue is empty.
 @return the head of this queue
 @throws NoSuchElementException if this queue is empty
 */
- (id)remove;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype)init;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractQueue)

FOUNDATION_EXPORT void JavaUtilAbstractQueue_init(JavaUtilAbstractQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractQueue)

#endif // _JavaUtilAbstractQueue_H_
