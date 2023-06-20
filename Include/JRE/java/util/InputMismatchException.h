//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/InputMismatchException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilInputMismatchException")
#ifdef RESTRICT_JavaUtilInputMismatchException
#define INCLUDE_ALL_JavaUtilInputMismatchException 0
#else
#define INCLUDE_ALL_JavaUtilInputMismatchException 1
#endif
#undef RESTRICT_JavaUtilInputMismatchException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilInputMismatchException_) && (INCLUDE_ALL_JavaUtilInputMismatchException || defined(INCLUDE_JavaUtilInputMismatchException))
#define JavaUtilInputMismatchException_

#define RESTRICT_JavaUtilNoSuchElementException 1
#define INCLUDE_JavaUtilNoSuchElementException 1
#include "java/util/NoSuchElementException.h"

/*!
 @brief Thrown by a <code>Scanner</code> to indicate that the token
  retrieved does not match the pattern for the expected type, or
  that the token is out of range for the expected type.
 @author unascribed
 - seealso: java.util.Scanner
 @since 1.5
 */
@interface JavaUtilInputMismatchException : JavaUtilNoSuchElementException

#pragma mark Public

/*!
 @brief Constructs an <code>InputMismatchException</code> with <tt>null</tt>
  as its error message string.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an <code>InputMismatchException</code>, saving a reference
  to the error message string <tt>s</tt> for later retrieval by the 
 <tt>getMessage</tt> method.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilInputMismatchException)

FOUNDATION_EXPORT void JavaUtilInputMismatchException_init(JavaUtilInputMismatchException *self);

FOUNDATION_EXPORT JavaUtilInputMismatchException *new_JavaUtilInputMismatchException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilInputMismatchException *create_JavaUtilInputMismatchException_init(void);

FOUNDATION_EXPORT void JavaUtilInputMismatchException_initWithNSString_(JavaUtilInputMismatchException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilInputMismatchException *new_JavaUtilInputMismatchException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilInputMismatchException *create_JavaUtilInputMismatchException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilInputMismatchException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilInputMismatchException")
