//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/OutOfMemoryError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangOutOfMemoryError")
#ifdef RESTRICT_JavaLangOutOfMemoryError
#define INCLUDE_ALL_JavaLangOutOfMemoryError 0
#else
#define INCLUDE_ALL_JavaLangOutOfMemoryError 1
#endif
#undef RESTRICT_JavaLangOutOfMemoryError

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangOutOfMemoryError_) && (INCLUDE_ALL_JavaLangOutOfMemoryError || defined(INCLUDE_JavaLangOutOfMemoryError))
#define JavaLangOutOfMemoryError_

#define RESTRICT_JavaLangVirtualMachineError 1
#define INCLUDE_JavaLangVirtualMachineError 1
#include "java/lang/VirtualMachineError.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when the Java Virtual Machine cannot allocate an object
  because it is out of memory, and no more memory could be made
  available by the garbage collector.
 <code>OutOfMemoryError</code> objects may be constructed by the virtual
  machine as if suppression were disabled and/or the stack trace was not
  writable
 .
 @since 1.0
 */
@interface JavaLangOutOfMemoryError : JavaLangVirtualMachineError

#pragma mark Public

/*!
 @brief Constructs an <code>OutOfMemoryError</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an <code>OutOfMemoryError</code> with the specified
  detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangOutOfMemoryError)

FOUNDATION_EXPORT void JavaLangOutOfMemoryError_init(JavaLangOutOfMemoryError *self);

FOUNDATION_EXPORT JavaLangOutOfMemoryError *new_JavaLangOutOfMemoryError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangOutOfMemoryError *create_JavaLangOutOfMemoryError_init(void);

FOUNDATION_EXPORT void JavaLangOutOfMemoryError_initWithNSString_(JavaLangOutOfMemoryError *self, NSString *s);

FOUNDATION_EXPORT JavaLangOutOfMemoryError *new_JavaLangOutOfMemoryError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangOutOfMemoryError *create_JavaLangOutOfMemoryError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangOutOfMemoryError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangOutOfMemoryError")
