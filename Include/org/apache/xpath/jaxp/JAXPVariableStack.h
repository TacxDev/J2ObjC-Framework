//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/jaxp/JAXPVariableStack.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack")
#ifdef RESTRICT_OrgApacheXpathJaxpJAXPVariableStack
#define INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack 0
#else
#define INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack 1
#endif
#undef RESTRICT_OrgApacheXpathJaxpJAXPVariableStack

#if !defined (OrgApacheXpathJaxpJAXPVariableStack_) && (INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack || defined(INCLUDE_OrgApacheXpathJaxpJAXPVariableStack))
#define OrgApacheXpathJaxpJAXPVariableStack_

#define RESTRICT_OrgApacheXpathVariableStack 1
#define INCLUDE_OrgApacheXpathVariableStack 1
#include "org/apache/xpath/VariableStack.h"

@class JavaLangInteger;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@protocol JavaxXmlXpathXPathVariableResolver;

@interface OrgApacheXpathJaxpJAXPVariableStack : OrgApacheXpathVariableStack

#pragma mark Public

- (instancetype)initWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)resolver;

- (OrgApacheXpathObjectsXObject *)getVariableOrParamWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                        withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithInt:(jint)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathJaxpJAXPVariableStack)

FOUNDATION_EXPORT void OrgApacheXpathJaxpJAXPVariableStack_initWithJavaxXmlXpathXPathVariableResolver_(OrgApacheXpathJaxpJAXPVariableStack *self, id<JavaxXmlXpathXPathVariableResolver> resolver);

FOUNDATION_EXPORT OrgApacheXpathJaxpJAXPVariableStack *new_OrgApacheXpathJaxpJAXPVariableStack_initWithJavaxXmlXpathXPathVariableResolver_(id<JavaxXmlXpathXPathVariableResolver> resolver) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathJaxpJAXPVariableStack *create_OrgApacheXpathJaxpJAXPVariableStack_initWithJavaxXmlXpathXPathVariableResolver_(id<JavaxXmlXpathXPathVariableResolver> resolver);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathJaxpJAXPVariableStack)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack")