//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/ExtendedType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefExtendedType")
#ifdef RESTRICT_OrgApacheXmlDtmRefExtendedType
#define INCLUDE_ALL_OrgApacheXmlDtmRefExtendedType 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefExtendedType 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefExtendedType

#if !defined (OrgApacheXmlDtmRefExtendedType_) && (INCLUDE_ALL_OrgApacheXmlDtmRefExtendedType || defined(INCLUDE_OrgApacheXmlDtmRefExtendedType))
#define OrgApacheXmlDtmRefExtendedType_

@class JavaLangBoolean;
@class JavaLangInteger;

@interface OrgApacheXmlDtmRefExtendedType : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)nodetype
               withNSString:(NSString *)namespace_
               withNSString:(NSString *)localName;

- (instancetype)initWithInt:(jint)nodetype
               withNSString:(NSString *)namespace_
               withNSString:(NSString *)localName
                    withInt:(jint)hash_;

- (jboolean)equalsWithOrgApacheXmlDtmRefExtendedType:(OrgApacheXmlDtmRefExtendedType *)other;

- (NSString *)getLocalName;

- (NSString *)getNamespace;

- (jint)getNodeType;

- (NSUInteger)hash;

#pragma mark Protected

- (void)redefineWithInt:(jint)nodetype
           withNSString:(NSString *)namespace_
           withNSString:(NSString *)localName;

- (void)redefineWithInt:(jint)nodetype
           withNSString:(NSString *)namespace_
           withNSString:(NSString *)localName
                withInt:(jint)hash_;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefExtendedType)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefExtendedType_initWithInt_withNSString_withNSString_(OrgApacheXmlDtmRefExtendedType *self, jint nodetype, NSString *namespace_, NSString *localName);

FOUNDATION_EXPORT OrgApacheXmlDtmRefExtendedType *new_OrgApacheXmlDtmRefExtendedType_initWithInt_withNSString_withNSString_(jint nodetype, NSString *namespace_, NSString *localName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefExtendedType *create_OrgApacheXmlDtmRefExtendedType_initWithInt_withNSString_withNSString_(jint nodetype, NSString *namespace_, NSString *localName);

FOUNDATION_EXPORT void OrgApacheXmlDtmRefExtendedType_initWithInt_withNSString_withNSString_withInt_(OrgApacheXmlDtmRefExtendedType *self, jint nodetype, NSString *namespace_, NSString *localName, jint hash_);

FOUNDATION_EXPORT OrgApacheXmlDtmRefExtendedType *new_OrgApacheXmlDtmRefExtendedType_initWithInt_withNSString_withNSString_withInt_(jint nodetype, NSString *namespace_, NSString *localName, jint hash_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefExtendedType *create_OrgApacheXmlDtmRefExtendedType_initWithInt_withNSString_withNSString_withInt_(jint nodetype, NSString *namespace_, NSString *localName, jint hash_);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefExtendedType)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefExtendedType")
