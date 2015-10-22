//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/kxml2/io/KXmlSerializer.java
//

#ifndef _OrgKxml2IoKXmlSerializer_H_
#define _OrgKxml2IoKXmlSerializer_H_

#include "../../../J2ObjC_header.h"
#include "../../../org/xmlpull/v1/XmlSerializer.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@class JavaIoWriter;
@class JavaLangBoolean;

@interface OrgKxml2IoKXmlSerializer : NSObject < OrgXmlpullV1XmlSerializer >

#pragma mark Public

- (instancetype)init;

- (id<OrgXmlpullV1XmlSerializer>)attributeWithNSString:(NSString *)namespace_
                                          withNSString:(NSString *)name
                                          withNSString:(NSString *)value;

- (void)cdsectWithNSString:(NSString *)data;

- (void)commentWithNSString:(NSString *)comment;

- (void)docdeclWithNSString:(NSString *)dd;

- (void)endDocument;

- (id<OrgXmlpullV1XmlSerializer>)endTagWithNSString:(NSString *)namespace_
                                       withNSString:(NSString *)name;

- (void)entityRefWithNSString:(NSString *)name;

- (void)flush;

- (jint)getDepth;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (NSString *)getName;

- (NSString *)getNamespace;

- (NSString *)getPrefixWithNSString:(NSString *)namespace_
                        withBoolean:(jboolean)create;

- (id)getPropertyWithNSString:(NSString *)name;

- (void)ignorableWhitespaceWithNSString:(NSString *)s;

- (void)processingInstructionWithNSString:(NSString *)pi;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

- (void)setOutputWithJavaIoOutputStream:(JavaIoOutputStream *)os
                           withNSString:(NSString *)encoding;

- (void)setOutputWithJavaIoWriter:(JavaIoWriter *)writer;

- (void)setPrefixWithNSString:(NSString *)prefix
                 withNSString:(NSString *)namespace_;

- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;

- (void)startDocumentWithNSString:(NSString *)encoding
              withJavaLangBoolean:(JavaLangBoolean *)standalone;

- (id<OrgXmlpullV1XmlSerializer>)startTagWithNSString:(NSString *)namespace_
                                         withNSString:(NSString *)name;

- (id<OrgXmlpullV1XmlSerializer>)textWithCharArray:(IOSCharArray *)text
                                           withInt:(jint)start
                                           withInt:(jint)len;

- (id<OrgXmlpullV1XmlSerializer>)textWithNSString:(NSString *)text;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgKxml2IoKXmlSerializer)

FOUNDATION_EXPORT void OrgKxml2IoKXmlSerializer_init(OrgKxml2IoKXmlSerializer *self);

FOUNDATION_EXPORT OrgKxml2IoKXmlSerializer *new_OrgKxml2IoKXmlSerializer_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgKxml2IoKXmlSerializer)

#endif // _OrgKxml2IoKXmlSerializer_H_
