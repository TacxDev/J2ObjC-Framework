//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/xslt/SecuritySupport12.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport12")
#ifdef RESTRICT_OrgApacheXalanXsltSecuritySupport12
#define INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport12 0
#else
#define INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport12 1
#endif
#undef RESTRICT_OrgApacheXalanXsltSecuritySupport12

#if !defined (OrgApacheXalanXsltSecuritySupport12_) && (INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport12 || defined(INCLUDE_OrgApacheXalanXsltSecuritySupport12))
#define OrgApacheXalanXsltSecuritySupport12_

#define RESTRICT_OrgApacheXalanXsltSecuritySupport 1
#define INCLUDE_OrgApacheXalanXsltSecuritySupport 1
#include "org/apache/xalan/xslt/SecuritySupport.h"

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangBoolean;
@class JavaLangClassLoader;
@class JavaLangLong;

@interface OrgApacheXalanXsltSecuritySupport12 : OrgApacheXalanXsltSecuritySupport

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanXsltSecuritySupport12)

FOUNDATION_EXPORT void OrgApacheXalanXsltSecuritySupport12_initPackagePrivate(OrgApacheXalanXsltSecuritySupport12 *self);

FOUNDATION_EXPORT OrgApacheXalanXsltSecuritySupport12 *new_OrgApacheXalanXsltSecuritySupport12_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanXsltSecuritySupport12 *create_OrgApacheXalanXsltSecuritySupport12_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanXsltSecuritySupport12)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanXsltSecuritySupport12")
