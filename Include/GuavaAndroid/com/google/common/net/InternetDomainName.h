//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/net/InternetDomainName.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonNetInternetDomainName")
#ifdef RESTRICT_ComGoogleCommonNetInternetDomainName
#define INCLUDE_ALL_ComGoogleCommonNetInternetDomainName 0
#else
#define INCLUDE_ALL_ComGoogleCommonNetInternetDomainName 1
#endif
#undef RESTRICT_ComGoogleCommonNetInternetDomainName

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonNetInternetDomainName_) && (INCLUDE_ALL_ComGoogleCommonNetInternetDomainName || defined(INCLUDE_ComGoogleCommonNetInternetDomainName))
#define ComGoogleCommonNetInternetDomainName_

@class ComGoogleCommonCollectImmutableList;
@class JavaLangBoolean;
@class JavaLangInteger;

@interface ComGoogleCommonNetInternetDomainName : NSObject

#pragma mark Public

- (ComGoogleCommonNetInternetDomainName *)childWithNSString:(NSString *)leftParts;

- (jboolean)isEqual:(id)object;

+ (ComGoogleCommonNetInternetDomainName *)fromWithNSString:(NSString *)domain;

- (NSUInteger)hash;

- (jboolean)hasParent;

- (jboolean)hasPublicSuffix;

- (jboolean)hasRegistrySuffix;

- (jboolean)isPublicSuffix;

- (jboolean)isRegistrySuffix;

- (jboolean)isTopDomainUnderRegistrySuffix;

- (jboolean)isTopPrivateDomain;

- (jboolean)isUnderPublicSuffix;

- (jboolean)isUnderRegistrySuffix;

+ (jboolean)isValidWithNSString:(NSString *)name;

- (ComGoogleCommonNetInternetDomainName *)parent;

- (ComGoogleCommonCollectImmutableList *)parts;

- (ComGoogleCommonNetInternetDomainName *)publicSuffix;

- (ComGoogleCommonNetInternetDomainName *)registrySuffix;

- (ComGoogleCommonNetInternetDomainName *)topDomainUnderRegistrySuffix;

- (ComGoogleCommonNetInternetDomainName *)topPrivateDomain;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)name;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonNetInternetDomainName)

FOUNDATION_EXPORT void ComGoogleCommonNetInternetDomainName_initWithNSString_(ComGoogleCommonNetInternetDomainName *self, NSString *name);

FOUNDATION_EXPORT ComGoogleCommonNetInternetDomainName *new_ComGoogleCommonNetInternetDomainName_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonNetInternetDomainName *create_ComGoogleCommonNetInternetDomainName_initWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonNetInternetDomainName *ComGoogleCommonNetInternetDomainName_fromWithNSString_(NSString *domain);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInternetDomainName_isValidWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetInternetDomainName)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonNetInternetDomainName")
