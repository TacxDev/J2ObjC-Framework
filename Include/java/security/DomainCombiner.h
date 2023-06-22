//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/DomainCombiner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityDomainCombiner")
#ifdef RESTRICT_JavaSecurityDomainCombiner
#define INCLUDE_ALL_JavaSecurityDomainCombiner 0
#else
#define INCLUDE_ALL_JavaSecurityDomainCombiner 1
#endif
#undef RESTRICT_JavaSecurityDomainCombiner

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityDomainCombiner_) && (INCLUDE_ALL_JavaSecurityDomainCombiner || defined(INCLUDE_JavaSecurityDomainCombiner))
#define JavaSecurityDomainCombiner_

@class IOSObjectArray;

/*!
 @brief Legacy security code; do not use.
 */
@protocol JavaSecurityDomainCombiner < JavaObject >

- (IOSObjectArray *)combineWithJavaSecurityProtectionDomainArray:(IOSObjectArray *)currentDomains
                           withJavaSecurityProtectionDomainArray:(IOSObjectArray *)assignedDomains;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityDomainCombiner)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityDomainCombiner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityDomainCombiner")
