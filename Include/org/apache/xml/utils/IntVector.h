//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/IntVector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsIntVector")
#ifdef RESTRICT_OrgApacheXmlUtilsIntVector
#define INCLUDE_ALL_OrgApacheXmlUtilsIntVector 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsIntVector 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsIntVector

#if !defined (OrgApacheXmlUtilsIntVector_) && (INCLUDE_ALL_OrgApacheXmlUtilsIntVector || defined(INCLUDE_OrgApacheXmlUtilsIntVector))
#define OrgApacheXmlUtilsIntVector_

@class IOSIntArray;
@class JavaLangBoolean;
@class JavaLangInteger;

@interface OrgApacheXmlUtilsIntVector : NSObject < NSCopying > {
 @public
  jint m_blocksize_;
  IOSIntArray *m_map_;
  jint m_firstFree_;
  jint m_mapSize_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)blocksize;

- (instancetype)initWithInt:(jint)blocksize
                    withInt:(jint)increaseSize;

- (instancetype)initWithOrgApacheXmlUtilsIntVector:(OrgApacheXmlUtilsIntVector *)v;

- (void)addElementWithInt:(jint)value;

- (void)addElementsWithInt:(jint)numberOfElements;

- (void)addElementsWithInt:(jint)value
                   withInt:(jint)numberOfElements;

- (id)java_clone;

- (jboolean)containsWithInt:(jint)s;

- (jint)elementAtWithInt:(jint)i;

- (jint)indexOfWithInt:(jint)elem;

- (jint)indexOfWithInt:(jint)elem
               withInt:(jint)index;

- (void)insertElementAtWithInt:(jint)value
                       withInt:(jint)at;

- (jint)lastIndexOfWithInt:(jint)elem;

- (void)removeAllElements;

- (jboolean)removeElementWithInt:(jint)s;

- (void)removeElementAtWithInt:(jint)i;

- (void)setElementAtWithInt:(jint)value
                    withInt:(jint)index;

- (void)setSizeWithInt:(jint)sz;

- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsIntVector)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsIntVector, m_map_, IOSIntArray *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntVector_init(OrgApacheXmlUtilsIntVector *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *new_OrgApacheXmlUtilsIntVector_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *create_OrgApacheXmlUtilsIntVector_init(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntVector_initWithInt_(OrgApacheXmlUtilsIntVector *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *new_OrgApacheXmlUtilsIntVector_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *create_OrgApacheXmlUtilsIntVector_initWithInt_(jint blocksize);

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntVector_initWithInt_withInt_(OrgApacheXmlUtilsIntVector *self, jint blocksize, jint increaseSize);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *new_OrgApacheXmlUtilsIntVector_initWithInt_withInt_(jint blocksize, jint increaseSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *create_OrgApacheXmlUtilsIntVector_initWithInt_withInt_(jint blocksize, jint increaseSize);

FOUNDATION_EXPORT void OrgApacheXmlUtilsIntVector_initWithOrgApacheXmlUtilsIntVector_(OrgApacheXmlUtilsIntVector *self, OrgApacheXmlUtilsIntVector *v);

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *new_OrgApacheXmlUtilsIntVector_initWithOrgApacheXmlUtilsIntVector_(OrgApacheXmlUtilsIntVector *v) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsIntVector *create_OrgApacheXmlUtilsIntVector_initWithOrgApacheXmlUtilsIntVector_(OrgApacheXmlUtilsIntVector *v);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsIntVector)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsIntVector")
