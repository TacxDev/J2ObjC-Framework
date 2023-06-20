//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/FileDescriptor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileDescriptor")
#ifdef RESTRICT_JavaIoFileDescriptor
#define INCLUDE_ALL_JavaIoFileDescriptor 0
#else
#define INCLUDE_ALL_JavaIoFileDescriptor 1
#endif
#undef RESTRICT_JavaIoFileDescriptor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoFileDescriptor_) && (INCLUDE_ALL_JavaIoFileDescriptor || defined(INCLUDE_JavaIoFileDescriptor))
#define JavaIoFileDescriptor_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief Instances of the file descriptor class serve as an opaque handle
  to the underlying machine-specific structure representing an open
  file, an open socket, or another source or sink of bytes.The
  main practical use for a file descriptor is to create a 
 <code>FileInputStream</code> or <code>FileOutputStream</code> to
  contain it.
 <p>
  Applications should not create their own file descriptors.
 @author Pavani Diwanji
 - seealso: java.io.FileInputStream
 - seealso: java.io.FileOutputStream
 @since JDK1.0
 */
@interface JavaIoFileDescriptor : NSObject {
 @public
  jint descriptor_;
}

#pragma mark Public

/*!
 @brief Constructs an (invalid) FileDescriptor
  object.
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns the int descriptor.It's highly unlikely you should be calling this.
 Please discuss
  your needs with a libcore maintainer before using this method.
 */
- (jint)getInt$;

/*!
 @brief Returns the owner ID of this FileDescriptor.It's highly unlikely you should be calling this.
 Please discuss your needs with a libcore maintainer before using this method.
 */
- (jlong)getOwnerId$;

/*!
 */
- (jboolean)isSocket$;

/*!
 @brief Returns a copy of this FileDescriptor, and sets this to an invalid state.
 The returned instance is not necessarily <code>valid()</code>, if the original FileDescriptor
  was invalid, or if another thread concurrently calls <code>release$()</code>.
 */
- (JavaIoFileDescriptor *)release$;

/*!
 @brief Sets the int descriptor.It's highly unlikely you should be calling this.
 Please discuss
  your needs with a libcore maintainer before using this method.
 */
- (void)setInt$WithInt:(jint)fd;

/*!
 @brief Sets the owner ID of this FileDescriptor.The owner ID does not need to be unique, but it is
  assumed that clashes are rare.
 See bionic/include/android/fdsan.h for more details.
  It's highly unlikely you should be calling this.
  Please discuss your needs with a libcore maintainer before using this method.
 @param owner the owner ID of the Object that is responsible for closing this FileDescriptor
 */
- (void)setOwnerId$WithLong:(jlong)newOwnerId;

/*!
 @brief Force all system buffers to synchronize with the underlying
  device.This method returns after all modified data and
  attributes of this FileDescriptor have been written to the
  relevant device(s).
 In particular, if this FileDescriptor
  refers to a physical storage medium, such as a file in a file
  system, sync will not return until all in-memory modified copies
  of buffers associated with this FileDescriptor have been
  written to the physical medium.
  sync is meant to be used by code that requires physical
  storage (such as a file) to be in a known state  For
  example, a class that provided a simple transaction facility
  might use sync to ensure that all changes to a file caused
  by a given transaction were recorded on a storage medium.
  sync only affects buffers downstream of this FileDescriptor.  If
  any in-memory buffering is being done by the application (for
  example, by a BufferedOutputStream object), those buffers must
  be flushed into the FileDescriptor (for example, by invoking
  OutputStream.flush) before that data will be affected by sync.
 @throw SyncFailedException
 Thrown when the buffers cannot be flushed,
         or because the system cannot guarantee that all the
         buffers have been synchronized with physical media.
 @since JDK1.1
 */
- (void)sync;

/*!
 @brief Tests if this file descriptor object is valid.
 @return <code>true</code> if the file descriptor object represents a
           valid, open file, socket, or other active I/O connection;          
 <code>false</code> otherwise.
 */
- (jboolean)valid;

@end

J2OBJC_STATIC_INIT(JavaIoFileDescriptor)

/*!
 */
inline jlong JavaIoFileDescriptor_get_NO_OWNER(void);
#define JavaIoFileDescriptor_NO_OWNER 0LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoFileDescriptor, NO_OWNER, jlong)

/*!
 @brief A handle to the standard input stream.Usually, this file
  descriptor is not used directly, but rather via the input stream
  known as <code>System.in</code>.
 - seealso: java.lang.System#in
 */
inline JavaIoFileDescriptor *JavaIoFileDescriptor_get_in(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoFileDescriptor *JavaIoFileDescriptor_in;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaIoFileDescriptor, in, JavaIoFileDescriptor *)

/*!
 @brief A handle to the standard output stream.Usually, this file
  descriptor is not used directly, but rather via the output stream
  known as <code>System.out</code>.
 - seealso: java.lang.System#out
 */
inline JavaIoFileDescriptor *JavaIoFileDescriptor_get_out(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoFileDescriptor *JavaIoFileDescriptor_out;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaIoFileDescriptor, out, JavaIoFileDescriptor *)

/*!
 @brief A handle to the standard error stream.Usually, this file
  descriptor is not used directly, but rather via the output stream
  known as <code>System.err</code>.
 - seealso: java.lang.System#err
 */
inline JavaIoFileDescriptor *JavaIoFileDescriptor_get_err(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoFileDescriptor *JavaIoFileDescriptor_err;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaIoFileDescriptor, err, JavaIoFileDescriptor *)

FOUNDATION_EXPORT void JavaIoFileDescriptor_init(JavaIoFileDescriptor *self);

FOUNDATION_EXPORT JavaIoFileDescriptor *new_JavaIoFileDescriptor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileDescriptor *create_JavaIoFileDescriptor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileDescriptor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoFileDescriptor")
