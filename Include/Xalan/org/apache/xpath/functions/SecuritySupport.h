//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/SecuritySupport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport")
#ifdef RESTRICT_OrgApacheXpathFunctionsSecuritySupport
#define INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsSecuritySupport

#if !defined (OrgApacheXpathFunctionsSecuritySupport_) && (INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport || defined(INCLUDE_OrgApacheXpathFunctionsSecuritySupport))
#define OrgApacheXpathFunctionsSecuritySupport_

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangBoolean;
@class JavaLangClassLoader;
@class JavaLangLong;

@interface OrgApacheXpathFunctionsSecuritySupport : NSObject

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

+ (OrgApacheXpathFunctionsSecuritySupport *)getInstance;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathFunctionsSecuritySupport)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsSecuritySupport_initPackagePrivate(OrgApacheXpathFunctionsSecuritySupport *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsSecuritySupport *new_OrgApacheXpathFunctionsSecuritySupport_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsSecuritySupport *create_OrgApacheXpathFunctionsSecuritySupport_initPackagePrivate(void);

FOUNDATION_EXPORT OrgApacheXpathFunctionsSecuritySupport *OrgApacheXpathFunctionsSecuritySupport_getInstance(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsSecuritySupport)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport")
