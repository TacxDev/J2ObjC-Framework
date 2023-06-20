//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMAxisIteratorBase.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMAxisIteratorBase
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMAxisIteratorBase

#if !defined (OrgApacheXmlDtmRefDTMAxisIteratorBase_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase || defined(INCLUDE_OrgApacheXmlDtmRefDTMAxisIteratorBase))
#define OrgApacheXmlDtmRefDTMAxisIteratorBase_

#define RESTRICT_OrgApacheXmlDtmDTMAxisIterator 1
#define INCLUDE_OrgApacheXmlDtmDTMAxisIterator 1
#include "org/apache/xml/dtm/DTMAxisIterator.h"

@class JavaLangBoolean;
@class JavaLangInteger;

@interface OrgApacheXmlDtmRefDTMAxisIteratorBase : NSObject < OrgApacheXmlDtmDTMAxisIterator > {
 @public
  jint _last_;
  jint _position_;
  jint _markedNode_;
  jint _startNode_;
  jboolean _includeSelf_;
  jboolean _isRestartable_;
}

#pragma mark Public

- (instancetype)init;

- (id<OrgApacheXmlDtmDTMAxisIterator>)cloneIterator;

- (jint)getAxis;

- (jint)getLast;

- (jint)getNodeByPositionWithInt:(jint)position;

- (jint)getPosition;

- (jint)getStartNode;

- (id<OrgApacheXmlDtmDTMAxisIterator>)includeSelf;

- (jboolean)isDocOrdered;

- (jboolean)isReverse;

- (id<OrgApacheXmlDtmDTMAxisIterator>)reset;

- (void)setRestartableWithBoolean:(jboolean)isRestartable;

#pragma mark Protected

- (id<OrgApacheXmlDtmDTMAxisIterator>)resetPosition;

- (jint)returnNodeWithInt:(jint)node;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMAxisIteratorBase)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMAxisIteratorBase_init(OrgApacheXmlDtmRefDTMAxisIteratorBase *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMAxisIteratorBase)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase")
