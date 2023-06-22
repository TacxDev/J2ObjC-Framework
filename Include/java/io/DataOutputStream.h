//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/DataOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoDataOutputStream")
#ifdef RESTRICT_JavaIoDataOutputStream
#define INCLUDE_ALL_JavaIoDataOutputStream 0
#else
#define INCLUDE_ALL_JavaIoDataOutputStream 1
#endif
#undef RESTRICT_JavaIoDataOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoDataOutputStream_) && (INCLUDE_ALL_JavaIoDataOutputStream || defined(INCLUDE_JavaIoDataOutputStream))
#define JavaIoDataOutputStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include "java/io/FilterOutputStream.h"

#define RESTRICT_JavaIoDataOutput 1
#define INCLUDE_JavaIoDataOutput 1
#include "java/io/DataOutput.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangFloat;
@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief A data output stream lets an application write primitive Java data
  types to an output stream in a portable way.An application can
  then use a data input stream to read the data back in.
 @author unascribed
 - seealso: java.io.DataInputStream
 @since 1.0
 */
@interface JavaIoDataOutputStream : JavaIoFilterOutputStream < JavaIoDataOutput > {
 @public
  /*!
   @brief The number of bytes written to the data output stream so far.
   If this counter overflows, it will be wrapped to Integer.MAX_VALUE.
   */
  jint written_;
}

#pragma mark Public

/*!
 @brief Creates a new data output stream to write data to the specified
  underlying output stream.The counter <code>written</code> is
  set to zero.
 @param outArg the underlying output stream, to be saved for later                 use.
 - seealso: java.io.FilterOutputStream#out
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Flushes this data output stream.This forces any buffered output
  bytes to be written out to the stream.
 <p>
  The <code>flush</code> method of <code>DataOutputStream</code>
  calls the <code>flush</code> method of its underlying output stream.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 - seealso: java.io.OutputStream#flush()
 */
- (void)flush;

/*!
 @brief Returns the current value of the counter <code>written</code>,
  the number of bytes written to this data output stream so far.
 If the counter overflows, it will be wrapped to Integer.MAX_VALUE.
 @return the value of the <code>written</code> field.
 - seealso: java.io.DataOutputStream#written
 */
- (jint)size;

/*!
 @brief Writes <code>len</code> bytes from the specified byte array
  starting at offset <code>off</code> to the underlying output stream.
 If no exception is thrown, the counter <code>written</code> is
  incremented by <code>len</code>.
 @param b the data.
 @param off the start offset in the data.
 @param len the number of bytes to write.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes the specified byte (the low eight bits of the argument 
 <code>b</code>) to the underlying output stream.If no exception
  is thrown, the counter <code>written</code> is incremented by 
 <code>1</code>.
 <p>
  Implements the <code>write</code> method of <code>OutputStream</code>.
 @param b the  <code> byte </code>  to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeWithInt:(jint)b;

/*!
 @brief Writes a <code>boolean</code> to the underlying output stream as
  a 1-byte value.The value <code>true</code> is written out as the
  value <code>(byte)1</code>; the value <code>false</code> is
  written out as the value <code>(byte)0</code>.
 If no exception is
  thrown, the counter <code>written</code> is incremented by 
 <code>1</code>.
 @param v a  <code> boolean </code>  value to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeBooleanWithBoolean:(jboolean)v;

/*!
 @brief Writes out a <code>byte</code> to the underlying output stream as
  a 1-byte value.If no exception is thrown, the counter 
 <code>written</code> is incremented by <code>1</code>.
 @param v a  <code> byte </code>  value to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeByteWithInt:(jint)v;

/*!
 @brief Writes out the string to the underlying output stream as a
  sequence of bytes.Each character in the string is written out, in
  sequence, by discarding its high eight bits.
 If no exception is
  thrown, the counter <code>written</code> is incremented by the
  length of <code>s</code>.
 @param s a string of bytes to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeBytesWithNSString:(NSString *)s;

/*!
 @brief Writes a <code>char</code> to the underlying output stream as a
  2-byte value, high byte first.If no exception is thrown, the
  counter <code>written</code> is incremented by <code>2</code>.
 @param v a  <code> char </code>  value to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeCharWithInt:(jint)v;

/*!
 @brief Writes a string to the underlying output stream as a sequence of
  characters.Each character is written to the data output stream as
  if by the <code>writeChar</code> method.
 If no exception is
  thrown, the counter <code>written</code> is incremented by twice
  the length of <code>s</code>.
 @param s a  <code> String </code>  value to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.DataOutputStream#writeChar(int)
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeCharsWithNSString:(NSString *)s;

/*!
 @brief Converts the double argument to a <code>long</code> using the 
 <code>doubleToLongBits</code> method in class <code>Double</code>,
  and then writes that <code>long</code> value to the underlying
  output stream as an 8-byte quantity, high byte first.If no
  exception is thrown, the counter <code>written</code> is
  incremented by <code>8</code>.
 @param v a  <code> double </code>  value to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 - seealso: java.lang.Double#doubleToLongBits(double)
 */
- (void)writeDoubleWithDouble:(jdouble)v;

/*!
 @brief Converts the float argument to an <code>int</code> using the 
 <code>floatToIntBits</code> method in class <code>Float</code>,
  and then writes that <code>int</code> value to the underlying
  output stream as a 4-byte quantity, high byte first.If no
  exception is thrown, the counter <code>written</code> is
  incremented by <code>4</code>.
 @param v a  <code> float </code>  value to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 - seealso: java.lang.Float#floatToIntBits(float)
 */
- (void)writeFloatWithFloat:(jfloat)v;

/*!
 @brief Writes an <code>int</code> to the underlying output stream as four
  bytes, high byte first.If no exception is thrown, the counter 
 <code>written</code> is incremented by <code>4</code>.
 @param v an  <code> int </code>  to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeIntWithInt:(jint)v;

/*!
 @brief Writes a <code>long</code> to the underlying output stream as eight
  bytes, high byte first.In no exception is thrown, the counter 
 <code>written</code> is incremented by <code>8</code>.
 @param v a  <code> long </code>  to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeLongWithLong:(jlong)v;

/*!
 @brief Writes a <code>short</code> to the underlying output stream as two
  bytes, high byte first.If no exception is thrown, the counter 
 <code>written</code> is incremented by <code>2</code>.
 @param v a  <code> short </code>  to be written.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterOutputStream#out
 */
- (void)writeShortWithInt:(jint)v;

/*!
 @brief Writes a string to the underlying output stream using 
 <a href="DataInput.html#modified-utf-8">modified UTF-8</a>
  encoding in a machine-independent manner.
 <p>
  First, two bytes are written to the output stream as if by the 
 <code>writeShort</code> method giving the number of bytes to
  follow. This value is the number of bytes actually written out,
  not the length of the string. Following the length, each character
  of the string is output, in sequence, using the modified UTF-8 encoding
  for the character. If no exception is thrown, the counter 
 <code>written</code> is incremented by the total number of
  bytes written to the output stream. This will be at least two
  plus the length of <code>str</code>, and at most two plus
  thrice the length of <code>str</code>.
 @param str a string to be written.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)writeUTFWithNSString:(NSString *)str;

#pragma mark Package-Private

/*!
 @brief Writes a string to the specified DataOutput using 
 <a href="DataInput.html#modified-utf-8">modified UTF-8</a>
  encoding in a machine-independent manner.
 <p>
  First, two bytes are written to out as if by the <code>writeShort</code>
  method giving the number of bytes to follow. This value is the number of
  bytes actually written out, not the length of the string. Following the
  length, each character of the string is output, in sequence, using the
  modified UTF-8 encoding for the character. If no exception is thrown, the
  counter <code>written</code> is incremented by the total number of
  bytes written to the output stream. This will be at least two
  plus the length of <code>str</code>, and at most two plus
  thrice the length of <code>str</code>.
 @param str a string to be written.
 @param outArg destination to write to
 @return The number of bytes written out.
 @throw IOExceptionif an I/O error occurs.
 */
+ (jint)writeUTFWithNSString:(NSString *)str
        withJavaIoDataOutput:(id<JavaIoDataOutput>)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoDataOutputStream)

FOUNDATION_EXPORT void JavaIoDataOutputStream_initWithJavaIoOutputStream_(JavaIoDataOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoDataOutputStream *new_JavaIoDataOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoDataOutputStream *create_JavaIoDataOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

FOUNDATION_EXPORT jint JavaIoDataOutputStream_writeUTFWithNSString_withJavaIoDataOutput_(NSString *str, id<JavaIoDataOutput> outArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoDataOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoDataOutputStream")