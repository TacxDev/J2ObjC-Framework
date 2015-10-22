//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECGenParameterSpec.java
//

#ifndef _JavaSecuritySpecECGenParameterSpec_H_
#define _JavaSecuritySpecECGenParameterSpec_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/security/spec/AlgorithmParameterSpec.h"

/*!
 @brief The parameter specification used to generate elliptic curve domain parameters.
 */
@interface JavaSecuritySpecECGenParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Creates a new <code>ECGenParameterSpec</code> with the specified standard or
 predefined name of the to-be-generated domain parameter.
 @param name
 the name of the elliptic curve domain parameter.
 */
- (instancetype)initWithNSString:(NSString *)name;

/*!
 @brief Returns the name (standard or predefined) of the to-be-generated elliptic
 curve domain parameter.
 @return the name
 */
- (NSString *)getName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECGenParameterSpec)

FOUNDATION_EXPORT void JavaSecuritySpecECGenParameterSpec_initWithNSString_(JavaSecuritySpecECGenParameterSpec *self, NSString *name);

FOUNDATION_EXPORT JavaSecuritySpecECGenParameterSpec *new_JavaSecuritySpecECGenParameterSpec_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECGenParameterSpec)

#endif // _JavaSecuritySpecECGenParameterSpec_H_
