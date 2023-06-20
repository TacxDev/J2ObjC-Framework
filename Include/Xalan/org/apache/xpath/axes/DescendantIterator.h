//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/DescendantIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesDescendantIterator")
#ifdef RESTRICT_OrgApacheXpathAxesDescendantIterator
#define INCLUDE_ALL_OrgApacheXpathAxesDescendantIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesDescendantIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesDescendantIterator

#if !defined (OrgApacheXpathAxesDescendantIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesDescendantIterator || defined(INCLUDE_OrgApacheXpathAxesDescendantIterator))
#define OrgApacheXpathAxesDescendantIterator_

#define RESTRICT_OrgApacheXpathAxesLocPathIterator 1
#define INCLUDE_OrgApacheXpathAxesLocPathIterator 1
#include "org/apache/xpath/axes/LocPathIterator.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXmlDtmDTMAxisTraverser;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlUtilsPrefixResolver;

@interface OrgApacheXpathAxesDescendantIterator : OrgApacheXpathAxesLocPathIterator {
 @public
  OrgApacheXmlDtmDTMAxisTraverser *m_traverser_;
  jint m_axis_;
  jint m_extendedTypeID_;
}

#pragma mark Public

- (instancetype)init;

- (jint)asNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (id<OrgApacheXmlDtmDTMIterator>)cloneWithReset;

- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

- (void)detach;

- (jint)getAxis;

- (jint)nextNode;

- (void)setRootWithInt:(jint)context
                withId:(id)environment;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)arg0 NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)arg0
                                               withInt:(jint)arg1
                                               withInt:(jint)arg2
                                           withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesDescendantIterator)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesDescendantIterator, m_traverser_, OrgApacheXmlDtmDTMAxisTraverser *)

inline jlong OrgApacheXpathAxesDescendantIterator_get_serialVersionUID(void);
#define OrgApacheXpathAxesDescendantIterator_serialVersionUID -1190338607743976938LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesDescendantIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesDescendantIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesDescendantIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT OrgApacheXpathAxesDescendantIterator *new_OrgApacheXpathAxesDescendantIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesDescendantIterator *create_OrgApacheXpathAxesDescendantIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT void OrgApacheXpathAxesDescendantIterator_init(OrgApacheXpathAxesDescendantIterator *self);

FOUNDATION_EXPORT OrgApacheXpathAxesDescendantIterator *new_OrgApacheXpathAxesDescendantIterator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesDescendantIterator *create_OrgApacheXpathAxesDescendantIterator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesDescendantIterator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesDescendantIterator")
