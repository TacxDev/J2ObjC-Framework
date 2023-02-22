//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Log.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidUtilLog")
#ifdef RESTRICT_AndroidUtilLog
#define INCLUDE_ALL_AndroidUtilLog 0
#else
#define INCLUDE_ALL_AndroidUtilLog 1
#endif
#undef RESTRICT_AndroidUtilLog

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidUtilLog_) && (INCLUDE_ALL_AndroidUtilLog || defined(INCLUDE_AndroidUtilLog))
#define AndroidUtilLog_

@class JavaLangThrowable;
@protocol AndroidUtilLog_TerribleFailureHandler;

/*!
 @brief API for sending log output.
 <p>Generally, use the Log.v() Log.d() Log.i() Log.w() and Log.e()
  methods. 
 <p>The order in terms of verbosity, from least to most is
  ERROR, WARN, INFO, DEBUG, VERBOSE.  Verbose should never be compiled
  into an application except during development.  Debug logs are compiled
  in but stripped at runtime.  Error, warning and info logs are always kept. 
 <p><b>Tip:</b> A good convention is to declare a <code>TAG</code> constant
  in your class: 
 @code
private static final String TAG = "MyActivity";
@endcode
  and use that in subsequent calls to the log methods. 
 </p>
  
 <p><b>Tip:</b> Don't forget that when you make a call like 
 @code
Log.v(TAG, "index=" + i);
@endcode
  that when you're building the string to pass into Log.d, the compiler uses a
  StringBuilder and at least three allocations occur: the StringBuilder
  itself, the buffer, and the String object.  Realistically, there is also
  another buffer allocation and copy, and even more pressure on the gc.
  That means that if your log message is filtered out, you might be doing
  significant work and incurring significant overhead.
 */
@interface AndroidUtilLog : NSObject
@property (readonly, class) jint VERBOSE NS_SWIFT_NAME(VERBOSE);
@property (readonly, class) jint DEBUG_ NS_SWIFT_NAME(DEBUG_);
@property (readonly, class) jint INFO NS_SWIFT_NAME(INFO);
@property (readonly, class) jint WARN NS_SWIFT_NAME(WARN);
@property (readonly, class) jint ERROR NS_SWIFT_NAME(ERROR);
@property (readonly, class) jint ASSERT NS_SWIFT_NAME(ASSERT);
@property (readonly, class) jint LOG_ID_MAIN NS_SWIFT_NAME(LOG_ID_MAIN);
@property (readonly, class) jint LOG_ID_RADIO NS_SWIFT_NAME(LOG_ID_RADIO);
@property (readonly, class) jint LOG_ID_EVENTS NS_SWIFT_NAME(LOG_ID_EVENTS);
@property (readonly, class) jint LOG_ID_SYSTEM NS_SWIFT_NAME(LOG_ID_SYSTEM);

+ (jint)VERBOSE;

+ (jint)DEBUG_;

+ (jint)INFO;

+ (jint)WARN;

+ (jint)ERROR;

+ (jint)ASSERT;

+ (jint)LOG_ID_MAIN;

+ (jint)LOG_ID_RADIO;

+ (jint)LOG_ID_EVENTS;

+ (jint)LOG_ID_SYSTEM;

#pragma mark Public

/*!
 @brief Send a <code>DEBUG</code> log message.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 */
+ (jint)dWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

/*!
 @brief Send a <code>DEBUG</code> log message and log the exception.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 @param tr An exception to log
 */
+ (jint)dWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

/*!
 @brief Send an <code>ERROR</code> log message.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 */
+ (jint)eWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

/*!
 @brief Send a <code>ERROR</code> log message and log the exception.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 @param tr An exception to log
 */
+ (jint)eWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

/*!
 @brief Handy function to get a loggable stack trace from a Throwable
 @param tr An exception to log
 */
+ (NSString *)getStackTraceStringWithJavaLangThrowable:(JavaLangThrowable *)tr;

/*!
 @brief Send an <code>INFO</code> log message.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 */
+ (jint)iWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

/*!
 @brief Send a <code>INFO</code> log message and log the exception.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 @param tr An exception to log
 */
+ (jint)iWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

/*!
 @brief Checks to see whether or not a log for the specified tag is loggable at the specified level.
 The default level of any tag is set to INFO. This means that any level above and including
   INFO will be logged. Before you make any calls to a logging method you should check to see
   if your tag should be logged. You can change the default level by setting a system property:
       'setprop log.tag.&lt;YOUR_LOG_TAG> &lt;LEVEL>'
   Where level is either VERBOSE, DEBUG, INFO, WARN, ERROR, ASSERT, or SUPPRESS. SUPPRESS will
   turn off all logging for your tag. You can also create a local.prop file that with the
   following in it:
       'log.tag.&lt;YOUR_LOG_TAG>=&lt;LEVEL>'
   and place that in /data/local.prop.
 @param tag The tag to check.
 @param level The level to check.
 @return Whether or not that this is allowed to be logged.
 @throw IllegalArgumentExceptionis thrown if the tag.length() > 23.
 */
+ (jboolean)isLoggableWithNSString:(NSString *)tag
                           withInt:(jint)level;

/*!
 @brief Low-level logging call.
 @param priority The priority/type of this log message
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 @return The number of bytes written.
 */
+ (jint)printlnWithInt:(jint)priority
          withNSString:(NSString *)tag
          withNSString:(NSString *)msg;

/*!
 */
+ (jint)println_nativeWithInt:(jint)bufID
                      withInt:(jint)priority
                 withNSString:(NSString *)tag
                 withNSString:(NSString *)msg;

/*!
 @brief Sets the terrible failure handler, for testing.
 @return the old handler
 */
+ (id<AndroidUtilLog_TerribleFailureHandler>)setWtfHandlerWithAndroidUtilLog_TerribleFailureHandler:(id<AndroidUtilLog_TerribleFailureHandler>)handler;

/*!
 @brief Send a <code>VERBOSE</code> log message.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 */
+ (jint)vWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

/*!
 @brief Send a <code>VERBOSE</code> log message and log the exception.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 @param tr An exception to log
 */
+ (jint)vWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

/*!
 @brief Send a <code>WARN</code> log message.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 */
+ (jint)wWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

/*!
 @brief Send a <code>WARN</code> log message and log the exception.
 @param tag Used to identify the source of a log message.  It usually identifies         the class or activity where the log call occurs.
 @param msg The message you would like logged.
 @param tr An exception to log
 */
+ (jint)wWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jint)wWithNSString:(NSString *)tag
withJavaLangThrowable:(JavaLangThrowable *)tr;

/*!
 @brief What a Terrible Failure: Report a condition that should never happen.
 The error will always be logged at level ASSERT with the call stack.
 @param tag Used to identify the source of a log message.
 @param msg The message you would like logged.
 */
+ (jint)wtfWithNSString:(NSString *)tag
           withNSString:(NSString *)msg;

/*!
 @brief What a Terrible Failure: Report an exception that should never happen.
 Similar to <code>wtf(String, Throwable)</code>, with a message as well.
 @param tag Used to identify the source of a log message.
 @param msg The message you would like logged.
 @param tr An exception to log.  May be null.
 */
+ (jint)wtfWithNSString:(NSString *)tag
           withNSString:(NSString *)msg
  withJavaLangThrowable:(JavaLangThrowable *)tr;

/*!
 @brief What a Terrible Failure: Report an exception that should never happen.
 Similar to <code>wtf(String, String)</code>, with an exception to log.
 @param tag Used to identify the source of a log message.
 @param tr An exception to log.
 */
+ (jint)wtfWithNSString:(NSString *)tag
  withJavaLangThrowable:(JavaLangThrowable *)tr;

/*!
 @brief Like <code>wtf(String, String)</code>, but also writes to the log the full
  call stack.
 */
+ (jint)wtfStackWithNSString:(NSString *)tag
                withNSString:(NSString *)msg;

#pragma mark Package-Private

+ (jint)wtfWithInt:(jint)logId
      withNSString:(NSString *)tag
      withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr
       withBoolean:(jboolean)localStack;

@end

J2OBJC_STATIC_INIT(AndroidUtilLog)

/*!
 @brief Priority constant for the println method; use Log.v.
 */
inline jint AndroidUtilLog_get_VERBOSE(void);
#define AndroidUtilLog_VERBOSE 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, VERBOSE, jint)

/*!
 @brief Priority constant for the println method; use Log.d.
 */
inline jint AndroidUtilLog_get_DEBUG(void);
#define AndroidUtilLog_DEBUG 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, DEBUG, jint)

/*!
 @brief Priority constant for the println method; use Log.i.
 */
inline jint AndroidUtilLog_get_INFO(void);
#define AndroidUtilLog_INFO 4
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, INFO, jint)

/*!
 @brief Priority constant for the println method; use Log.w.
 */
inline jint AndroidUtilLog_get_WARN(void);
#define AndroidUtilLog_WARN 5
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, WARN, jint)

/*!
 @brief Priority constant for the println method; use Log.e.
 */
inline jint AndroidUtilLog_get_ERROR(void);
#define AndroidUtilLog_ERROR 6
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, ERROR, jint)

/*!
 @brief Priority constant for the println method.
 */
inline jint AndroidUtilLog_get_ASSERT(void);
#define AndroidUtilLog_ASSERT 7
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, ASSERT, jint)

/*!
 */
inline jint AndroidUtilLog_get_LOG_ID_MAIN(void);
#define AndroidUtilLog_LOG_ID_MAIN 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, LOG_ID_MAIN, jint)

/*!
 */
inline jint AndroidUtilLog_get_LOG_ID_RADIO(void);
#define AndroidUtilLog_LOG_ID_RADIO 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, LOG_ID_RADIO, jint)

/*!
 */
inline jint AndroidUtilLog_get_LOG_ID_EVENTS(void);
#define AndroidUtilLog_LOG_ID_EVENTS 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, LOG_ID_EVENTS, jint)

/*!
 */
inline jint AndroidUtilLog_get_LOG_ID_SYSTEM(void);
#define AndroidUtilLog_LOG_ID_SYSTEM 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidUtilLog, LOG_ID_SYSTEM, jint)

FOUNDATION_EXPORT jint AndroidUtilLog_vWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_vWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_dWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_dWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_iWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_iWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_wWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_wWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jboolean AndroidUtilLog_isLoggableWithNSString_withInt_(NSString *tag, jint level);

FOUNDATION_EXPORT jint AndroidUtilLog_wWithNSString_withJavaLangThrowable_(NSString *tag, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_eWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_eWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfStackWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfWithNSString_withJavaLangThrowable_(NSString *tag, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfWithInt_withNSString_withNSString_withJavaLangThrowable_withBoolean_(jint logId, NSString *tag, NSString *msg, JavaLangThrowable *tr, jboolean localStack);

FOUNDATION_EXPORT id<AndroidUtilLog_TerribleFailureHandler> AndroidUtilLog_setWtfHandlerWithAndroidUtilLog_TerribleFailureHandler_(id<AndroidUtilLog_TerribleFailureHandler> handler);

FOUNDATION_EXPORT NSString *AndroidUtilLog_getStackTraceStringWithJavaLangThrowable_(JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_printlnWithInt_withNSString_withNSString_(jint priority, NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_println_nativeWithInt_withInt_withNSString_withNSString_(jint bufID, jint priority, NSString *tag, NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilLog)

#endif

#if !defined (AndroidUtilLog_TerribleFailureHandler_) && (INCLUDE_ALL_AndroidUtilLog || defined(INCLUDE_AndroidUtilLog_TerribleFailureHandler))
#define AndroidUtilLog_TerribleFailureHandler_

@class AndroidUtilLog_TerribleFailure;

/*!
 @brief Interface to handle terrible failures from <code>wtf</code>.
 */
@protocol AndroidUtilLog_TerribleFailureHandler < JavaObject >

- (void)onTerribleFailureWithNSString:(NSString *)tag
   withAndroidUtilLog_TerribleFailure:(AndroidUtilLog_TerribleFailure *)what;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilLog_TerribleFailureHandler)

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilLog_TerribleFailureHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidUtilLog")
