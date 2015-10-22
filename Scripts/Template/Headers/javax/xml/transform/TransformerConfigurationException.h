//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/TransformerConfigurationException.java
//

#ifndef _JavaxXmlTransformTransformerConfigurationException_H_
#define _JavaxXmlTransformTransformerConfigurationException_H_

#include "../../../J2ObjC_header.h"
#include "../../../javax/xml/transform/TransformerException.h"

@class JavaLangThrowable;
@protocol JavaxXmlTransformSourceLocator;

/*!
 @brief Indicates a serious configuration error.
 */
@interface JavaxXmlTransformTransformerConfigurationException : JavaxXmlTransformTransformerException

#pragma mark Public

/*!
 @brief Create a new <code>TransformerConfigurationException</code> with no
 detail message.
 */
- (instancetype)init;

/*!
 @brief Create a new <code>TransformerConfigurationException</code> with
 the <code>String </code> specified as an error message.
 @param msg The error message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Create a new TransformerConfigurationException from a message and a Locator.
 <p>This constructor is especially useful when an application is
 creating its own exception from within a DocumentHandler
 callback.</p>
 @param message The error or warning message.
 @param locator The locator object for the error or warning.
 */
- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Wrap an existing exception in a TransformerConfigurationException.
 @param message The error or warning message, or null to
 use the message from the embedded exception.
 @param locator The locator object for the error or warning.
 @param e Any exception.
 */
- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
           withJavaLangThrowable:(JavaLangThrowable *)e;

/*!
 @brief Create a new <code>TransformerConfigurationException</code> with the
 given <code>Exception</code> base cause and detail message.
 @param e The exception to be encapsulated in a
 TransformerConfigurationException
 @param msg The detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg
           withJavaLangThrowable:(JavaLangThrowable *)e;

/*!
 @brief Create a new <code>TransformerConfigurationException</code> with a
 given <code>Exception</code> base cause of the error.
 @param e The exception to be encapsulated in a
 TransformerConfigurationException.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerConfigurationException)

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_init(JavaxXmlTransformTransformerConfigurationException *self);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_(JavaxXmlTransformTransformerConfigurationException *self, NSString *msg);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithJavaLangThrowable_(JavaxXmlTransformTransformerConfigurationException *self, JavaLangThrowable *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithJavaLangThrowable_(JavaLangThrowable *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaLangThrowable_(JavaxXmlTransformTransformerConfigurationException *self, NSString *msg, JavaLangThrowable *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_(JavaxXmlTransformTransformerConfigurationException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_(NSString *message, id<JavaxXmlTransformSourceLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_withJavaLangThrowable_(JavaxXmlTransformTransformerConfigurationException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator, JavaLangThrowable *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_withJavaLangThrowable_(NSString *message, id<JavaxXmlTransformSourceLocator> locator, JavaLangThrowable *e) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerConfigurationException)

#endif // _JavaxXmlTransformTransformerConfigurationException_H_
