//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/UserPrincipalNotFoundException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeUserPrincipalNotFoundException")
#ifdef RESTRICT_JavaNioFileAttributeUserPrincipalNotFoundException
#define INCLUDE_ALL_JavaNioFileAttributeUserPrincipalNotFoundException 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeUserPrincipalNotFoundException 1
#endif
#undef RESTRICT_JavaNioFileAttributeUserPrincipalNotFoundException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeUserPrincipalNotFoundException_) && (INCLUDE_ALL_JavaNioFileAttributeUserPrincipalNotFoundException || defined(INCLUDE_JavaNioFileAttributeUserPrincipalNotFoundException))
#define JavaNioFileAttributeUserPrincipalNotFoundException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

@class JavaLangLong;
@class JavaLangThrowable;

/*!
 @brief Checked exception thrown when a lookup of <code>UserPrincipal</code> fails because
  the principal does not exist.
 @since 1.7
 */
@interface JavaNioFileAttributeUserPrincipalNotFoundException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 @param name the principal name; may be 
 <code>null</code>
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name;

/*!
 @brief Returns the user principal name if this exception was created with the
  user principal name that was not found, otherwise <code>null</code>.
 @return the user principal name or <code>null</code>
 */
- (NSString *)getName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeUserPrincipalNotFoundException)

inline jlong JavaNioFileAttributeUserPrincipalNotFoundException_get_serialVersionUID(void);
#define JavaNioFileAttributeUserPrincipalNotFoundException_serialVersionUID -5369283889045833024LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioFileAttributeUserPrincipalNotFoundException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNioFileAttributeUserPrincipalNotFoundException_initWithNSString_(JavaNioFileAttributeUserPrincipalNotFoundException *self, NSString *name);

FOUNDATION_EXPORT JavaNioFileAttributeUserPrincipalNotFoundException *new_JavaNioFileAttributeUserPrincipalNotFoundException_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileAttributeUserPrincipalNotFoundException *create_JavaNioFileAttributeUserPrincipalNotFoundException_initWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeUserPrincipalNotFoundException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeUserPrincipalNotFoundException")
