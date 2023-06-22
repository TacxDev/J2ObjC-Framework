//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/BatchUpdateException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlBatchUpdateException")
#ifdef RESTRICT_JavaSqlBatchUpdateException
#define INCLUDE_ALL_JavaSqlBatchUpdateException 0
#else
#define INCLUDE_ALL_JavaSqlBatchUpdateException 1
#endif
#undef RESTRICT_JavaSqlBatchUpdateException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlBatchUpdateException_) && (INCLUDE_ALL_JavaSqlBatchUpdateException || defined(INCLUDE_JavaSqlBatchUpdateException))
#define JavaSqlBatchUpdateException_

#define RESTRICT_JavaSqlSQLException 1
#define INCLUDE_JavaSqlSQLException 1
#include "java/sql/SQLException.h"

@class IOSIntArray;
@class JavaLangInteger;
@class JavaLangThrowable;

/*!
 @brief The subclass of <code>SQLException</code> thrown when an error
  occurs during a batch update operation.In addition to the
  information provided by <code>SQLException</code>, a 
 <code>BatchUpdateException</code> provides the update
  counts for all commands that were executed successfully during the
  batch update, that is, all commands that were executed before the error
  occurred.
 The order of elements in an array of update counts
  corresponds to the order in which commands were added to the batch. 
 <P>
  After a command in a batch update fails to execute properly
  and a <code>BatchUpdateException</code> is thrown, the driver
  may or may not continue to process the remaining commands in
  the batch.  If the driver continues processing after a failure,
  the array returned by the method 
 <code>BatchUpdateException.getUpdateCounts</code> will have
  an element for every command in the batch rather than only
  elements for the commands that executed successfully before
  the error.  In the case where the driver continues processing
  commands, the array element for any command
  that failed is <code>Statement.EXECUTE_FAILED</code>.
  <P>
 @since 1.2
 */
@interface JavaSqlBatchUpdateException : JavaSqlSQLException

#pragma mark Public

/*!
 @brief Constructs a <code>BatchUpdateException</code> object.
 The <code>reason</code>, <code>SQLState</code> and <code>updateCounts</code>
   are initialized to <code>null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @since 1.2
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with a given 
 <code>updateCounts</code>.
 initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The  <code>reason</code>
  and <code>SQLState</code> are initialized to null and the vendor code
  is initialized to 0. 
 <p>
 @param updateCounts an array of  <code> int </code> , with each element
   indicating the update count,  <code> Statement.SUCCESS_NO_INFO </code>  or
    <code> Statement.EXECUTE_FAILED </code>  for each SQL command in
   the batch for JDBC drivers that continue processing  after a command failure; an update count or
    <code>
  Statement.SUCCESS_NO_INFO </code>  for each SQL command in the batch  prior to the failure for JDBC drivers that stop processing after a command
   failure
 @since 1.2
 */
