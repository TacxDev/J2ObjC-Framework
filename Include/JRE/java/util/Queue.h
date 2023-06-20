//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Queue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilQueue")
#ifdef RESTRICT_JavaUtilQueue
#define INCLUDE_ALL_JavaUtilQueue 0
#else
#define INCLUDE_ALL_JavaUtilQueue 1
#endif
#undef RESTRICT_JavaUtilQueue

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilQueue_) && (INCLUDE_ALL_JavaUtilQueue || defined(INCLUDE_JavaUtilQueue))
#define JavaUtilQueue_

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "java/util/Collection.h"

@class JavaLangBoolean;

/*!
 @brief A collection designed for holding elements prior to processing.
 Besides basic <code>Collection</code> operations,
  queues provide additional insertion, extraction, and inspection
  operations.  Each of these methods exists in two forms: one throws
  an exception if the operation fails, the other returns a special
  value (either <code>null</code> or <code>false</code>, depending on the
  operation).  The latter form of the insert operation is designed
  specifically for use with capacity-restricted <code>Queue</code>
  implementations; in most implementations, insert operations cannot
  fail. 
 <table BORDER CELLPADDING=3 CELLSPACING=1>
  <caption>Summary of Queue methods</caption>
   <tr>
     <td></td>
     <td ALIGN=CENTER><em>Throws exception</em></td>
     <td ALIGN=CENTER><em>Returns special value</em></td>
   </tr>
   <tr>
     <td><b>Insert</b></td>
     <td><code>add(e)</code></td>
     <td><code>offer(e)</code></td>
   </tr>
   <tr>
     <td><b>Remove</b></td>
     <td><code>remove()</code></td>
     <td><code>poll()</code></td>
   </tr>
   <tr>
     <td><b>Examine</b></td>
     <td><code>element()</code></td>
     <td><code>peek()</code></td>
   </tr>
  </table>
  
 <p>Queues typically, but do not necessarily, order elements in a
  FIFO (first-in-first-out) manner.  Among the exceptions are
  priority queues, which order elements according to a supplied
  comparator, or the elements' natural ordering, and LIFO queues (or
  stacks) which order the elements LIFO (last-in-first-out).
  Whatever the ordering used, the <em>head</em> of the queue is that
  element which would be removed by a call to <code>remove()</code> or 
 <code>poll()</code>.  In a FIFO queue, all new elements are inserted at
  the <em>tail</em> of the queue. Other kinds of queues may use
  different placement rules.  Every <code>Queue</code> implementation
  must specify its ordering properties. 
 <p>The <code>offer</code> method inserts an element if possible,
  otherwise returning <code>false</code>.  This differs from the <code>Collection.add</code>
  method, which can fail to
  add an element only by throwing an unchecked exception.  The 
 <code>offer</code> method is designed for use when failure is a normal,
  rather than exceptional occurrence, for example, in fixed-capacity
  (or &quot;bounded&quot;) queues. 
 <p>The <code>remove()</code> and <code>poll()</code> methods remove and
  return the head of the queue.
  Exactly which element is removed from the queue is a
  function of the queue's ordering policy, which differs from
  implementation to implementation. The <code>remove()</code> and 
 <code>poll()</code> methods differ only in their behavior when the
  queue is empty: the <code>remove()</code> method throws an exception,
  while the <code>poll()</code> method returns <code>null</code>.
  
 <p>The <code>element()</code> and <code>peek()</code> methods return, but do
  not remove, the head of the queue. 
 <p>The <code>Queue</code> interface does not define the <i>blocking queue
  methods</i>, which are common in concurrent programming.  These methods,
  which wait for elements to appear or for space to become available, are
  defined in the <code>java.util.concurrent.BlockingQueue</code> interface, which
  extends this interface. 
 <p><code>Queue</code> implementations generally do not allow insertion
  of <code>null</code> elements, although some implementations, such as 
 <code>LinkedList</code>, do not prohibit insertion of <code>null</code>.
  Even in the implementations that permit it, <code>null</code> should
  not be inserted into a <code>Queue</code>, as <code>null</code> is also
  used as a special return value by the <code>poll</code> method to
  indicate that the queue contains no elements. 
 <p><code>Queue</code> implementations generally do not define
  element-based versions of methods <code>equals</code> and 
 <code>hashCode</code> but instead inherit the identity based versions
  from class <code>Object</code>, because element-based equality is not
  always well-defined for queues with the same elements but different
  ordering properties.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilQueue < JavaUtilCollection, JavaObject >

/*!
 @brief Inserts the specified element into this queue if it is possible to do so
  immediately without violating capacity restrictions, returning 
 <code>true</code> upon success and throwing an <code>IllegalStateException</code>
  if no space is currently available.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throw IllegalStateExceptionif the element cannot be added at this
          time due to capacity restrictions
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this queue
 @throw NullPointerExceptionif the specified element is null and
          this queue does not permit null elements
 @throw IllegalArgumentExceptionif some property of this element
          prevents it from being added to this queue
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Inserts the specified element into this queue if it is possible to do
  so immediately without violating capacity restrictions.
 When using a capacity-restricted queue, this method is generally
  preferable to <code>add</code>, which can fail to insert an element only
  by throwing an exception.
 @param e the element to add
 @return <code>true</code> if the element was added to this queue, else
          <code>false</code>
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this queue
 @throw NullPointerExceptionif the specified element is null and
          this queue does not permit null elements
 @throw IllegalArgumentExceptionif some property of this element
          prevents it from being added to this queue
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Retrieves and removes the head of this queue.This method differs
  from <code>poll</code> only in that it throws an exception if this
  queue is empty.
 @return the head of this queue
 @throw NoSuchElementExceptionif this queue is empty
 */
- (id)remove;

/*!
 @brief Retrieves and removes the head of this queue,
  or returns <code>null</code> if this queue is empty.
 @return the head of this queue, or <code>null</code> if this queue is empty
 */
- (id __nullable)poll;

/*!
 @brief Retrieves, but does not remove, the head of this queue.This method
  differs from <code>peek</code> only in that it throws an exception
  if this queue is empty.
 @return the head of this queue
 @throw NoSuchElementExceptionif this queue is empty
 */
- (id)element;

/*!
 @brief Retrieves, but does not remove, the head of this queue,
  or returns <code>null</code> if this queue is empty.
 @return the head of this queue, or <code>null</code> if this queue is empty
 */
- (id __nullable)peek;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilQueue)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilQueue")
