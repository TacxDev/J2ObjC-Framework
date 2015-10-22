//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/stream/StreamResult.java
//

#ifndef _JavaxXmlTransformStreamStreamResult_H_
#define _JavaxXmlTransformStreamStreamResult_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../javax/xml/transform/Result.h"

@class JavaIoFile;
@class JavaIoOutputStream;
@class JavaIoWriter;

/*!
 @brief <p>Acts as an holder for a transformation result,
 which may be XML, plain Text, HTML, or some other form of markup.
 </p>
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 */
@interface JavaxXmlTransformStreamStreamResult : NSObject < JavaxXmlTransformResult >

#pragma mark Public

/*!
 @brief Zero-argument default constructor.
 */
- (instancetype)init;

/*!
 @brief Construct a StreamResult from a File.
 @param f Must a non-null File reference.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)f;

/*!
 @brief Construct a StreamResult from a byte stream.
 Normally,
 a stream should be used rather than a reader, so that
 the transformer may use instructions contained in the
 transformation instructions to control the encoding.
 @param outputStream A valid OutputStream reference.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream;

/*!
 @brief Construct a StreamResult from a URL.
 @param systemId Must be a String that conforms to the URI syntax.
 */
- (instancetype)initWithNSString:(NSString *)systemId;

/*!
 @brief Construct a StreamResult from a character stream.
 Normally,
 a stream should be used rather than a reader, so that
 the transformer may use instructions contained in the
 transformation instructions to control the encoding.  However,
 there are times when it is useful to write to a character
 stream, such as when using a StringWriter.
 @param writer  A valid Writer reference.
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer;

/*!
 @brief Get the byte stream that was set with setOutputStream.
 @return The byte stream that was set with setOutputStream, or null
 if setOutputStream or the ByteStream constructor was not called.
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 @brief Get the system identifier that was set with setSystemId.
 @return The system identifier that was set with setSystemId, or null
 if setSystemId was not called.
 */
- (NSString *)getSystemId;

/*!
 @brief Get the character stream that was set with setWriter.
 @return The character stream that was set with setWriter, or null
 if setWriter or the Writer constructor was not called.
 */
- (JavaIoWriter *)getWriter;

/*!
 @brief Set the ByteStream that is to be written to.
 Normally,
 a stream should be used rather than a reader, so that
 the transformer may use instructions contained in the
 transformation instructions to control the encoding.
 @param outputStream A valid OutputStream reference.
 */
- (void)setOutputStreamWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream;

/*!
 @brief <p>Set the system ID from a <code>File</code> reference.
 </p>
 <p>Note the use of <code>File.toURI()</code> and <code>File.toURL()</code>.
 <code>toURI()</code> is preferred and used if possible.
 To allow JAXP 1.3 to run on J2SE 1.3, <code>toURL()</code>
 is used if a <code>NoSuchMethodException</code> is thrown by the attempt
 to use <code>toURI()</code>.</p>
 @param f Must a non-null File reference.
 */
- (void)setSystemIdWithJavaIoFile:(JavaIoFile *)f;

/*!
 @brief Set the systemID that may be used in association
 with the byte or character stream, or, if neither is set, use
 this value as a writeable URI (probably a file name).
 @param systemId The system identifier as a URI string.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

/*!
 @brief Set the writer that is to receive the result.
 Normally,
 a stream should be used rather than a writer, so that
 the transformer may use instructions contained in the
 transformation instructions to control the encoding.  However,
 there are times when it is useful to write to a writer,
 such as when using a StringWriter.
 @param writer  A valid Writer reference.
 */
- (void)setWriterWithJavaIoWriter:(JavaIoWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformStreamStreamResult)

FOUNDATION_EXPORT NSString *JavaxXmlTransformStreamStreamResult_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformStreamStreamResult, FEATURE_, NSString *)

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamResult_init(JavaxXmlTransformStreamStreamResult *self);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamResult *new_JavaxXmlTransformStreamStreamResult_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamResult_initWithJavaIoOutputStream_(JavaxXmlTransformStreamStreamResult *self, JavaIoOutputStream *outputStream);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamResult *new_JavaxXmlTransformStreamStreamResult_initWithJavaIoOutputStream_(JavaIoOutputStream *outputStream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamResult_initWithJavaIoWriter_(JavaxXmlTransformStreamStreamResult *self, JavaIoWriter *writer);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamResult *new_JavaxXmlTransformStreamStreamResult_initWithJavaIoWriter_(JavaIoWriter *writer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamResult_initWithNSString_(JavaxXmlTransformStreamStreamResult *self, NSString *systemId);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamResult *new_JavaxXmlTransformStreamStreamResult_initWithNSString_(NSString *systemId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamResult_initWithJavaIoFile_(JavaxXmlTransformStreamStreamResult *self, JavaIoFile *f);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamResult *new_JavaxXmlTransformStreamStreamResult_initWithJavaIoFile_(JavaIoFile *f) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformStreamStreamResult)

#endif // _JavaxXmlTransformStreamStreamResult_H_