- (instancetype __nonnull)initWithIntArray:(IOSIntArray *)updateCounts;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with a
  given <code>cause</code> and <code>updateCounts</code>.
 The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if 
 <code>cause!=null</code>.
 @param updateCounts an array of  <code> int </code> , with each element
   indicating the update count,  <code> Statement.SUCCESS_NO_INFO </code>  or
    <code> Statement.EXECUTE_FAILED </code>  for each SQL command in
   the batch for JDBC drivers that continue processing  after a command failure; an update count or
    <code>
  Statement.SUCCESS_NO_INFO </code>  for each SQL command in the batch  prior to the failure for JDBC drivers that stop processing after a command
   failure
 @param cause the underlying reason for this  <code> SQLException </code>
   (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
   the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithIntArray:(IOSIntArray *)updateCounts
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with a given 
 <code>reason</code> and <code>updateCounts</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method.  The 
 <code>SQLState</code> is initialized to <code>null</code>
  and the vender code is initialized to 0. 
 <p>
 @param reason a description of the exception
 @param updateCounts an array of  <code> int </code> , with each element
   indicating the update count,  <code> Statement.SUCCESS_NO_INFO </code>  or
    <code> Statement.EXECUTE_FAILED </code>  for each SQL command in
   the batch for JDBC drivers that continue processing  after a command failure; an update count or
    <code>
  Statement.SUCCESS_NO_INFO </code>  for each SQL command in the batch  prior to the failure for JDBC drivers that stop processing after a command
   failure
 @since 1.2
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withIntArray:(IOSIntArray *)updateCounts;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with
  a given <code>reason</code>, <code>cause</code>
  and <code>updateCounts</code>.The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
 @param reason a description of the exception
 @param updateCounts an array of  <code> int </code> , with each element
  indicating the update count,  <code> Statement.SUCCESS_NO_INFO </code>  or
    <code> Statement.EXECUTE_FAILED </code>  for each SQL command in
   the batch for JDBC drivers that continue processing  after a command failure; an update count or
    <code>
  Statement.SUCCESS_NO_INFO </code>  for each SQL command in the batch  prior to the failure for JDBC drivers that stop processing after a command
   failure
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method);
   may be null indicating
   the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withIntArray:(IOSIntArray *)updateCounts
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with a given 
 <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code> and 
 <code>updateCounts</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the error
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode an exception code used by a particular  database vendor
 @param updateCounts an array of  <code> int </code> , with each element
   indicating the update count,  <code> Statement.SUCCESS_NO_INFO </code>  or
    <code> Statement.EXECUTE_FAILED </code>  for each SQL command in
   the batch for JDBC drivers that continue processing  after a command failure; an update count or
    <code>
  Statement.SUCCESS_NO_INFO </code>  for each SQL command in the batch  prior to the failure for JDBC drivers that stop processing after a command
   failure
 @since 1.2
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode
                              withIntArray:(IOSIntArray *)updateCounts;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with
  a given <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code>
  <code>cause</code> and <code>updateCounts</code>.
 @param reason a description of the error
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode an exception code used by a particular  database vendor
 @param updateCounts an array of  <code> int </code> , with each element
  indicating the update count,  <code> Statement.SUCCESS_NO_INFO </code>  or
    <code> Statement.EXECUTE_FAILED </code>  for each SQL command in
   the batch for JDBC drivers that continue processing  after a command failure; an update count or
    <code>
  Statement.SUCCESS_NO_INFO </code>  for each SQL command in the batch  prior to the failure for JDBC drivers that stop processing after a command
   failure
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method);
   may be null indicating
   the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode
                              withIntArray:(IOSIntArray *)updateCounts
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with a given 
 <code>reason</code>, <code>SQLState</code> and 
 <code>updateCounts</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The vendor code
  is initialized to 0. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param updateCounts an array of  <code> int </code> , with each element
   indicating the update count,  <code> Statement.SUCCESS_NO_INFO </code>  or
    <code> Statement.EXECUTE_FAILED </code>  for each SQL command in
   the batch for JDBC drivers that continue processing  after a command failure; an update count or
    <code>
  Statement.SUCCESS_NO_INFO </code>  for each SQL command in the batch  prior to the failure for JDBC drivers that stop processing after a command
   failure
 @since 1.2
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                              withIntArray:(IOSIntArray *)updateCounts;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with
  a given <code>reason</code>, <code>SQLState</code>,<code>cause</code>, and 
 <code>updateCounts</code>.The vendor code is initialized to 0.
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param updateCounts an array of  <code> int </code> , with each element
   indicating the update count,  <code> Statement.SUCCESS_NO_INFO </code>  or
    <code> Statement.EXECUTE_FAILED </code>  for each SQL command in
   the batch for JDBC drivers that continue processing  after a command failure; an update count or
    <code>
  Statement.SUCCESS_NO_INFO </code>  for each SQL command in the batch  prior to the failure for JDBC drivers that stop processing after a command
   failure
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method);
   may be null indicating
   the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                              withIntArray:(IOSIntArray *)updateCounts
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>BatchUpdateException</code> object initialized with
   a given <code>cause</code>.
 The <code>SQLState</code> and <code>updateCounts</code>
  are initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if
   <code>cause!=null</code>.
 @param cause the underlying reason for this  <code> SQLException </code>
   (which is saved for later retrieval by the  <code> getCause() </code>  method);
   may be null indicating the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Retrieves the update count for each update statement in the batch
  update that executed successfully before this exception occurred.
 A driver that implements batch updates may or may not continue to
  process the remaining commands in a batch when one of the commands
  fails to execute properly. If the driver continues processing commands,
  the array returned by this method will have as many elements as
  there are commands in the batch; otherwise, it will contain an
  update count for each command that executed successfully before
  the <code>BatchUpdateException</code> was thrown.
 <P>
  The possible return values for this method were modified for
  the Java 2 SDK, Standard Edition, version 1.3.  This was done to
  accommodate the new option of continuing to process commands
  in a batch update after a <code>BatchUpdateException</code> object
  has been thrown.
 @return an array of <code>int</code> containing the update counts
  for the updates that were executed successfully before this error
  occurred.  Or, if the driver continues to process commands after an
  error, one of the following for every command in the batch: 
 <OL>
  <LI>an update count
   <LI><code>Statement.SUCCESS_NO_INFO</code> to indicate that the command
      executed successfully but the number of rows affected is unknown  
 <LI><code>Statement.EXECUTE_FAILED</code> to indicate that the command
      failed to execute successfully 
 </OL>
 @since 1.3
 */
- (IOSIntArray *)getUpdateCounts;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                              withNSString:(NSString *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                              withNSString:(NSString *)arg1
                                   withInt:(jint)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                              withNSString:(NSString *)arg1
                                   withInt:(jint)arg2
                     withJavaLangThrowable:(JavaLangThrowable *)arg3 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                              withNSString:(NSString *)arg1
                     withJavaLangThrowable:(JavaLangThrowable *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlBatchUpdateException)

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_(NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_(NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_(NSString *reason, NSString *SQLState, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_(NSString *reason, NSString *SQLState, IOSIntArray *updateCounts);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withIntArray_(NSString *reason, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithNSString_withIntArray_(NSString *reason, IOSIntArray *updateCounts);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithIntArray_(JavaSqlBatchUpdateException *self, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithIntArray_(IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithIntArray_(IOSIntArray *updateCounts);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_init(JavaSqlBatchUpdateException *self);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_init(void);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithJavaLangThrowable_(JavaSqlBatchUpdateException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithIntArray_withJavaLangThrowable_(IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithIntArray_withJavaLangThrowable_(IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withIntArray_withJavaLangThrowable_(NSString *reason, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithNSString_withIntArray_withJavaLangThrowable_(NSString *reason, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_withJavaLangThrowable_(NSString *reason, NSString *SQLState, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_withJavaLangThrowable_(NSString *reason, NSString *SQLState, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlBatchUpdateException *create_JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlBatchUpdateException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSqlBatchUpdateException")
