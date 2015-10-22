//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLOutput.java
//

#ifndef _JavaSqlSQLOutput_H_
#define _JavaSqlSQLOutput_H_

#include "../../J2ObjC_header.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoReader;
@class JavaMathBigDecimal;
@class JavaNetURL;
@class JavaSqlDate;
@class JavaSqlTime;
@class JavaSqlTimestamp;
@protocol JavaSqlArray;
@protocol JavaSqlBlob;
@protocol JavaSqlClob;
@protocol JavaSqlNClob;
@protocol JavaSqlRef;
@protocol JavaSqlRowId;
@protocol JavaSqlSQLData;
@protocol JavaSqlSQLXML;
@protocol JavaSqlStruct;

/*!
 @brief The interface for an output stream used to write attributes of an SQL <i>User
 Defined Type</i> (UDT) to the database.
 This interface is used for custom
 mapping of types and is called by the JDBC driver. It is not intended to be
 used by applications.
 <p>
 When an object which implements the <code>SQLData</code> interface is used as an
 argument to an SQL statement, the JDBC driver calls the method <code>SQLData.getSQLType</code>
  to establish the type of the SQL UDT that is being
 passed. The driver then creates an <code>SQLOutput</code> stream and passes it to
 the <code>SQLData.writeSQL</code> method, which in turn uses the appropriate
 <code>SQLOutput</code> writer methods to write the data from the <code>SQLData</code>
 object into the stream according to the defined mapping.
 */
@protocol JavaSqlSQLOutput < NSObject, JavaObject >

/*!
 @brief Write a <code>String</code> value into the output stream.
 @param theString
 the <code>String</code> to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeStringWithNSString:(NSString *)theString;

/*!
 @brief Write a <code>boolean</code> value into the output stream.
 @param theFlag
 the <code>boolean</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeBooleanWithBoolean:(jboolean)theFlag;

/*!
 @brief Write a <code>byte</code> value into the output stream.
 @param theByte
 the <code>byte</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeByteWithByte:(jbyte)theByte;

/*!
 @brief Write a <code>short</code> value into the output stream.
 @param theShort
 the <code>short</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeShortWithShort:(jshort)theShort;

/*!
 @brief Write an <code>int</code> value into the output stream.
 @param theInt
 the <code>int</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeIntWithInt:(jint)theInt;

/*!
 @brief Write a <code>long</code> value into the output stream.
 @param theLong
 the <code>long</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeLongWithLong:(jlong)theLong;

/*!
 @brief Write a <code>float</code> value into the output stream.
 @param theFloat
 the <code>float</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeFloatWithFloat:(jfloat)theFloat;

/*!
 @brief Write a <code>double</code> value into the output stream.
 @param theDouble
 the <code>double</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeDoubleWithDouble:(jdouble)theDouble;

/*!
 @brief Write a <code>java.math.BigDecimal</code> value into the output stream.
 @param theBigDecimal
 the <code>BigDecimal</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeBigDecimalWithJavaMathBigDecimal:(JavaMathBigDecimal *)theBigDecimal;

/*!
 @brief Write an array of bytes into the output stream.
 @param theBytes
 the array of bytes to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeBytesWithByteArray:(IOSByteArray *)theBytes;

/*!
 @brief Write a <code>java.sql.Date</code> value into the output stream.
 @param theDate
 the <code>Date</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeDateWithJavaSqlDate:(JavaSqlDate *)theDate;

/*!
 @brief Write a <code>java.sql.Time</code> value into the output stream.
 @param theTime
 the <code>Time</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeTimeWithJavaSqlTime:(JavaSqlTime *)theTime;

/*!
 @brief Write a <code>java.sql.Timestamp</code> value into the output stream.
 @param theTimestamp
 the <code>Timestamp</code> value to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeTimestampWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

/*!
 @brief Write a stream of unicode characters into the output stream.
 @param theStream
 the stream of unicode characters to write, as a <code>java.io.Reader</code>
  object.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeCharacterStreamWithJavaIoReader:(JavaIoReader *)theStream;

/*!
 @brief Write a stream of ASCII characters into the output stream.
 @param theStream
 the stream of ASCII characters to write, as a <code>java.io.InputStream</code>
  object
 @throws SQLException
 if a database error occurs.
 */
- (void)writeAsciiStreamWithJavaIoInputStream:(JavaIoInputStream *)theStream;

/*!
 @brief Write a stream of uninterpreted bytes into the output stream.
 @param theStream
 the stream of bytes to write, as a <code>java.io.InputStream</code>
 object
 @throws SQLException
 if a database error occurs.
 */
- (void)writeBinaryStreamWithJavaIoInputStream:(JavaIoInputStream *)theStream;

/*!
 @brief Write an <code>SQLData</code> object into the output stream.
 <p>
 If the <code>SQLData</code> object is null, writes <code>NULL</code> to the stream.
 <p>
 Otherwise, calls the <code>SQLData.writeSQL</code> method of the object, which
 writes the object's attributes to the stream by calling the appropriate
 SQLOutput writer methods for each attribute, in order. The order of the
 attributes is the order they are listed in the SQL definition of the User
 Defined Type.
 @param theObject
 the <code>SQLData</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeObjectWithJavaSqlSQLData:(id<JavaSqlSQLData>)theObject;

/*!
 @brief Write an SQL <code>Ref</code> value into the output stream.
 @param theRef
 the <code>java.sql.Ref</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeRefWithJavaSqlRef:(id<JavaSqlRef>)theRef;

/*!
 @brief Write an SQL <code>Blob</code> value into the output stream.
 @param theBlob
 the <code>java.sql.Blob</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeBlobWithJavaSqlBlob:(id<JavaSqlBlob>)theBlob;

/*!
 @brief Write an SQL <code>Clob</code> value into the output stream.
 @param theClob
 the <code>java.sql.Clob</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeClobWithJavaSqlClob:(id<JavaSqlClob>)theClob;

/*!
 @brief Write an SQL <code>Struct</code> value into the output stream.
 @param theStruct
 the <code>java.sql.Struct</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeStructWithJavaSqlStruct:(id<JavaSqlStruct>)theStruct;

/*!
 @brief Write an SQL <code>Array</code> value into the output stream.
 @param theArray
 the <code>java.sql.Array</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeArrayWithJavaSqlArray:(id<JavaSqlArray>)theArray;

/*!
 @brief Write a <code>URL</code> into the output stream as an SQL DATALINK.
 @param theURL
 the datalink value as a <code>java.net.URL</code> to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeURLWithJavaNetURL:(JavaNetURL *)theURL;

/*!
 @brief Write a <code>String</code> into the output stream as an SQL NCHAR, NVARCHAR,
 or LONGNVARCHAR.
 @param theString
 the <code>String</code> to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeNStringWithNSString:(NSString *)theString;

/*!
 @brief Write a <code>Clob</code> into the output stream as an SQL NCLOB.
 @param theNClob
 the <code>java.sql.Clob</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeNClobWithJavaSqlNClob:(id<JavaSqlNClob>)theNClob;

/*!
 @brief Write a <code>RowId</code> into the output stream as an SQL ROWID.
 @param theRowId
 the <code>java.sql.RowId</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeRowIdWithJavaSqlRowId:(id<JavaSqlRowId>)theRowId;

/*!
 @brief Write a <code>SQLXML</code> into the output stream as an SQL XML.
 @param theXml
 the <code>java.sql.SQLXML</code> object to write.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeSQLXMLWithJavaSqlSQLXML:(id<JavaSqlSQLXML>)theXml;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLOutput)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLOutput)

#endif // _JavaSqlSQLOutput_H_
