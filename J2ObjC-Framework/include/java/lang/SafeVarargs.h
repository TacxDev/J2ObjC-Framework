//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/SafeVarargs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangSafeVarargs")
#ifdef RESTRICT_JavaLangSafeVarargs
#define INCLUDE_ALL_JavaLangSafeVarargs 0
#else
#define INCLUDE_ALL_JavaLangSafeVarargs 1
#endif
#undef RESTRICT_JavaLangSafeVarargs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangSafeVarargs_) && (INCLUDE_ALL_JavaLangSafeVarargs || defined(INCLUDE_JavaLangSafeVarargs))
#define JavaLangSafeVarargs_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief A programmer assertion that the body of the annotated method or
  constructor does not perform potentially unsafe operations on its
  varargs parameter.Applying this annotation to a method or
  constructor suppresses unchecked warnings about a 
 <i>non-reifiable</i> variable arity (vararg) type and suppresses
  unchecked warnings about parameterized array creation at call
  sites.
 <p> In addition to the usage restrictions imposed by its <code>@@Target</code>
  meta-annotation, compilers are required to implement
  additional usage restrictions on this annotation type; it is a
  compile-time error if a method or constructor declaration is
  annotated with a <code>@@SafeVarargs</code> annotation, and either: 
 <ul>
  <li>  the declaration is a fixed arity method or constructor 
 <li> the declaration is a variable arity method that is neither 
 <code>static</code> nor <code>final</code>.
  
 </ul>
  
 <p> Compilers are encouraged to issue warnings when this annotation
  type is applied to a method or constructor declaration where: 
 <ul>
  
 <li> The variable arity parameter has a reifiable element type,
  which includes primitive types, <code>Object</code>, and <code>String</code>.
  (The unchecked warnings this annotation type suppresses already do
  not occur for a reifiable element type.) 
 <li> The body of the method or constructor declaration performs
  potentially unsafe operations, such as an assignment to an element
  of the variable arity parameter's array that generates an unchecked
  warning.  Some unsafe operations do not trigger an unchecked
  warning.  For example, the aliasing in 
 <blockquote>@code

   &#64;SafeVarargs // Not actually safe!
  static void m(List&lt;String&gt;... stringLists) {
    Object[] array = stringLists;
    List&lt;Integer&gt; tmpList = Arrays.asList(42);
    array[0] = tmpList; // Semantically invalid, but compiles without warnings
    String s = stringLists[0].get(0); // Oh no, ClassCastException at runtime!
  } 
  
@endcode</blockquote>
  leads to a <code>ClassCastException</code> at runtime. 
 <p>Future versions of the platform may mandate compiler errors for
  such unsafe operations. 
 </ul>
 @since 1.7
 */
@protocol JavaLangSafeVarargs < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaLangSafeVarargs : NSObject < JavaLangSafeVarargs >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangSafeVarargs)

FOUNDATION_EXPORT id<JavaLangSafeVarargs> create_JavaLangSafeVarargs(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSafeVarargs)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangSafeVarargs")
