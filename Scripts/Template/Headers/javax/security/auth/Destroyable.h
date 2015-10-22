//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/auth/Destroyable.java
//

#ifndef _JavaxSecurityAuthDestroyable_H_
#define _JavaxSecurityAuthDestroyable_H_

#include "../../../J2ObjC_header.h"

/*!
 @brief Allows for special treatment of sensitive information, when it comes to
 destroying or clearing of the data.
 */
@protocol JavaxSecurityAuthDestroyable < NSObject, JavaObject >

/*!
 @brief Erases the sensitive information.
 Once an object is destroyed any calls
 to its methods will throw an <code>IllegalStateException</code>. If it does
 not succeed a DestroyFailedException is thrown.
 @throws DestroyFailedException
 if the information cannot be erased.
 */
- (void)destroy;

/*!
 @brief Returns <code>true</code> once an object has been safely destroyed.
 @return whether the object has been safely destroyed.
 */
- (jboolean)isDestroyed;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityAuthDestroyable)

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthDestroyable)

#endif // _JavaxSecurityAuthDestroyable_H_
