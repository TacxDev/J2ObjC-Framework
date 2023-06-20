//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/security/auth/callback/Callback.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityAuthCallbackCallback")
#ifdef RESTRICT_JavaxSecurityAuthCallbackCallback
#define INCLUDE_ALL_JavaxSecurityAuthCallbackCallback 0
#else
#define INCLUDE_ALL_JavaxSecurityAuthCallbackCallback 1
#endif
#undef RESTRICT_JavaxSecurityAuthCallbackCallback

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityAuthCallbackCallback_) && (INCLUDE_ALL_JavaxSecurityAuthCallbackCallback || defined(INCLUDE_JavaxSecurityAuthCallbackCallback))
#define JavaxSecurityAuthCallbackCallback_

/*!
 @brief <p> Implementations of this interface are passed to a 
 <code>CallbackHandler</code>, allowing underlying security services
  the ability to interact with a calling application to retrieve specific
  authentication data such as usernames and passwords, or to display
  certain information, such as error and warning messages.
 <p> <code>Callback</code> implementations do not retrieve or
  display the information requested by underlying security services. 
 <code>Callback</code> implementations simply provide the means
  to pass such requests to applications, and for applications,
  if appropriate, to return requested information back to the
  underlying security services.
 - seealso: javax.security.auth.callback.CallbackHandler
 - seealso: javax.security.auth.callback.PasswordCallback
 */
@protocol JavaxSecurityAuthCallbackCallback < JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityAuthCallbackCallback)

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthCallbackCallback)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityAuthCallbackCallback")
