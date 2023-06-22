//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/SecuritySupport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsSecuritySupport")
#ifdef RESTRICT_OrgApacheXmlUtilsSecuritySupport
#define INCLUDE_ALL_OrgApacheXmlUtilsSecuritySupport 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsSecuritySupport 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsSecuritySupport

#if !defined (OrgApacheXmlUtilsSecuritySupport_) && (INCLUDE_ALL_OrgApacheXmlUtilsSecuritySupport || defined(INCLUDE_OrgApacheXmlUtilsSecuritySupport))
#define OrgApacheXmlUtilsSecuritySupport_

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangBoolean;
@class JavaLangClassLoader;
@class JavaLangLong;

@interface OrgApacheXmlUtilsSecuritySupport : NSObject

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

+ (OrgApacheXmlUtilsSecuritySupport *)getInstance;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlUtilsSecuritySupport)

FOUNDATION_EXPORT void OrgApacheXmlUtilsSecuritySupport_initPackagePrivate(OrgApacheXmlUtilsSecuritySupport *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsSecuritySupport *new_OrgApacheXmlUtilsSecuritySupport_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSecuritySupport *create_OrgApacheXmlUtilsSecuritySupport_initPackagePrivate(void);

FOUNDATION_EXPORT OrgApacheXmlUtilsSecuritySupport *OrgApacheXmlUtilsSecuritySupport_getInstance(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsSecuritySupport)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsSecuritySupport")