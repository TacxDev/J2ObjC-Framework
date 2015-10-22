//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/Logger.java
//

#ifndef _JavaUtilLoggingLogger_H_
#define _JavaUtilLoggingLogger_H_

#include "../../../J2ObjC_header.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@class JavaUtilLoggingHandler;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogManager;
@class JavaUtilLoggingLogRecord;
@class JavaUtilResourceBundle;
@protocol JavaUtilList;
@protocol JavaUtilLoggingFilter;

/*!
 @brief Loggers are used to log records to a variety of destinations such as log files or
 the console.
 They use instances of <code>Handler</code> to actually do the destination-specific
 operations.
 <p>Client applications can get named loggers by calling the <code>getLogger</code>
 methods. They can also get anonymous loggers by calling the
 <code>getAnonymousLogger</code> methods. Named loggers are organized in a
 namespace hierarchy managed by a log manager. The naming convention is
 usually the Java package naming convention. Anonymous loggers do not belong to any namespace.
 <p>Developers should use named loggers to enable logging to be controlled on a
 per-<code>Logger</code> granularity. The recommended idiom is to create and assign the logger to
 a <code>static final</code> field. This ensures that there's always a strong reference to the logger,
 preventing it from being garbage collected. In particular, <code>LogManager.addLogger(Logger)</code>
 will <i>not</i> keep your logger live.
 <p>Loggers "inherit" log level setting from their parent if their own level is
 set to <code>null</code>. This is also true for the resource bundle. The logger's
 resource bundle is used to localize the log messages if no resource bundle
 name is given when a log method is called. If <code>getUseParentHandlers()</code>
 returns <code>true</code>, loggers also inherit their parent's handlers. In this
 context, "inherit" only means that "behavior" is inherited. The internal
 field values will not change, for example, <code>getLevel()</code> still returns
 <code>null</code>.
 <p>
 When loading a given resource bundle, the logger first tries to use the
 context <code>ClassLoader</code>. If that fails, it tries the system <code>ClassLoader</code>. And if
 that still fails, it searches up the class stack and uses each class's
 <code>ClassLoader</code> to try to locate the resource bundle.
 <p>
 Some log methods accept log requests that do not specify the source class and
 source method. In these cases, the logging framework will automatically infer
 the calling class and method, but this is not guaranteed to be accurate.
 <p>
 Once a <code>LogRecord</code> object has been passed into the logging framework,
 it is owned by the logging framework and the client applications should not
 use it any longer.
 <p>
 All methods of this class are thread-safe.
 */
@interface JavaUtilLoggingLogger : NSObject {
 @public
  /*!
   @brief The parent logger of this logger.
   */
  __weak JavaUtilLoggingLogger *parent_;
  /*!
   @brief The logging level of this logger, or null if none is set.
   */
  volatile_id levelObjVal_;
  /*!
   @brief The effective logging level of this logger.
   In order of preference this
 is the first applicable of:
 <ol>
 <li>the int value of this logger's <code>levelObjVal</code>
 <li>the logging level of the parent
 <li>the default level (<code>Level.INFO</code>)
 </ol>
   */
  volatile_jint levelIntVal_;
  /*!
   @brief Child loggers.
   Should be accessed only while synchronized on <code>LogManager.getLogManager()</code>
 .
   */
  id<JavaUtilList> children_;
}

#pragma mark Public

/*!
 @brief Adds a handler to this logger.
 The <code>name</code> will be fed with log
 records received by this logger.
 @param handler
 the handler object to add, cannot be <code>null</code>.
 */
- (void)addHandlerWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)handler;

/*!
 @brief Logs a message of level <code>Level.CONFIG</code>; the message is transmitted
 to all subscribed handlers.
 @param msg
 the message to log.
 */
- (void)configWithNSString:(NSString *)msg;

/*!
 @brief Logs a message indicating that a method has been entered.
 A log record
 with log level <code>Level.FINER</code>, log message "ENTRY", the specified
 source class name and source method name is submitted for logging.
 @param sourceClass
 the calling class name.
 @param sourceMethod
 the method name.
 */
- (void)enteringWithNSString:(NSString *)sourceClass
                withNSString:(NSString *)sourceMethod;

/*!
 @brief Logs a message indicating that a method has been entered.
 A log record
 with log level <code>Level.FINER</code>, log message "ENTRY", the specified
 source class name, source method name and one parameter is submitted for
 logging.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param param
 the parameter for the method call.
 */
- (void)enteringWithNSString:(NSString *)sourceClass
                withNSString:(NSString *)sourceMethod
                      withId:(id)param;

/*!
 @brief Logs a message indicating that a method has been entered.
 A log record
 with log level <code>Level.FINER</code>, log message "ENTRY", the specified
 source class name, source method name and array of parameters is
 submitted for logging.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param params
 an array of parameters for the method call.
 */
- (void)enteringWithNSString:(NSString *)sourceClass
                withNSString:(NSString *)sourceMethod
           withNSObjectArray:(IOSObjectArray *)params;

/*!
 @brief Logs a message indicating that a method is exited.
 A log record with log
 level <code>Level.FINER</code>, log message "RETURN", the specified source
 class name and source method name is submitted for logging.
 @param sourceClass
 the calling class name.
 @param sourceMethod
 the method name.
 */
- (void)exitingWithNSString:(NSString *)sourceClass
               withNSString:(NSString *)sourceMethod;

/*!
 @brief Logs a message indicating that a method is exited.
 A log record with log
 level <code>Level.FINER</code>, log message "RETURN", the specified source
 class name, source method name and return value is submitted for logging.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param result
 the return value of the method call.
 */
- (void)exitingWithNSString:(NSString *)sourceClass
               withNSString:(NSString *)sourceMethod
                     withId:(id)result;

/*!
 @brief Logs a message of level <code>Level.FINE</code>; the message is transmitted
 to all subscribed handlers.
 @param msg
 the message to log.
 */
- (void)fineWithNSString:(NSString *)msg;

/*!
 @brief Logs a message of level <code>Level.FINER</code>; the message is transmitted
 to all subscribed handlers.
 @param msg
 the message to log.
 */
- (void)finerWithNSString:(NSString *)msg;

/*!
 @brief Logs a message of level <code>Level.FINEST</code>; the message is transmitted
 to all subscribed handlers.
 @param msg
 the message to log.
 */
- (void)finestWithNSString:(NSString *)msg;

/*!
 @brief Gets an anonymous logger to use internally in a thread.
 Anonymous loggers
 are not registered in the log manager's namespace. No security checks
 will be performed when updating an anonymous logger's control settings.
 <p>
 The anonymous loggers' parent is set to be the root logger. This way it
 inherits the default logging level and handlers from the root logger.
 @return a new instance of anonymous logger.
 */
+ (JavaUtilLoggingLogger *)getAnonymousLogger;

/*!
 @brief Gets an anonymous logger to use internally in a thread.
 Anonymous loggers
 are not registered in the log manager's namespace. No security checks
 will be performed when updating an anonymous logger's control settings.
 <p>
 The anonymous loggers' parent is set to be the root logger. This way it
 inherits default logging level and handlers from the root logger.
 @param resourceBundleName
 the name of the resource bundle used to localize log messages.
 @return a new instance of anonymous logger.
 @throws MissingResourceException
 if the specified resource bundle can not be loaded.
 */
+ (JavaUtilLoggingLogger *)getAnonymousLoggerWithNSString:(NSString *)resourceBundleName;

/*!
 @brief Gets the filter used by this logger.
 @return the filter used by this logger, may be <code>null</code>.
 */
- (id<JavaUtilLoggingFilter>)getFilter;

/*!
 @brief Returns the global <code>Logger</code>.
 @since 1.7
 */
+ (JavaUtilLoggingLogger *)getGlobal;

/*!
 @brief Gets all the handlers associated with this logger.
 @return an array of all the handlers associated with this logger.
 */
- (IOSObjectArray *)getHandlers;

/*!
 @brief Gets the logging level of this logger.
 A <code>null</code> level indicates
 that this logger inherits its parent's level.
 @return the logging level of this logger.
 */
- (JavaUtilLoggingLevel *)getLevel;

/*!
 @brief Gets a named logger.
 The returned logger may already exist or may be
 newly created. In the latter case, its level will be set to the
 configured level according to the <code>LogManager</code>'s properties.
 @param name
 the name of the logger to get, cannot be <code>null</code>.
 @return a named logger.
 @throws MissingResourceException
 If the specified resource bundle can not be loaded.
 */
+ (JavaUtilLoggingLogger *)getLoggerWithNSString:(NSString *)name;

/*!
 @brief Gets a named logger associated with the supplied resource bundle.
 The
 resource bundle will be used to localize logging messages.
 @param name
 the name of the logger to get, cannot be <code>null</code>.
 @param resourceBundleName
 the name of the resource bundle, may be <code>null</code>.
 @throws IllegalArgumentException
 if the logger identified by <code>name</code> is associated with a
 resource bundle and its name is not equal to
 <code>resourceBundleName</code>.
 @throws MissingResourceException
 if the name of the resource bundle cannot be found.
 @return a named logger.
 */
+ (JavaUtilLoggingLogger *)getLoggerWithNSString:(NSString *)name
                                    withNSString:(NSString *)resourceBundleName;

/*!
 @brief Gets the name of this logger, <code>null</code> for anonymous loggers.
 @return the name of this logger.
 */
- (NSString *)getName;

/*!
 @brief Gets the nearest parent of this logger in the namespace, a <code>null</code>
 value will be returned if called on the root logger.
 @return the parent of this logger in the namespace.
 */
- (JavaUtilLoggingLogger *)getParent;

/*!
 @brief Gets the loaded resource bundle used by this logger to localize logging
 messages.
 If the value is <code>null</code>, the parent's resource bundle will be
 inherited.
 @return the loaded resource bundle used by this logger.
 */
- (JavaUtilResourceBundle *)getResourceBundle;

/*!
 @brief Gets the name of the loaded resource bundle used by this logger to
 localize logging messages.
 If the value is <code>null</code>, the parent's resource
 bundle name will be inherited.
 @return the name of the loaded resource bundle used by this logger.
 */
- (NSString *)getResourceBundleName;

/*!
 @brief Gets the flag which indicates whether to use the handlers of this
 logger's parent to publish incoming log records, potentially recursively
 up the namespace.
 @return <code>true</code> if set to use parent's handlers, <code>false</code>
 otherwise.
 */
- (jboolean)getUseParentHandlers;

/*!
 @brief Logs a message of level <code>Level.INFO</code>; the message is transmitted
 to all subscribed handlers.
 @param msg
 the message to log.
 */
- (void)infoWithNSString:(NSString *)msg;

/*!
 @brief Determines whether this logger will actually log messages of the
 specified level.
 The effective level used to do the determination may be
 inherited from its parent. The default level is <code>Level.INFO</code>.
 @param l
 the level to check.
 @return <code>true</code> if this logger will actually log this level,
 otherwise <code>false</code>.
 */
- (jboolean)isLoggableWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)l;

/*!
 @brief Logs a message of the specified level.
 The message is transmitted to all
 subscribed handlers.
 @param logLevel
 the level of the specified message.
 @param msg
 the message to log.
 */
- (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                       withNSString:(NSString *)msg;

/*!
 @brief Logs a message of the specified level with the supplied parameter.
 The
 message is then transmitted to all subscribed handlers.
 @param logLevel
 the level of the given message.
 @param msg
 the message to log.
 @param param
 the parameter associated with the event that is logged.
 */
- (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                       withNSString:(NSString *)msg
                             withId:(id)param;

/*!
 @brief Logs a message of the specified level with the supplied parameter array.
 The message is then transmitted to all subscribed handlers.
 @param logLevel
 the level of the given message
 @param msg
 the message to log.
 @param params
 the parameter array associated with the event that is logged.
 */
- (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                       withNSString:(NSString *)msg
                  withNSObjectArray:(IOSObjectArray *)params;

/*!
 @brief Logs a message of the specified level with the supplied <code>Throwable</code>
 object.
 The message is then transmitted to all subscribed handlers.
 @param logLevel
 the level of the given message.
 @param msg
 the message to log.
 @param thrown
 the <code>Throwable</code> object associated with the event that is
 logged.
 */
- (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                       withNSString:(NSString *)msg
              withJavaLangThrowable:(JavaLangThrowable *)thrown;

/*!
 @brief Logs a given log record.
 Only records with a logging level that is equal
 or greater than this logger's level will be submitted to this logger's
 handlers for logging. If <code>getUseParentHandlers()</code> returns <code>true</code>
 , the log record will also be submitted to the handlers of this
 logger's parent, potentially recursively up the namespace.
 <p>
 Since all other log methods call this method to actually perform the
 logging action, subclasses of this class can override this method to
 catch all logging activities.
 </p>
 @param record
 the log record to be logged.
 */
- (void)logWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

/*!
 @brief Logs a message of the given level with the specified source class name
 and source method name.
 @param logLevel
 the level of the given message.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param msg
 the message to be logged.
 */
- (void)logpWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                        withNSString:(NSString *)sourceClass
                        withNSString:(NSString *)sourceMethod
                        withNSString:(NSString *)msg;

/*!
 @brief Logs a message of the given level with the specified source class name,
 source method name and parameter.
 @param logLevel
 the level of the given message
 @param sourceClass
 the source class name
 @param sourceMethod
 the source method name
 @param msg
 the message to be logged
 @param param
 the parameter associated with the event that is logged.
 */
- (void)logpWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                        withNSString:(NSString *)sourceClass
                        withNSString:(NSString *)sourceMethod
                        withNSString:(NSString *)msg
                              withId:(id)param;

/*!
 @brief Logs a message of the given level with the specified source class name,
 source method name and parameter array.
 @param logLevel
 the level of the given message.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param msg
 the message to be logged.
 @param params
 the parameter array associated with the event that is logged.
 */
- (void)logpWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                        withNSString:(NSString *)sourceClass
                        withNSString:(NSString *)sourceMethod
                        withNSString:(NSString *)msg
                   withNSObjectArray:(IOSObjectArray *)params;

/*!
 @brief Logs a message of the given level with the specified source class name,
 source method name and <code>Throwable</code> object.
 @param logLevel
 the level of the given message.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param msg
 the message to be logged.
 @param thrown
 the <code>Throwable</code> object.
 */
- (void)logpWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                        withNSString:(NSString *)sourceClass
                        withNSString:(NSString *)sourceMethod
                        withNSString:(NSString *)msg
               withJavaLangThrowable:(JavaLangThrowable *)thrown;

/*!
 @brief Logs a message of the given level with the specified source class name
 and source method name, using the given resource bundle to localize the
 message.
 If <code>bundleName</code> is null, the empty string or not valid then
 the message is not localized.
 @param logLevel
 the level of the given message.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param bundleName
 the name of the resource bundle used to localize the message.
 @param msg
 the message to be logged.
 */
- (void)logrbWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                         withNSString:(NSString *)sourceClass
                         withNSString:(NSString *)sourceMethod
                         withNSString:(NSString *)bundleName
                         withNSString:(NSString *)msg;

/*!
 @brief Logs a message of the given level with the specified source class name,
 source method name and parameter, using the given resource bundle to
 localize the message.
 If <code>bundleName</code> is null, the empty string
 or not valid then the message is not localized.
 @param logLevel
 the level of the given message.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param bundleName
 the name of the resource bundle used to localize the message.
 @param msg
 the message to be logged.
 @param param
 the parameter associated with the event that is logged.
 */
- (void)logrbWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                         withNSString:(NSString *)sourceClass
                         withNSString:(NSString *)sourceMethod
                         withNSString:(NSString *)bundleName
                         withNSString:(NSString *)msg
                               withId:(id)param;

/*!
 @brief Logs a message of the given level with the specified source class name,
 source method name and parameter array, using the given resource bundle
 to localize the message.
 If <code>bundleName</code> is null, the empty string
 or not valid then the message is not localized.
 @param logLevel
 the level of the given message.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param bundleName
 the name of the resource bundle used to localize the message.
 @param msg
 the message to be logged.
 @param params
 the parameter array associated with the event that is logged.
 */
- (void)logrbWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                         withNSString:(NSString *)sourceClass
                         withNSString:(NSString *)sourceMethod
                         withNSString:(NSString *)bundleName
                         withNSString:(NSString *)msg
                    withNSObjectArray:(IOSObjectArray *)params;

/*!
 @brief Logs a message of the given level with the specified source class name,
 source method name and <code>Throwable</code> object, using the given resource
 bundle to localize the message.
 If <code>bundleName</code> is null, the empty
 string or not valid then the message is not localized.
 @param logLevel
 the level of the given message
 @param sourceClass
 the source class name
 @param sourceMethod
 the source method name
 @param bundleName
 the name of the resource bundle used to localize the message.
 @param msg
 the message to be logged.
 @param thrown
 the <code>Throwable</code> object.
 */
- (void)logrbWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                         withNSString:(NSString *)sourceClass
                         withNSString:(NSString *)sourceMethod
                         withNSString:(NSString *)bundleName
                         withNSString:(NSString *)msg
                withJavaLangThrowable:(JavaLangThrowable *)thrown;

/*!
 @brief Removes a handler from this logger.
 If the specified handler does not
 exist then this method has no effect.
 @param handler
 the handler to be removed.
 */
- (void)removeHandlerWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)handler;

/*!
 @brief Sets the filter used by this logger.
 @param newFilter
 the filter to set, may be <code>null</code>.
 */
- (void)setFilterWithJavaUtilLoggingFilter:(id<JavaUtilLoggingFilter>)newFilter;

/*!
 @brief Sets the logging level for this logger.
 A <code>null</code> level indicates
 that this logger will inherit its parent's level.
 @param newLevel
 the logging level to set.
 */
- (void)setLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)newLevel;

/*!
 @brief Sets the parent of this logger in the namespace.
 This method should be
 used by the <code>LogManager</code> object only.
 @param parent
 the parent logger to set.
 */
- (void)setParentWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)parent;

/*!
 @brief Sets the flag which indicates whether to use the handlers of this
 logger's parent, potentially recursively up the namespace.
 @param notifyParentHandlers
 the new flag indicating whether to use the parent's handlers.
 */
- (void)setUseParentHandlersWithBoolean:(jboolean)notifyParentHandlers;

/*!
 @brief Logs a message of level <code>Level.SEVERE</code>; the message is transmitted
 to all subscribed handlers.
 @param msg
 the message to log.
 */
- (void)severeWithNSString:(NSString *)msg;

/*!
 @brief Logs a message indicating that an exception is thrown.
 A log record with
 log level <code>Level.FINER</code>, log message "THROW", the specified source
 class name, source method name and the <code>Throwable</code> object is
 submitted for logging.
 @param sourceClass
 the source class name.
 @param sourceMethod
 the source method name.
 @param thrown
 the <code>Throwable</code> object.
 */
- (void)throwingWithNSString:(NSString *)sourceClass
                withNSString:(NSString *)sourceMethod
       withJavaLangThrowable:(JavaLangThrowable *)thrown;

/*!
 @brief Logs a message of level <code>Level.WARNING</code>; the message is
 transmitted to all subscribed handlers.
 @param msg
 the message to log.
 */
- (void)warningWithNSString:(NSString *)msg;

#pragma mark Protected

/*!
 @brief Constructs a <code>Logger</code> object with the supplied name and resource
 bundle name; <code>notifiyParentHandlers</code> is set to <code>true</code>.
 <p>
 Notice : Loggers use a naming hierarchy. Thus "z.x.y" is a child of "z.x".
 @param name
 the name of this logger, may be <code>null</code> for anonymous
 loggers.
 @param resourceBundleName
 the name of the resource bundle used to localize logging
 messages, may be <code>null</code>.
 @throws MissingResourceException
 if the specified resource bundle can not be loaded.
 */
- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)resourceBundleName;

#pragma mark Package-Private

/*!
 @brief Load the specified resource bundle, use privileged code.
 @param resourceBundleName
 the name of the resource bundle to load, cannot be <code>null</code>.
 @return the loaded resource bundle.
 @throws MissingResourceException
 if the specified resource bundle can not be loaded.
 */
+ (JavaUtilResourceBundle *)loadResourceBundleWithNSString:(NSString *)resourceBundleName;

- (void)reset;

/*!
 @brief Set the logger's manager and initializes its configuration from the
 manager's properties.
 */
- (void)setManagerWithJavaUtilLoggingLogManager:(JavaUtilLoggingLogManager *)manager;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLogger)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilLoggingLogger, levelObjVal_, JavaUtilLoggingLevel *)
J2OBJC_FIELD_SETTER(JavaUtilLoggingLogger, children_, id<JavaUtilList>)

FOUNDATION_EXPORT NSString *JavaUtilLoggingLogger_GLOBAL_LOGGER_NAME_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLogger, GLOBAL_LOGGER_NAME_, NSString *)

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_global_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLogger, global_, JavaUtilLoggingLogger *)

FOUNDATION_EXPORT void JavaUtilLoggingLogger_initWithNSString_withNSString_(JavaUtilLoggingLogger *self, NSString *name, NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLogger *new_JavaUtilLoggingLogger_initWithNSString_withNSString_(NSString *name, NSString *resourceBundleName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilLoggingLogger_loadResourceBundleWithNSString_(NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getAnonymousLogger();

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getAnonymousLoggerWithNSString_(NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getLoggerWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getLoggerWithNSString_withNSString_(NSString *name, NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getGlobal();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogger)

#endif // _JavaUtilLoggingLogger_H_
