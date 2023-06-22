//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/security/auth/PrivateCredentialPermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityAuthPrivateCredentialPermission")
#ifdef RESTRICT_JavaxSecurityAuthPrivateCredentialPermission
#define INCLUDE_ALL_JavaxSecurityAuthPrivateCredentialPermission 0
#else
#define INCLUDE_ALL_JavaxSecurityAuthPrivateCredentialPermission 1
#endif
#undef RESTRICT_JavaxSecurityAuthPrivateCredentialPermission

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityAuthPrivateCredentialPermission_) && (INCLUDE_ALL_JavaxSecurityAuthPrivateCredentialPermission || defined(INCLUDE_JavaxSecurityAuthPrivateCredentialPermission))
#define JavaxSecurityAuthPrivateCredentialPermission_

#define RESTRICT_JavaSecurityPermission 1
#define INCLUDE_JavaSecurityPermission 1
#include "java/security/Permission.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@protocol JavaUtilSet;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaxSecurityAuthPrivateCredentialPermission : JavaSecurityPermission

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withNSString:(NSString *)actions;

- (NSString *)getActions;

- (NSString *)getCredentialClass;

- (IOSObjectArray *)getPrincipals;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)p;

#pragma mark Package-Private

- (instancetype __nonnull)initWithNSString:(NSString *)credentialClass
                           withJavaUtilSet:(id<JavaUtilSet>)principals;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityAuthPrivateCredentialPermission)

FOUNDATION_EXPORT void JavaxSecurityAuthPrivateCredentialPermission_initWithNSString_withJavaUtilSet_(JavaxSecurityAuthPrivateCredentialPermission *self, NSString *credentialClass, id<JavaUtilSet> principals);

FOUNDATION_EXPORT JavaxSecurityAuthPrivateCredentialPermission *new_JavaxSecurityAuthPrivateCredentialPermission_initWithNSString_withJavaUtilSet_(NSString *credentialClass, id<JavaUtilSet> principals) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityAuthPrivateCredentialPermission *create_JavaxSecurityAuthPrivateCredentialPermission_initWithNSString_withJavaUtilSet_(NSString *credentialClass, id<JavaUtilSet> principals);

FOUNDATION_EXPORT void JavaxSecurityAuthPrivateCredentialPermission_initWithNSString_withNSString_(JavaxSecurityAuthPrivateCredentialPermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaxSecurityAuthPrivateCredentialPermission *new_JavaxSecurityAuthPrivateCredentialPermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityAuthPrivateCredentialPermission *create_JavaxSecurityAuthPrivateCredentialPermission_initWithNSString_withNSString_(NSString *name, NSString *actions);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthPrivateCredentialPermission)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityAuthPrivateCredentialPermission")
