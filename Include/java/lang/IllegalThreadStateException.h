//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/IllegalThreadStateException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIllegalThreadStateException")
#ifdef RESTRICT_JavaLangIllegalThreadStateException
#define INCLUDE_ALL_JavaLangIllegalThreadStateException 0
#else
#define INCLUDE_ALL_JavaLangIllegalThreadStateException 1
#endif
#undef RESTRICT_JavaLangIllegalThreadStateException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangIllegalThreadStateException_) && (INCLUDE_ALL_JavaLangIllegalThreadStateException || defined(INCLUDE_JavaLangIllegalThreadStateException))
#define JavaLangIllegalThreadStateException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "java/lang/IllegalArgumentException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that a thread is not in an appropriate state
  for the requested operation.See, for example, the 
 <code>suspend</code> and <code>resume</code> methods in class 
 <code>Thread</code>.
 - seealso: java.lang.Thread#resume()
 - seealso: java.lang.Thread#suspend()
 @since 1.0
 */
@interface JavaLangIllegalThreadStateException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs an <code>IllegalThreadStateException</code> with no
  detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an <code>IllegalThreadStateException</code> with the
  specified detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalThreadStateException)

FOUNDATION_EXPORT void JavaLangIllegalThreadStateException_init(JavaLangIllegalThreadStateException *self);

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *new_JavaLangIllegalThreadStateException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *create_JavaLangIllegalThreadStateException_init(void);

FOUNDATION_EXPORT void JavaLangIllegalThreadStateException_initWithNSString_(JavaLangIllegalThreadStateException *self, NSString *s);

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *new_JavaLangIllegalThreadStateException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *create_JavaLangIllegalThreadStateException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalThreadStateException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangIllegalThreadStateException")
