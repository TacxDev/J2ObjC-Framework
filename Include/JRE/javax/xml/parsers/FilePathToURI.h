//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/parsers/FilePathToURI.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlParsersFilePathToURI")
#ifdef RESTRICT_JavaxXmlParsersFilePathToURI
#define INCLUDE_ALL_JavaxXmlParsersFilePathToURI 0
#else
#define INCLUDE_ALL_JavaxXmlParsersFilePathToURI 1
#endif
#undef RESTRICT_JavaxXmlParsersFilePathToURI

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlParsersFilePathToURI_) && (INCLUDE_ALL_JavaxXmlParsersFilePathToURI || defined(INCLUDE_JavaxXmlParsersFilePathToURI))
#define JavaxXmlParsersFilePathToURI_

@interface JavaxXmlParsersFilePathToURI : NSObject

#pragma mark Public

+ (NSString *)filepath2URIWithNSString:(NSString *)path;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaxXmlParsersFilePathToURI)

FOUNDATION_EXPORT void JavaxXmlParsersFilePathToURI_initPackagePrivate(JavaxXmlParsersFilePathToURI *self);

FOUNDATION_EXPORT JavaxXmlParsersFilePathToURI *new_JavaxXmlParsersFilePathToURI_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlParsersFilePathToURI *create_JavaxXmlParsersFilePathToURI_initPackagePrivate(void);

FOUNDATION_EXPORT NSString *JavaxXmlParsersFilePathToURI_filepath2URIWithNSString_(NSString *path);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersFilePathToURI)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxXmlParsersFilePathToURI")
