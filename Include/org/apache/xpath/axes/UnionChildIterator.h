//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/UnionChildIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesUnionChildIterator")
#ifdef RESTRICT_OrgApacheXpathAxesUnionChildIterator
#define INCLUDE_ALL_OrgApacheXpathAxesUnionChildIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesUnionChildIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesUnionChildIterator

#if !defined (OrgApacheXpathAxesUnionChildIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesUnionChildIterator || defined(INCLUDE_OrgApacheXpathAxesUnionChildIterator))
#define OrgApacheXpathAxesUnionChildIterator_

#define RESTRICT_OrgApacheXpathAxesChildTestIterator 1
#define INCLUDE_OrgApacheXpathAxesChildTestIterator 1
#include "org/apache/xpath/axes/ChildTestIterator.h"

@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangShort;
@class JavaUtilVector;
@class OrgApacheXmlDtmDTMAxisTraverser;
@class OrgApacheXpathAxesPredicatedNodeTest;
@class OrgApacheXpathCompilerCompiler;

@interface OrgApacheXpathAxesUnionChildIterator : OrgApacheXpathAxesChildTestIterator

#pragma mark Public

- (instancetype)init;

- (jshort)acceptNodeWithInt:(jint)n;

- (void)addNodeTestWithOrgApacheXpathAxesPredicatedNodeTest:(OrgApacheXpathAxesPredicatedNodeTest *)test;

- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgApacheXmlDtmDTMAxisTraverser:(OrgApacheXmlDtmDTMAxisTraverser *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)arg0
                                               withInt:(jint)arg1
                                               withInt:(jint)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesUnionChildIterator)

inline jlong OrgApacheXpathAxesUnionChildIterator_get_serialVersionUID(void);
#define OrgApacheXpathAxesUnionChildIterator_serialVersionUID 3500298482193003495LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesUnionChildIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesUnionChildIterator_init(OrgApacheXpathAxesUnionChildIterator *self);

FOUNDATION_EXPORT OrgApacheXpathAxesUnionChildIterator *new_OrgApacheXpathAxesUnionChildIterator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesUnionChildIterator *create_OrgApacheXpathAxesUnionChildIterator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesUnionChildIterator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesUnionChildIterator")