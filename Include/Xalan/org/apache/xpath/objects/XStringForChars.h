//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XStringForChars.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars")
#ifdef RESTRICT_OrgApacheXpathObjectsXStringForChars
#define INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXStringForChars

#if !defined (OrgApacheXpathObjectsXStringForChars_) && (INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars || defined(INCLUDE_OrgApacheXpathObjectsXStringForChars))
#define OrgApacheXpathObjectsXStringForChars_

#define RESTRICT_OrgApacheXpathObjectsXString 1
#define INCLUDE_OrgApacheXpathObjectsXString 1
#include "org/apache/xpath/objects/XString.h"

@class IOSCharArray;
@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXmlUtilsFastStringBuffer;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;

@interface OrgApacheXpathObjectsXStringForChars : OrgApacheXpathObjectsXString {
 @public
  jint m_start_;
  jint m_length_;
  NSString *m_strCache_;
}

#pragma mark Public

- (instancetype)initWithCharArray:(IOSCharArray *)val
                          withInt:(jint)start
                          withInt:(jint)length;

- (void)appendToFsbWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)fsb;

- (jchar)charAtWithInt:(jint)index;

- (void)dispatchAsCommentWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)lh;

- (void)dispatchCharactersEventsWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

- (OrgApacheXmlUtilsFastStringBuffer *)fsb;

- (void)getCharsWithInt:(jint)srcBegin
                withInt:(jint)srcEnd
          withCharArray:(IOSCharArray *)dst
                withInt:(jint)dstBegin;

- (jboolean)hasString;

- (jint)length;

- (id)object;

- (NSString *)str;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXStringForChars)

J2OBJC_FIELD_SETTER(OrgApacheXpathObjectsXStringForChars, m_strCache_, NSString *)

inline jlong OrgApacheXpathObjectsXStringForChars_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXStringForChars_serialVersionUID -2235248887220850467LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXStringForChars, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXStringForChars_initWithCharArray_withInt_withInt_(OrgApacheXpathObjectsXStringForChars *self, IOSCharArray *val, jint start, jint length);

FOUNDATION_EXPORT OrgApacheXpathObjectsXStringForChars *new_OrgApacheXpathObjectsXStringForChars_initWithCharArray_withInt_withInt_(IOSCharArray *val, jint start, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXStringForChars *create_OrgApacheXpathObjectsXStringForChars_initWithCharArray_withInt_withInt_(IOSCharArray *val, jint start, jint length);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXStringForChars)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXStringForChars")
