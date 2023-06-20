//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XNodeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet")
#ifdef RESTRICT_OrgApacheXpathObjectsXNodeSet
#define INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXNodeSet
#ifdef INCLUDE_OrgApacheXpathObjectsNotEqualComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsEqualComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsGreaterThanOrEqualComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsGreaterThanComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsLessThanOrEqualComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif
#ifdef INCLUDE_OrgApacheXpathObjectsLessThanComparator
#define INCLUDE_OrgApacheXpathObjectsComparator 1
#endif

#if !defined (OrgApacheXpathObjectsXNodeSet_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsXNodeSet))
#define OrgApacheXpathObjectsXNodeSet_

#define RESTRICT_OrgApacheXpathAxesNodeSequence 1
#define INCLUDE_OrgApacheXpathAxesNodeSequence 1
#include "org/apache/xpath/axes/NodeSequence.h"

@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXpathNodeSetDTM;
@class OrgApacheXpathObjectsComparator;
@class OrgApacheXpathObjectsEqualComparator;
@class OrgApacheXpathObjectsGreaterThanComparator;
@class OrgApacheXpathObjectsGreaterThanOrEqualComparator;
@class OrgApacheXpathObjectsLessThanComparator;
@class OrgApacheXpathObjectsLessThanOrEqualComparator;
@class OrgApacheXpathObjectsNotEqualComparator;
@class OrgApacheXpathObjectsXObject;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlUtilsXMLString;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTraversalNodeIterator;
@protocol OrgXmlSaxContentHandler;

@interface OrgApacheXpathObjectsXNodeSet : OrgApacheXpathAxesNodeSequence

#pragma mark Public

- (instancetype)initWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)val;

- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)dtmMgr;

- (instancetype)initWithInt:(jint)n
withOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)dtmMgr;

- (instancetype)initWithOrgApacheXpathObjectsXNodeSet:(OrgApacheXpathObjectsXNodeSet *)val;

- (void)appendToFsbWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)fsb;

- (jboolean)bool__;

- (jboolean)boolWithSideEffects;

- (jboolean)compareWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2
                withOrgApacheXpathObjectsComparator:(OrgApacheXpathObjectsComparator *)comparator;

- (void)dispatchCharactersEventsWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

- (OrgApacheXpathObjectsXObject *)getFresh;

- (jdouble)getNumberFromNodeWithInt:(jint)n;

- (id<OrgApacheXmlUtilsXMLString>)getStringFromNodeWithInt:(jint)n;

- (jint)getType;

- (NSString *)getTypeString;

- (jboolean)greaterThanWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

- (jboolean)greaterThanOrEqualWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

- (id<OrgApacheXmlDtmDTMIterator>)iter;

- (id<OrgApacheXmlDtmDTMIterator>)iterRaw;

- (jboolean)lessThanWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

- (jboolean)lessThanOrEqualWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

- (OrgApacheXpathNodeSetDTM *)mutableNodeset;

- (id<OrgW3cDomNodeList>)nodelist;

- (id<OrgW3cDomTraversalNodeIterator>)nodeset;

- (jboolean)notEqualsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

- (jdouble)num;

- (jdouble)numWithSideEffects;

- (id)object;

- (void)release__WithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)iter;

- (NSString *)str;

- (id<OrgApacheXmlUtilsXMLString>)xstr;

#pragma mark Protected

- (instancetype)init;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathObjectsXNodeSet)

inline jlong OrgApacheXpathObjectsXNodeSet_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXNodeSet_serialVersionUID 1916026368035639667LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXNodeSet, serialVersionUID, jlong)

inline OrgApacheXpathObjectsLessThanComparator *OrgApacheXpathObjectsXNodeSet_get_S_LT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanComparator *OrgApacheXpathObjectsXNodeSet_S_LT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_LT, OrgApacheXpathObjectsLessThanComparator *)

inline OrgApacheXpathObjectsLessThanOrEqualComparator *OrgApacheXpathObjectsXNodeSet_get_S_LTE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanOrEqualComparator *OrgApacheXpathObjectsXNodeSet_S_LTE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_LTE, OrgApacheXpathObjectsLessThanOrEqualComparator *)

inline OrgApacheXpathObjectsGreaterThanComparator *OrgApacheXpathObjectsXNodeSet_get_S_GT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanComparator *OrgApacheXpathObjectsXNodeSet_S_GT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_GT, OrgApacheXpathObjectsGreaterThanComparator *)

inline OrgApacheXpathObjectsGreaterThanOrEqualComparator *OrgApacheXpathObjectsXNodeSet_get_S_GTE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanOrEqualComparator *OrgApacheXpathObjectsXNodeSet_S_GTE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_GTE, OrgApacheXpathObjectsGreaterThanOrEqualComparator *)

inline OrgApacheXpathObjectsEqualComparator *OrgApacheXpathObjectsXNodeSet_get_S_EQ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsEqualComparator *OrgApacheXpathObjectsXNodeSet_S_EQ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_EQ, OrgApacheXpathObjectsEqualComparator *)

inline OrgApacheXpathObjectsNotEqualComparator *OrgApacheXpathObjectsXNodeSet_get_S_NEQ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsNotEqualComparator *OrgApacheXpathObjectsXNodeSet_S_NEQ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXNodeSet, S_NEQ, OrgApacheXpathObjectsNotEqualComparator *)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_init(OrgApacheXpathObjectsXNodeSet *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_init(void);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMIterator_(OrgApacheXpathObjectsXNodeSet *self, id<OrgApacheXmlDtmDTMIterator> val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> val);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSet *self, OrgApacheXpathObjectsXNodeSet *val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSet *val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXpathObjectsXNodeSet_(OrgApacheXpathObjectsXNodeSet *val);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXpathObjectsXNodeSet *self, OrgApacheXmlDtmDTMManager *dtmMgr);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXmlDtmDTMManager *dtmMgr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXmlDtmDTMManager *dtmMgr);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNodeSet_initWithInt_withOrgApacheXmlDtmDTMManager_(OrgApacheXpathObjectsXNodeSet *self, jint n, OrgApacheXmlDtmDTMManager *dtmMgr);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *new_OrgApacheXpathObjectsXNodeSet_initWithInt_withOrgApacheXmlDtmDTMManager_(jint n, OrgApacheXmlDtmDTMManager *dtmMgr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNodeSet *create_OrgApacheXpathObjectsXNodeSet_initWithInt_withOrgApacheXmlDtmDTMManager_(jint n, OrgApacheXmlDtmDTMManager *dtmMgr);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXNodeSet)

#endif

#if !defined (OrgApacheXpathObjectsComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsComparator))
#define OrgApacheXpathObjectsComparator_

@class JavaLangBoolean;
@class JavaLangDouble;
@protocol OrgApacheXmlUtilsXMLString;

@interface OrgApacheXpathObjectsComparator : NSObject

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsComparator_initPackagePrivate(OrgApacheXpathObjectsComparator *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsComparator)

#endif

#if !defined (OrgApacheXpathObjectsLessThanComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsLessThanComparator))
#define OrgApacheXpathObjectsLessThanComparator_

@class JavaLangBoolean;
@class JavaLangDouble;
@protocol OrgApacheXmlUtilsXMLString;

@interface OrgApacheXpathObjectsLessThanComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsLessThanComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsLessThanComparator_initPackagePrivate(OrgApacheXpathObjectsLessThanComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanComparator *new_OrgApacheXpathObjectsLessThanComparator_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanComparator *create_OrgApacheXpathObjectsLessThanComparator_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsLessThanComparator)

#endif

#if !defined (OrgApacheXpathObjectsLessThanOrEqualComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsLessThanOrEqualComparator))
#define OrgApacheXpathObjectsLessThanOrEqualComparator_

@class JavaLangBoolean;
@class JavaLangDouble;
@protocol OrgApacheXmlUtilsXMLString;

@interface OrgApacheXpathObjectsLessThanOrEqualComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsLessThanOrEqualComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsLessThanOrEqualComparator_initPackagePrivate(OrgApacheXpathObjectsLessThanOrEqualComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanOrEqualComparator *new_OrgApacheXpathObjectsLessThanOrEqualComparator_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsLessThanOrEqualComparator *create_OrgApacheXpathObjectsLessThanOrEqualComparator_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsLessThanOrEqualComparator)

#endif

#if !defined (OrgApacheXpathObjectsGreaterThanComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsGreaterThanComparator))
#define OrgApacheXpathObjectsGreaterThanComparator_

@class JavaLangBoolean;
@class JavaLangDouble;
@protocol OrgApacheXmlUtilsXMLString;

@interface OrgApacheXpathObjectsGreaterThanComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsGreaterThanComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsGreaterThanComparator_initPackagePrivate(OrgApacheXpathObjectsGreaterThanComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanComparator *new_OrgApacheXpathObjectsGreaterThanComparator_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanComparator *create_OrgApacheXpathObjectsGreaterThanComparator_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsGreaterThanComparator)

#endif

#if !defined (OrgApacheXpathObjectsGreaterThanOrEqualComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsGreaterThanOrEqualComparator))
#define OrgApacheXpathObjectsGreaterThanOrEqualComparator_

@class JavaLangBoolean;
@class JavaLangDouble;
@protocol OrgApacheXmlUtilsXMLString;

@interface OrgApacheXpathObjectsGreaterThanOrEqualComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsGreaterThanOrEqualComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsGreaterThanOrEqualComparator_initPackagePrivate(OrgApacheXpathObjectsGreaterThanOrEqualComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanOrEqualComparator *new_OrgApacheXpathObjectsGreaterThanOrEqualComparator_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsGreaterThanOrEqualComparator *create_OrgApacheXpathObjectsGreaterThanOrEqualComparator_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsGreaterThanOrEqualComparator)

#endif

#if !defined (OrgApacheXpathObjectsEqualComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsEqualComparator))
#define OrgApacheXpathObjectsEqualComparator_

@class JavaLangBoolean;
@class JavaLangDouble;
@protocol OrgApacheXmlUtilsXMLString;

@interface OrgApacheXpathObjectsEqualComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsEqualComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsEqualComparator_initPackagePrivate(OrgApacheXpathObjectsEqualComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsEqualComparator *new_OrgApacheXpathObjectsEqualComparator_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsEqualComparator *create_OrgApacheXpathObjectsEqualComparator_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsEqualComparator)

#endif

#if !defined (OrgApacheXpathObjectsNotEqualComparator_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet || defined(INCLUDE_OrgApacheXpathObjectsNotEqualComparator))
#define OrgApacheXpathObjectsNotEqualComparator_

@class JavaLangBoolean;
@class JavaLangDouble;
@protocol OrgApacheXmlUtilsXMLString;

@interface OrgApacheXpathObjectsNotEqualComparator : OrgApacheXpathObjectsComparator

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (jboolean)compareNumbersWithDouble:(jdouble)n1
                          withDouble:(jdouble)n2;

- (jboolean)compareStringsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s1
                          withOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)s2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsNotEqualComparator)

FOUNDATION_EXPORT void OrgApacheXpathObjectsNotEqualComparator_initPackagePrivate(OrgApacheXpathObjectsNotEqualComparator *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsNotEqualComparator *new_OrgApacheXpathObjectsNotEqualComparator_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsNotEqualComparator *create_OrgApacheXpathObjectsNotEqualComparator_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsNotEqualComparator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNodeSet")
