//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Comparable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangComparable")
#ifdef RESTRICT_JavaLangComparable
#define INCLUDE_ALL_JavaLangComparable 0
#else
#define INCLUDE_ALL_JavaLangComparable 1
#endif
#undef RESTRICT_JavaLangComparable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangComparable_) && (INCLUDE_ALL_JavaLangComparable || defined(INCLUDE_JavaLangComparable))
#define JavaLangComparable_

@class JavaLangInteger;

/*!
 @brief This interface imposes a total ordering on the objects of each class that
  implements it.This ordering is referred to as the class's <i>natural
  ordering</i>, and the class's <code>compareTo</code> method is referred to as
  its <i>natural comparison method</i>.
 <p>
  Lists (and arrays) of objects that implement this interface can be sorted
  automatically by <code>Collections.sort</code> (and 
 <code>Arrays.sort</code>).  Objects that implement this
  interface can be used as keys in a sorted map or as
  elements in a sorted set, without the need to
  specify a comparator.<p>
  The natural ordering for a class <code>C</code> is said to be <i>consistent
  with equals</i> if and only if <code>e1.compareTo(e2) == 0</code> has
  the same boolean value as <code>e1.equals(e2)</code> for every 
 <code>e1</code> and <code>e2</code> of class <code>C</code>.  Note that <code>null</code>
  is not an instance of any class, and <code>e.compareTo(null)</code> should
  throw a <code>NullPointerException</code> even though <code>e.equals(null)</code>
  returns <code>false</code>.<p>
  It is strongly recommended (though not required) that natural orderings be
  consistent with equals.  This is so because sorted sets (and sorted maps)
  without explicit comparators behave "strangely" when they are used with
  elements (or keys) whose natural ordering is inconsistent with equals.  In
  particular, such a sorted set (or sorted map) violates the general contract
  for set (or map), which is defined in terms of the <code>equals</code>
  method.<p>
  For example, if one adds two keys <code>a</code> and <code>b</code> such that 
 <code>(!a.equals(b) && a.compareTo(b) == 0)</code> to a sorted
  set that does not use an explicit comparator, the second <code>add</code>
  operation returns false (and the size of the sorted set does not increase)
  because <code>a</code> and <code>b</code> are equivalent from the sorted set's
  perspective.<p>
  Virtually all Java core classes that implement <code>Comparable</code> have natural
  orderings that are consistent with equals.  One exception is 
 <code>java.math.BigDecimal</code>, whose natural ordering equates 
 <code>BigDecimal</code> objects with equal values and different precisions
  (such as 4.0 and 4.00).<p>
  For the mathematically inclined, the <i>relation</i> that defines
  the natural ordering on a given class C is:@code
       {(x, y) such that x.compareTo(y) <= 0}. 
 
@endcode The <i>quotient</i> for this total order is: @code
       {(x, y) such that x.compareTo(y) == 0}. 
 
@endcode
  It follows immediately from the contract for <code>compareTo</code> that the
  quotient is an <i>equivalence relation</i> on <code>C</code>, and that the
  natural ordering is a <i>total order</i> on <code>C</code>.  When we say that a
  class's natural ordering is <i>consistent with equals</i>, we mean that the
  quotient for the natural ordering is the equivalence relation defined by
  the class's <code>equals(Object)</code> method:@code

      {(x, y) such that x.equals(y)}. 
@endcode<p>
  This interface is a member of the 
 <a href="{@@docRoot}/../technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @author Josh Bloch
 - seealso: java.util.Comparator
 @since 1.2
 */
@protocol JavaLangComparable < JavaObject >

/*!
 @brief Compares this object with the specified object for order.Returns a
  negative integer, zero, or a positive integer as this object is less
  than, equal to, or greater than the specified object.
 <p>The implementor must ensure 
 <code>sgn(x.compareTo(y)) == -sgn(y.compareTo(x))</code>
  for all <code>x</code> and <code>y</code>.  (This
  implies that <code>x.compareTo(y)</code> must throw an exception iff 
 <code>y.compareTo(x)</code> throws an exception.) 
 <p>The implementor must also ensure that the relation is transitive: 
 <code>(x.compareTo(y) > 0 && y.compareTo(z) > 0)</code> implies 
 <code>x.compareTo(z) > 0</code>.
  
 <p>Finally, the implementor must ensure that <code>x.compareTo(y)==0</code>
  implies that <code>sgn(x.compareTo(z)) == sgn(y.compareTo(z))</code>, for
  all <code>z</code>.
  
 <p>It is strongly recommended, but <i>not</i> strictly required that 
 <code>(x.compareTo(y)==0) == (x.equals(y))</code>.  Generally speaking, any
  class that implements the <code>Comparable</code> interface and violates
  this condition should clearly indicate this fact.  The recommended
  language is "Note: this class has a natural ordering that is
  inconsistent with equals." 
 <p>In the foregoing description, the notation 
 <code>sgn(</code><i>expression</i><code>)</code> designates the mathematical 
 <i>signum</i> function, which is defined to return one of <code>-1</code>,
  <code>0</code>, or <code>1</code> according to whether the value of 
 <i>expression</i> is negative, zero, or positive, respectively.
 @param o the object to be compared.
 @return a negative integer, zero, or a positive integer as this object
           is less than, equal to, or greater than the specified object.
 @throw NullPointerExceptionif the specified object is null
 @throw ClassCastExceptionif the specified object's type prevents it
          from being compared to this object.
 */
- (jint)compareToWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangComparable)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangComparable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangComparable")
