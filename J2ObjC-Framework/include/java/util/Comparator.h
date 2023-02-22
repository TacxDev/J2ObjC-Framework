//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Comparator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilComparator")
#ifdef RESTRICT_JavaUtilComparator
#define INCLUDE_ALL_JavaUtilComparator 0
#else
#define INCLUDE_ALL_JavaUtilComparator 1
#endif
#undef RESTRICT_JavaUtilComparator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilComparator_) && (INCLUDE_ALL_JavaUtilComparator || defined(INCLUDE_JavaUtilComparator))
#define JavaUtilComparator_

@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

/*!
 @brief A comparison function, which imposes a <i>total ordering</i> on some
  collection of objects.Comparators can be passed to a sort method (such
  as <code>Collections.sort</code> or <code>Arrays.sort</code>
 ) to allow precise control
  over the sort order.
 Comparators can also be used to control the order of
  certain data structures (such as <code>sorted sets</code> or <code>sorted maps</code>
 ), or to provide an ordering for collections of
  objects that don't have a <code>natural ordering</code>.<p>
  The ordering imposed by a comparator <tt>c</tt> on a set of elements 
 <tt>S</tt> is said to be <i>consistent with equals</i> if and only if 
 <tt>c.compare(e1, e2)==0</tt> has the same boolean value as 
 <tt>e1.equals(e2)</tt> for every <tt>e1</tt> and <tt>e2</tt> in 
 <tt>S</tt>.<p>
  Caution should be exercised when using a comparator capable of imposing an
  ordering inconsistent with equals to order a sorted set (or sorted map).
  Suppose a sorted set (or sorted map) with an explicit comparator <tt>c</tt>
  is used with elements (or keys) drawn from a set <tt>S</tt>.  If the
  ordering imposed by <tt>c</tt> on <tt>S</tt> is inconsistent with equals,
  the sorted set (or sorted map) will behave "strangely."  In particular the
  sorted set (or sorted map) will violate the general contract for set (or
  map), which is defined in terms of <tt>equals</tt>.<p>
  For example, suppose one adds two elements <code>a</code> and <code>b</code> such that 
 <code>(a.equals(b) && c.compare(a, b) != 0)</code>
  to an empty <code>TreeSet</code> with comparator <code>c</code>.
  The second <code>add</code> operation will return
  true (and the size of the tree set will increase) because <code>a</code> and 
 <code>b</code> are not equivalent from the tree set's perspective, even though
  this is contrary to the specification of the 
 <code>Set.add</code> method.<p>
  Note: It is generally a good idea for comparators to also implement 
 <tt>java.io.Serializable</tt>, as they may be used as ordering methods in
  serializable data structures (like <code>TreeSet</code>, <code>TreeMap</code>).  In
  order for the data structure to serialize successfully, the comparator (if
  provided) must implement <tt>Serializable</tt>.<p>
  For the mathematically inclined, the <i>relation</i> that defines the 
 <i>imposed ordering</i> that a given comparator <tt>c</tt> imposes on a
  given set of objects <tt>S</tt> is:@code

        {(x, y) such that c.compare(x, y) &lt;= 0}. 
  
@endcode The <i>quotient</i> for this total order is:@code

        {(x, y) such that c.compare(x, y) == 0}. 
  
@endcode
  It follows immediately from the contract for <tt>compare</tt> that the
  quotient is an <i>equivalence relation</i> on <tt>S</tt>, and that the
  imposed ordering is a <i>total order</i> on <tt>S</tt>.  When we say that
  the ordering imposed by <tt>c</tt> on <tt>S</tt> is <i>consistent with
  equals</i>, we mean that the quotient for the ordering is the equivalence
  relation defined by the objects' <code>equals(Object)</code>
  method(s):@code

      {(x, y) such that x.equals(y)}. 
@endcode
  
 <p>Unlike <code>Comparable</code>, a comparator may optionally permit
  comparison of null arguments, while maintaining the requirements for
  an equivalence relation. 
 <p>This interface is a member of the 
 <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @author Josh Bloch
 @author Neal Gafter
 - seealso: Comparable
 - seealso: java.io.Serializable
 @since 1.2
 */
@protocol JavaUtilComparator < JavaObject >

/*!
 @brief Compares its two arguments for order.Returns a negative integer,
  zero, or a positive integer as the first argument is less than, equal
  to, or greater than the second.
 <p>
  In the foregoing description, the notation 
 <tt>sgn(</tt><i>expression</i><tt>)</tt> designates the mathematical 
 <i>signum</i> function, which is defined to return one of <tt>-1</tt>,
  <tt>0</tt>, or <tt>1</tt> according to whether the value of 
 <i>expression</i> is negative, zero or positive.<p>
  The implementor must ensure that <tt>sgn(compare(x, y)) ==
  -sgn(compare(y, x))</tt> for all <tt>x</tt> and <tt>y</tt>.  (This
  implies that <tt>compare(x, y)</tt> must throw an exception if and only if 
 <tt>compare(y, x)</tt> throws an exception.)<p>
  The implementor must also ensure that the relation is transitive: 
 <tt>((compare(x, y)&gt;0) &amp;&amp; (compare(y, z)&gt;0))</tt> implies 
 <tt>compare(x, z)&gt;0</tt>.<p>
  Finally, the implementor must ensure that <tt>compare(x, y)==0</tt>
  implies that <tt>sgn(compare(x, z))==sgn(compare(y, z))</tt> for all 
 <tt>z</tt>.<p>
  It is generally the case, but <i>not</i> strictly required that 
 <tt>(compare(x, y)==0) == (x.equals(y))</tt>.  Generally speaking,
  any comparator that violates this condition should clearly indicate
  this fact.  The recommended language is "Note: this comparator
  imposes orderings that are inconsistent with equals."
 @param o1 the first object to be compared.
 @param o2 the second object to be compared.
 @return a negative integer, zero, or a positive integer as the
          first argument is less than, equal to, or greater than the
          second.
 @throw NullPointerExceptionif an argument is null and this
          comparator does not permit null arguments
 @throw ClassCastExceptionif the arguments' types prevent them from
          being compared by this comparator.
 */
- (jint)compareWithId:(id)o1
               withId:(id)o2;

/*!
 @brief Indicates whether some other object is &quot;equal to&quot; this
  comparator.This method must obey the general contract of 
 <code>Object.equals(Object)</code>.
 Additionally, this method can return 
 <tt>true</tt> <i>only</i> if the specified object is also a comparator
  and it imposes the same ordering as this comparator.  Thus, 
 <code>comp1.equals(comp2)</code> implies that <tt>sgn(comp1.compare(o1,
  o2))==sgn(comp2.compare(o1, o2))</tt> for every object reference 
 <tt>o1</tt> and <tt>o2</tt>.<p>
  Note that it is <i>always</i> safe <i>not</i> to override 
 <tt>Object.equals(Object)</tt>.  However, overriding this method may,
  in some cases, improve performance by allowing programs to determine
  that two distinct comparators impose the same order.
 @param obj the reference object with which to compare.
 @return <code>true</code> only if the specified object is also
           a comparator and it imposes the same ordering as this
           comparator.
 - seealso: Object#equals(Object)
 - seealso: Object#hashCode()
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns a comparator that imposes the reverse ordering of this
  comparator.
 @return a comparator that imposes the reverse ordering of this
          comparator.
 @since 1.8
 */
- (id<JavaUtilComparator>)reversed;

/*!
 @brief Returns a lexicographic-order comparator with another comparator.
 If this <code>Comparator</code> considers two elements equal, i.e. 
 <code>compare(a, b) == 0</code>, <code>other</code> is used to determine the order. 
 <p>The returned comparator is serializable if the specified comparator
  is also serializable.
 @param other the other comparator to be used when this comparator          compares two objects that are equal.
 @return a lexicographic-order comparator composed of this and then the
          other comparator
 @throw NullPointerExceptionif the argument is null.
 @since 1.8
 */
- (id<JavaUtilComparator>)thenComparingWithJavaUtilComparator:(id<JavaUtilComparator>)other;

/*!
 @brief Returns a lexicographic-order comparator with a function that
  extracts a key to be compared with the given <code>Comparator</code>.
 @param keyExtractor the function used to extract the sort key
 @param keyComparator the <code>Comparator</code>  used to compare the sort key
 @return a lexicographic-order comparator composed of this comparator
          and then comparing on the key extracted by the keyExtractor function
 @throw NullPointerExceptionif either argument is null.
 - seealso: #comparing(Function, Comparator)
 - seealso: #thenComparing(Comparator)
 @since 1.8
 */
- (id<JavaUtilComparator>)thenComparingWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyExtractor
                                             withJavaUtilComparator:(id<JavaUtilComparator>)keyComparator;

/*!
 @brief Returns a lexicographic-order comparator with a function that
  extracts a <code>Comparable</code> sort key.
 @param keyExtractor the function used to extract the <code>Comparable</code>
   sort key
 @return a lexicographic-order comparator composed of this and then the
          <code>Comparable</code> sort key.
 @throw NullPointerExceptionif the argument is null.
 - seealso: #comparing(Function)
 - seealso: #thenComparing(Comparator)
 @since 1.8
 */
- (id<JavaUtilComparator>)thenComparingWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyExtractor;

/*!
 @brief Returns a lexicographic-order comparator with a function that
  extracts a <code>int</code> sort key.
 @param keyExtractor the function used to extract the integer sort key
 @return a lexicographic-order comparator composed of this and then the
          <code>int</code> sort key
 @throw NullPointerExceptionif the argument is null.
 - seealso: #comparingInt(ToIntFunction)
 - seealso: #thenComparing(Comparator)
 @since 1.8
 */
- (id<JavaUtilComparator>)thenComparingIntWithJavaUtilFunctionToIntFunction:(id<JavaUtilFunctionToIntFunction>)keyExtractor;

/*!
 @brief Returns a lexicographic-order comparator with a function that
  extracts a <code>long</code> sort key.
 @param keyExtractor the function used to extract the long sort key
 @return a lexicographic-order comparator composed of this and then the
          <code>long</code> sort key
 @throw NullPointerExceptionif the argument is null.
 - seealso: #comparingLong(ToLongFunction)
 - seealso: #thenComparing(Comparator)
 @since 1.8
 */
- (id<JavaUtilComparator>)thenComparingLongWithJavaUtilFunctionToLongFunction:(id<JavaUtilFunctionToLongFunction>)keyExtractor;

/*!
 @brief Returns a lexicographic-order comparator with a function that
  extracts a <code>double</code> sort key.
 @param keyExtractor the function used to extract the double sort key
 @return a lexicographic-order comparator composed of this and then the
          <code>double</code> sort key
 @throw NullPointerExceptionif the argument is null.
 - seealso: #comparingDouble(ToDoubleFunction)
 - seealso: #thenComparing(Comparator)
 @since 1.8
 */
- (id<JavaUtilComparator>)thenComparingDoubleWithJavaUtilFunctionToDoubleFunction:(id<JavaUtilFunctionToDoubleFunction>)keyExtractor;

@end

@interface JavaUtilComparator : NSObject

/*!
 @brief Returns a comparator that imposes the reverse of the <em>natural
  ordering</em>.
 <p>The returned comparator is serializable and throws <code>NullPointerException</code>
  when comparing <code>null</code>.
 @return a comparator that imposes the reverse of the <i>natural
          ordering</i> on <code>Comparable</code> objects.
 - seealso: Comparable
 @since 1.8
 */
+ (id<JavaUtilComparator>)reverseOrder;

/*!
 @brief Returns a comparator that compares <code>Comparable</code> objects in natural
  order.
 <p>The returned comparator is serializable and throws <code>NullPointerException</code>
  when comparing <code>null</code>.
 @return a comparator that imposes the <i>natural ordering</i> on <code>Comparable</code>
  objects.
 - seealso: Comparable
 @since 1.8
 */
+ (id<JavaUtilComparator>)naturalOrder;

/*!
 @brief Returns a null-friendly comparator that considers <code>null</code> to be
  less than non-null.When both are <code>null</code>, they are considered
  equal.
 If both are non-null, the specified <code>Comparator</code> is used
  to determine the order. If the specified comparator is <code>null</code>,
  then the returned comparator considers all non-null values to be equal. 
 <p>The returned comparator is serializable if the specified comparator
  is serializable.
 @param comparator a <code>Comparator</code>  for comparing non-null values
 @return a comparator that considers <code>null</code> to be less than
          non-null, and compares non-null objects with the supplied         
 <code>Comparator</code>.
 @since 1.8
 */
+ (id<JavaUtilComparator>)nullsFirstWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Returns a null-friendly comparator that considers <code>null</code> to be
  greater than non-null.When both are <code>null</code>, they are considered
  equal.
 If both are non-null, the specified <code>Comparator</code> is used
  to determine the order. If the specified comparator is <code>null</code>,
  then the returned comparator considers all non-null values to be equal. 
 <p>The returned comparator is serializable if the specified comparator
  is serializable.
 @param comparator a <code>Comparator</code>  for comparing non-null values
 @return a comparator that considers <code>null</code> to be greater than
          non-null, and compares non-null objects with the supplied         
 <code>Comparator</code>.
 @since 1.8
 */
+ (id<JavaUtilComparator>)nullsLastWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Accepts a function that extracts a sort key from a type <code>T</code>, and
  returns a <code>Comparator<T></code> that compares by that sort key using
  the specified <code>Comparator</code>.
 <p>The returned comparator is serializable if the specified function
  and comparator are both serializable.
 @param keyExtractor the function used to extract the sort key
 @param keyComparator the <code>Comparator</code>  used to compare the sort key
 @return a comparator that compares by an extracted key using the
          specified <code>Comparator</code>
 @throw NullPointerExceptionif either argument is null
 @since 1.8
 */
+ (id<JavaUtilComparator>)comparingWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyExtractor
                                         withJavaUtilComparator:(id<JavaUtilComparator>)keyComparator;

/*!
 @brief Accepts a function that extracts a <code>Comparable</code>
  sort key from a type <code>T</code>, and returns a <code>Comparator<T></code>
  that compares by that sort key.
 <p>The returned comparator is serializable if the specified function
  is also serializable.
 @param keyExtractor the function used to extract the <code>Comparable</code>
   sort key
 @return a comparator that compares by an extracted key
 @throw NullPointerExceptionif the argument is null
 @since 1.8
 */
+ (id<JavaUtilComparator>)comparingWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyExtractor;

/*!
 @brief Accepts a function that extracts an <code>int</code> sort key from a type 
 <code>T</code>, and returns a <code>Comparator<T></code> that compares by that
  sort key.
 <p>The returned comparator is serializable if the specified function
  is also serializable.
 @param keyExtractor the function used to extract the integer sort key
 @return a comparator that compares by an extracted key
 - seealso: #comparing(Function)
 @throw NullPointerExceptionif the argument is null
 @since 1.8
 */
+ (id<JavaUtilComparator>)comparingIntWithJavaUtilFunctionToIntFunction:(id<JavaUtilFunctionToIntFunction>)keyExtractor;

/*!
 @brief Accepts a function that extracts a <code>long</code> sort key from a type 
 <code>T</code>, and returns a <code>Comparator<T></code> that compares by that
  sort key.
 <p>The returned comparator is serializable if the specified function is
  also serializable.
 @param keyExtractor the function used to extract the long sort key
 @return a comparator that compares by an extracted key
 - seealso: #comparing(Function)
 @throw NullPointerExceptionif the argument is null
 @since 1.8
 */
+ (id<JavaUtilComparator>)comparingLongWithJavaUtilFunctionToLongFunction:(id<JavaUtilFunctionToLongFunction>)keyExtractor;

/*!
 @brief Accepts a function that extracts a <code>double</code> sort key from a type 
 <code>T</code>, and returns a <code>Comparator<T></code> that compares by that
  sort key.
 <p>The returned comparator is serializable if the specified function
  is also serializable.
 @param keyExtractor the function used to extract the double sort key
 @return a comparator that compares by an extracted key
 - seealso: #comparing(Function)
 @throw NullPointerExceptionif the argument is null
 @since 1.8
 */
+ (id<JavaUtilComparator>)comparingDoubleWithJavaUtilFunctionToDoubleFunction:(id<JavaUtilFunctionToDoubleFunction>)keyExtractor;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilComparator)

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_reversed(id<JavaUtilComparator> self);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_thenComparingWithJavaUtilComparator_(id<JavaUtilComparator> self, id<JavaUtilComparator> other);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_thenComparingWithJavaUtilFunctionFunction_withJavaUtilComparator_(id<JavaUtilComparator> self, id<JavaUtilFunctionFunction> keyExtractor, id<JavaUtilComparator> keyComparator);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_thenComparingWithJavaUtilFunctionFunction_(id<JavaUtilComparator> self, id<JavaUtilFunctionFunction> keyExtractor);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_thenComparingIntWithJavaUtilFunctionToIntFunction_(id<JavaUtilComparator> self, id<JavaUtilFunctionToIntFunction> keyExtractor);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_thenComparingLongWithJavaUtilFunctionToLongFunction_(id<JavaUtilComparator> self, id<JavaUtilFunctionToLongFunction> keyExtractor);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_thenComparingDoubleWithJavaUtilFunctionToDoubleFunction_(id<JavaUtilComparator> self, id<JavaUtilFunctionToDoubleFunction> keyExtractor);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_reverseOrder(void);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_naturalOrder(void);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_nullsFirstWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_nullsLastWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_comparingWithJavaUtilFunctionFunction_withJavaUtilComparator_(id<JavaUtilFunctionFunction> keyExtractor, id<JavaUtilComparator> keyComparator);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_comparingWithJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyExtractor);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_comparingIntWithJavaUtilFunctionToIntFunction_(id<JavaUtilFunctionToIntFunction> keyExtractor);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_comparingLongWithJavaUtilFunctionToLongFunction_(id<JavaUtilFunctionToLongFunction> keyExtractor);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilComparator_comparingDoubleWithJavaUtilFunctionToDoubleFunction_(id<JavaUtilFunctionToDoubleFunction> keyExtractor);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilComparator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilComparator")
