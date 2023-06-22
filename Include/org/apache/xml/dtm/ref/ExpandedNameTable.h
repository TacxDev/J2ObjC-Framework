//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/ExpandedNameTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable")
#ifdef RESTRICT_OrgApacheXmlDtmRefExpandedNameTable
#define INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefExpandedNameTable

#if !defined (OrgApacheXmlDtmRefExpandedNameTable_) && (INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable || defined(INCLUDE_OrgApacheXmlDtmRefExpandedNameTable))
#define OrgApacheXmlDtmRefExpandedNameTable_

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangShort;
@class OrgApacheXmlDtmRefExtendedType;

@interface OrgApacheXmlDtmRefExpandedNameTable : NSObject {
 @public
  OrgApacheXmlDtmRefExtendedType *hashET_;
}

#pragma mark Public

- (instancetype)init;

- (jint)getExpandedTypeIDWithInt:(jint)type;

- (jint)getExpandedTypeIDWithNSString:(NSString *)namespace_
                         withNSString:(NSString *)localName
                              withInt:(jint)type;

- (jint)getExpandedTypeIDWithNSString:(NSString *)namespace_
                         withNSString:(NSString *)localName
                              withInt:(jint)type
                          withBoolean:(jboolean)searchOnly;

- (IOSObjectArray *)getExtendedTypes;

- (NSString *)getLocalNameWithInt:(jint)ExpandedNameID;

- (jint)getLocalNameIDWithInt:(jint)ExpandedNameID;

- (NSString *)getNamespaceWithInt:(jint)ExpandedNameID;

- (jint)getNamespaceIDWithInt:(jint)ExpandedNameID;

- (jint)getSize;

- (jshort)getTypeWithInt:(jint)ExpandedNameID;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlDtmRefExpandedNameTable)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefExpandedNameTable, hashET_, OrgApacheXmlDtmRefExtendedType *)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_ELEMENT(void);
#define OrgApacheXmlDtmRefExpandedNameTable_ELEMENT 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, ELEMENT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_ATTRIBUTE(void);
#define OrgApacheXmlDtmRefExpandedNameTable_ATTRIBUTE 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, ATTRIBUTE, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_TEXT(void);
#define OrgApacheXmlDtmRefExpandedNameTable_TEXT 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, TEXT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_CDATA_SECTION(void);
#define OrgApacheXmlDtmRefExpandedNameTable_CDATA_SECTION 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, CDATA_SECTION, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_ENTITY_REFERENCE(void);
#define OrgApacheXmlDtmRefExpandedNameTable_ENTITY_REFERENCE 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, ENTITY_REFERENCE, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_ENTITY(void);
#define OrgApacheXmlDtmRefExpandedNameTable_ENTITY 6
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, ENTITY, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_PROCESSING_INSTRUCTION(void);
#define OrgApacheXmlDtmRefExpandedNameTable_PROCESSING_INSTRUCTION 7
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, PROCESSING_INSTRUCTION, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_COMMENT(void);
#define OrgApacheXmlDtmRefExpandedNameTable_COMMENT 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, COMMENT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_DOCUMENT(void);
#define OrgApacheXmlDtmRefExpandedNameTable_DOCUMENT 9
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, DOCUMENT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_DOCUMENT_TYPE(void);
#define OrgApacheXmlDtmRefExpandedNameTable_DOCUMENT_TYPE 10
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, DOCUMENT_TYPE, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_DOCUMENT_FRAGMENT(void);
#define OrgApacheXmlDtmRefExpandedNameTable_DOCUMENT_FRAGMENT 11
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, DOCUMENT_FRAGMENT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_NOTATION(void);
#define OrgApacheXmlDtmRefExpandedNameTable_NOTATION 12
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, NOTATION, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_NAMESPACE(void);
#define OrgApacheXmlDtmRefExpandedNameTable_NAMESPACE 13
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, NAMESPACE, jint)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefExpandedNameTable_init(OrgApacheXmlDtmRefExpandedNameTable *self);

FOUNDATION_EXPORT OrgApacheXmlDtmRefExpandedNameTable *new_OrgApacheXmlDtmRefExpandedNameTable_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefExpandedNameTable *create_OrgApacheXmlDtmRefExpandedNameTable_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefExpandedNameTable)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable")