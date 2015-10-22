//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Closeable.java
//

#ifndef _JavaIoCloseable_H_
#define _JavaIoCloseable_H_

#include "../../J2ObjC_header.h"
#include "../../java/lang/AutoCloseable.h"

/*!
 @brief An <code>AutoCloseable</code> whose close method may throw an <code>IOException</code>.
 */
@protocol JavaIoCloseable < JavaLangAutoCloseable, NSObject, JavaObject >

/*!
 @brief Closes the object and release any system resources it holds.
 <p>Although only the first call has any effect, it is safe to call close
 multiple times on the same object. This is more lenient than the
 overridden <code>AutoCloseable.close()</code>, which may be called at most
 once.
 */
- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoCloseable)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoCloseable)

#endif // _JavaIoCloseable_H_
