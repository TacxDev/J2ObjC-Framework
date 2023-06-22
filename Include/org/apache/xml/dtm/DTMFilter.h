//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/DTMFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMFilter")
#ifdef RESTRICT_OrgApacheXmlDtmDTMFilter
#define INCLUDE_ALL_OrgApacheXmlDtmDTMFilter 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmDTMFilter 1
#endif
#undef RESTRICT_OrgApacheXmlDtmDTMFilter

#if !defined (OrgApacheXmlDtmDTMFilter_) && (INCLUDE_ALL_OrgApacheXmlDtmDTMFilter || defined(INCLUDE_OrgApacheXmlDtmDTMFilter))
#define OrgApacheXmlDtmDTMFilter_

@class JavaLangInteger;
@class JavaLangShort;

@protocol OrgApacheXmlDtmDTMFilter < JavaObject >

- (jshort)acceptNodeWithInt:(jint)nodeHandle
                    withInt:(jint)whatToShow;

- (jshort)acceptNodeWithInt:(jint)nodeHandle
                    withInt:(jint)whatToShow
                    withInt:(jint)expandedName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmDTMFilter)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ALL(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_ALL -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ALL, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ELEMENT(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_ELEMENT 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ELEMENT, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ATTRIBUTE(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_ATTRIBUTE 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ATTRIBUTE, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_TEXT(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_TEXT 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_TEXT, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_CDATA_SECTION(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_CDATA_SECTION 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_CDATA_SECTION, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ENTITY_REFERENCE(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_ENTITY_REFERENCE 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ENTITY_REFERENCE, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ENTITY(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_ENTITY 32
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ENTITY, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_PROCESSING_INSTRUCTION(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_PROCESSING_INSTRUCTION 64
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_PROCESSING_INSTRUCTION, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_COMMENT(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_COMMENT 128
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_COMMENT, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_DOCUMENT(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_DOCUMENT 256
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_DOCUMENT, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_DOCUMENT_TYPE(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_DOCUMENT_TYPE 512
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_DOCUMENT_TYPE, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_DOCUMENT_FRAGMENT(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_DOCUMENT_FRAGMENT 1024
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_DOCUMENT_FRAGMENT, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_NOTATION(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_NOTATION 2048
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_NOTATION, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_NAMESPACE(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_NAMESPACE 4096
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_NAMESPACE, jint)

inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_BYFUNCTION(void);
#define OrgApacheXmlDtmDTMFilter_SHOW_BYFUNCTION 65536
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_BYFUNCTION, jint)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmDTMFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMFilter")
