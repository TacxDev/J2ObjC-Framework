//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/CharInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerCharInfo")
#ifdef RESTRICT_OrgApacheXmlSerializerCharInfo
#define INCLUDE_ALL_OrgApacheXmlSerializerCharInfo 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerCharInfo 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerCharInfo

#if !defined (OrgApacheXmlSerializerCharInfo_) && (INCLUDE_ALL_OrgApacheXmlSerializerCharInfo || defined(INCLUDE_OrgApacheXmlSerializerCharInfo))
#define OrgApacheXmlSerializerCharInfo_

@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangInteger;

@interface OrgApacheXmlSerializerCharInfo : NSObject {
 @public
  jboolean onlyQuotAmpLtGt_;
}

#pragma mark Package-Private

- (jboolean)defineChar2StringMappingWithNSString:(NSString *)outputString
                                        withChar:(jchar)inputChar;

+ (OrgApacheXmlSerializerCharInfo *)getCharInfoWithNSString:(NSString *)entitiesFileName
                                               withNSString:(NSString *)method;

- (NSString *)getOutputStringForCharWithChar:(jchar)value;

- (jboolean)shouldMapAttrCharWithInt:(jint)value;

- (jboolean)shouldMapTextCharWithInt:(jint)value;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerCharInfo)

inline NSString *OrgApacheXmlSerializerCharInfo_get_HTML_ENTITIES_RESOURCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerCharInfo_HTML_ENTITIES_RESOURCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerCharInfo, HTML_ENTITIES_RESOURCE, NSString *)

inline NSString *OrgApacheXmlSerializerCharInfo_get_XML_ENTITIES_RESOURCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerCharInfo_XML_ENTITIES_RESOURCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerCharInfo, XML_ENTITIES_RESOURCE, NSString *)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_HORIZONAL_TAB(void);
#define OrgApacheXmlSerializerCharInfo_S_HORIZONAL_TAB 0x0009
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_HORIZONAL_TAB, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_LINEFEED(void);
#define OrgApacheXmlSerializerCharInfo_S_LINEFEED 0x000a
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_LINEFEED, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_CARRIAGERETURN(void);
#define OrgApacheXmlSerializerCharInfo_S_CARRIAGERETURN 0x000d
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_CARRIAGERETURN, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_SPACE(void);
#define OrgApacheXmlSerializerCharInfo_S_SPACE ' '
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_SPACE, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_QUOTE(void);
#define OrgApacheXmlSerializerCharInfo_S_QUOTE '"'
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_QUOTE, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_LT(void);
#define OrgApacheXmlSerializerCharInfo_S_LT '<'
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_LT, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_GT(void);
#define OrgApacheXmlSerializerCharInfo_S_GT '>'
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_GT, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_NEL(void);
#define OrgApacheXmlSerializerCharInfo_S_NEL 0x0085
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_NEL, jchar)

inline jchar OrgApacheXmlSerializerCharInfo_get_S_LINE_SEPARATOR(void);
#define OrgApacheXmlSerializerCharInfo_S_LINE_SEPARATOR 0x2028
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, S_LINE_SEPARATOR, jchar)

inline jint OrgApacheXmlSerializerCharInfo_get_ASCII_MAX(void);
#define OrgApacheXmlSerializerCharInfo_ASCII_MAX 128
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerCharInfo, ASCII_MAX, jint)

FOUNDATION_EXPORT OrgApacheXmlSerializerCharInfo *OrgApacheXmlSerializerCharInfo_getCharInfoWithNSString_withNSString_(NSString *entitiesFileName, NSString *method);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerCharInfo)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerCharInfo")