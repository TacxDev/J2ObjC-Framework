//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/ParserFactory.java
//

#ifndef _OrgXmlSaxHelpersParserFactory_H_
#define _OrgXmlSaxHelpersParserFactory_H_

#include "../../../../J2ObjC_header.h"

@protocol OrgXmlSaxParser;

/*!
 @brief Java-specific class for dynamically loading SAX parsers.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p><strong>Note:</strong> This class is designed to work with the now-deprecated
 SAX1 <code>Parser</code> class.  SAX2 applications should use
 <code>XMLReaderFactory</code> instead.</p>
 <p>ParserFactory is not part of the platform-independent definition
 of SAX; it is an additional convenience class designed
 specifically for Java XML application writers.  SAX applications
 can use the static methods in this class to allocate a SAX parser
 dynamically at run-time based either on the value of the
 `org.xml.sax.parser' system property or on a string containing the class
 name.</p>
 <p>Note that the application still requires an XML parser that
 implements SAX1.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 */
@interface OrgXmlSaxHelpersParserFactory : NSObject

#pragma mark Public

/*!
 @brief Create a new SAX parser using the `org.xml.sax.parser' system property.
 <p>The named class must exist and must implement the
 <code>Parser</code> interface.</p>
 @return the newly created parser.
 @exception java.lang.NullPointerException There is no value
 for the `org.xml.sax.parser' system property.
 @exception java.lang.ClassNotFoundException The SAX parser
 class was not found (check your CLASSPATH).
 @exception IllegalAccessException The SAX parser class was
 found, but you do not have permission to load
 it.
 @exception InstantiationException The SAX parser class was
 found but could not be instantiated.
 @exception java.lang.ClassCastException The SAX parser class
 was found and instantiated, but does not implement
 org.xml.sax.Parser.
 */
+ (id<OrgXmlSaxParser>)makeParser;

/*!
 @brief Create a new SAX parser object using the class name provided.
 <p>The named class must exist and must implement the
 <code>Parser</code> interface.</p>
 @return the newly created parser.
 @param className_ A string containing the name of the
 SAX parser class.
 @exception java.lang.ClassNotFoundException The SAX parser
 class was not found (check your CLASSPATH).
 @exception IllegalAccessException The SAX parser class was
 found, but you do not have permission to load
 it.
 @exception InstantiationException The SAX parser class was
 found but could not be instantiated.
 @exception java.lang.ClassCastException The SAX parser class
 was found and instantiated, but does not implement
 org.xml.sax.Parser.
 */
+ (id<OrgXmlSaxParser>)makeParserWithNSString:(NSString *)className_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersParserFactory)

FOUNDATION_EXPORT id<OrgXmlSaxParser> OrgXmlSaxHelpersParserFactory_makeParser();

FOUNDATION_EXPORT id<OrgXmlSaxParser> OrgXmlSaxHelpersParserFactory_makeParserWithNSString_(NSString *className_);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersParserFactory)

#endif // _OrgXmlSaxHelpersParserFactory_H_
