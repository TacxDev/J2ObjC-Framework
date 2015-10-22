//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ConcurrentNavigableMap.java
//

#ifndef _JavaUtilConcurrentConcurrentNavigableMap_H_
#define _JavaUtilConcurrentConcurrentNavigableMap_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/util/NavigableMap.h"
#include "../../../java/util/concurrent/ConcurrentMap.h"

@protocol JavaUtilNavigableSet;

/*!
 @brief A <code>ConcurrentMap</code> supporting <code>NavigableMap</code> operations,
 and recursively so for its navigable sub-maps.
 @author Doug Lea
 @since 1.6
 */
@protocol JavaUtilConcurrentConcurrentNavigableMap < JavaUtilConcurrentConcurrentMap, JavaUtilNavigableMap, NSObject, JavaObject >

/*!
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilConcurrentConcurrentNavigableMap>)subMapWithId:(id)fromKey
                                                 withBoolean:(jboolean)fromInclusive
                                                      withId:(id)toKey
                                                 withBoolean:(jboolean)toInclusive;

/*!
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilConcurrentConcurrentNavigableMap>)headMapWithId:(id)toKey
                                                  withBoolean:(jboolean)inclusive;

/*!
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilConcurrentConcurrentNavigableMap>)tailMapWithId:(id)fromKey
                                                  withBoolean:(jboolean)inclusive;

/*!
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilConcurrentConcurrentNavigableMap>)subMapWithId:(id)fromKey
                                                      withId:(id)toKey;

/*!
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilConcurrentConcurrentNavigableMap>)headMapWithId:(id)toKey;

/*!
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilConcurrentConcurrentNavigableMap>)tailMapWithId:(id)fromKey;

/*!
 @brief Returns a reverse order view of the mappings contained in this map.
 The descending map is backed by this map, so changes to the map are
 reflected in the descending map, and vice-versa.
 <p>The returned map has an ordering equivalent to
 <code>Collections.reverseOrder</code><code>(comparator())</code>.
 The expression <code>m.descendingMap().descendingMap()</code> returns a
 view of <code>m</code> essentially equivalent to <code>m</code>.
 @return a reverse order view of this map
 */
- (id<JavaUtilConcurrentConcurrentNavigableMap>)descendingMap;

/*!
 @brief Returns a <code>NavigableSet</code> view of the keys contained in this map.
 The set's iterator returns the keys in ascending order.
 The set is backed by the map, so changes to the map are
 reflected in the set, and vice-versa.  The set supports element
 removal, which removes the corresponding mapping from the map,
 via the <code>Iterator.remove</code>, <code>Set.remove</code>,
 <code>removeAll</code>, <code>retainAll</code>, and <code>clear</code>
 operations.  It does not support the <code>add</code> or <code>addAll</code>
 operations.
 <p>The view's <code>iterator</code> is a "weakly consistent" iterator
 that will never throw <code>ConcurrentModificationException</code>,
 and guarantees to traverse elements as they existed upon
 construction of the iterator, and may (but is not guaranteed to)
 reflect any modifications subsequent to construction.
 @return a navigable set view of the keys in this map
 */
- (id<JavaUtilNavigableSet>)navigableKeySet;

/*!
 @brief Returns a <code>NavigableSet</code> view of the keys contained in this map.
 The set's iterator returns the keys in ascending order.
 The set is backed by the map, so changes to the map are
 reflected in the set, and vice-versa.  The set supports element
 removal, which removes the corresponding mapping from the map,
 via the <code>Iterator.remove</code>, <code>Set.remove</code>,
 <code>removeAll</code>, <code>retainAll</code>, and <code>clear</code>
 operations.  It does not support the <code>add</code> or <code>addAll</code>
 operations.
 <p>The view's <code>iterator</code> is a "weakly consistent" iterator
 that will never throw <code>ConcurrentModificationException</code>,
 and guarantees to traverse elements as they existed upon
 construction of the iterator, and may (but is not guaranteed to)
 reflect any modifications subsequent to construction.
 <p>This method is equivalent to method <code>navigableKeySet</code>.
 @return a navigable set view of the keys in this map
 */
- (id<JavaUtilNavigableSet>)keySet;

/*!
 @brief Returns a reverse order <code>NavigableSet</code> view of the keys contained in this map.
 The set's iterator returns the keys in descending order.
 The set is backed by the map, so changes to the map are
 reflected in the set, and vice-versa.  The set supports element
 removal, which removes the corresponding mapping from the map,
 via the <code>Iterator.remove</code>, <code>Set.remove</code>,
 <code>removeAll</code>, <code>retainAll</code>, and <code>clear</code>
 operations.  It does not support the <code>add</code> or <code>addAll</code>
 operations.
 <p>The view's <code>iterator</code> is a "weakly consistent" iterator
 that will never throw <code>ConcurrentModificationException</code>,
 and guarantees to traverse elements as they existed upon
 construction of the iterator, and may (but is not guaranteed to)
 reflect any modifications subsequent to construction.
 @return a reverse order navigable set view of the keys in this map
 */
- (id<JavaUtilNavigableSet>)descendingKeySet;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentNavigableMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentNavigableMap)

#endif // _JavaUtilConcurrentConcurrentNavigableMap_H_
