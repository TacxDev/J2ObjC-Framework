//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/TreeSet.java
//

#ifndef _JavaUtilTreeSet_H_
#define _JavaUtilTreeSet_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/Serializable.h"
#include "../../java/util/AbstractSet.h"
#include "../../java/util/NavigableSet.h"

@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;
@protocol JavaUtilSortedSet;

/*!
 @brief TreeSet is an implementation of SortedSet.
 All optional operations (adding
 and removing) are supported. The elements can be any objects which are
 comparable to each other either using their natural order or a specified
 Comparator.
 @since 1.2
 */
@interface JavaUtilTreeSet : JavaUtilAbstractSet < JavaUtilNavigableSet, NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new empty instance of <code>TreeSet</code> which uses natural
 ordering.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>TreeSet</code> which uses natural ordering
 and containing the unique elements in the specified collection.
 @param collection
 the collection of elements to add.
 @throws ClassCastException
 when an element in the collection does not implement the
 Comparable interface, or the elements in the collection
 cannot be compared.
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Constructs a new empty instance of <code>TreeSet</code> which uses the
 specified comparator.
 @param comparator
 the comparator to use.
 */
- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Constructs a new instance of <code>TreeSet</code> containing the elements of
 the specified SortedSet and using the same Comparator.
 @param set
 the SortedSet of elements to add.
 */
- (instancetype)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)set;

/*!
 @brief Adds the specified object to this <code>TreeSet</code>.
 @param object
 the object to add.
 @return <code>true</code> when this <code>TreeSet</code> did not already contain
 the object, <code>false</code> otherwise.
 @throws ClassCastException
 when the object cannot be compared with the elements in this
 <code>TreeSet</code>.
 @throws NullPointerException
 when the object is null and the comparator cannot handle
 null.
 */
- (jboolean)addWithId:(id)object;

/*!
 @brief Adds the objects in the specified collection to this <code>TreeSet</code>.
 @param collection
 the collection of objects to add.
 @return <code>true</code> if this <code>TreeSet</code> was modified, <code>false</code>
 otherwise.
 @throws ClassCastException
 when an object in the collection cannot be compared with the
 elements in this <code>TreeSet</code>.
 @throws NullPointerException
 when an object in the collection is null and the comparator
 cannot handle null.
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 
 @since 1.6
 */
- (id)ceilingWithId:(id)e;

/*!
 @brief Removes all elements from this <code>TreeSet</code>, leaving it empty.
 */
- (void)clear;

/*!
 @brief Returns a new <code>TreeSet</code> with the same elements, size and comparator
 as this <code>TreeSet</code>.
 @return a shallow copy of this <code>TreeSet</code>.
 */
- (id)clone;

/*!
 @brief Returns the comparator used to compare elements in this <code>TreeSet</code>.
 @return a Comparator or null if the natural ordering is used
 */
- (id<JavaUtilComparator>)comparator;

/*!
 @brief Searches this <code>TreeSet</code> for the specified object.
 @param object
 the object to search for.
 @return <code>true</code> if <code>object</code> is an element of this
 <code>TreeSet</code>, <code>false</code> otherwise.
 @throws ClassCastException
 when the object cannot be compared with the elements in this
 <code>TreeSet</code>.
 @throws NullPointerException
 when the object is null and the comparator cannot handle
 null.
 */
- (jboolean)containsWithId:(id)object;

/*!
 
 @since 1.6
 */
- (id<JavaUtilIterator>)descendingIterator;

/*!
 
 @since 1.6
 */
- (id<JavaUtilNavigableSet>)descendingSet;

/*!
 @brief Returns the first element in this set.
 @exception NoSuchElementException when this TreeSet is empty
 */
- (id)first;

/*!
 
 @since 1.6
 */
- (id)floorWithId:(id)e;

/*!
 @brief Returns a <code>SortedSet</code> of the specified portion of this <code>TreeSet</code> which
 contains elements less than the end element.
 The returned SortedSet is
 backed by this TreeSet so changes to one are reflected by the other.
 @param end
 the end element
 @return a subset where the elements are less than <code>end</code>
 @exception ClassCastException
 when the end object cannot be compared with the elements
 in this TreeSet
 @exception NullPointerException
 when the end object is null and the comparator cannot
 handle null
 */
- (id<JavaUtilSortedSet>)headSetWithId:(id)end;

/*!
 
 @since 1.6
 */
- (id<JavaUtilNavigableSet>)headSetWithId:(id)end
                              withBoolean:(jboolean)endInclusive;

/*!
 
 @since 1.6
 */
- (id)higherWithId:(id)e;

/*!
 @brief Returns true if this <code>TreeSet</code> has no element, otherwise false.
 @return true if this <code>TreeSet</code> has no element.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an Iterator on the elements of this <code>TreeSet</code>.
 @return an Iterator on the elements of this <code>TreeSet</code>.
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Returns the last element in this set.
 @exception NoSuchElementException when this TreeSet is empty
 */
- (id)last;

/*!
 
 @since 1.6
 */
- (id)lowerWithId:(id)e;

/*!
 
 @since 1.6
 */
- (id)pollFirst;

/*!
 
 @since 1.6
 */
- (id)pollLast;

/*!
 @brief Removes an occurrence of the specified object from this <code>TreeSet</code>.
 @param object
 the object to remove.
 @return <code>true</code> if this <code>TreeSet</code> was modified, <code>false</code>
 otherwise.
 @throws ClassCastException
 when the object cannot be compared with the elements in this
 <code>TreeSet</code>.
 @throws NullPointerException
 when the object is null and the comparator cannot handle
 null.
 */
- (jboolean)removeWithId:(id)object;

/*!
 @brief Returns the number of elements in this <code>TreeSet</code>.
 @return the number of elements in this <code>TreeSet</code>.
 */
- (jint)size;

/*!
 
 @since 1.6
 */
- (id<JavaUtilNavigableSet>)subSetWithId:(id)start
                             withBoolean:(jboolean)startInclusive
                                  withId:(id)end
                             withBoolean:(jboolean)endInclusive;

/*!
 @brief Returns a <code>SortedSet</code> of the specified portion of this <code>TreeSet</code> which
 contains elements greater or equal to the start element but less than the
 end element.
 The returned SortedSet is backed by this TreeSet so changes
 to one are reflected by the other.
 @param start
 the start element
 @param end
 the end element
 @return a subset where the elements are greater or equal to
 <code>start</code> and less than <code>end</code>
 @exception ClassCastException
 when the start or end object cannot be compared with the
 elements in this TreeSet
 @exception NullPointerException
 when the start or end object is null and the comparator
 cannot handle null
 */
- (id<JavaUtilSortedSet>)subSetWithId:(id)start
                               withId:(id)end;

/*!
 @brief Returns a <code>SortedSet</code> of the specified portion of this <code>TreeSet</code> which
 contains elements greater or equal to the start element.
 The returned
 SortedSet is backed by this TreeSet so changes to one are reflected by
 the other.
 @param start
 the start element
 @return a subset where the elements are greater or equal to
 <code>start</code>
 @exception ClassCastException
 when the start object cannot be compared with the elements
 in this TreeSet
 @exception NullPointerException
 when the start object is null and the comparator cannot
 handle null
 */
- (id<JavaUtilSortedSet>)tailSetWithId:(id)start;

/*!
 
 @since 1.6
 */
- (id<JavaUtilNavigableSet>)tailSetWithId:(id)start
                              withBoolean:(jboolean)startInclusive;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)map;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeSet)

FOUNDATION_EXPORT void JavaUtilTreeSet_initWithJavaUtilNavigableMap_(JavaUtilTreeSet *self, id<JavaUtilNavigableMap> map);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_initWithJavaUtilNavigableMap_(id<JavaUtilNavigableMap> map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTreeSet_init(JavaUtilTreeSet *self);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTreeSet_initWithJavaUtilCollection_(JavaUtilTreeSet *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTreeSet_initWithJavaUtilComparator_(JavaUtilTreeSet *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTreeSet_initWithJavaUtilSortedSet_(JavaUtilTreeSet *self, id<JavaUtilSortedSet> set);

FOUNDATION_EXPORT JavaUtilTreeSet *new_JavaUtilTreeSet_initWithJavaUtilSortedSet_(id<JavaUtilSortedSet> set) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeSet)

#endif // _JavaUtilTreeSet_H_
