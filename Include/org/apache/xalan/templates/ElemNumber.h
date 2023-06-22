//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemNumber.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemNumber")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemNumber
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemNumber 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemNumber 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemNumber

#if !defined (OrgApacheXalanTemplatesElemNumber_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemNumber || defined(INCLUDE_OrgApacheXalanTemplatesElemNumber))
#define OrgApacheXalanTemplatesElemNumber_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class IOSLongArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilLocale;
@class OrgApacheXalanTemplatesAVT;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXmlUtilsNodeVector;
@class OrgApacheXmlUtilsResCharArrayWrapper;
@class OrgApacheXmlUtilsResXResourceBundle;
@class OrgApacheXpathXPath;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXalanTemplatesElemNumber : OrgApacheXalanTemplatesElemTemplateElement

#pragma mark Public

- (instancetype)init;

- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

- (OrgApacheXpathXPath *)getCount;

- (OrgApacheXalanTemplatesAVT *)getFormat;

- (OrgApacheXpathXPath *)getFrom;

- (OrgApacheXalanTemplatesAVT *)getGroupingSeparator;

- (OrgApacheXalanTemplatesAVT *)getGroupingSize;

- (OrgApacheXalanTemplatesAVT *)getLang;

- (OrgApacheXalanTemplatesAVT *)getLetterValue;

- (jint)getLevel;

- (NSString *)getNodeName;

- (jint)getPreviousNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                              withInt:(jint)pos;

- (jint)getTargetNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                            withInt:(jint)sourceNode;

- (OrgApacheXpathXPath *)getValue;

- (jint)getXSLToken;

- (void)setCountWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

- (void)setFormatWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

- (void)setFromWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

- (void)setGroupingSeparatorWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

- (void)setGroupingSizeWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

- (void)setLangWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

- (void)setLetterValueWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

- (void)setLevelWithInt:(jint)v;

- (void)setValueWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

#pragma mark Protected

- (void)int2alphaCountWithLong:(jlong)val
withOrgApacheXmlUtilsResCharArrayWrapper:(OrgApacheXmlUtilsResCharArrayWrapper *)aTable
withOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)stringBuf;

- (NSString *)int2singlealphaCountWithLong:(jlong)val
  withOrgApacheXmlUtilsResCharArrayWrapper:(OrgApacheXmlUtilsResCharArrayWrapper *)table;

- (NSString *)long2romanWithLong:(jlong)val
                     withBoolean:(jboolean)prefixesAreOK;

- (NSString *)tradAlphaCountWithLong:(jlong)val
withOrgApacheXmlUtilsResXResourceBundle:(OrgApacheXmlUtilsResXResourceBundle *)thisBundle;

#pragma mark Package-Private

- (jint)findAncestorWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                           withOrgApacheXpathXPath:(OrgApacheXpathXPath *)fromMatchPattern
                           withOrgApacheXpathXPath:(OrgApacheXpathXPath *)countMatchPattern
                                           withInt:(jint)context
             withOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)namespaceContext;

- (NSString *)formatNumberListWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                             withLongArray:(IOSLongArray *)list
                                                                   withInt:(jint)contextNode;

- (OrgApacheXpathXPath *)getCountMatchPatternWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support
                                                                    withInt:(jint)contextNode;

- (NSString *)getCountStringWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                                 withInt:(jint)sourceNode;

- (JavaUtilLocale *)getLocaleWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                                  withInt:(jint)contextNode;

- (OrgApacheXmlUtilsNodeVector *)getMatchingAncestorsWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                            withInt:(jint)node
                                                                        withBoolean:(jboolean)stopAtFirstFound;

- (NSString *)getZeroString;

@end

J2OBJC_STATIC_INIT(OrgApacheXalanTemplatesElemNumber)

inline jlong OrgApacheXalanTemplatesElemNumber_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemNumber_serialVersionUID 8118472298274407610LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemNumber, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemNumber_init(OrgApacheXalanTemplatesElemNumber *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemNumber *new_OrgApacheXalanTemplatesElemNumber_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemNumber *create_OrgApacheXalanTemplatesElemNumber_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemNumber)

#endif

#if !defined (OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemNumber || defined(INCLUDE_OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer))
#define OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer_

@class JavaLangBoolean;
@class JavaLangInteger;
@class OrgApacheXalanTemplatesElemNumber;

@interface OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer : NSObject

#pragma mark Public

- (instancetype)initWithOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)outer$
                                             withNSString:(NSString *)str;

- (jint)countTokens;

- (jboolean)hasMoreTokens;

- (jboolean)isLetterOrDigitAhead;

- (jboolean)nextIsSep;

- (NSString *)nextToken;

- (void)reset;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer_initWithOrgApacheXalanTemplatesElemNumber_withNSString_(OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer *self, OrgApacheXalanTemplatesElemNumber *outer$, NSString *str);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer *new_OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer_initWithOrgApacheXalanTemplatesElemNumber_withNSString_(OrgApacheXalanTemplatesElemNumber *outer$, NSString *str) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer *create_OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer_initWithOrgApacheXalanTemplatesElemNumber_withNSString_(OrgApacheXalanTemplatesElemNumber *outer$, NSString *str);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemNumber_NumberFormatStringTokenizer)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemNumber")