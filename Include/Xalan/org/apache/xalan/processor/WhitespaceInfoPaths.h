//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/WhitespaceInfoPaths.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths")
#ifdef RESTRICT_OrgApacheXalanProcessorWhitespaceInfoPaths
#define INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorWhitespaceInfoPaths

#if !defined (OrgApacheXalanProcessorWhitespaceInfoPaths_) && (INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths || defined(INCLUDE_OrgApacheXalanProcessorWhitespaceInfoPaths))
#define OrgApacheXalanProcessorWhitespaceInfoPaths_

#define RESTRICT_OrgApacheXalanTemplatesWhiteSpaceInfo 1
#define INCLUDE_OrgApacheXalanTemplatesWhiteSpaceInfo 1
#include "org/apache/xalan/templates/WhiteSpaceInfo.h"

@class JavaLangBoolean;
@class JavaLangLong;
@class JavaUtilVector;
@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXpathXPath;

@interface OrgApacheXalanProcessorWhitespaceInfoPaths : OrgApacheXalanTemplatesWhiteSpaceInfo

#pragma mark Public

- (instancetype)initWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)thisSheet;

- (void)clearElements;

- (void)setElementsWithJavaUtilVector:(JavaUtilVector *)elems;

#pragma mark Package-Private

- (JavaUtilVector *)getElements;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)arg0
                                withBoolean:(jboolean)arg1
      withOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorWhitespaceInfoPaths)

inline jlong OrgApacheXalanProcessorWhitespaceInfoPaths_get_serialVersionUID(void);
#define OrgApacheXalanProcessorWhitespaceInfoPaths_serialVersionUID 5954766719577516723LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorWhitespaceInfoPaths, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorWhitespaceInfoPaths_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanProcessorWhitespaceInfoPaths *self, OrgApacheXalanTemplatesStylesheet *thisSheet);

FOUNDATION_EXPORT OrgApacheXalanProcessorWhitespaceInfoPaths *new_OrgApacheXalanProcessorWhitespaceInfoPaths_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *thisSheet) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorWhitespaceInfoPaths *create_OrgApacheXalanProcessorWhitespaceInfoPaths_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *thisSheet);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorWhitespaceInfoPaths)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths")
