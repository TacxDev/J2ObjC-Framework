//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/Paths.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFilePaths")
#ifdef RESTRICT_JavaNioFilePaths
#define INCLUDE_ALL_JavaNioFilePaths 0
#else
#define INCLUDE_ALL_JavaNioFilePaths 1
#endif
#undef RESTRICT_JavaNioFilePaths

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFilePaths_) && (INCLUDE_ALL_JavaNioFilePaths || defined(INCLUDE_JavaNioFilePaths))
#define JavaNioFilePaths_

@class IOSObjectArray;
@class JavaNetURI;
@protocol JavaNioFilePath;

/*!
 @brief This class consists exclusively of static methods that return a <code>Path</code>
  by converting a path string or <code>URI</code>.
 @since 1.7
 */
@interface JavaNioFilePaths : NSObject

#pragma mark Public

/*!
 @brief Converts a path string, or a sequence of strings that when joined form
  a path string, to a <code>Path</code>.If <code>more</code> does not specify any
  elements then the value of the <code>first</code> parameter is the path string
  to convert.
 If <code>more</code> specifies one or more elements then each
  non-empty string, including <code>first</code>, is considered to be a sequence
  of name elements (see <code>Path</code>) and is joined to form a path string.
  The details as to how the Strings are joined is provider specific but
  typically they will be joined using the <code>name-separator</code>
  as the separator. For example, if the name separator is
  "<code>/</code>" and <code>getPath("/foo","bar","gus")</code> is invoked, then the
  path string <code>"/foo/bar/gus"</code> is converted to a <code>Path</code>.
  A <code>Path</code> representing an empty path is returned if <code>first</code>
  is the empty string and <code>more</code> does not contain any non-empty
  strings. 
 <p> The <code>Path</code> is obtained by invoking the <code>getPath</code>
  method of the <code>default</code> <code>FileSystem</code>
 .
  
 <p> Note that while this method is very convenient, using it will imply
  an assumed reference to the default <code>FileSystem</code> and limit the
  utility of the calling code. Hence it should not be used in library code
  intended for flexible reuse. A more flexible alternative is to use an
  existing <code>Path</code> instance as an anchor, such as: 
 @code

      Path dir = ...
      Path path = dir.resolve("file"); 
  
@endcode
 @param first the path string or initial part of the path string
 @param more additional strings to be joined to form the path string
 @return the resulting <code>Path</code>
 @throw InvalidPathException
 if the path string cannot be converted to a <code>Path</code>
 - seealso: FileSystem#getPath
 */
+ (id<JavaNioFilePath>)getWithNSString:(NSString *)first
                     withNSStringArray:(IOSObjectArray *)more;

/*!
 @brief Converts the given URI to a <code>Path</code> object.
 <p> This method iterates over the <code>installed</code>
  providers to locate the provider that is identified by the
  URI <code>scheme</code> of the given URI. URI schemes are
  compared without regard to case. If the provider is found then its <code>getPath</code>
  method is invoked to convert the
  URI. 
 <p> In the case of the default provider, identified by the URI scheme
  "file", the given URI has a non-empty path component, and undefined query
  and fragment components. Whether the authority component may be present
  is platform specific. The returned <code>Path</code> is associated with the 
 <code>default</code> file system. 
 <p> The default provider provides a similar <em>round-trip</em> guarantee
  to the <code>java.io.File</code> class. For a given <code>Path</code> <i>p</i> it
  is guaranteed that 
 <blockquote><tt>
  Paths.get(</tt><i>p</i><tt>.<code>toUri</code>()).equals(</tt>
  <i>p</i><tt>.<code>toAbsolutePath</code>())</tt>
  </blockquote>
  so long as the original <code>Path</code>, the <code>URI</code>, and the new <code>Path</code>
  are all created in (possibly different invocations of) the same
  Java virtual machine. Whether other providers make any guarantees is
  provider specific and therefore unspecified.
 @param uri the URI to convert
 @return the resulting <code>Path</code>
 @throw IllegalArgumentException
 if preconditions on the <code>uri</code> parameter do not hold. The
           format of the URI is provider specific.
 @throw FileSystemNotFoundException
 The file system, identified by the URI, does not exist and
           cannot be created automatically, or the provider identified by
           the URI's scheme component is not installed
 @throw SecurityException
 if a security manager is installed and it denies an unspecified
           permission to access the file system
 */
+ (id<JavaNioFilePath>)getWithJavaNetURI:(JavaNetURI *)uri;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFilePaths)

FOUNDATION_EXPORT id<JavaNioFilePath> JavaNioFilePaths_getWithNSString_withNSStringArray_(NSString *first, IOSObjectArray *more);

FOUNDATION_EXPORT id<JavaNioFilePath> JavaNioFilePaths_getWithJavaNetURI_(JavaNetURI *uri);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFilePaths)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioFilePaths")
