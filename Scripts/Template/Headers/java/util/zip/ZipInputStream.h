//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/ZipInputStream.java
//

#ifndef _JavaUtilZipZipInputStream_H_
#define _JavaUtilZipZipInputStream_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/util/zip/InflaterInputStream.h"
#include "../../../java/util/zip/ZipConstants.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipZipEntry;

/*!
 @brief Used to read (decompress) the data from zip files.
 <p>A zip file (or "archive") is a collection of (possibly) compressed files.
 When reading from a <code>ZipInputStream</code>, you call <code>getNextEntry</code>
 which returns a <code>ZipEntry</code> of metadata corresponding to the userdata that follows.
 When you appear to have hit the end of this stream (which is really just the end of the current
 entry's userdata), call <code>getNextEntry</code> again. When it returns null,
 there are no more entries in the input file.
 <p>Although <code>InflaterInputStream</code> can only read compressed zip
 entries, this class can read non-compressed entries as well.
 <p>Use <code>ZipFile</code> if you need random access to entries by name, but use this class
 if you just want to iterate over all entries.
 <h3>Example</h3>
 <p>Using <code>ZipInputStream</code> is a little more complicated than <code>GZIPInputStream</code>
 because zip files are containers that can contain multiple files. This code pulls all the
 files out of a zip file, similar to the <code>unzip(1)</code> utility.
 @code

  InputStream is = ...
  ZipInputStream zis = new ZipInputStream(new BufferedInputStream(is));
  try {
     ZipEntry ze;
     while ((ze = zis.getNextEntry()) != null) {
         ByteArrayOutputStream baos = new ByteArrayOutputStream();
         byte[] buffer = new byte[1024];
         int count;
         while ((count = zis.read(buffer)) != -1) {
             baos.write(buffer, 0, count);
         }
         String filename = ze.getName();
         byte[] bytes = baos.toByteArray();
         // do something with 'filename' and 'bytes'...
     }
  } finally {
     zis.close();
  }
  
@endcode
 */
@interface JavaUtilZipZipInputStream : JavaUtilZipInflaterInputStream < JavaUtilZipZipConstants >

#pragma mark Public

/*!
 @brief Constructs a new <code>ZipInputStream</code> to read zip entries from the given input stream.
 <p>UTF-8 is used to decode all strings in the file.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream;

- (jint)available;

/*!
 @brief Closes this <code>ZipInputStream</code>.
 @throws IOException
 if an <code>IOException</code> occurs.
 */
- (void)close;

/*!
 @brief Closes the current zip entry and prepares to read the next entry.
 @throws IOException
 if an <code>IOException</code> occurs.
 */
- (void)closeEntry;

/*!
 @brief Returns the next entry from this <code>ZipInputStream</code> or <code>null</code> if
 no more entries are present.
 @throws IOException if an <code>IOException</code> occurs.
 */
- (JavaUtilZipZipEntry *)getNextEntry;

/*!
 @brief Reads up to <code>byteCount</code> uncompressed bytes into the buffer
 starting at <code>byteOffset</code>.
 Returns the number of bytes actually read, or -1.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

#pragma mark Protected

/*!
 @brief creates a <code></code> with the given name.
 @param name
 the name of the entry.
 @return the created <code>ZipEntry</code>.
 */
- (JavaUtilZipZipEntry *)createZipEntryWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipInputStream)

FOUNDATION_EXPORT void JavaUtilZipZipInputStream_initWithJavaIoInputStream_(JavaUtilZipZipInputStream *self, JavaIoInputStream *stream);

FOUNDATION_EXPORT JavaUtilZipZipInputStream *new_JavaUtilZipZipInputStream_initWithJavaIoInputStream_(JavaIoInputStream *stream) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipInputStream)

#endif // _JavaUtilZipZipInputStream_H_
