//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/HandlerBase.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxHandlerBase")
#ifdef RESTRICT_OrgXmlSaxHandlerBase
#define INCLUDE_ALL_OrgXmlSaxHandlerBase 0
#else
#define INCLUDE_ALL_OrgXmlSaxHandlerBase 1
#endif
#undef RESTRICT_OrgXmlSaxHandlerBase

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlSaxHandlerBase_) && (INCLUDE_ALL_OrgXmlSaxHandlerBase || defined(INCLUDE_OrgXmlSaxHandlerBase))
#define OrgXmlSaxHandlerBase_

#define RESTRICT_OrgXmlSaxEntityResolver 1
#define INCLUDE_OrgXmlSaxEntityResolver 1
#include "org/xml/sax/EntityResolver.h"

#define RESTRICT_OrgXmlSaxDTDHandler 1
#define INCLUDE_OrgXmlSaxDTDHandler 1
#include "org/xml/sax/DTDHandler.h"

#define RESTRICT_OrgXmlSaxDocumentHandler 1
#define INCLUDE_OrgXmlSaxDocumentHandler 1
#include "org/xml/sax/DocumentHandler.h"

#define RESTRICT_OrgXmlSaxErrorHandler 1
#define INCLUDE_OrgXmlSaxErrorHandler 1
#include "org/xml/sax/ErrorHandler.h"

@class IOSCharArray;
@class JavaLangInteger;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXParseException;
@protocol OrgXmlSaxAttributeList;
@protocol OrgXmlSaxLocator;

/*!
 @brief Default base class for handlers.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p>This class implements the default behaviour for four SAX1
  interfaces: EntityResolver, DTDHandler, DocumentHandler,
  and ErrorHandler.  It is now obsolete, but is included in SAX2 to
  support legacy SAX1 applications.  SAX2 applications should use
  the <code>DefaultHandler</code>
  class instead.</p>
  
 <p>Application writers can extend this class when they need to
  implement only part of an interface; parser writers can
  instantiate this class to provide default handlers when the
  application has not supplied its own.</p>
  
 <p>Note that the use of this class is optional.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.EntityResolver
 - seealso: org.xml.sax.DTDHandler
 - seealso: org.xml.sax.DocumentHandler
 - seealso: org.xml.sax.ErrorHandler
 */
@interface OrgXmlSaxHandlerBase : NSObject < OrgXmlSaxEntityResolver, OrgXmlSaxDTDHandler, OrgXmlSaxDocumentHandler, OrgXmlSaxErrorHandler >

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Receive notification of character data inside an element.
 <p>By default, do nothing.  Application writers may override this
  method to take specific actions for each chunk of character data
  (such as adding the data to a node or buffer, or printing it to
  a file).</p>
 @param ch The characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the                character array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DocumentHandler#characters
 */
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief Receive notification of the end of the document.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the beginning
  of a document (such as finalising a tree or closing an output
  file).</p>
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DocumentHandler#endDocument
 */
- (void)endDocument;

/*!
 @brief Receive notification of the end of an element.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the end of
  each element (such as finalising a tree node or writing
  output to a file).</p>
 @param name the element name
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DocumentHandler#endElement
 */
- (void)endElementWithNSString:(NSString *)name;

/*!
 @brief Receive notification of a recoverable parser error.
 <p>The default implementation does nothing.  Application writers
  may override this method in a subclass to take specific actions
  for each error, such as inserting the message in a log file or
  printing it to the console.</p>
 @param e The warning information encoded as an exception.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ErrorHandler#warning
 - seealso: org.xml.sax.SAXParseException
 */
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

/*!
 @brief Report a fatal XML parsing error.
 <p>The default implementation throws a SAXParseException.
  Application writers may override this method in a subclass if
  they need to take specific actions for each fatal error (such as
  collecting all of the errors into a single report): in any case,
  the application must stop all regular processing when this
  method is invoked, since the document is no longer reliable, and
  the parser may no longer report parsing events.</p>
 @param e The error information encoded as an exception.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ErrorHandler#fatalError
 - seealso: org.xml.sax.SAXParseException
 */
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

/*!
 @brief Receive notification of ignorable whitespace in element content.
 <p>By default, do nothing.  Application writers may override this
  method to take specific actions for each chunk of ignorable
  whitespace (such as adding data to a node or buffer, or printing
  it to a file).</p>
 @param ch The whitespace characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the                character array.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DocumentHandler#ignorableWhitespace
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

/*!
 @brief Receive notification of a notation declaration.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass if they wish to keep track of the notations
  declared in a document.</p>
 @param name The notation name.
 @param publicId The notation public identifier, or null if not                  available.
 @param systemId The notation system identifier.
 - seealso: org.xml.sax.DTDHandler#notationDecl
 */
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of a processing instruction.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions for each
  processing instruction, such as setting status variables or
  invoking other methods.</p>
 @param target The processing instruction target.
 @param data The processing instruction data, or null if              none is supplied.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DocumentHandler#processingInstruction
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Resolve an external entity.
 <p>Always return null, so that the parser will use the system
  identifier provided in the XML document.  This method implements
  the SAX default behaviour: application writers can override it
  in a subclass to do special translations such as catalog lookups
  or URI redirection.</p>
 @param publicId The public identifier, or null if none is                  available.
 @param systemId The system identifier provided in the XML                  document.
 @return The new input source, or null to require the
          default behaviour.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.EntityResolver#resolveEntity
 */
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;

/*!
 @brief Receive a Locator object for document events.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass if they wish to store the locator for use
  with other document events.</p>
 @param locator A locator for all SAX document events.
 - seealso: org.xml.sax.DocumentHandler#setDocumentLocator
 - seealso: org.xml.sax.Locator
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Receive notification of the beginning of the document.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the beginning
  of a document (such as allocating the root node of a tree or
  creating an output file).</p>
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DocumentHandler#startDocument
 */
- (void)startDocument;

/*!
 @brief Receive notification of the start of an element.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to take specific actions at the start of
  each element (such as allocating a new tree node or writing
  output to a file).</p>
 @param name The element type name.
 @param attributes The specified or defaulted attributes.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.DocumentHandler#startElement
 */
- (void)startElementWithNSString:(NSString *)name
      withOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)attributes;

/*!
 @brief Receive notification of an unparsed entity declaration.
 <p>By default, do nothing.  Application writers may override this
  method in a subclass to keep track of the unparsed entities
  declared in a document.</p>
 @param name The entity name.
 @param publicId The entity public identifier, or null if not                  available.
 @param systemId The entity system identifier.
 @param notationName The name of the associated notation.
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl
 */
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

/*!
 @brief Receive notification of a parser warning.
 <p>The default implementation does nothing.  Application writers
  may override this method in a subclass to take specific actions
  for each warning, such as inserting the message in a log file or
  printing it to the console.</p>
 @param e The warning information encoded as an exception.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: org.xml.sax.ErrorHandler#warning
 - seealso: org.xml.sax.SAXParseException
 */
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHandlerBase)

FOUNDATION_EXPORT void OrgXmlSaxHandlerBase_init(OrgXmlSaxHandlerBase *self);

FOUNDATION_EXPORT OrgXmlSaxHandlerBase *new_OrgXmlSaxHandlerBase_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHandlerBase *create_OrgXmlSaxHandlerBase_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHandlerBase)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxHandlerBase")
