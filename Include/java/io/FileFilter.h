//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/FileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileFilter")
#ifdef RESTRICT_JavaIoFileFilter
#define INCLUDE_ALL_JavaIoFileFilter 0
#else
#define INCLUDE_ALL_JavaIoFileFilter 1
#endif
#undef RESTRICT_JavaIoFileFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoFileFilter_) && (INCLUDE_ALL_JavaIoFileFilter || defined(INCLUDE_JavaIoFileFilter))
#define JavaIoFileFilter_

@class JavaIoFile;
@class JavaLangBoolean;

/*!
 @brief A filter for abstract pathnames.
 <p> Instances of this interface may be passed to the <code><code>listFiles(FileFilter)</code>
 </code> method
  of the <code><code>java.io.File</code></code> class.
 @since 1.2
 */
@protocol JavaIoFileFilter < JavaObject >

/*!
 @brief Tests whether or not the specified abstract pathname should be
  included in a pathname list.
 @param pathname The abstract pathname to be tested
 @return <code>true</code> if and only if <code>pathname</code>
           should be included
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)pathname;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileFilter)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoFileFilter")
