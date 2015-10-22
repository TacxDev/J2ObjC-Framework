//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLData.java
//

#ifndef _JavaSqlSQLData_H_
#define _JavaSqlSQLData_H_

#include "../../J2ObjC_header.h"

@protocol JavaSqlSQLInput;
@protocol JavaSqlSQLOutput;

/*!
 @brief An interface for the custom mapping of an SQL <i>User Defined Type</i> (UDT)
 to a Java class.
 The Java class object is added to the connection's type map
 paired with the SQL name of the corresponding UDT.
 <p>
 Usually within an implementation of <code>SQLData</code>, there is a corresponding
 field for every attribute of an SQL type, but only one field, if the type is
 SQL <code>DISTINCT</code>. When the UDT is returned within a <code>ResultSet</code>, it
 is accessed with the <code>ResultSet.getObject</code> method and is returned as an
 object which is an instance of the class defined by the <code>SQLData</code>
 mapping. The application can use this object just like any other Java object
 and can store changes back into the database using the
 <code>PreparedStatement.setObject</code> method which performs the reverse mapping
 into the SQL <code>UDT</code>.
 <p>
 Normally the implementation of a custom mapping is generated by
 a tool requiring the name of the SQL <code>UDT</code>, the name
 of the class which it is going to be mapped to, and the field names to which
 the UDT attributes are mapped. The tool can then implement the <code>SQLData</code>
 , <code>readSQL</code>, and <code>writeSQL</code> methods. <code>readSQL</code> reads
 attributes from an <code>SQLInput</code> object, and <code>writeSQL</code> writes them.
 This is done via <code>SQLInput</code> and <code>SQLOutput</code> method calls
 respectively.
 <p>
 Ordinarily an application would not call <code>SQLData</code> methods directly.
 Similarly <code>SQLInput</code> and <code>SQLOutput</code> methods are not usually
 called directly.
 */
@protocol JavaSqlSQLData < NSObject, JavaObject >

/*!
 @brief Gets the SQL name of the <i>User Defined Type</i> (UDT) that this object
 represents.
 This method, usually invoked by the JDBC driver, retrieves
 the name of the UDT instance associated with this <code>SQLData</code> object.
 @return a string with UDT type name for this object mapping, passed to
 <code>readSQL</code> when the object was created.
 @throws SQLException
 if a database error occurs.
 */
- (NSString *)getSQLTypeName;

/*!
 @brief Reads data from the database into this object.
 This method follows these
 steps:
 <p>
 <ul>
 <li>Utilize the passed input stream to read the attributes or entries of
 the SQL type</li>
 <li>This is carried out by reading each entry from the input stream,
 ordered as they are in the SQL definition.</li>
 <li>Assign the data to the appropriate fields or elements. This is done
 by calling the relevant reader method for the type involved (e.g. <code>SQLInput.readString</code>
 , <code>SQLInputreadBigDecimal</code>). If the type is
 distinct, then read its only data entry. For structured types, read every
 entry.</li>
 </ul>
 <p>
 The supplied input stream is typically initialized by the calling JDBC
 driver with the type map before <code>readSQL</code> is called.
 @param stream
 the <code>SQLInput</code> stream from which the type map data is
 read for the custom mapping.
 @param typeName
 the SQL type name for the type which is being mapped.
 @throws SQLException
 if a database error occurs.
 */
- (void)readSQLWithJavaSqlSQLInput:(id<JavaSqlSQLInput>)stream
                      withNSString:(NSString *)typeName;

/*!
 @brief Writes the object to a supplied <code>SQLOutput</code> data stream, writing it
 out as an SQL value to the data source.
 <p>
 This method follows the following steps:
 <ul>
 <li>Write each attribute of the SQL type to the output stream.</li>
 <li>Write each item by calling a method on the output stream, in the
 order they appear in the SQL definition of the type. Use the appropriate
 <code>SQLOutput</code> methods (e.g. <code>writeInt</code>, <code>writeString</code>).
 Write a single data element for a distinct type. For a structured type,
 write a value for each attribute of the the SQL type.</li>
 </ul>
 @param stream
 the <code>SQLOutput</code> stream to use to write out the data for
 the custom mapping.
 @throws SQLException
 if a database error occurs.
 */
- (void)writeSQLWithJavaSqlSQLOutput:(id<JavaSqlSQLOutput>)stream;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLData)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLData)

#endif // _JavaSqlSQLData_H_
