//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/NodeList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomNodeList")
#ifdef RESTRICT_OrgW3cDomNodeList
#define INCLUDE_ALL_OrgW3cDomNodeList 0
#else
#define INCLUDE_ALL_OrgW3cDomNodeList 1
#endif
#undef RESTRICT_OrgW3cDomNodeList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomNodeList_) && (INCLUDE_ALL_OrgW3cDomNodeList || defined(INCLUDE_OrgW3cDomNodeList))
#define OrgW3cDomNodeList_

@protocol OrgW3cDomNode;

/*!
 @brief The <code>NodeList</code> interface provides the abstraction of an ordered
  collection of nodes, without defining or constraining how this collection
  is implemented.
 <code>NodeList</code> objects in the DOM are live. 
 <p>The items in the <code>NodeList</code> are accessible via an integral
  index, starting from 0. 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomNodeList < JavaObject >

/*!
 @brief Returns the <code>index</code>th item in the collection.If
  <code>index</code> is greater than or equal to the number of nodes in
  the list, this returns <code>null</code>.
 @param index Index into the collection.
 @return The node at the <code>index</code>th position in the
    <code>NodeList</code>, or <code>null</code> if that is not a valid
    index.
 */
- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

/*!
 @brief The number of nodes in the list.The range of valid child node indices
  is 0 to <code>length-1</code> inclusive.
 */
- (jint)getLength;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomNodeList)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomNodeList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomNodeList")
