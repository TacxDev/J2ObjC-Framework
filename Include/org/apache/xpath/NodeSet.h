//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/NodeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathNodeSet")
#ifdef RESTRICT_OrgApacheXpathNodeSet
#define INCLUDE_ALL_OrgApacheXpathNodeSet 0
#else
#define INCLUDE_ALL_OrgApacheXpathNodeSet 1
#endif
#undef RESTRICT_OrgApacheXpathNodeSet

#if !defined (OrgApacheXpathNodeSet_) && (INCLUDE_ALL_OrgApacheXpathNodeSet || defined(INCLUDE_OrgApacheXpathNodeSet))
#define OrgApacheXpathNodeSet_

#define RESTRICT_OrgW3cDomNodeList 1
#define INCLUDE_OrgW3cDomNodeList 1
#include "org/w3c/dom/NodeList.h"

#define RESTRICT_OrgW3cDomTraversalNodeIterator 1
#define INCLUDE_OrgW3cDomTraversalNodeIterator 1
#include "org/w3c/dom/traversal/NodeIterator.h"

#define RESTRICT_OrgApacheXpathAxesContextNodeList 1
#define INCLUDE_OrgApacheXpathAxesContextNodeList 1
#include "org/apache/xpath/axes/ContextNodeList.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class OrgApacheXpathXPathContext;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeFilter;

@interface OrgApacheXpathNodeSet : NSObject < OrgW3cDomNodeList, OrgW3cDomTraversalNodeIterator, NSCopying, OrgApacheXpathAxesContextNodeList > {
 @public
  jint m_next_;
  jboolean m_mutable_;
  jboolean m_cacheNodes_;
  IOSObjectArray *m_map_;
  jint m_firstFree_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)blocksize;

- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (instancetype)initWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)ni;

- (instancetype)initWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)nodelist;

- (instancetype)initWithOrgApacheXpathNodeSet:(OrgApacheXpathNodeSet *)nodelist;

- (void)addElementWithOrgW3cDomNode:(id<OrgW3cDomNode>)value;

- (void)addNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

- (jint)addNodeInDocOrderWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                               withBoolean:(jboolean)test
            withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

- (jint)addNodeInDocOrderWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
            withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

- (void)addNodesWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)iterator;

- (void)addNodesWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)nodelist;

- (void)addNodesWithOrgApacheXpathNodeSet:(OrgApacheXpathNodeSet *)ns;

- (void)addNodesInDocOrderWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)iterator
                              withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

- (void)addNodesInDocOrderWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)nodelist
                 withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

- (void)appendNodesWithOrgApacheXpathNodeSet:(OrgApacheXpathNodeSet *)nodes;

- (id)java_clone;

- (id<OrgW3cDomTraversalNodeIterator>)cloneWithReset;

- (jboolean)containsWithOrgW3cDomNode:(id<OrgW3cDomNode>)s;

- (void)detach;

- (id<OrgW3cDomNode>)elementAtWithInt:(jint)i;

- (id<OrgW3cDomNode>)getCurrentNode;

- (jint)getCurrentPos;

- (jboolean)getExpandEntityReferences;

- (id<OrgW3cDomTraversalNodeFilter>)getFilter;

- (jint)getLast;

- (jint)getLength;

- (id<OrgW3cDomNode>)getRoot;

- (jboolean)getShouldCacheNodes;

- (jint)getWhatToShow;

- (jint)indexOfWithOrgW3cDomNode:(id<OrgW3cDomNode>)elem;

- (jint)indexOfWithOrgW3cDomNode:(id<OrgW3cDomNode>)elem
                         withInt:(jint)index;

- (void)insertElementAtWithOrgW3cDomNode:(id<OrgW3cDomNode>)value
                                 withInt:(jint)at;

- (void)insertNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n
                            withInt:(jint)pos;

- (jboolean)isFresh;

- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

- (id<OrgW3cDomNode>)nextNode;

- (id<OrgW3cDomNode>)peepOrNull;

- (id<OrgW3cDomNode>)peepTail;

- (id<OrgW3cDomNode>)peepTailSub1;

- (id<OrgW3cDomNode>)pop;

- (id<OrgW3cDomNode>)popAndTop;

- (void)popPair;

- (void)popQuick;

- (id<OrgW3cDomNode>)previousNode;

- (void)pushWithOrgW3cDomNode:(id<OrgW3cDomNode>)value;

- (void)pushPairWithOrgW3cDomNode:(id<OrgW3cDomNode>)v1
                withOrgW3cDomNode:(id<OrgW3cDomNode>)v2;

- (void)removeAllElements;

- (jboolean)removeElementWithOrgW3cDomNode:(id<OrgW3cDomNode>)s;

- (void)removeElementAtWithInt:(jint)i;

- (void)removeNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

- (void)reset;

- (void)runToWithInt:(jint)index;

- (void)setCurrentPosWithInt:(jint)i;

- (void)setElementAtWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                              withInt:(jint)index;

- (void)setLastWithInt:(jint)last;

- (void)setShouldCacheNodesWithBoolean:(jboolean)b;

- (void)setTailWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

- (void)setTailSub1WithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathNodeSet)

J2OBJC_FIELD_SETTER(OrgApacheXpathNodeSet, m_map_, IOSObjectArray *)

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_init(OrgApacheXpathNodeSet *self);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_init(void);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithInt_(OrgApacheXpathNodeSet *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithInt_(jint blocksize);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithOrgW3cDomNodeList_(OrgApacheXpathNodeSet *self, id<OrgW3cDomNodeList> nodelist);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithOrgW3cDomNodeList_(id<OrgW3cDomNodeList> nodelist) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithOrgW3cDomNodeList_(id<OrgW3cDomNodeList> nodelist);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithOrgApacheXpathNodeSet_(OrgApacheXpathNodeSet *self, OrgApacheXpathNodeSet *nodelist);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithOrgApacheXpathNodeSet_(OrgApacheXpathNodeSet *nodelist) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithOrgApacheXpathNodeSet_(OrgApacheXpathNodeSet *nodelist);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithOrgW3cDomTraversalNodeIterator_(OrgApacheXpathNodeSet *self, id<OrgW3cDomTraversalNodeIterator> ni);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithOrgW3cDomTraversalNodeIterator_(id<OrgW3cDomTraversalNodeIterator> ni) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithOrgW3cDomTraversalNodeIterator_(id<OrgW3cDomTraversalNodeIterator> ni);

FOUNDATION_EXPORT void OrgApacheXpathNodeSet_initWithOrgW3cDomNode_(OrgApacheXpathNodeSet *self, id<OrgW3cDomNode> node);

FOUNDATION_EXPORT OrgApacheXpathNodeSet *new_OrgApacheXpathNodeSet_initWithOrgW3cDomNode_(id<OrgW3cDomNode> node) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSet *create_OrgApacheXpathNodeSet_initWithOrgW3cDomNode_(id<OrgW3cDomNode> node);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathNodeSet)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathNodeSet")
