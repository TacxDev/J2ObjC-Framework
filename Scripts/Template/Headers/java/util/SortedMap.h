//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/SortedMap.java
//

#ifndef _JavaUtilSortedMap_H_
#define _JavaUtilSortedMap_H_

#include "../../J2ObjC_header.h"
#include "../../java/util/Map.h"

@protocol JavaUtilComparator;

/*!
 @brief A map that has its keys ordered.
 The sorting is according to either the
 natural ordering of its keys or the ordering given by a specified comparator.
 */
@protocol JavaUtilSortedMap < JavaUtilMap, NSObject, JavaObject >

/*!
 @brief Returns the comparator used to compare keys in this sorted map, or null if the natural
 ordering is in use.
 */
- (id<JavaUtilComparator>)comparator;

/*!
 @brief Returns the least key in this sorted map.
 @throws NoSuchElementException
 if this sorted map is empty.
 */
- (id)firstKey;

/*!
 @brief Returns a sorted map over a range of this sorted map with all keys that
 are less than the specified <code>endKey</code>.
 Changes to the returned
 sorted map are reflected in this sorted map and vice versa.
 <p>
 Note: The returned map will not allow an insertion of a key outside the
 specified range.
 @param endKey
 the high boundary of the range specified.
 @return a sorted map where the keys are less than <code>endKey</code>.
 @throws ClassCastException
 if the class of the end key is inappropriate for this sorted
 map.
 @throws NullPointerException
 if the end key is <code>null</code> and this sorted map does not
 support <code>null</code> keys.
 @throws IllegalArgumentException
 if this map is itself a sorted map over a range of another
 map and the specified key is outside of its range.
 */
- (id<JavaUtilSortedMap>)headMapWithId:(id)endKey;

/*!
 @brief Returns the greatest key in this sorted map.
 @throws NoSuchElementException
 if this sorted map is empty.
 */
- (id)lastKey;

/*!
 @brief Returns a sorted map over a range of this sorted map with all keys
 greater than or equal to the specified <code>startKey</code> and less than the
 specified <code>endKey</code>.
 Changes to the returned sorted map are
 reflected in this sorted map and vice versa.
 <p>
 Note: The returned map will not allow an insertion of a key outside the
 specified range.
 @param startKey
 the low boundary of the range (inclusive).
 @param endKey
 the high boundary of the range (exclusive),
 @return a sorted map with the key from the specified range.
 @throws ClassCastException
 if the class of the start or end key is inappropriate for
 this sorted map.
 @throws NullPointerException
 if the start or end key is <code>null</code> and this sorted map
 does not support <code>null</code> keys.
 @throws IllegalArgumentException
 if the start key is greater than the end key, or if this map
 is itself a sorted map over a range of another sorted map and
 the specified range is outside of its range.
 */
- (id<JavaUtilSortedMap>)subMapWithId:(id)startKey
                               withId:(id)endKey;

/*!
 @brief Returns a sorted map over a range of this sorted map with all keys that
 are greater than or equal to the specified <code>startKey</code>.
 Changes to
 the returned sorted map are reflected in this sorted map and vice versa.
 <p>
 Note: The returned map will not allow an insertion of a key outside the
 specified range.
 @param startKey
 the low boundary of the range specified.
 @return a sorted map where the keys are greater or equal to
 <code>startKey</code>.
 @throws ClassCastException
 if the class of the start key is inappropriate for this
 sorted map.
 @throws NullPointerException
 if the start key is <code>null</code> and this sorted map does not
 support <code>null</code> keys.
 @throws IllegalArgumentException
 if this map itself a sorted map over a range of another map
 and the specified key is outside of its range.
 */
- (id<JavaUtilSortedMap>)tailMapWithId:(id)startKey;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSortedMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSortedMap)

#endif // _JavaUtilSortedMap_H_
