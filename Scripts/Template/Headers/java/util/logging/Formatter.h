//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/Formatter.java
//

#ifndef _JavaUtilLoggingFormatter_H_
#define _JavaUtilLoggingFormatter_H_

#include "../../../J2ObjC_header.h"

@class JavaUtilLoggingHandler;
@class JavaUtilLoggingLogRecord;

/*!
 @brief <code>Formatter</code> objects are used to format <code>LogRecord</code> objects into a
 string representation.
 Head and tail strings are sometimes used to wrap a set
 of records. The <code>getHead</code> and <code>getTail</code> methods are used for this
 purpose.
 */
@interface JavaUtilLoggingFormatter : NSObject

#pragma mark Public

/*!
 @brief Converts a <code>LogRecord</code> object into a string representation.
 The
 resulted string is usually localized and includes the message field of
 the record.
 @param r
 the log record to be formatted into a string.
 @return the formatted string.
 */
- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)r;

/*!
 @brief Formats a <code>LogRecord</code> object into a localized string
 representation.
 This is a convenience method for subclasses of <code>Formatter</code>
 .
 <p>
 The message string is firstly localized using the <code>ResourceBundle</code>
 object associated with the supplied <code>LogRecord</code>.
 <p>
 Notice : if message contains "{0", then java.text.MessageFormat is used.
 Otherwise no formatting is performed.
 @param r
 the log record to be formatted.
 @return the string resulted from the formatting.
 */
- (NSString *)formatMessageWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)r;

/*!
 @brief Gets the head string used to wrap a set of log records.
 This base class
 always returns an empty string.
 @param h
 the target handler.
 @return the head string used to wrap a set of log records, empty in this
 implementation.
 */
- (NSString *)getHeadWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)h;

/*!
 @brief Gets the tail string used to wrap a set of log records.
 This base class
 always returns the empty string.
 @param h
 the target handler.
 @return the tail string used to wrap a set of log records, empty in this
 implementation.
 */
- (NSString *)getTailWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)h;

#pragma mark Protected

/*!
 @brief Constructs a <code>Formatter</code> object.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingFormatter)

FOUNDATION_EXPORT void JavaUtilLoggingFormatter_init(JavaUtilLoggingFormatter *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingFormatter)

#endif // _JavaUtilLoggingFormatter_H_
