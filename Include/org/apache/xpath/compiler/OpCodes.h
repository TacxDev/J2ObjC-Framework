//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/compiler/OpCodes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathCompilerOpCodes")
#ifdef RESTRICT_OrgApacheXpathCompilerOpCodes
#define INCLUDE_ALL_OrgApacheXpathCompilerOpCodes 0
#else
#define INCLUDE_ALL_OrgApacheXpathCompilerOpCodes 1
#endif
#undef RESTRICT_OrgApacheXpathCompilerOpCodes

#if !defined (OrgApacheXpathCompilerOpCodes_) && (INCLUDE_ALL_OrgApacheXpathCompilerOpCodes || defined(INCLUDE_OrgApacheXpathCompilerOpCodes))
#define OrgApacheXpathCompilerOpCodes_

@class JavaLangInteger;

@interface OrgApacheXpathCompilerOpCodes : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathCompilerOpCodes)

inline jint OrgApacheXpathCompilerOpCodes_get_ENDOP(void);
#define OrgApacheXpathCompilerOpCodes_ENDOP -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, ENDOP, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_EMPTY(void);
#define OrgApacheXpathCompilerOpCodes_EMPTY -2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, EMPTY, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_ELEMWILDCARD(void);
#define OrgApacheXpathCompilerOpCodes_ELEMWILDCARD -3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, ELEMWILDCARD, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_XPATH(void);
#define OrgApacheXpathCompilerOpCodes_OP_XPATH 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_XPATH, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_OR(void);
#define OrgApacheXpathCompilerOpCodes_OP_OR 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_OR, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_AND(void);
#define OrgApacheXpathCompilerOpCodes_OP_AND 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_AND, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_NOTEQUALS(void);
#define OrgApacheXpathCompilerOpCodes_OP_NOTEQUALS 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_NOTEQUALS, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_EQUALS(void);
#define OrgApacheXpathCompilerOpCodes_OP_EQUALS 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_EQUALS, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_LTE(void);
#define OrgApacheXpathCompilerOpCodes_OP_LTE 6
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_LTE, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_LT(void);
#define OrgApacheXpathCompilerOpCodes_OP_LT 7
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_LT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_GTE(void);
#define OrgApacheXpathCompilerOpCodes_OP_GTE 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_GTE, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_GT(void);
#define OrgApacheXpathCompilerOpCodes_OP_GT 9
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_GT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_PLUS(void);
#define OrgApacheXpathCompilerOpCodes_OP_PLUS 10
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_PLUS, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_MINUS(void);
#define OrgApacheXpathCompilerOpCodes_OP_MINUS 11
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_MINUS, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_MULT(void);
#define OrgApacheXpathCompilerOpCodes_OP_MULT 12
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_MULT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_DIV(void);
#define OrgApacheXpathCompilerOpCodes_OP_DIV 13
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_DIV, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_MOD(void);
#define OrgApacheXpathCompilerOpCodes_OP_MOD 14
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_MOD, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_QUO(void);
#define OrgApacheXpathCompilerOpCodes_OP_QUO 15
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_QUO, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_NEG(void);
#define OrgApacheXpathCompilerOpCodes_OP_NEG 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_NEG, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_STRING(void);
#define OrgApacheXpathCompilerOpCodes_OP_STRING 17
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_STRING, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_BOOL(void);
#define OrgApacheXpathCompilerOpCodes_OP_BOOL 18
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_BOOL, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_NUMBER(void);
#define OrgApacheXpathCompilerOpCodes_OP_NUMBER 19
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_NUMBER, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_UNION(void);
#define OrgApacheXpathCompilerOpCodes_OP_UNION 20
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_UNION, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_LITERAL(void);
#define OrgApacheXpathCompilerOpCodes_OP_LITERAL 21
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_LITERAL, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FIRST_NODESET_OP(void);
#define OrgApacheXpathCompilerOpCodes_FIRST_NODESET_OP 22
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FIRST_NODESET_OP, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_VARIABLE(void);
#define OrgApacheXpathCompilerOpCodes_OP_VARIABLE 22
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_VARIABLE, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_GROUP(void);
#define OrgApacheXpathCompilerOpCodes_OP_GROUP 23
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_GROUP, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_EXTFUNCTION(void);
#define OrgApacheXpathCompilerOpCodes_OP_EXTFUNCTION 24
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_EXTFUNCTION, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_FUNCTION(void);
#define OrgApacheXpathCompilerOpCodes_OP_FUNCTION 25
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_FUNCTION, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_LAST_NODESET_OP(void);
#define OrgApacheXpathCompilerOpCodes_LAST_NODESET_OP 25
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, LAST_NODESET_OP, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_ARGUMENT(void);
#define OrgApacheXpathCompilerOpCodes_OP_ARGUMENT 26
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_ARGUMENT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_NUMBERLIT(void);
#define OrgApacheXpathCompilerOpCodes_OP_NUMBERLIT 27
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_NUMBERLIT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_LOCATIONPATH(void);
#define OrgApacheXpathCompilerOpCodes_OP_LOCATIONPATH 28
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_LOCATIONPATH, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_PREDICATE(void);
#define OrgApacheXpathCompilerOpCodes_OP_PREDICATE 29
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_PREDICATE, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_MATCHPATTERN(void);
#define OrgApacheXpathCompilerOpCodes_OP_MATCHPATTERN 30
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_MATCHPATTERN, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_OP_LOCATIONPATHPATTERN(void);
#define OrgApacheXpathCompilerOpCodes_OP_LOCATIONPATHPATTERN 31
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, OP_LOCATIONPATHPATTERN, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_NODETYPE_COMMENT(void);
#define OrgApacheXpathCompilerOpCodes_NODETYPE_COMMENT 1030
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, NODETYPE_COMMENT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_NODETYPE_TEXT(void);
#define OrgApacheXpathCompilerOpCodes_NODETYPE_TEXT 1031
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, NODETYPE_TEXT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_NODETYPE_PI(void);
#define OrgApacheXpathCompilerOpCodes_NODETYPE_PI 1032
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, NODETYPE_PI, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_NODETYPE_NODE(void);
#define OrgApacheXpathCompilerOpCodes_NODETYPE_NODE 1033
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, NODETYPE_NODE, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_NODENAME(void);
#define OrgApacheXpathCompilerOpCodes_NODENAME 34
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, NODENAME, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_NODETYPE_ROOT(void);
#define OrgApacheXpathCompilerOpCodes_NODETYPE_ROOT 35
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, NODETYPE_ROOT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_NODETYPE_ANYELEMENT(void);
#define OrgApacheXpathCompilerOpCodes_NODETYPE_ANYELEMENT 36
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, NODETYPE_ANYELEMENT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_NODETYPE_FUNCTEST(void);
#define OrgApacheXpathCompilerOpCodes_NODETYPE_FUNCTEST 1034
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, NODETYPE_FUNCTEST, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_AXES_START_TYPES(void);
#define OrgApacheXpathCompilerOpCodes_AXES_START_TYPES 37
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, AXES_START_TYPES, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_ANCESTORS(void);
#define OrgApacheXpathCompilerOpCodes_FROM_ANCESTORS 37
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_ANCESTORS, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_ANCESTORS_OR_SELF(void);
#define OrgApacheXpathCompilerOpCodes_FROM_ANCESTORS_OR_SELF 38
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_ANCESTORS_OR_SELF, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_ATTRIBUTES(void);
#define OrgApacheXpathCompilerOpCodes_FROM_ATTRIBUTES 39
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_ATTRIBUTES, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_CHILDREN(void);
#define OrgApacheXpathCompilerOpCodes_FROM_CHILDREN 40
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_CHILDREN, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_DESCENDANTS(void);
#define OrgApacheXpathCompilerOpCodes_FROM_DESCENDANTS 41
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_DESCENDANTS, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_DESCENDANTS_OR_SELF(void);
#define OrgApacheXpathCompilerOpCodes_FROM_DESCENDANTS_OR_SELF 42
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_DESCENDANTS_OR_SELF, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_FOLLOWING(void);
#define OrgApacheXpathCompilerOpCodes_FROM_FOLLOWING 43
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_FOLLOWING, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_FOLLOWING_SIBLINGS(void);
#define OrgApacheXpathCompilerOpCodes_FROM_FOLLOWING_SIBLINGS 44
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_FOLLOWING_SIBLINGS, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_PARENT(void);
#define OrgApacheXpathCompilerOpCodes_FROM_PARENT 45
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_PARENT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_PRECEDING(void);
#define OrgApacheXpathCompilerOpCodes_FROM_PRECEDING 46
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_PRECEDING, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_PRECEDING_SIBLINGS(void);
#define OrgApacheXpathCompilerOpCodes_FROM_PRECEDING_SIBLINGS 47
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_PRECEDING_SIBLINGS, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_SELF(void);
#define OrgApacheXpathCompilerOpCodes_FROM_SELF 48
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_SELF, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_NAMESPACE(void);
#define OrgApacheXpathCompilerOpCodes_FROM_NAMESPACE 49
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_NAMESPACE, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_FROM_ROOT(void);
#define OrgApacheXpathCompilerOpCodes_FROM_ROOT 50
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, FROM_ROOT, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_MATCH_ATTRIBUTE(void);
#define OrgApacheXpathCompilerOpCodes_MATCH_ATTRIBUTE 51
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, MATCH_ATTRIBUTE, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_MATCH_ANY_ANCESTOR(void);
#define OrgApacheXpathCompilerOpCodes_MATCH_ANY_ANCESTOR 52
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, MATCH_ANY_ANCESTOR, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_MATCH_IMMEDIATE_ANCESTOR(void);
#define OrgApacheXpathCompilerOpCodes_MATCH_IMMEDIATE_ANCESTOR 53
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, MATCH_IMMEDIATE_ANCESTOR, jint)

inline jint OrgApacheXpathCompilerOpCodes_get_AXES_END_TYPES(void);
#define OrgApacheXpathCompilerOpCodes_AXES_END_TYPES 53
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpCodes, AXES_END_TYPES, jint)

FOUNDATION_EXPORT void OrgApacheXpathCompilerOpCodes_init(OrgApacheXpathCompilerOpCodes *self);

FOUNDATION_EXPORT OrgApacheXpathCompilerOpCodes *new_OrgApacheXpathCompilerOpCodes_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathCompilerOpCodes *create_OrgApacheXpathCompilerOpCodes_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathCompilerOpCodes)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathCompilerOpCodes")