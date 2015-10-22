//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/SyncFailedException.java
//

#ifndef _JavaIoSyncFailedException_H_
#define _JavaIoSyncFailedException_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/IOException.h"

/*!
 @brief Signals that the <code>FileDescriptor.sync()</code> method has failed to
 complete.
 */
@interface JavaIoSyncFailedException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>SyncFailedException</code> with its stack trace and
 detail message filled in.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoSyncFailedException)

FOUNDATION_EXPORT void JavaIoSyncFailedException_initWithNSString_(JavaIoSyncFailedException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoSyncFailedException *new_JavaIoSyncFailedException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoSyncFailedException)

#endif // _JavaIoSyncFailedException_H_
