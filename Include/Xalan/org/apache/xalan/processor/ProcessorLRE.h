//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorLRE.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorLRE
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorLRE

#if !defined (OrgApacheXalanProcessorProcessorLRE_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE || defined(INCLUDE_OrgApacheXalanProcessorProcessorLRE))
#define OrgApacheXalanProcessorProcessorLRE_

#define RESTRICT_OrgApacheXalanProcessorProcessorTemplateElem 1
#define INCLUDE_OrgApacheXalanProcessorProcessorTemplateElem 1
#include "org/apache/xalan/processor/ProcessorTemplateElem.h"

@class JavaLangLong;
@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesStylesheet;
@protocol OrgXmlSaxAttributes;

@interface OrgApacheXalanProcessorProcessorLRE : OrgApacheXalanProcessorProcessorTemplateElem

#pragma mark Public

- (instancetype)init;

- (void)endElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                  withNSString:(NSString *)uri
                                                  withNSString:(NSString *)localName
                                                  withNSString:(NSString *)rawName;

- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Protected

- (OrgApacheXalanTemplatesStylesheet *)getStylesheetRootWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorLRE)

inline jlong OrgApacheXalanProcessorProcessorLRE_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorLRE_serialVersionUID -1490218021772101404LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorLRE, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorLRE_init(OrgApacheXalanProcessorProcessorLRE *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorLRE *new_OrgApacheXalanProcessorProcessorLRE_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorLRE *create_OrgApacheXalanProcessorProcessorLRE_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorLRE)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE")
