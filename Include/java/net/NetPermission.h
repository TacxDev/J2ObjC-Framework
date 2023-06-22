//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/NetPermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetNetPermission")
#ifdef RESTRICT_JavaNetNetPermission
#define INCLUDE_ALL_JavaNetNetPermission 0
#else
#define INCLUDE_ALL_JavaNetNetPermission 1
#endif
#undef RESTRICT_JavaNetNetPermission

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetNetPermission_) && (INCLUDE_ALL_JavaNetNetPermission || defined(INCLUDE_JavaNetNetPermission))
#define JavaNetNetPermission_

#define RESTRICT_JavaSecurityBasicPermission 1
#define INCLUDE_JavaSecurityBasicPermission 1
#include "java/security/BasicPermission.h"

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaNetNetPermission : JavaSecurityBasicPermission

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)name;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withNSString:(NSString *)actions;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetNetPermission)

FOUNDATION_EXPORT void JavaNetNetPermission_initWithNSString_(JavaNetNetPermission *self, NSString *name);

FOUNDATION_EXPORT JavaNetNetPermission *new_JavaNetNetPermission_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetNetPermission *create_JavaNetNetPermission_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaNetNetPermission_initWithNSString_withNSString_(JavaNetNetPermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaNetNetPermission *new_JavaNetNetPermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetNetPermission *create_JavaNetNetPermission_initWithNSString_withNSString_(NSString *name, NSString *actions);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetNetPermission)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetNetPermission")