//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/OneStepIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator")
#ifdef RESTRICT_OrgApacheXpathAxesOneStepIterator
#define INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesOneStepIterator

#if !defined (OrgApacheXpathAxesOneStepIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator || defined(INCLUDE_OrgApacheXpathAxesOneStepIterator))
#define OrgApacheXpathAxesOneStepIterator_

#define RESTRICT_OrgApacheXpathAxesChildTestIterator 1
#define INCLUDE_OrgApacheXpathAxesChildTestIterator 1
#include "org/apache/xpath/axes/ChildTestIterator.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXmlDtmDTMAxisTraverser;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;
@protocol OrgApacheXmlDtmDTMAxisIterator;
@protocol OrgApacheXmlDtmDTMIterator;

@interface OrgApacheXpathAxesOneStepIterator : OrgApacheXpathAxesChildTestIterator {
 @public
  jint m_axis_;
  id<OrgApacheXmlDtmDTMAxisIterator> m_iterator_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheXmlDtmDTMAxisIterator:(id<OrgApacheXmlDtmDTMAxisIterator>)iterator
                                               withInt:(jint)axis;

- (id)java_clone;

- (id<OrgApacheXmlDtmDTMIterator>)cloneWithReset;

- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

- (void)detach;

- (jint)getAxis;

- (jint)getLength;

- (jboolean)isReverseAxes;

- (void)reset;

- (void)setRootWithInt:(jint)context
                withId:(id)environment;

#pragma mark Protected

- (void)countProximityPositionWithInt:(jint)i;

- (jint)getNextNode;

- (jint)getProximityPositionWithInt:(jint)predicateIndex;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXmlDtmDTMAxisTraverser:(OrgApacheXmlDtmDTMAxisTraverser *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesOneStepIterator)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesOneStepIterator, m_iterator_, id<OrgApacheXmlDtmDTMAxisIterator>)

inline jlong OrgApacheXpathAxesOneStepIterator_get_serialVersionUID(void);
#define OrgApacheXpathAxesOneStepIterator_serialVersionUID 4623710779664998283LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesOneStepIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesOneStepIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIterator *new_OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIterator *create_OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT void OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXmlDtmDTMAxisIterator_withInt_(OrgApacheXpathAxesOneStepIterator *self, id<OrgApacheXmlDtmDTMAxisIterator> iterator, jint axis);

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIterator *new_OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXmlDtmDTMAxisIterator_withInt_(id<OrgApacheXmlDtmDTMAxisIterator> iterator, jint axis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIterator *create_OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXmlDtmDTMAxisIterator_withInt_(id<OrgApacheXmlDtmDTMAxisIterator> iterator, jint axis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesOneStepIterator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator")