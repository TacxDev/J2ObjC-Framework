//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorTemplate.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorTemplate
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorTemplate

#if !defined (OrgApacheXalanProcessorProcessorTemplate_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate || defined(INCLUDE_OrgApacheXalanProcessorProcessorTemplate))
#define OrgApacheXalanProcessorProcessorTemplate_

#define RESTRICT_OrgApacheXalanProcessorProcessorTemplateElem 1
#define INCLUDE_OrgApacheXalanProcessorProcessorTemplateElem 1
#include "org/apache/xalan/processor/ProcessorTemplateElem.h"

@class JavaLangLong;
@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesElemTemplateElement;

@interface OrgApacheXalanProcessorProcessorTemplate : OrgApacheXalanProcessorProcessorTemplateElem

#pragma mark Protected

- (void)appendAndPushWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                   withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorTemplate)

inline jlong OrgApacheXalanProcessorProcessorTemplate_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorTemplate_serialVersionUID -8457812845473603860LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorTemplate, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorTemplate_initPackagePrivate(OrgApacheXalanProcessorProcessorTemplate *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorTemplate *new_OrgApacheXalanProcessorProcessorTemplate_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorTemplate *create_OrgApacheXalanProcessorProcessorTemplate_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorTemplate)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate")