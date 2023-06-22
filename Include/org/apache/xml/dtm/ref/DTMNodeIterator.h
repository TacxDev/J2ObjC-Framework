//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMNodeIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMNodeIterator
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMNodeIterator

#if !defined (OrgApacheXmlDtmRefDTMNodeIterator_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator || defined(INCLUDE_OrgApacheXmlDtmRefDTMNodeIterator))
#define OrgApacheXmlDtmRefDTMNodeIterator_

#define RESTRICT_OrgW3cDomTraversalNodeIterator 1
#define INCLUDE_OrgW3cDomTraversalNodeIterator 1
#include "org/w3c/dom/traversal/NodeIterator.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeFilter;

@interface OrgApacheXmlDtmRefDTMNodeIterator : NSObject < OrgW3cDomTraversalNodeIterator >

#pragma mark Public

- (instancetype)initWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)dtmIterator;

- (void)detach;

- (id<OrgApacheXmlDtmDTMIterator>)getDTMIterator;

- (jboolean)getExpandEntityReferences;

- (id<OrgW3cDomTraversalNodeFilter>)getFilter;

- (id<OrgW3cDomNode>)getRoot;

- (jint)getWhatToShow;

- (id<OrgW3cDomNode>)nextNode;

- (id<OrgW3cDomNode>)previousNode;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMNodeIterator)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMNodeIterator_initWithOrgApacheXmlDtmDTMIterator_(OrgApacheXmlDtmRefDTMNodeIterator *self, id<OrgApacheXmlDtmDTMIterator> dtmIterator);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeIterator *new_OrgApacheXmlDtmRefDTMNodeIterator_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> dtmIterator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNodeIterator *create_OrgApacheXmlDtmRefDTMNodeIterator_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> dtmIterator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMNodeIterator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNodeIterator")
