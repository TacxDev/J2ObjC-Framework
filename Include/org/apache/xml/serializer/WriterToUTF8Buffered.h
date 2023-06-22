//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/WriterToUTF8Buffered.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered")
#ifdef RESTRICT_OrgApacheXmlSerializerWriterToUTF8Buffered
#define INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerWriterToUTF8Buffered

#if !defined (OrgApacheXmlSerializerWriterToUTF8Buffered_) && (INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered || defined(INCLUDE_OrgApacheXmlSerializerWriterToUTF8Buffered))
#define OrgApacheXmlSerializerWriterToUTF8Buffered_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "java/io/Writer.h"

#define RESTRICT_OrgApacheXmlSerializerWriterChain 1
#define INCLUDE_OrgApacheXmlSerializerWriterChain 1
#include "org/apache/xml/serializer/WriterChain.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@class JavaLangInteger;

@interface OrgApacheXmlSerializerWriterToUTF8Buffered : JavaIoWriter < OrgApacheXmlSerializerWriterChain >

#pragma mark Public

- (instancetype)initPackagePrivateWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)close;

- (void)flush;

- (void)flushBuffer;

- (JavaIoOutputStream *)getOutputStream;

- (JavaIoWriter *)getWriter;

- (void)writeWithCharArray:(IOSCharArray *)chars
                   withInt:(jint)start
                   withInt:(jint)length;

- (void)writeWithInt:(jint)c;

- (void)writeWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerWriterToUTF8Buffered)

FOUNDATION_EXPORT void OrgApacheXmlSerializerWriterToUTF8Buffered_initPackagePrivateWithJavaIoOutputStream_(OrgApacheXmlSerializerWriterToUTF8Buffered *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT OrgApacheXmlSerializerWriterToUTF8Buffered *new_OrgApacheXmlSerializerWriterToUTF8Buffered_initPackagePrivateWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerWriterToUTF8Buffered *create_OrgApacheXmlSerializerWriterToUTF8Buffered_initPackagePrivateWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerWriterToUTF8Buffered)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerWriterToUTF8Buffered")