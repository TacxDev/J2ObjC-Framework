//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/sql/DataSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSqlDataSource")
#ifdef RESTRICT_JavaxSqlDataSource
#define INCLUDE_ALL_JavaxSqlDataSource 0
#else
#define INCLUDE_ALL_JavaxSqlDataSource 1
#endif
#undef RESTRICT_JavaxSqlDataSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSqlDataSource_) && (INCLUDE_ALL_JavaxSqlDataSource || defined(INCLUDE_JavaxSqlDataSource))
#define JavaxSqlDataSource_

#define RESTRICT_JavaxSqlCommonDataSource 1
#define INCLUDE_JavaxSqlCommonDataSource 1
#include "javax/sql/CommonDataSource.h"

#define RESTRICT_JavaSqlWrapper 1
#define INCLUDE_JavaSqlWrapper 1
#include "java/sql/Wrapper.h"

@protocol JavaSqlConnection;

/*!
 @brief <p>A factory for connections to the physical data source that this 
 <code>DataSource</code> object represents.An alternative to the 
 <code>DriverManager</code> facility, a <code>DataSource</code> object
  is the preferred means of getting a connection.
 An object that implements the 
 <code>DataSource</code> interface will typically be
  registered with a naming service based on the
  Java<sup><font size=-2>TM</font></sup> Naming and Directory (JNDI) API. 
 <P>
  The <code>DataSource</code> interface is implemented by a driver vendor.
  There are three types of implementations: 
 <OL>
    <LI>Basic implementation -- produces a standard <code>Connection</code>
        object   
 <LI>Connection pooling implementation -- produces a <code>Connection</code>
        object that will automatically participate in connection pooling.  This
        implementation works with a middle-tier connection pooling manager.   
 <LI>Distributed transaction implementation -- produces a
        <code>Connection</code> object that may be used for distributed
        transactions and almost always participates in connection pooling.
        This implementation works with a middle-tier
        transaction manager and almost always with a connection
        pooling manager. 
 </OL>
  <P>
  A <code>DataSource</code> object has properties that can be modified
  when necessary.  For example, if the data source is moved to a different
  server, the property for the server can be changed.  The benefit is that
  because the data source's properties can be changed, any code accessing
  that data source does not need to be changed. 
 <P>
  A driver that is accessed via a <code>DataSource</code> object does not
  register itself with the <code>DriverManager</code>.  Rather, a 
 <code>DataSource</code> object is retrieved though a lookup operation
  and then used to create a <code>Connection</code> object.  With a basic
  implementation, the connection obtained through a <code>DataSource</code>
  object is identical to a connection obtained through the 
 <code>DriverManager</code> facility.
 @since 1.4
 */
@protocol JavaxSqlDataSource < JavaxSqlCommonDataSource, JavaSqlWrapper, JavaObject >

/*!
 @brief <p>Attempts to establish a connection with the data source that
  this <code>DataSource</code> object represents.
 @return a connection to the data source
 @throw SQLExceptionif a database access error occurs
 */
- (id<JavaSqlConnection>)getConnection;

/*!
 @brief <p>Attempts to establish a connection with the data source that
  this <code>DataSource</code> object represents.
 @param username the database user on whose behalf the connection is   being made
 @param password the user's password
 @return a connection to the data source
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (id<JavaSqlConnection>)getConnectionWithNSString:(NSString *)username
                                      withNSString:(NSString *)password;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSqlDataSource)

J2OBJC_TYPE_LITERAL_HEADER(JavaxSqlDataSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSqlDataSource")