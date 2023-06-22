//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/PrintWriter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoPrintWriter")
#ifdef RESTRICT_JavaIoPrintWriter
#define INCLUDE_ALL_JavaIoPrintWriter 0
#else
#define INCLUDE_ALL_JavaIoPrintWriter 1
#endif
#undef RESTRICT_JavaIoPrintWriter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoPrintWriter_) && (INCLUDE_ALL_JavaIoPrintWriter || defined(INCLUDE_JavaIoPrintWriter))
#define JavaIoPrintWriter_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "java/io/Writer.h"

@class IOSCharArray;
@class IOSObjectArray;
@class JavaIoFile;
@class JavaIoOutputStream;
@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangDouble;
@class JavaLangFloat;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaNioCharsetCharset;
@class JavaUtilLocale;
@protocol JavaLangCharSequence;

/*!
 @brief Prints formatted representations of objects to a text-output stream.This
  class implements all of the <code>print</code> methods found in <code>PrintStream</code>
 .
 It does not contain methods for writing raw bytes, for which
  a program should use unencoded byte streams. 
 <p> Unlike the <code>PrintStream</code> class, if automatic flushing is enabled
  it will be done only when one of the <code>println</code>, <code>printf</code>, or 
 <code>format</code> methods is invoked, rather than whenever a newline character
  happens to be output.  These methods use the platform's own notion of line
  separator rather than the newline character. 
 <p> Methods in this class never throw I/O exceptions, although some of its
  constructors may.  The client may inquire as to whether any errors have
  occurred by invoking <code>checkError()</code>.
  
 <p> This class always replaces malformed and unmappable character sequences with
  the charset's default replacement string.
  The java.nio.charset.CharsetEncoder class should be used when more
  control over the encoding process is required.
 @author Frank Yellin
 @author Mark Reinhold
 @since 1.1
 */
@interface JavaIoPrintWriter : JavaIoWriter {
 @public
  /*!
   @brief The underlying character-output stream of this 
 <code>PrintWriter</code>.
   @since 1.2
   */
  JavaIoWriter *out_;
}

#pragma mark Public

/*!
 @brief Creates a new PrintWriter, without automatic line flushing, with the
  specified file.This convenience constructor creates the necessary
  intermediate <code>OutputStreamWriter</code>,
  which will encode characters using the default charset
  for this
  instance of the Java virtual machine.
 @param file The file to use as the destination of this writer.  If the file
           exists then it will be truncated to zero size; otherwise, a new
           file will be created.  The output will be written to the file
           and is buffered.
 @throw FileNotFoundException
 If the given file object does not denote an existing, writable
           regular file and a new regular file of that name cannot be
           created, or if some other error occurs while opening or
           creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(file.getPath())</code>
           denies write access to the file
 @since 1.5
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Creates a new PrintWriter, without automatic line flushing, with the
  specified file and charset.This convenience constructor creates the
  necessary intermediate <code>OutputStreamWriter</code>
 , which will encode characters using the provided
  charset.
 @param file The file to use as the destination of this writer.  If the file
           exists then it will be truncated to zero size; otherwise, a new
           file will be created.  The output will be written to the file
           and is buffered.
 @param charset A 
 charset
 @throw IOException
 if an I/O error occurs while opening or creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(file.getPath())</code>
           denies write access to the file
 @since 10
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)file
                   withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

/*!
 @brief Creates a new PrintWriter, without automatic line flushing, with the
  specified file and charset.This convenience constructor creates the
  necessary intermediate <code>OutputStreamWriter</code>
 , which will encode characters using the provided
  charset.
 @param file The file to use as the destination of this writer.  If the file
           exists then it will be truncated to zero size; otherwise, a new
           file will be created.  The output will be written to the file
           and is buffered.
 @param csn The name of a supported 
 charset
 @throw FileNotFoundException
 If the given file object does not denote an existing, writable
           regular file and a new regular file of that name cannot be
           created, or if some other error occurs while opening or
           creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(file.getPath())</code>
           denies write access to the file
 @throw UnsupportedEncodingException
 If the named charset is not supported
 @since 1.5
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)file
                                withNSString:(NSString *)csn;

/*!
 @brief Creates a new PrintWriter, without automatic line flushing, from an
  existing OutputStream.This convenience constructor creates the
  necessary intermediate OutputStreamWriter, which will convert characters
  into bytes using the default character encoding.
 @param outArg An output stream
 - seealso: java.io.OutputStreamWriter#OutputStreamWriter(java.io.OutputStream)
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Creates a new PrintWriter from an existing OutputStream.This
  convenience constructor creates the necessary intermediate
  OutputStreamWriter, which will convert characters into bytes using the
  default character encoding.
 @param outArg An output stream
 @param autoFlush A boolean; if true, the <code>println</code> ,                     
 <code>printf</code> , or <code>format</code>  methods will                     flush the output buffer
 - seealso: java.io.OutputStreamWriter#OutputStreamWriter(java.io.OutputStream)
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                         withBoolean:(jboolean)autoFlush;

/*!
 @brief Creates a new PrintWriter from an existing OutputStream.This
  convenience constructor creates the necessary intermediate
  OutputStreamWriter, which will convert characters into bytes using the
  specified charset.
 @param outArg An output stream
 @param autoFlush A boolean; if true, the <code>println</code> ,                     
 <code>printf</code> , or <code>format</code>  methods will                     flush the output buffer
 @param charset A 
 charset
 @since 10
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                         withBoolean:(jboolean)autoFlush
                           withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

/*!
 @brief Creates a new PrintWriter, without automatic line flushing, with the
  specified file name.This convenience constructor creates the necessary
  intermediate <code>OutputStreamWriter</code>,
  which will encode characters using the default charset
  for this
  instance of the Java virtual machine.
 @param fileName The name of the file to use as the destination of this writer.
           If the file exists then it will be truncated to zero size;
           otherwise, a new file will be created.  The output will be
           written to the file and is buffered.
 @throw FileNotFoundException
 If the given string does not denote an existing, writable
           regular file and a new regular file of that name cannot be
           created, or if some other error occurs while opening or
           creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(fileName)</code>
  denies write
           access to the file
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)fileName;

/*!
 @brief Creates a new PrintWriter, without automatic line flushing, with the
  specified file name and charset.This convenience constructor creates
  the necessary intermediate <code>OutputStreamWriter</code>
 , which will encode characters using the provided
  charset.
 @param fileName The name of the file to use as the destination of this writer.
           If the file exists then it will be truncated to zero size;
           otherwise, a new file will be created.  The output will be
           written to the file and is buffered.
 @param charset A 
 charset
 @throw IOException
 if an I/O error occurs while opening or creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(fileName)</code>
  denies write
           access to the file
 @since 10
 */
- (instancetype __nonnull)initWithNSString:(NSString *)fileName
                 withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

/*!
 @brief Creates a new PrintWriter, without automatic line flushing, with the
  specified file name and charset.This convenience constructor creates
  the necessary intermediate <code>OutputStreamWriter</code>
 , which will encode characters using the provided
  charset.
 @param fileName The name of the file to use as the destination of this writer.
           If the file exists then it will be truncated to zero size;
           otherwise, a new file will be created.  The output will be
           written to the file and is buffered.
 @param csn The name of a supported 
 charset
 @throw FileNotFoundException
 If the given string does not denote an existing, writable
           regular file and a new regular file of that name cannot be
           created, or if some other error occurs while opening or
           creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(fileName)</code>
  denies write
           access to the file
 @throw UnsupportedEncodingException
 If the named charset is not supported
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)fileName
                              withNSString:(NSString *)csn;

/*!
 @brief Creates a new PrintWriter, without automatic line flushing.
 @param outArg A character-output stream
 */
- (instancetype __nonnull)initWithJavaIoWriter:(JavaIoWriter *)outArg;

/*!
 @brief Creates a new PrintWriter.
 @param outArg A character-output stream
 @param autoFlush A boolean; if true, the  <tt> println </tt>
  ,                      <tt> printf </tt> , or  <tt> format </tt>  methods will
                      flush the output buffer
 */
- (instancetype __nonnull)initWithJavaIoWriter:(JavaIoWriter *)outArg
                                   withBoolean:(jboolean)autoFlush;

/*!
 @brief Appends the specified character to this writer.
 <p> An invocation of this method of the form <code>out.append(c)</code>
  behaves in exactly the same way as the invocation 
 @code
     out.write(c) 
 
@endcode
 @param c The 16-bit character to append
 @return This writer
 @since 1.5
 */
- (JavaIoPrintWriter * __nonnull)appendWithChar:(jchar)c;

/*!
 @brief Appends the specified character sequence to this writer.
 <p> An invocation of this method of the form <code>out.append(csq)</code>
  behaves in exactly the same way as the invocation 
 @code
     out.write(csq.toString()) 
 
@endcode
  
 <p> Depending on the specification of <code>toString</code> for the
  character sequence <code>csq</code>, the entire sequence may not be
  appended. For instance, invoking the <code>toString</code> method of a
  character buffer will return a subsequence whose content depends upon
  the buffer's position and limit.
 @param csq The character sequence to append.  If 
 <code>csq</code>  is          <code>null</code>
  , then the four characters <code>"null"</code>  are          appended to this writer.
 @return This writer
 @since 1.5
 */
- (JavaIoPrintWriter * __nonnull)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Appends a subsequence of the specified character sequence to this writer.
 <p> An invocation of this method of the form 
 <code>out.append(csq, start, end)</code>
  when <code>csq</code> is not <code>null</code>, behaves in
  exactly the same way as the invocation 
 @code
     out.write(csq.subSequence(start, end).toString()) 
 
@endcode
 @param csq The character sequence from which a subsequence will be
           appended.  If 
 <code>csq</code>  is <code>null</code> , then characters          will be appended as if 
 <code>csq</code>  contained the four          characters <code>"null"</code>
  .
 @param start The index of the first character in the subsequence
 @param end The index of the character following the last character in the
           subsequence
 @return This writer
 @throw IndexOutOfBoundsException
 If <code>start</code> or <code>end</code> are negative, <code>start</code>
           is greater than <code>end</code>, or <code>end</code> is greater than
           <code>csq.length()</code>
 @since 1.5
 */
- (JavaIoPrintWriter * __nonnull)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                                        withInt:(jint)start
                                                        withInt:(jint)end;

/*!
 @brief Flushes the stream if it's not closed and checks its error state.
 @return <code>true</code> if the print stream has encountered an error,
           either on the underlying output stream or during a format
           conversion.
 */
- (jboolean)checkError;

/*!
 @brief Closes the stream and releases any system resources associated
  with it.Closing a previously closed stream has no effect.
 - seealso: #checkError()
 */
- (void)close;

/*!
 @brief Flushes the stream.
 - seealso: #checkError()
 */
- (void)flush;

/*!
 @brief Writes a formatted string to this writer using the specified format
  string and arguments.If automatic flushing is enabled, calls to this
  method will flush the output buffer.
 @param l The 
 locale  to apply during          formatting.  If 
 <code>l</code>  is <code>null</code>  then no localization          is applied.
 @param format A format string as described in 
  <a href="../util/Formatter.html#syntax">
  Format string syntax </a> .
 @param args Arguments referenced by the format specifiers in the format
           string.  If there are more arguments than format specifiers, the
           extra arguments are ignored.  The number of arguments is
           variable and may be zero.  The maximum number of arguments is
           limited by the maximum dimension of a Java array as defined by
            <cite> The Java &trade;  Virtual Machine Specification </cite> .          The behaviour on a          <code>null</code>  argument depends on the  <a href="../util/Formatter.html#syntax"> conversion </a> .
 @throw java.util.IllegalFormatException
 If a format string contains an illegal syntax, a format
           specifier that is incompatible with the given arguments,
           insufficient arguments given the format string, or other
           illegal conditions.  For specification of all possible
           formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           formatter class specification.
 @throw NullPointerException
 If the <code>format</code> is <code>null</code>
 @return This writer
 @since 1.5
 */
- (JavaIoPrintWriter * __nonnull)formatWithJavaUtilLocale:(JavaUtilLocale *)l
                                             withNSString:(NSString *)format
                                        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Writes a formatted string to this writer using the specified format
  string and arguments.If automatic flushing is enabled, calls to this
  method will flush the output buffer.
 <p> The locale always used is the one returned by <code>Locale.getDefault()</code>
 , regardless of any
  previous invocations of other formatting methods on this object.
 @param format A format string as described in 
  <a href="../util/Formatter.html#syntax">
  Format string syntax </a> .
 @param args Arguments referenced by the format specifiers in the format
           string.  If there are more arguments than format specifiers, the
           extra arguments are ignored.  The number of arguments is
           variable and may be zero.  The maximum number of arguments is
           limited by the maximum dimension of a Java array as defined by
            <cite> The Java &trade;  Virtual Machine Specification </cite> .          The behaviour on a          <code>null</code>  argument depends on the  <a href="../util/Formatter.html#syntax"> conversion </a> .
 @throw java.util.IllegalFormatException
 If a format string contains an illegal syntax, a format
           specifier that is incompatible with the given arguments,
           insufficient arguments given the format string, or other
           illegal conditions.  For specification of all possible
           formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           Formatter class specification.
 @throw NullPointerException
 If the <code>format</code> is <code>null</code>
 @return This writer
 @since 1.5
 */
- (JavaIoPrintWriter * __nonnull)formatWithNSString:(NSString *)format
                                  withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Prints a boolean value.The string produced by <code>java.lang.String.valueOf(boolean)</code>
  is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the <code>write(int)</code>
  method.
 @param b The <code>boolean</code>  to be printed
 */
- (void)printWithBoolean:(jboolean)b;

/*!
 @brief Prints a character.The character is translated into one or more bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the <code>write(int)</code>
  method.
 @param c The <code>char</code>  to be printed
 */
- (void)printWithChar:(jchar)c;

/*!
 @brief Prints an array of characters.The characters are converted into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the <code>write(int)</code>
  method.
 @param s The array of chars to be printed
 @throw NullPointerExceptionIf <code>s</code> is <code>null</code>
 */
- (void)printWithCharArray:(IOSCharArray *)s;

/*!
 @brief Prints a double-precision floating-point number.The string produced by 
 <code>java.lang.String.valueOf(double)</code> is translated into
  bytes according to the platform's default character encoding, and these
  bytes are written in exactly the manner of the <code>write(int)</code>
  method.
 @param d The <code>double</code>  to be printed
 - seealso: java.lang.Double#toString(double)
 */
- (void)printWithDouble:(jdouble)d;

/*!
 @brief Prints a floating-point number.The string produced by <code>java.lang.String.valueOf(float)</code>
  is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the <code>write(int)</code>
  method.
 @param f The <code>float</code>  to be printed
 - seealso: java.lang.Float#toString(float)
 */
- (void)printWithFloat:(jfloat)f;

/*!
 @brief Prints an integer.The string produced by <code>java.lang.String.valueOf(int)</code>
  is translated into bytes according
  to the platform's default character encoding, and these bytes are
  written in exactly the manner of the <code>write(int)</code>
  method.
 @param i The <code>int</code>  to be printed
 - seealso: java.lang.Integer#toString(int)
 */
- (void)printWithInt:(jint)i;

/*!
 @brief Prints a long integer.The string produced by <code>java.lang.String.valueOf(long)</code>
  is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the <code>write(int)</code>
  method.
 @param l The <code>long</code>  to be printed
 - seealso: java.lang.Long#toString(long)
 */
- (void)printWithLong:(jlong)l;

/*!
 @brief Prints an object.The string produced by the <code>java.lang.String.valueOf(Object)</code>
  method is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the <code>write(int)</code>
  method.
 @param obj The <code>Object</code>  to be printed
 - seealso: java.lang.Object#toString()
 */
- (void)printWithId:(id)obj;

/*!
 @brief Prints a string.If the argument is <code>null</code> then the string 
 <code>"null"</code> is printed.
 Otherwise, the string's characters are
  converted into bytes according to the platform's default character
  encoding, and these bytes are written in exactly the manner of the 
 <code>write(int)</code> method.
 @param s The <code>String</code>  to be printed
 */
- (void)printWithNSString:(NSString *)s;

/*!
 @brief A convenience method to write a formatted string to this writer using
  the specified format string and arguments.If automatic flushing is
  enabled, calls to this method will flush the output buffer.
 <p> An invocation of this method of the form 
 <code>out.printf(l, format, args)</code>
  behaves in exactly the same way as the invocation 
 @code
     out.format(l, format, args) 
 
@endcode
 @param l The 
 locale  to apply during          formatting.  If 
 <code>l</code>  is <code>null</code>  then no localization          is applied.
 @param format A format string as described in 
  <a href="../util/Formatter.html#syntax">
  Format string syntax </a> .
 @param args Arguments referenced by the format specifiers in the format
           string.  If there are more arguments than format specifiers, the
           extra arguments are ignored.  The number of arguments is
           variable and may be zero.  The maximum number of arguments is
           limited by the maximum dimension of a Java array as defined by
            <cite> The Java &trade;  Virtual Machine Specification </cite> .          The behaviour on a          <code>null</code>  argument depends on the  <a href="../util/Formatter.html#syntax"> conversion </a> .
 @throw java.util.IllegalFormatException
 If a format string contains an illegal syntax, a format
           specifier that is incompatible with the given arguments,
           insufficient arguments given the format string, or other
           illegal conditions.  For specification of all possible
           formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           formatter class specification.
 @throw NullPointerException
 If the <code>format</code> is <code>null</code>
 @return This writer
 @since 1.5
 */
- (JavaIoPrintWriter * __nonnull)printfWithJavaUtilLocale:(JavaUtilLocale *)l
                                             withNSString:(NSString *)format
                                        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief A convenience method to write a formatted string to this writer using
  the specified format string and arguments.If automatic flushing is
  enabled, calls to this method will flush the output buffer.
 <p> An invocation of this method of the form 
 <code>out.printf(format, args)</code>
  behaves in exactly the same way as the invocation 
 @code
     out.format(format, args) 
 
@endcode
 @param format A format string as described in 
  <a href="../util/Formatter.html#syntax">
  Format string syntax </a> .
 @param args Arguments referenced by the format specifiers in the format
           string.  If there are more arguments than format specifiers, the
           extra arguments are ignored.  The number of arguments is
           variable and may be zero.  The maximum number of arguments is
           limited by the maximum dimension of a Java array as defined by
            <cite> The Java &trade;  Virtual Machine Specification </cite> .          The behaviour on a          <code>null</code>  argument depends on the  <a href="../util/Formatter.html#syntax"> conversion </a> .
 @throw java.util.IllegalFormatException
 If a format string contains an illegal syntax, a format
           specifier that is incompatible with the given arguments,
           insufficient arguments given the format string, or other
           illegal conditions.  For specification of all possible
           formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           formatter class specification.
 @throw NullPointerException
 If the <code>format</code> is <code>null</code>
 @return This writer
 @since 1.5
 */
- (JavaIoPrintWriter * __nonnull)printfWithNSString:(NSString *)format
                                  withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Terminates the current line by writing the line separator string.The
  line separator string is defined by the system property 
 <code>line.separator</code>, and is not necessarily a single newline
  character (<code>'\n'</code>).
 */
- (void)println;

/*!
 @brief Prints a boolean value and then terminates the line.This method behaves
  as though it invokes <code>print(boolean)</code> and then 
 <code>println()</code>.
 @param x the <code>boolean</code>  value to be printed
 */
- (void)printlnWithBoolean:(jboolean)x;

/*!
 @brief Prints a character and then terminates the line.This method behaves as
  though it invokes <code>print(char)</code> and then <code>println()</code>
 .
 @param x the <code>char</code>  value to be printed
 */
- (void)printlnWithChar:(jchar)x;

/*!
 @brief Prints an array of characters and then terminates the line.This method
  behaves as though it invokes <code>print(char[])</code> and then 
 <code>println()</code>.
 @param x the array of <code>char</code>  values to be printed
 */
- (void)printlnWithCharArray:(IOSCharArray *)x;

/*!
 @brief Prints a double-precision floating-point number and then terminates the
  line.This method behaves as though it invokes <code>print(double)</code>
  and then <code>println()</code>.
 @param x the <code>double</code>  value to be printed
 */
- (void)printlnWithDouble:(jdouble)x;

/*!
 @brief Prints a floating-point number and then terminates the line.This method
  behaves as though it invokes <code>print(float)</code> and then 
 <code>println()</code>.
 @param x the <code>float</code>  value to be printed
 */
- (void)printlnWithFloat:(jfloat)x;

/*!
 @brief Prints an integer and then terminates the line.This method behaves as
  though it invokes <code>print(int)</code> and then <code>println()</code>
 .
 @param x the <code>int</code>  value to be printed
 */
- (void)printlnWithInt:(jint)x;

/*!
 @brief Prints a long integer and then terminates the line.This method behaves
  as though it invokes <code>print(long)</code> and then 
 <code>println()</code>.
 @param x the <code>long</code>  value to be printed
 */
- (void)printlnWithLong:(jlong)x;

/*!
 @brief Prints an Object and then terminates the line.This method calls
  at first String.valueOf(x) to get the printed object's string value,
  then behaves as
  though it invokes <code>print(String)</code> and then 
 <code>println()</code>.
 @param x The <code>Object</code>  to be printed.
 */
- (void)printlnWithId:(id)x;

/*!
 @brief Prints a String and then terminates the line.This method behaves as
  though it invokes <code>print(String)</code> and then 
 <code>println()</code>.
 @param x the <code>String</code>  value to be printed
 */
- (void)printlnWithNSString:(NSString *)x;

/*!
 @brief Writes an array of characters.This method cannot be inherited from the
  Writer class because it must suppress I/O exceptions.
 @param buf Array of characters to be written
 */
- (void)writeWithCharArray:(IOSCharArray *)buf;

/*!
 @brief Writes A Portion of an array of characters.
 @param buf Array of characters
 @param off Offset from which to start writing characters
 @param len Number of characters to write
 @throw IndexOutOfBoundsException
 If the values of the <code>off</code> and <code>len</code> parameters
           cause the corresponding method of the underlying <code>Writer</code>
           to throw an <code>IndexOutOfBoundsException</code>
 */
- (void)writeWithCharArray:(IOSCharArray *)buf
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes a single character.
 @param c int specifying a character to be written.
 */
- (void)writeWithInt:(jint)c;

/*!
 @brief Writes a string.This method cannot be inherited from the Writer class
  because it must suppress I/O exceptions.
 @param s String to be written
 */
- (void)writeWithNSString:(NSString *)s;

/*!
 @brief Writes a portion of a string.
 @param s A String
 @param off Offset from which to start writing characters
 @param len Number of characters to write
 @throw IndexOutOfBoundsException
 If the values of the <code>off</code> and <code>len</code> parameters
           cause the corresponding method of the underlying <code>Writer</code>
           to throw an <code>IndexOutOfBoundsException</code>
 */
- (void)writeWithNSString:(NSString *)s
                  withInt:(jint)off
                  withInt:(jint)len;

#pragma mark Protected

/*!
 @brief Clears the error state of this stream.
 <p> This method will cause subsequent invocations of <code>checkError()</code>
  to return <code>false</code> until another write
  operation fails and invokes <code>setError()</code>.
 @since 1.6
 */
- (void)clearError;

/*!
 @brief Indicates that an error has occurred.
 <p> This method will cause subsequent invocations of <code>checkError()</code>
  to return <code>true</code> until <code>clearError()</code>
  is invoked.
 */
- (void)setError;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPrintWriter)

J2OBJC_FIELD_SETTER(JavaIoPrintWriter, out_, JavaIoWriter *)

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithJavaIoWriter_(JavaIoPrintWriter *self, JavaIoWriter *outArg);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithJavaIoWriter_(JavaIoWriter *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithJavaIoWriter_(JavaIoWriter *outArg);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithJavaIoWriter_withBoolean_(JavaIoPrintWriter *self, JavaIoWriter *outArg, jboolean autoFlush);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithJavaIoWriter_withBoolean_(JavaIoWriter *outArg, jboolean autoFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithJavaIoWriter_withBoolean_(JavaIoWriter *outArg, jboolean autoFlush);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithJavaIoOutputStream_(JavaIoPrintWriter *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithJavaIoOutputStream_withBoolean_(JavaIoPrintWriter *self, JavaIoOutputStream *outArg, jboolean autoFlush);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean autoFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean autoFlush);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithJavaIoOutputStream_withBoolean_withJavaNioCharsetCharset_(JavaIoPrintWriter *self, JavaIoOutputStream *outArg, jboolean autoFlush, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithJavaIoOutputStream_withBoolean_withJavaNioCharsetCharset_(JavaIoOutputStream *outArg, jboolean autoFlush, JavaNioCharsetCharset *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithJavaIoOutputStream_withBoolean_withJavaNioCharsetCharset_(JavaIoOutputStream *outArg, jboolean autoFlush, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithNSString_(JavaIoPrintWriter *self, NSString *fileName);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithNSString_(NSString *fileName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithNSString_(NSString *fileName);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithNSString_withNSString_(JavaIoPrintWriter *self, NSString *fileName, NSString *csn);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithNSString_withNSString_(NSString *fileName, NSString *csn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithNSString_withNSString_(NSString *fileName, NSString *csn);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithNSString_withJavaNioCharsetCharset_(JavaIoPrintWriter *self, NSString *fileName, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithNSString_withJavaNioCharsetCharset_(NSString *fileName, JavaNioCharsetCharset *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithNSString_withJavaNioCharsetCharset_(NSString *fileName, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithJavaIoFile_(JavaIoPrintWriter *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithJavaIoFile_withNSString_(JavaIoPrintWriter *self, JavaIoFile *file, NSString *csn);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *csn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *csn);

FOUNDATION_EXPORT void JavaIoPrintWriter_initWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoPrintWriter *self, JavaIoFile *file, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT JavaIoPrintWriter *new_JavaIoPrintWriter_initWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoFile *file, JavaNioCharsetCharset *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintWriter *create_JavaIoPrintWriter_initWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoFile *file, JavaNioCharsetCharset *charset);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPrintWriter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoPrintWriter")
