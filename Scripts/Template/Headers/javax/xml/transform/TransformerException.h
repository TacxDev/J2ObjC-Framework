//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/TransformerException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformTransformerException")
#ifdef RESTRICT_JavaxXmlTransformTransformerException
#define INCLUDE_ALL_JavaxXmlTransformTransformerException 0
#else
#define INCLUDE_ALL_JavaxXmlTransformTransformerException 1
#endif
#undef RESTRICT_JavaxXmlTransformTransformerException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformTransformerException_) && (INCLUDE_ALL_JavaxXmlTransformTransformerException || defined(INCLUDE_JavaxXmlTransformTransformerException))
#define JavaxXmlTransformTransformerException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../java/lang/Exception.h"

@class JavaIoPrintStream;
@class JavaIoPrintWriter;
@protocol JavaxXmlTransformSourceLocator;

/*!
 @brief This class specifies an exceptional condition that occurred
 during the transformation process.
 */
@interface JavaxXmlTransformTransformerException : JavaLangException {
 @public
  /*!
   @brief Field locator specifies where the error occurred
   */
  id<JavaxXmlTransformSourceLocator> locator_;
  /*!
   @brief Field containedException specifies a wrapped exception.
   May be null. 
   */
  NSException *containedException_;
}

#pragma mark Public

/*!
 @brief Create a new TransformerException.
 @param message The error or warning message.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Create a new TransformerException from a message and a Locator.
 <p>This constructor is especially useful when an application is
 creating its own exception from within a DocumentHandler
 callback.</p>
 @param message The error or warning message.
 @param locator The locator object for the error or warning.
 */
- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Wrap an existing exception in a TransformerException.
 @param message The error or warning message, or null to
 use the message from the embedded exception.
 @param locator The locator object for the error or warning.
 @param e Any exception
 */
- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
                 withNSException:(NSException *)e;

/*!
 @brief Wrap an existing exception in a TransformerException.
 <p>This is used for throwing processor exceptions before
 the processing has started.</p>
 @param message The error or warning message, or null to
 use the message from the embedded exception.
 @param e Any exception
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)e;

/*!
 @brief Create a new TransformerException wrapping an existing exception.
 @param e The exception to be wrapped.
 */
- (instancetype)initWithNSException:(NSException *)e;

/*!
 @brief Returns the cause of this throwable or <code>null</code> if the
 cause is nonexistent or unknown.
 (The cause is the throwable that
 caused this throwable to get thrown.)
 */
- (NSException *)getCause;

/*!
 @brief This method retrieves an exception that this exception wraps.
 @return An Throwable object, or null.
 - seealso: #getCause
 */
- (NSException *)getException;

/*!
 @brief Get the location information as a string.
 @return A string with location info, or null
 if there is no location information.
 */
- (NSString *)getLocationAsString;

/*!
 @brief Method getLocator retrieves an instance of a SourceLocator
 object that specifies where an error occurred.
 @return A SourceLocator object, or null if none was specified.
 */
- (id<JavaxXmlTransformSourceLocator>)getLocator;

/*!
 @brief Get the error message with location information
 appended.
 @return A <code>String</code> representing the error message with
 location information appended.
 */
- (NSString *)getMessageAndLocation;

/*!
 @brief Initializes the <i>cause</i> of this throwable to the specified value.
 (The cause is the throwable that caused this throwable to get thrown.)
 <p>This method can be called at most once.  It is generally called from
 within the constructor, or immediately after creating the
 throwable.  If this throwable was created
 with <code>TransformerException(Throwable)</code> or
 <code>TransformerException(String,Throwable)</code>, this method cannot be called
 even once.
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A <tt>null</tt> value is
 permitted, and indicates that the cause is nonexistent or
 unknown.)
 @return a reference to this <code>Throwable</code> instance.
 @throws IllegalArgumentException if <code>cause</code> is this
 throwable.  (A throwable cannot
 be its own cause.)
 @throws IllegalStateException if this throwable was
 created with <code>TransformerException(Throwable)</code> or
 <code>TransformerException(String,Throwable)</code>, or this method has already
 been called on this throwable.
 */
- (NSException *)initCauseWithNSException:(NSException *)cause OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Print the the trace of methods from where the error
 originated.
 This will trace all nested exception
 objects, as well as this object.
 */
- (void)printStackTrace;

/*!
 @brief Print the the trace of methods from where the error
 originated.
 This will trace all nested exception
 objects, as well as this object.
 @param s The stream where the dump will be sent to.
 */
- (void)printStackTraceWithJavaIoPrintStream:(JavaIoPrintStream *)s;

/*!
 @brief Print the the trace of methods from where the error
 originated.
 This will trace all nested exception
 objects, as well as this object.
 @param s The writer where the dump will be sent to.
 */
- (void)printStackTraceWithJavaIoPrintWriter:(JavaIoPrintWriter *)s;

/*!
 @brief Method setLocator sets an instance of a SourceLocator
 object that specifies where an error occurred.
 @param location A SourceLocator object, or null to clear the location.
 */
- (void)setLocatorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)location;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerException)

J2OBJC_FIELD_SETTER(JavaxXmlTransformTransformerException, locator_, id<JavaxXmlTransformSourceLocator>)
J2OBJC_FIELD_SETTER(JavaxXmlTransformTransformerException, containedException_, NSException *)

FOUNDATION_EXPORT void JavaxXmlTransformTransformerException_initWithNSString_(JavaxXmlTransformTransformerException *self, NSString *message);

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *new_JavaxXmlTransformTransformerException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *create_JavaxXmlTransformTransformerException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerException_initWithNSException_(JavaxXmlTransformTransformerException *self, NSException *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *new_JavaxXmlTransformTransformerException_initWithNSException_(NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *create_JavaxXmlTransformTransformerException_initWithNSException_(NSException *e);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerException_initWithNSString_withNSException_(JavaxXmlTransformTransformerException *self, NSString *message, NSException *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *new_JavaxXmlTransformTransformerException_initWithNSString_withNSException_(NSString *message, NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *create_JavaxXmlTransformTransformerException_initWithNSString_withNSException_(NSString *message, NSException *e);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerException_initWithNSString_withJavaxXmlTransformSourceLocator_(JavaxXmlTransformTransformerException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *new_JavaxXmlTransformTransformerException_initWithNSString_withJavaxXmlTransformSourceLocator_(NSString *message, id<JavaxXmlTransformSourceLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *create_JavaxXmlTransformTransformerException_initWithNSString_withJavaxXmlTransformSourceLocator_(NSString *message, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(JavaxXmlTransformTransformerException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *new_JavaxXmlTransformTransformerException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerException *create_JavaxXmlTransformTransformerException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformTransformerException")