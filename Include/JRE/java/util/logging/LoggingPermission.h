//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/LoggingPermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingLoggingPermission")
#ifdef RESTRICT_JavaUtilLoggingLoggingPermission
#define INCLUDE_ALL_JavaUtilLoggingLoggingPermission 0
#else
#define INCLUDE_ALL_JavaUtilLoggingLoggingPermission 1
#endif
#undef RESTRICT_JavaUtilLoggingLoggingPermission

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingLoggingPermission_) && (INCLUDE_ALL_JavaUtilLoggingLoggingPermission || defined(INCLUDE_JavaUtilLoggingLoggingPermission))
#define JavaUtilLoggingLoggingPermission_

#define RESTRICT_JavaSecurityBasicPermission 1
#define INCLUDE_JavaSecurityBasicPermission 1
#include "java/security/BasicPermission.h"

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaUtilLoggingLoggingPermission : JavaSecurityBasicPermission

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withNSString:(NSString *)actions;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingLoggingPermission)

FOUNDATION_EXPORT void JavaUtilLoggingLoggingPermission_initWithNSString_withNSString_(JavaUtilLoggingLoggingPermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaUtilLoggingLoggingPermission *new_JavaUtilLoggingLoggingPermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLoggingPermission *create_JavaUtilLoggingLoggingPermission_initWithNSString_withNSString_(NSString *name, NSString *actions);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLoggingPermission)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingLoggingPermission")
