//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMStringPool.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMStringPool")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMStringPool
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMStringPool 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMStringPool 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMStringPool

#if !defined (OrgApacheXmlDtmRefDTMStringPool_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMStringPool || defined(INCLUDE_OrgApacheXmlDtmRefDTMStringPool))
#define OrgApacheXmlDtmRefDTMStringPool_

@class IOSIntArray;
@class IOSObjectArray;
@class JavaLangInteger;
@class JavaUtilVector;
@class OrgApacheXmlUtilsIntVector;

@interface OrgApacheXmlDtmRefDTMStringPool : NSObject {
 @public
  JavaUtilVector *m_intToString_;
  IOSIntArray *m_hashStart_;
  OrgApacheXmlUtilsIntVector *m_hashChain_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)chainSize;

- (NSString *)indexToStringWithInt:(jint)i;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

- (void)removeAllElements;

- (jint)stringToIndexWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMStringPool)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMStringPool, m_intToString_, JavaUtilVector *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMStringPool, m_hashStart_, IOSIntArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMStringPool, m_hashChain_, OrgApacheXmlUtilsIntVector *)

inline jint OrgApacheXmlDtmRefDTMStringPool_get_HASHPRIME(void);
#define OrgApacheXmlDtmRefDTMStringPool_HASHPRIME 101
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefDTMStringPool, HASHPRIME, jint)

inline jint OrgApacheXmlDtmRefDTMStringPool_get_NULL(void);
#define OrgApacheXmlDtmRefDTMStringPool_NULL -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefDTMStringPool, NULL, jint)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMStringPool_initWithInt_(OrgApacheXmlDtmRefDTMStringPool *self, jint chainSize);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMStringPool *new_OrgApacheXmlDtmRefDTMStringPool_initWithInt_(jint chainSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMStringPool *create_OrgApacheXmlDtmRefDTMStringPool_initWithInt_(jint chainSize);

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMStringPool_init(OrgApacheXmlDtmRefDTMStringPool *self);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMStringPool *new_OrgApacheXmlDtmRefDTMStringPool_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMStringPool *create_OrgApacheXmlDtmRefDTMStringPool_init(void);

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMStringPool_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMStringPool)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMStringPool")
