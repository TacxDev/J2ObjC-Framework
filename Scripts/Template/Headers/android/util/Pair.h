//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Pair.java
//

#ifndef _AndroidUtilPair_H_
#define _AndroidUtilPair_H_

#include "../../J2ObjC_header.h"

/*!
 @brief Container to ease passing around a tuple of two objects.
 This object provides a sensible
 implementation of equals(), returning true if equals() is true on each of the contained
 objects.
 */
@interface AndroidUtilPair : NSObject {
 @public
  id first_;
  id second_;
}

#pragma mark Public

/*!
 @brief Constructor for a Pair.
 @param first the first object in the Pair
 @param second the second object in the pair
 */
- (instancetype)initWithId:(id)first
                    withId:(id)second;

/*!
 @brief Convenience method for creating an appropriately typed pair.
 @param a the first object in the Pair
 @param b the second object in the pair
 @return a Pair that is templatized with the types of a and b
 */
+ (AndroidUtilPair *)createWithId:(id)a
                           withId:(id)b;

/*!
 @brief Checks the two objects for equality by delegating to their respective
 <code>Object.equals(Object)</code> methods.
 @param o the <code>Pair</code> to which this one is to be checked for equality
 @return true if the underlying objects of the Pair are both considered
 equal
 */
- (jboolean)isEqual:(id)o;

/*!
 @brief Compute a hash code using the hash codes of the underlying objects
 @return a hashcode of the Pair
 */
- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilPair)

J2OBJC_FIELD_SETTER(AndroidUtilPair, first_, id)
J2OBJC_FIELD_SETTER(AndroidUtilPair, second_, id)

FOUNDATION_EXPORT void AndroidUtilPair_initWithId_withId_(AndroidUtilPair *self, id first, id second);

FOUNDATION_EXPORT AndroidUtilPair *new_AndroidUtilPair_initWithId_withId_(id first, id second) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilPair *AndroidUtilPair_createWithId_withId_(id a, id b);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilPair)

#endif // _AndroidUtilPair_H_
