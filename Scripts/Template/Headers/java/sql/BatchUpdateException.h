//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/BatchUpdateException.java
//

#ifndef _JavaSqlBatchUpdateException_H_
#define _JavaSqlBatchUpdateException_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/Serializable.h"
#include "../../java/sql/SQLException.h"

@class IOSIntArray;
@class JavaLangThrowable;

/*!
 @brief This exception is thrown if a problem occurs during a batch update operation.
 <p>
 A <code>BatchUpdateException</code> provides additional information about the
 problem that occurred, compared with a standard <code>SQLException</code>. It
 supplies update counts for successful commands which were executed before the
 exception was encountered.
 <p>
 The element order in the array of update counts matches the order that the
 commands were added to the batch operation.
 <p>
 Once a batch update command fails and a <code>BatchUpdateException</code> is
 thrown, the JDBC driver may continue processing the remaining commands in the
 batch. If the driver does process more commands after the problem occurs, the
 array returned by <code>BatchUpdateException.getUpdateCounts</code> has an element
 for every command in the batch, not only those that executed successfully. In
 this case, the array element for any command which encountered a problem is
 set to <code>Statement.EXECUTE_FAILED</code>.
 */
@interface JavaSqlBatchUpdateException : JavaSqlSQLException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a default <code>BatchUpdateException</code> with the parameters
 <i>reason</i>, <i>SQLState</i>, and <i>update counts</i> set to <code>null</code>
  and the <i>vendor code</i> set to 0.
 */
- (instancetype)init;

/*!
 @brief Creates a <code>BatchUpdateException</code> with the <code>updateCounts</code> set
 to the supplied value.
 All other fields are set to their
 default values.
 @param updateCounts
 the array of <code>updateCounts</code> giving the number of
 successful updates (or another status code) for each command
 in the batch that was attempted.
 */
- (instancetype)initWithIntArray:(IOSIntArray *)updateCounts;

/*!
 @brief Creates an BatchUpdateException object.
 The Reason string is set to the
 null if cause == null otherwise to cause.toString(), and the cause
 Throwable object is set to the given cause Throwable object. SQLState is
 initialized to null while vendorCode is zero.
 @param cause the Throwable object for the underlying reason this SQLException
 @since 1.6
 */
- (instancetype)initWithIntArray:(IOSIntArray *)updateCounts
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>BatchUpdateException</code> with the <code>updateCounts</code> and
 <code>reason</code> set to the supplied values.
 All other fields are set to their
 default values.
 @param reason
 the message providing information about the source of this
 exception.
 @param updateCounts
 the array of <code>updateCounts</code> giving the number of
 successful updates (or another status code) for each command
 in the batch that was attempted.
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withIntArray:(IOSIntArray *)updateCounts;

/*!
 @brief Creates an BatchUpdateException object.
 The cause Throwable object is set
 to the given cause Throwable object. SQLState is initialized to null
 while vendorCode is zero.
 @param cause the Throwable object for the underlying reason this SQLException
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withIntArray:(IOSIntArray *)updateCounts
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>BatchUpdateException</code> for the case where all relevant
 information is provided.
 @param reason
 the message providing information about the source of this
 exception.
 @param SQLState
 the X/OPEN value to use for the <code>SQLState</code>.
 @param vendorCode
 the value to use for the vendor error code.
 @param updateCounts
 the array of <code>updateCounts</code> giving the number of
 successful updates (or another status code) for each command
 in the batch that was attempted.
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode
                    withIntArray:(IOSIntArray *)updateCounts;

/*!
 @brief Creates an BatchUpdateException object.
 The cause Throwable object is set
 to the given cause Throwable object and the updateCounts array set to the
 int array parameter. VendorCode is set to the given vendorCode. SQLState
 is initialized to null while vendorCode is zero.
 @param cause the Throwable object for the underlying reason this SQLException
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode
                    withIntArray:(IOSIntArray *)updateCounts
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>BatchUpdateException</code> with the <code>reason</code>, <code>SQLState</code>
  and <code>updateCounts</code> set to the supplied values.
 All other
 fields are set to their default values.
 @param reason
 the message providing information about the source of this
 exception.
 @param SQLState
 the X/OPEN value to use for the <code>SQLState</code>
 @param updateCounts
 the array of <code>updateCounts</code> giving the number of
 successful updates (or another status code) for each command
 in the batch that was attempted.
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                    withIntArray:(IOSIntArray *)updateCounts;

/*!
 @brief Creates an BatchUpdateException object.
 The cause Throwable object is set
 to the given cause Throwable object and the updateCounts array set to the
 int array parameter. SQLState is initialized to null while vendorCode is
 zero.
 @param cause the Throwable object for the underlying reason this SQLException
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                    withIntArray:(IOSIntArray *)updateCounts
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates an BatchUpdateException object.
 The reason is set to
 null if cause == null otherwise to cause.toString(), and the cause
 Throwable object is set to the given cause Throwable object.
 @param cause the Throwable object for the underlying reason this SQLException
 @since 1.6
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Gets the <i>update count</i> array giving status information for every
 command that was attempted in the batch.
 <p>
 If a batch update command fails and a <code>BatchUpdateException</code> is
 thrown, the JDBC driver may continue processing the remaining commands in
 the batch. If the driver does so, the array returned by <code>BatchUpdateException.getUpdateCounts</code>
  has an element for every command in
 the batch, not only those that executed successfully. In this case, the
 array element for any command which encountered a problem is set to
 <code>Statement.EXECUTE_FAILED</code>.
 @return an array that contains the successful update counts, before this
 exception was thrown. Alternatively, if the driver continues to
 process commands following an error, for each successive command
 there is a corresponding element in the array giving one of the
 following status values:
 <ol>
 <li>the number of successful updates</li> <li><code>Statement.SUCCESS_NO_INFO</code>
  indicating that the command completed
 successfully, but the amount of altered rows is unknown.</li>
 <li><code>Statement.EXECUTE_FAILED</code> indicating that the command
 was unsuccessful.</li>
 </ol>
 */
- (IOSIntArray *)getUpdateCounts;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlBatchUpdateException)

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_init(JavaSqlBatchUpdateException *self);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithJavaLangThrowable_(JavaSqlBatchUpdateException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithIntArray_withJavaLangThrowable_(IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withIntArray_withJavaLangThrowable_(NSString *reason, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_withJavaLangThrowable_(NSString *reason, NSString *SQLState, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithIntArray_(JavaSqlBatchUpdateException *self, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithIntArray_(IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withIntArray_(NSString *reason, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_(NSString *reason, NSString *SQLState, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_(NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlBatchUpdateException)

#endif // _JavaSqlBatchUpdateException_H_
