//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/SourceTree.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathSourceTree")
#ifdef RESTRICT_OrgApacheXpathSourceTree
#define INCLUDE_ALL_OrgApacheXpathSourceTree 0
#else
#define INCLUDE_ALL_OrgApacheXpathSourceTree 1
#endif
#undef RESTRICT_OrgApacheXpathSourceTree

#if !defined (OrgApacheXpathSourceTree_) && (INCLUDE_ALL_OrgApacheXpathSourceTree || defined(INCLUDE_OrgApacheXpathSourceTree))
#define OrgApacheXpathSourceTree_

@class JavaLangInteger;

@interface OrgApacheXpathSourceTree : NSObject {
 @public
  NSString *m_url_;
  jint m_root_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)root
               withNSString:(NSString *)url;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathSourceTree)

J2OBJC_FIELD_SETTER(OrgApacheXpathSourceTree, m_url_, NSString *)

FOUNDATION_EXPORT void OrgApacheXpathSourceTree_initWithInt_withNSString_(OrgApacheXpathSourceTree *self, jint root, NSString *url);

FOUNDATION_EXPORT OrgApacheXpathSourceTree *new_OrgApacheXpathSourceTree_initWithInt_withNSString_(jint root, NSString *url) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathSourceTree *create_OrgApacheXpathSourceTree_initWithInt_withNSString_(jint root, NSString *url);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathSourceTree)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathSourceTree")
