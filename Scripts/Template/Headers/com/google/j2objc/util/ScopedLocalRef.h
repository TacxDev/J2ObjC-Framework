//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/util/ScopedLocalRef.java
//

#ifndef _ComGoogleJ2objcUtilScopedLocalRef_H_
#define _ComGoogleJ2objcUtilScopedLocalRef_H_

#include "../../../../J2ObjC_header.h"

/*!
 @brief Lightweight container that maintains a reference within a scope,
 regardless of variable's origin.
 */
@interface ComGoogleJ2objcUtilScopedLocalRef : NSObject {
 @public
  id var_;
}

#pragma mark Public

- (instancetype)initWithId:(id)var;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcUtilScopedLocalRef)

J2OBJC_FIELD_SETTER(ComGoogleJ2objcUtilScopedLocalRef, var_, id)

FOUNDATION_EXPORT void ComGoogleJ2objcUtilScopedLocalRef_initWithId_(ComGoogleJ2objcUtilScopedLocalRef *self, id var);

FOUNDATION_EXPORT ComGoogleJ2objcUtilScopedLocalRef *new_ComGoogleJ2objcUtilScopedLocalRef_initWithId_(id var) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcUtilScopedLocalRef)

#endif // _ComGoogleJ2objcUtilScopedLocalRef_H_
