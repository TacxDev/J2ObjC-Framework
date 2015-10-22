//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/ZipFile.java
//

#ifndef _JavaUtilZipZipFile_H_
#define _JavaUtilZipZipFile_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/io/Closeable.h"
#include "../../../java/io/InputStream.h"
#include "../../../java/util/zip/InflaterInputStream.h"
#include "../../../java/util/zip/ZipConstants.h"

@class IOSByteArray;
@class JavaIoFile;
@class JavaIoInputStream;
@class JavaIoRandomAccessFile;
@class JavaUtilZipInflater;
@class JavaUtilZipZipEntry;
@protocol JavaUtilEnumeration;

#define JavaUtilZipZipFile_GPBF_ENCRYPTED_FLAG 1
#define JavaUtilZipZipFile_GPBF_DATA_DESCRIPTOR_FLAG 8
#define JavaUtilZipZipFile_GPBF_UTF8_FLAG 2048
#define JavaUtilZipZipFile_GPBF_UNSUPPORTED_MASK 1
#define JavaUtilZipZipFile_OPEN_READ 1
#define JavaUtilZipZipFile_OPEN_DELETE 4

/*!
 @brief This class provides random read access to a zip file.
 You pay more to read
 the zip file's central directory up front (from the constructor), but if you're using
 <code>getEntry</code> to look up multiple files by name, you get the benefit of this index.
 <p>If you only want to iterate through all the files (using <code>entries()</code>, you should
 consider <code>ZipInputStream</code>, which provides stream-like read access to a zip file and
 has a lower up-front cost because you don't pay to build an in-memory index.
 <p>If you want to create a zip file, use <code>ZipOutputStream</code>. There is no API for updating
 an existing zip file.
 */
@interface JavaUtilZipZipFile : NSObject < JavaIoCloseable, JavaUtilZipZipConstants >

#pragma mark Public

/*!
 @brief Constructs a new <code>ZipFile</code> allowing read access to the contents of the given file.
 <p>UTF-8 is used to decode all comments and entry names in the file.
 @throws ZipException if a zip error occurs.
 @throws IOException if an <code>IOException</code> occurs.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Constructs a new <code>ZipFile</code> allowing access to the given file.
 <p>UTF-8 is used to decode all comments and entry names in the file.
 <p>The <code>mode</code> must be either <code>OPEN_READ</code> or <code>OPEN_READ|OPEN_DELETE</code>.
 If the <code>OPEN_DELETE</code> flag is supplied, the file will be deleted at or before the
 time that the <code>ZipFile</code> is closed (the contents will remain accessible until
 this <code>ZipFile</code> is closed); it also calls <code>File.deleteOnExit</code>.
 @throws IOException if an <code>IOException</code> occurs.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                           withInt:(jint)mode;

/*!
 @brief Constructs a new <code>ZipFile</code> allowing read access to the contents of the given file.
 <p>UTF-8 is used to decode all comments and entry names in the file.
 @throws IOException if an IOException occurs.
 */
- (instancetype)initWithNSString:(NSString *)name;

/*!
 @brief Closes this zip file.
 This method is idempotent. This method may cause I/O if the
 zip file needs to be deleted.
 @throws IOException
 if an IOException occurs.
 */
- (void)close;

/*!
 @brief Returns an enumeration of the entries.
 The entries are listed in the
 order in which they appear in the zip file.
 <p>If you only need to iterate over the entries in a zip file, and don't
 need random-access entry lookup by name, you should probably use <code>ZipInputStream</code>
 instead, to avoid paying to construct the in-memory index.
 @throws IllegalStateException if this zip file has been closed.
 */
- (id<JavaUtilEnumeration>)entries;

/*!
 @brief Returns this file's comment, or null if it doesn't have one.
 See <code>ZipOutputStream.setComment</code>.
 @throws IllegalStateException if this zip file has been closed.
 @since 1.7
 */
- (NSString *)getComment;

/*!
 @brief Returns the zip entry with the given name, or null if there is no such entry.
 @throws IllegalStateException if this zip file has been closed.
 */
- (JavaUtilZipZipEntry *)getEntryWithNSString:(NSString *)entryName;

/*!
 @brief Returns an input stream on the data of the specified <code>ZipEntry</code>.
 @param entry_
 the ZipEntry.
 @return an input stream of the data contained in the <code>ZipEntry</code>.
 @throws IOException
 if an <code>IOException</code> occurs.
 @throws IllegalStateException if this zip file has been closed.
 */
- (JavaIoInputStream *)getInputStreamWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)entry_;

/*!
 @brief Gets the file name of this <code>ZipFile</code>.
 @return the file name of this <code>ZipFile</code>.
 */
- (NSString *)getName;

/*!
 @brief Returns the number of <code>ZipEntries</code> in this <code>ZipFile</code>.
 @return the number of entries in this file.
 @throws IllegalStateException if this zip file has been closed.
 */
- (jint)size;

#pragma mark Protected

- (void)dealloc;

#pragma mark Package-Private

+ (void)throwZipExceptionWithNSString:(NSString *)msg
                              withInt:(jint)magic;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipFile)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, GPBF_ENCRYPTED_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, GPBF_DATA_DESCRIPTOR_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, GPBF_UTF8_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, GPBF_UNSUPPORTED_MASK, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, OPEN_READ, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, OPEN_DELETE, jint)

FOUNDATION_EXPORT void JavaUtilZipZipFile_initWithJavaIoFile_(JavaUtilZipZipFile *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaUtilZipZipFile *new_JavaUtilZipZipFile_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipZipFile_initWithNSString_(JavaUtilZipZipFile *self, NSString *name);

FOUNDATION_EXPORT JavaUtilZipZipFile *new_JavaUtilZipZipFile_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipZipFile_initWithJavaIoFile_withInt_(JavaUtilZipZipFile *self, JavaIoFile *file, jint mode);

FOUNDATION_EXPORT JavaUtilZipZipFile *new_JavaUtilZipZipFile_initWithJavaIoFile_withInt_(JavaIoFile *file, jint mode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipZipFile_throwZipExceptionWithNSString_withInt_(NSString *msg, jint magic);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipFile)

@interface JavaUtilZipZipFile_EocdRecord : NSObject {
 @public
  jlong numEntries_;
  jlong centralDirOffset_;
  jint commentLength_;
}

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)numEntries
                    withLong:(jlong)centralDirOffset
                     withInt:(jint)commentLength;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipFile_EocdRecord)

FOUNDATION_EXPORT void JavaUtilZipZipFile_EocdRecord_initWithLong_withLong_withInt_(JavaUtilZipZipFile_EocdRecord *self, jlong numEntries, jlong centralDirOffset, jint commentLength);

FOUNDATION_EXPORT JavaUtilZipZipFile_EocdRecord *new_JavaUtilZipZipFile_EocdRecord_initWithLong_withLong_withInt_(jlong numEntries, jlong centralDirOffset, jint commentLength) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipFile_EocdRecord)

/*!
 @brief Wrap a stream around a RandomAccessFile.
 The RandomAccessFile is shared
 among all streams returned by getInputStream(), so we have to synchronize
 access to it.  (We can optimize this by adding buffering here to reduce
 collisions.)
 <p>We could support mark/reset, but we don't currently need them.
 */
@interface JavaUtilZipZipFile_RAFStream : JavaIoInputStream

#pragma mark Public

- (instancetype)initWithJavaIoRandomAccessFile:(JavaIoRandomAccessFile *)raf
                                      withLong:(jlong)initialOffset;

- (instancetype)initWithJavaIoRandomAccessFile:(JavaIoRandomAccessFile *)raf
                                      withLong:(jlong)initialOffset
                                      withLong:(jlong)endOffset;

- (jint)available;

- (jint)fillWithJavaUtilZipInflater:(JavaUtilZipInflater *)inflater
                            withInt:(jint)nativeEndBufSize;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipFile_RAFStream)

FOUNDATION_EXPORT void JavaUtilZipZipFile_RAFStream_initWithJavaIoRandomAccessFile_withLong_withLong_(JavaUtilZipZipFile_RAFStream *self, JavaIoRandomAccessFile *raf, jlong initialOffset, jlong endOffset);

FOUNDATION_EXPORT JavaUtilZipZipFile_RAFStream *new_JavaUtilZipZipFile_RAFStream_initWithJavaIoRandomAccessFile_withLong_withLong_(JavaIoRandomAccessFile *raf, jlong initialOffset, jlong endOffset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipZipFile_RAFStream_initWithJavaIoRandomAccessFile_withLong_(JavaUtilZipZipFile_RAFStream *self, JavaIoRandomAccessFile *raf, jlong initialOffset);

FOUNDATION_EXPORT JavaUtilZipZipFile_RAFStream *new_JavaUtilZipZipFile_RAFStream_initWithJavaIoRandomAccessFile_withLong_(JavaIoRandomAccessFile *raf, jlong initialOffset) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipFile_RAFStream)

/*!
  
 */
@interface JavaUtilZipZipFile_ZipInflaterInputStream : JavaUtilZipInflaterInputStream

#pragma mark Public

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                  withJavaUtilZipInflater:(JavaUtilZipInflater *)inf
                                  withInt:(jint)bsize
                  withJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)entry_;

- (jint)available;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipFile_ZipInflaterInputStream)

FOUNDATION_EXPORT void JavaUtilZipZipFile_ZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_withJavaUtilZipZipEntry_(JavaUtilZipZipFile_ZipInflaterInputStream *self, JavaIoInputStream *is, JavaUtilZipInflater *inf, jint bsize, JavaUtilZipZipEntry *entry_);

FOUNDATION_EXPORT JavaUtilZipZipFile_ZipInflaterInputStream *new_JavaUtilZipZipFile_ZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_withJavaUtilZipZipEntry_(JavaIoInputStream *is, JavaUtilZipInflater *inf, jint bsize, JavaUtilZipZipEntry *entry_) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipFile_ZipInflaterInputStream)

#endif // _JavaUtilZipZipFile_H_
