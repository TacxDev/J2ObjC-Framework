//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ErrorHandler.java
//

#ifndef _OrgXmlSaxErrorHandler_H_
#define _OrgXmlSaxErrorHandler_H_

#include "../../../J2ObjC_header.h"

@class OrgXmlSaxSAXParseException;

/*!
 @brief Basic interface for SAX error handlers.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>If a SAX application needs to implement customized error
 handling, it must implement this interface and then register an
 instance with the XML reader using the
 <code>setErrorHandler</code>
 method.  The parser will then report all errors and warnings
 through this interface.</p>
 <p><strong>WARNING:</strong> If an application does <em>not</em>
 register an ErrorHandler, XML parsing errors will go unreported,
 except that <em>SAXParseException</em>s will be thrown for fatal errors.
 In order to detect validity errors, an ErrorHandler that does something
 with <code>error()</code> calls must be registered.</p>
 <p>For XML processing errors, a SAX driver must use this interface
 in preference to throwing an exception: it is up to the application
 to decide whether to throw an exception for different types of
 errors and warnings.  Note, however, that there is no requirement that
 the parser continue to report additional errors after a call to
 <code>fatalError</code>.  In other words, a SAX driver class
 may throw an exception after reporting any fatalError.
 Also parsers may throw appropriate exceptions for non-XML errors.
 For example, <code>XMLReader.parse()</code> would throw
 an IOException for errors accessing entities or the document.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1+ (sax2r3pre1)
 */
@protocol OrgXmlSaxErrorHandler < NSObject, JavaObject >

/*!
 @brief Receive notification of a warning.
 <p>SAX parsers will use this method to report conditions that
 are not errors or fatal errors as defined by the XML
 recommendation.  The default behaviour is to take no
 action.</p>
 <p>The SAX parser must continue to provide normal parsing events
 after invoking this method: it should still be possible for the
 application to process the document through to the end.</p>
 <p>Filters may use this method to report other, non-XML warnings
 as well.</p>
 @param exception The warning information encapsulated in a
 SAX parse exception.
 @exception org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 */
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

/*!
 @brief Receive notification of a recoverable error.
 <p>This corresponds to the definition of "error" in section 1.2
 of the W3C XML 1.0 Recommendation.  For example, a validating
 parser would use this callback to report the violation of a
 validity constraint.  The default behaviour is to take no
 action.</p>
 <p>The SAX parser must continue to provide normal parsing
 events after invoking this method: it should still be possible
 for the application to process the document through to the end.
 If the application cannot do so, then the parser should report
 a fatal error even if the XML recommendation does not require
 it to do so.</p>
 <p>Filters may use this method to report other, non-XML errors
 as well.</p>
 @param exception The error information encapsulated in a
 SAX parse exception.
 @exception org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 */
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

/*!
 @brief Receive notification of a non-recoverable error.
 <p><strong>There is an apparent contradiction between the
 documentation for this method and the documentation for <code>org.xml.sax.ContentHandler.endDocument</code>
 .  Until this ambiguity
 is resolved in a future major release, clients should make no
 assumptions about whether endDocument() will or will not be
 invoked when the parser has reported a fatalError() or thrown
 an exception.</strong></p>
 <p>This corresponds to the definition of "fatal error" in
 section 1.2 of the W3C XML 1.0 Recommendation.  For example, a
 parser would use this callback to report the violation of a
 well-formedness constraint.</p>
 <p>The application must assume that the document is unusable
 after the parser has invoked this method, and should continue
 (if at all) only for the sake of collecting additional error
 messages: in fact, SAX parsers are free to stop reporting any
 other events once this method has been invoked.</p>
 @param exception The error information encapsulated in a
 SAX parse exception.
 @exception org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 */
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxErrorHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxErrorHandler)

#endif // _OrgXmlSaxErrorHandler_H_
