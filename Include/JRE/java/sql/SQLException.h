//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/SQLException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLException")
#ifdef RESTRICT_JavaSqlSQLException
#define INCLUDE_ALL_JavaSqlSQLException 0
#else
#define INCLUDE_ALL_JavaSqlSQLException 1
#endif
#undef RESTRICT_JavaSqlSQLException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlSQLException_) && (INCLUDE_ALL_JavaSqlSQLException || defined(INCLUDE_JavaSqlSQLException))
#define JavaSqlSQLException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include "java/lang/Iterable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangThrowable;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief <P>An exception that provides information on a database access
  error or other errors.
 <P>Each <code>SQLException</code> provides several kinds of information: 
 <UL>
    <LI> a string describing the error.  This is used as the Java Exception
        message, available via the method <code>getMesasge</code>.
    <LI> a "SQLstate" string, which follows either the XOPEN SQLstate conventions
         or the SQL:2003 conventions.
        The values of the SQLState string are described in the appropriate spec.       The 
 <code>DatabaseMetaData</code> method <code>getSQLStateType</code>
        can be used to discover whether the driver returns the XOPEN type or
        the SQL:2003 type.   
 <LI> an integer error code that is specific to each vendor.  Normally this will
        be the actual error code returned by the underlying database.   
 <LI> a chain to a next Exception.  This can be used to provide additional
        error information.   
 <LI> the causal relationship, if any for this <code>SQLException</code>.
  </UL>
 */
@interface JavaSqlSQLException : JavaLangException < JavaLangIterable >

#pragma mark Public

/*!
 @brief Constructs a <code>SQLException</code> object.
 The <code>reason</code>, <code>SQLState</code> are initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>SQLException</code> object with a given 
 <code>reason</code>.The  <code>SQLState</code>  is initialized to 
 <code>null</code> and the vender code is initialized to 0.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason;

/*!
 @brief Constructs a <code>SQLException</code> object with a given 
 <code>reason</code> and <code>SQLState</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The vendor code
  is initialized to 0. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState;

/*!
 @brief Constructs a <code>SQLException</code> object with a given 
 <code>reason</code>, <code>SQLState</code>  and 
 <code>vendorCode</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode;

/*!
 @brief Constructs a <code>SQLException</code> object with a given 
 <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code>
  and  <code>cause</code>.
 <p>
 @param reason a description of the exception
 @param sqlState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 @param cause the underlying reason for this  <code> SQLException </code>
   (which is saved for later retrieval by the  <code> getCause() </code>  method);
   may be null indicating the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)sqlState
                                   withInt:(jint)vendorCode
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLException</code> object with a given 
 <code>reason</code>, <code>SQLState</code> and  <code>cause</code>.
 The vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param sqlState an XOPEN or SQL:2003 code identifying the exception
 @param cause the underlying reason for this  <code> SQLException </code>
   (which is saved for later retrieval by the   <code>
  getCause() </code>  method); may be null indicating      the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)sqlState
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLException</code> object with a given 
 <code>reason</code> and  <code>cause</code>.
 The <code>SQLState</code> is  initialized to <code>null</code>
  and the vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param cause the underlying reason for this  <code> SQLException </code>
   (which is saved for later retrieval by the  <code> getCause() </code>  method);
   may be null indicating the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLException</code> object with a given 
 <code>cause</code>.
 The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if 
 <code>cause!=null</code>.
  <p>
 @param cause the underlying reason for this  <code> SQLException </code>
   (which is saved for later retrieval by the  <code> getCause() </code>  method);
   may be null indicating the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Retrieves the vendor-specific exception code
  for this <code>SQLException</code> object.
 @return the vendor's error code
 */
- (jint)getErrorCode;

/*!
 @brief Retrieves the exception chained to this 
 <code>SQLException</code> object by setNextException(SQLException ex).
 @return the next <code>SQLException</code> object in the chain;
          <code>null</code> if there are none
 - seealso: #setNextException
 */
- (JavaSqlSQLException *)getNextException;

/*!
 @brief Retrieves the SQLState for this <code>SQLException</code> object.
 @return the SQLState value
 */
- (NSString *)getSQLState;

/*!
 @brief Returns an iterator over the chained SQLExceptions.The iterator will
  be used to iterate over each SQLException and its underlying cause
  (if any).
 @return an iterator over the chained SQLExceptions and causes in the proper
  order
 @since 1.6
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Adds an <code>SQLException</code> object to the end of the chain.
 @param ex the new exception that will be added to the end of             the 
  <code> SQLException </code>  chain
 - seealso: #getNextException
 */
- (void)setNextExceptionWithJavaSqlSQLException:(JavaSqlSQLException *)ex;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaSqlSQLException)

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withNSString_withInt_(JavaSqlSQLException *self, NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException *create_JavaSqlSQLException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withNSString_(JavaSqlSQLException *self, NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException *create_JavaSqlSQLException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_(JavaSqlSQLException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException *create_JavaSqlSQLException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLException_init(JavaSqlSQLException *self);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException *create_JavaSqlSQLException_init(void);

FOUNDATION_EXPORT void JavaSqlSQLException_initWithJavaLangThrowable_(JavaSqlSQLException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException *create_JavaSqlSQLException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException *create_JavaSqlSQLException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException *create_JavaSqlSQLException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException *create_JavaSqlSQLException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLException)

#endif

#if !defined (JavaSqlSQLException_NextExceptionUpdater_) && (INCLUDE_ALL_JavaSqlSQLException || defined(INCLUDE_JavaSqlSQLException_NextExceptionUpdater))
#define JavaSqlSQLException_NextExceptionUpdater_

@class JavaLangBoolean;
@class JavaSqlSQLException;

@interface JavaSqlSQLException_NextExceptionUpdater : NSObject

#pragma mark Public

- (jboolean)compareAndSetWithJavaSqlSQLException:(JavaSqlSQLException *)obj
                         withJavaSqlSQLException:(JavaSqlSQLException *)expect
                         withJavaSqlSQLException:(JavaSqlSQLException *)update;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLException_NextExceptionUpdater)

FOUNDATION_EXPORT void JavaSqlSQLException_NextExceptionUpdater_init(JavaSqlSQLException_NextExceptionUpdater *self);

FOUNDATION_EXPORT JavaSqlSQLException_NextExceptionUpdater *new_JavaSqlSQLException_NextExceptionUpdater_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLException_NextExceptionUpdater *create_JavaSqlSQLException_NextExceptionUpdater_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLException_NextExceptionUpdater)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLException")
