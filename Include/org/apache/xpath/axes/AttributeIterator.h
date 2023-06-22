//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/AttributeIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator")
#ifdef RESTRICT_OrgApacheXpathAxesAttributeIterator
#define INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesAttributeIterator

#if !defined (OrgApacheXpathAxesAttributeIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator || defined(INCLUDE_OrgApacheXpathAxesAttributeIterator))
#define OrgApacheXpathAxesAttributeIterator_

#define RESTRICT_OrgApacheXpathAxesChildTestIterator 1
#define INCLUDE_OrgApacheXpathAxesChildTestIterator 1
#include "org/apache/xpath/axes/ChildTestIterator.h"

@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXmlDtmDTMAxisTraverser;
@class OrgApacheXpathCompilerCompiler;

@interface OrgApacheXpathAxesAttributeIterator : OrgApacheXpathAxesChildTestIterator

#pragma mark Public

- (jint)getAxis;

#pragma mark Protected

- (jint)getNextNode;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXmlDtmDTMAxisTraverser:(OrgApacheXmlDtmDTMAxisTraverser *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesAttributeIterator)

inline jlong OrgApacheXpathAxesAttributeIterator_get_serialVersionUID(void);
#define OrgApacheXpathAxesAttributeIterator_serialVersionUID -8417986700712229686LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesAttributeIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesAttributeIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesAttributeIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT OrgApacheXpathAxesAttributeIterator *new_OrgApacheXpathAxesAttributeIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesAttributeIterator *create_OrgApacheXpathAxesAttributeIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesAttributeIterator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator")