//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/BufferedWriter.java
//

#ifndef _JavaIoBufferedWriter_H_
#define _JavaIoBufferedWriter_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/Writer.h"

@class IOSCharArray;

/*!
 @brief Wraps an existing <code>Writer</code> and <em>buffers</em> the output.
 Expensive
 interaction with the underlying reader is minimized, since most (smaller)
 requests can be satisfied by accessing the buffer alone. The drawback is that
 some extra space is required to hold the buffer and that copying takes place
 when filling that buffer, but this is usually outweighed by the performance
 benefits.
 <p/>A typical application pattern for the class looks like this:<p/>
 @code

  BufferedWriter buf = new BufferedWriter(new FileWriter(&quot;file.java&quot;));
  
@endcode
 */
@interface JavaIoBufferedWriter : JavaIoWriter

#pragma mark Public

/*!
 @brief Constructs a new <code>BufferedWriter</code>, providing <code>out</code> with a buffer
 of 8192 chars.
 @param outArg the <code>Writer</code> the buffer writes to.
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)outArg;

/*!
 @brief Constructs a new <code>BufferedWriter</code>, providing <code>out</code> with <code>size</code> chars
 of buffer.
 @param outArg the <code>OutputStream</code> the buffer writes to.
 @param size the size of buffer in chars.
 @throws IllegalArgumentException if <code>size <= 0</code>.
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)outArg
                             withInt:(jint)size;

/*!
 @brief Closes this writer.
 The contents of the buffer are flushed, the target
 writer is closed, and the buffer is released. Only the first invocation
 of close has any effect.
 @throws IOException
 if an error occurs while closing this writer.
 */
- (void)close;

/*!
 @brief Flushes this writer.
 The contents of the buffer are committed to the
 target writer and it is then flushed.
 @throws IOException
 if an error occurs while flushing this writer.
 */
- (void)flush;

/*!
 @brief Writes a newline to this writer.
 On Android, this is <code>"\n"</code>.
 The target writer may or may not be flushed when a newline is written.
 @throws IOException
 if an error occurs attempting to write to this writer.
 */
- (void)newLine OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Writes <code>count</code> characters starting at <code>offset</code> in
 <code>buffer</code> to this writer.
 If <code>count</code> is greater than this
 writer's buffer, then the buffer is flushed and the characters are
 written directly to the target writer.
 @param buffer
 the array containing characters to write.
 @param offset
 the start position in <code>buffer</code> for retrieving characters.
 @param count
 the maximum number of characters to write.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>count < 0</code>, or if
 <code>offset + count</code> is greater than the size of
 <code>buffer</code>.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 */
- (void)writeWithCharArray:(IOSCharArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

/*!
 @brief Writes the character <code>oneChar</code> to this writer.
 If the buffer
 gets full by writing this character, this writer is flushed. Only the
 lower two bytes of the integer <code>oneChar</code> are written.
 @param oneChar
 the character to write.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 */
- (void)writeWithInt:(jint)oneChar;

/*!
 @brief Writes <code>count</code> characters starting at <code>offset</code> in <code>str</code>
 to this writer.
 If <code>count</code> is greater than this writer's buffer,
 then this writer is flushed and the remaining characters are written
 directly to the target writer. If count is negative no characters are
 written to the buffer. This differs from the behavior of the superclass.
 @param str
 the non-null String containing characters to write.
 @param offset
 the start position in <code>str</code> for retrieving characters.
 @param count
 maximum number of characters to write.
 @throws IOException
 if this writer has already been closed or another I/O error
 occurs.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>offset + count</code> is greater
 than the length of <code>str</code>.
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)offset
                  withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoBufferedWriter)

FOUNDATION_EXPORT void JavaIoBufferedWriter_initWithJavaIoWriter_(JavaIoBufferedWriter *self, JavaIoWriter *outArg);

FOUNDATION_EXPORT JavaIoBufferedWriter *new_JavaIoBufferedWriter_initWithJavaIoWriter_(JavaIoWriter *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoBufferedWriter_initWithJavaIoWriter_withInt_(JavaIoBufferedWriter *self, JavaIoWriter *outArg, jint size);

FOUNDATION_EXPORT JavaIoBufferedWriter *new_JavaIoBufferedWriter_initWithJavaIoWriter_withInt_(JavaIoWriter *outArg, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoBufferedWriter)

#endif // _JavaIoBufferedWriter_H_
