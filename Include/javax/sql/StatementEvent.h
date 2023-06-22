//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/sql/StatementEvent.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSqlStatementEvent")
#ifdef RESTRICT_JavaxSqlStatementEvent
#define INCLUDE_ALL_JavaxSqlStatementEvent 0
#else
#define INCLUDE_ALL_JavaxSqlStatementEvent 1
#endif
#undef RESTRICT_JavaxSqlStatementEvent

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSqlStatementEvent_) && (INCLUDE_ALL_JavaxSqlStatementEvent || defined(INCLUDE_JavaxSqlStatementEvent))
#define JavaxSqlStatementEvent_

#define RESTRICT_JavaUtilEventObject 1
#define INCLUDE_JavaUtilEventObject 1
#include "java/util/EventObject.h"

@class JavaSqlSQLException;
@protocol JavaSqlPreparedStatement;
@protocol JavaxSqlPooledConnection;

/*!
 @brief A <code>StatementEvent</code> is sent to all <code>StatementEventListener</code>s which were
  registered with a <code>PooledConnection</code>.This occurs when the driver determines that a 
 <code>PreparedStatement</code> that is associated with the <code>PooledConnection</code> has been closed or the driver determines
  is invalid.
 <p>
 @since 1.6
 */
@interface JavaxSqlStatementEvent : JavaUtilEventObject

#pragma mark Public

/*!
 @brief Constructs a <code>StatementEvent</code> with the specified <code>PooledConnection</code> and 
 <code>PreparedStatement</code>.The <code>SQLException</code> contained in the event defaults to
  null.
 <p>
 @param con The  <code> PooledConnection </code>  that the closed or invalid   <code> PreparedStatement
  </code> is associated with.
 @param statement The  <code> PreparedStatement </code>  that is bieng closed or is invalid   <p>
 @throw IllegalArgumentExceptionif <code>con</code> is null.
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaxSqlPooledConnection:(id<JavaxSqlPooledConnection>)con
                              withJavaSqlPreparedStatement:(id<JavaSqlPreparedStatement>)statement;

/*!
 @brief Constructs a <code>StatementEvent</code> with the specified <code>PooledConnection</code>,
  <code>PreparedStatement</code> and <code>SQLException</code>
  <p>
 @param con The  <code> PooledConnection </code>  that the closed or invalid  <code> PreparedStatement </code>  is associated with.
 @param statement The  <code> PreparedStatement </code>  that is being closed or is invalid
 @param exception The  <code> SQLException  </code> the driver is about to throw to                                               the application
 @throw IllegalArgumentExceptionif <code>con</code> is null. 
 <p>
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaxSqlPooledConnection:(id<JavaxSqlPooledConnection>)con
                              withJavaSqlPreparedStatement:(id<JavaSqlPreparedStatement>)statement
                                   withJavaSqlSQLException:(JavaSqlSQLException *)exception;

/*!
 @brief Returns the <code>SQLException</code> the driver is about to throw
 <p>
 @return The <code>SQLException</code> the driver is about to throw 
 <p>
 @since 1.6
 */
- (JavaSqlSQLException *)getSQLException;

/*!
 @brief Returns the <code>PreparedStatement</code> that is being closed or is invalid
 <p>
 @return The <code>PreparedStatement</code> that is being closed or is invalid 
 <p>
 @since 1.6
 */
- (id<JavaSqlPreparedStatement>)getStatement;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSqlStatementEvent)

FOUNDATION_EXPORT void JavaxSqlStatementEvent_initWithJavaxSqlPooledConnection_withJavaSqlPreparedStatement_(JavaxSqlStatementEvent *self, id<JavaxSqlPooledConnection> con, id<JavaSqlPreparedStatement> statement);

FOUNDATION_EXPORT JavaxSqlStatementEvent *new_JavaxSqlStatementEvent_initWithJavaxSqlPooledConnection_withJavaSqlPreparedStatement_(id<JavaxSqlPooledConnection> con, id<JavaSqlPreparedStatement> statement) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSqlStatementEvent *create_JavaxSqlStatementEvent_initWithJavaxSqlPooledConnection_withJavaSqlPreparedStatement_(id<JavaxSqlPooledConnection> con, id<JavaSqlPreparedStatement> statement);

FOUNDATION_EXPORT void JavaxSqlStatementEvent_initWithJavaxSqlPooledConnection_withJavaSqlPreparedStatement_withJavaSqlSQLException_(JavaxSqlStatementEvent *self, id<JavaxSqlPooledConnection> con, id<JavaSqlPreparedStatement> statement, JavaSqlSQLException *exception);

FOUNDATION_EXPORT JavaxSqlStatementEvent *new_JavaxSqlStatementEvent_initWithJavaxSqlPooledConnection_withJavaSqlPreparedStatement_withJavaSqlSQLException_(id<JavaxSqlPooledConnection> con, id<JavaSqlPreparedStatement> statement, JavaSqlSQLException *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSqlStatementEvent *create_JavaxSqlStatementEvent_initWithJavaxSqlPooledConnection_withJavaSqlPreparedStatement_withJavaSqlSQLException_(id<JavaxSqlPooledConnection> con, id<JavaSqlPreparedStatement> statement, JavaSqlSQLException *exception);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSqlStatementEvent)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSqlStatementEvent")