//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/FileOwnerAttributeView.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeFileOwnerAttributeView")
#ifdef RESTRICT_JavaNioFileAttributeFileOwnerAttributeView
#define INCLUDE_ALL_JavaNioFileAttributeFileOwnerAttributeView 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeFileOwnerAttributeView 1
#endif
#undef RESTRICT_JavaNioFileAttributeFileOwnerAttributeView

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeFileOwnerAttributeView_) && (INCLUDE_ALL_JavaNioFileAttributeFileOwnerAttributeView || defined(INCLUDE_JavaNioFileAttributeFileOwnerAttributeView))
#define JavaNioFileAttributeFileOwnerAttributeView_

#define RESTRICT_JavaNioFileAttributeFileAttributeView 1
#define INCLUDE_JavaNioFileAttributeFileAttributeView 1
#include "java/nio/file/attribute/FileAttributeView.h"

@protocol JavaNioFileAttributeUserPrincipal;

/*!
 @brief A file attribute view that supports reading or updating the owner of a file.
 This file attribute view is intended for file system implementations that
  support a file attribute that represents an identity that is the owner of
  the file. Often the owner of a file is the identity of the entity that
  created the file. 
 <p> The <code>getOwner</code> or <code>setOwner</code> methods may
  be used to read or update the owner of the file. 
 <p> The <code>getAttribute</code> and 
 <code>setAttribute</code> methods may also be
  used to read or update the owner. In that case, the owner attribute is
  identified by the name <code>"owner"</code>, and the value of the attribute is
  a <code>UserPrincipal</code>.
 @since 1.7
 */
@protocol JavaNioFileAttributeFileOwnerAttributeView < JavaNioFileAttributeFileAttributeView, JavaObject >

/*!
 @brief Returns the name of the attribute view.Attribute views of this type
  have the name <code>"owner"</code>.
 */
- (NSString *)name;

/*!
 @brief Read the file owner.
 <p> It is implementation specific if the file owner can be a <code>group</code>
 .
 @return the file owner
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, and it denies <code>RuntimePermission</code>
 <code>("accessUserInformation")</code> or its
           <code>checkRead</code> method
           denies read access to the file.
 */
- (id<JavaNioFileAttributeUserPrincipal>)getOwner;

/*!
 @brief Updates the file owner.
 <p> It is implementation specific if the file owner can be a <code>group</code>
 . To ensure consistent and correct behavior
  across platforms it is recommended that this method should only be used
  to set the file owner to a user principal that is not a group.
 @param owner the new file owner
 @throw IOException
 if an I/O error occurs, or the <code>owner</code> parameter is a
           group and this implementation does not support setting the owner
           to a group
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, and it denies <code>RuntimePermission</code>
 <code>("accessUserInformation")</code> or its
           <code>checkWrite</code> method
           denies write access to the file.
 */
- (void)setOwnerWithJavaNioFileAttributeUserPrincipal:(id<JavaNioFileAttributeUserPrincipal>)owner;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeFileOwnerAttributeView)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeFileOwnerAttributeView)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeFileOwnerAttributeView")
