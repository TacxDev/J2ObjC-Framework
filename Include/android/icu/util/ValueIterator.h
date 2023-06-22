//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/util/ValueIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuUtilValueIterator")
#ifdef RESTRICT_AndroidIcuUtilValueIterator
#define INCLUDE_ALL_AndroidIcuUtilValueIterator 0
#else
#define INCLUDE_ALL_AndroidIcuUtilValueIterator 1
#endif
#undef RESTRICT_AndroidIcuUtilValueIterator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuUtilValueIterator_) && (INCLUDE_ALL_AndroidIcuUtilValueIterator || defined(INCLUDE_AndroidIcuUtilValueIterator))
#define AndroidIcuUtilValueIterator_

@class AndroidIcuUtilValueIterator_Element;
@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief <p>Interface for enabling iteration over sets of &lt;int, Object&gt;, where
  int is the sorted integer index in ascending order, and Object its
  associated value.
 <p>The ValueIterator allows iterations over integer indexes in the range
  of Integer.MIN_VALUE to Integer.MAX_VALUE inclusive. Implementations of
  ValueIterator should specify their own maximum subrange within the above
  range that is meaningful to its applications. 
 <p>Most implementations will be created by factory methods, such as the
  character name iterator in UCharacter.getNameIterator. See example below.
  Example of use:<br>
  @code

  ValueIterator iterator = UCharacter.getNameIterator();
  ValueIterator.Element result = new ValueIterator.Element();
  iterator.setRange(UCharacter.MIN_VALUE, UCharacter.MAX_VALUE);
  while (iterator.next(result)) {
      System.out.println("Codepoint \\u" +
                         Integer.toHexString(result.integer) +
                         " has the character name " + (String)result.value);
  } 
  
@endcode
 @author synwee
 */
@protocol AndroidIcuUtilValueIterator < JavaObject >

/*!
 @brief <p>Returns the next result for this iteration and returns
  true if we are not at the end of the iteration, false otherwise.
 <p>If this returns a false, the contents of elements will not
  be updated.
 @param element for storing the result index and value
 @return true if we are not at the end of the iteration, false otherwise.
 - seealso: Element
 */
- (jboolean)nextWithAndroidIcuUtilValueIterator_Element:(AndroidIcuUtilValueIterator_Element *)element;

/*!
 @brief <p>Resets the iterator to start iterating from the integer index
  Integer.MIN_VALUE or X if a setRange(X, Y) has been called previously.
 */
- (void)reset;

/*!
 @brief <p>Restricts the range of integers to iterate and resets the iteration
  to begin at the index argument start.
 <p>If setRange(start, end) is not performed before next(element) is
  called, the iteration will start from the integer index
  Integer.MIN_VALUE and end at Integer.MAX_VALUE. 
 <p>
  If this range is set outside the meaningful range specified by the
  implementation, next(element) will always return false.
 @param start first integer in the range to iterate
 @param limit one more than the last integer in the range
 @throw IllegalArgumentExceptionthrown when attempting to set an
             illegal range. E.g limit &lt;= start
 */
- (void)setRangeWithInt:(jint)start
                withInt:(jint)limit;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuUtilValueIterator)

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuUtilValueIterator)

#endif

#if !defined (AndroidIcuUtilValueIterator_Element_) && (INCLUDE_ALL_AndroidIcuUtilValueIterator || defined(INCLUDE_AndroidIcuUtilValueIterator_Element))
#define AndroidIcuUtilValueIterator_Element_

@class JavaLangInteger;

/*!
 @brief <p>The return result container of each iteration.Stores the next
  integer index and its associated value Object.
 */
@interface AndroidIcuUtilValueIterator_Element : NSObject {
 @public
  /*!
   @brief Integer index of the current iteration
   */
  jint integer_;
  /*!
   @brief Gets the Object value associated with the integer index.
   */
  id value_;
}

#pragma mark Public

/*!
 @brief Empty default constructor to make javadoc happy
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuUtilValueIterator_Element)

J2OBJC_FIELD_SETTER(AndroidIcuUtilValueIterator_Element, value_, id)

FOUNDATION_EXPORT void AndroidIcuUtilValueIterator_Element_init(AndroidIcuUtilValueIterator_Element *self);

FOUNDATION_EXPORT AndroidIcuUtilValueIterator_Element *new_AndroidIcuUtilValueIterator_Element_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilValueIterator_Element *create_AndroidIcuUtilValueIterator_Element_init(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuUtilValueIterator_Element)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidIcuUtilValueIterator")
