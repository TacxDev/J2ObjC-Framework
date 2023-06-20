//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/ArgumentMatchers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoArgumentMatchers")
#ifdef RESTRICT_OrgMockitoArgumentMatchers
#define INCLUDE_ALL_OrgMockitoArgumentMatchers 0
#else
#define INCLUDE_ALL_OrgMockitoArgumentMatchers 1
#endif
#undef RESTRICT_OrgMockitoArgumentMatchers

#if !defined (OrgMockitoArgumentMatchers_) && (INCLUDE_ALL_OrgMockitoArgumentMatchers || defined(INCLUDE_OrgMockitoArgumentMatchers))
#define OrgMockitoArgumentMatchers_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangByte;
@class JavaLangCharacter;
@class JavaLangDouble;
@class JavaLangFloat;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangShort;
@class JavaUtilRegexPattern;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol OrgMockitoArgumentMatcher;

@interface OrgMockitoArgumentMatchers : NSObject

#pragma mark Public

- (instancetype)init;

+ (id)any;

+ (id)anyWithIOSClass:(IOSClass *)type;

+ (jboolean)anyBoolean;

+ (jbyte)anyByte;

+ (jchar)anyChar;

+ (id<JavaUtilCollection>)anyCollection;

+ (id<JavaUtilCollection>)anyCollectionOfWithIOSClass:(IOSClass *)clazz;

+ (jdouble)anyDouble;

+ (jfloat)anyFloat;

+ (jint)anyInt;

+ (id<JavaLangIterable>)anyIterable;

+ (id<JavaLangIterable>)anyIterableOfWithIOSClass:(IOSClass *)clazz;

+ (id<JavaUtilList>)anyList;

+ (id<JavaUtilList>)anyListOfWithIOSClass:(IOSClass *)clazz;

+ (jlong)anyLong;

+ (id<JavaUtilMap>)anyMap;

+ (id<JavaUtilMap>)anyMapOfWithIOSClass:(IOSClass *)keyClazz
                           withIOSClass:(IOSClass *)valueClazz;

+ (id)anyObject;

+ (id<JavaUtilSet>)anySet;

+ (id<JavaUtilSet>)anySetOfWithIOSClass:(IOSClass *)clazz;

+ (jshort)anyShort;

+ (NSString *)anyString;

+ (id)anyVararg;

+ (id)argThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (jboolean)booleanThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (jbyte)byteThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (jchar)charThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (NSString *)containsWithNSString:(NSString *)substring;

+ (jdouble)doubleThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (NSString *)endsWithWithNSString:(NSString *)suffix;

+ (jboolean)eqWithBoolean:(jboolean)value;

+ (jbyte)eqWithByte:(jbyte)value;

+ (jchar)eqWithChar:(jchar)value;

+ (jdouble)eqWithDouble:(jdouble)value;

+ (jfloat)eqWithFloat:(jfloat)value;

+ (jint)eqWithInt:(jint)value;

+ (jlong)eqWithLong:(jlong)value;

+ (jshort)eqWithShort:(jshort)value;

+ (id)eqWithId:(id)value;

+ (jfloat)floatThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (jint)intThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (id)isAWithIOSClass:(IOSClass *)type;

+ (id)isNotNull;

+ (id)isNotNullWithIOSClass:(IOSClass *)clazz;

+ (id)isNull;

+ (id)isNullWithIOSClass:(IOSClass *)clazz;

+ (jlong)longThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (NSString *)matchesWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

+ (NSString *)matchesWithNSString:(NSString *)regex;

+ (id)notNull;

+ (id)notNullWithIOSClass:(IOSClass *)clazz;

+ (id)nullableWithIOSClass:(IOSClass *)clazz;

+ (id)refEqWithId:(id)value
withNSStringArray:(IOSObjectArray *)excludeFields;

+ (id)sameWithId:(id)value;

+ (jshort)shortThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

+ (NSString *)startsWithWithNSString:(NSString *)prefix;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoArgumentMatchers)

FOUNDATION_EXPORT void OrgMockitoArgumentMatchers_init(OrgMockitoArgumentMatchers *self);

FOUNDATION_EXPORT OrgMockitoArgumentMatchers *new_OrgMockitoArgumentMatchers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoArgumentMatchers *create_OrgMockitoArgumentMatchers_init(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_any(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_anyObject(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_anyWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isAWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_anyVararg(void);

FOUNDATION_EXPORT jboolean OrgMockitoArgumentMatchers_anyBoolean(void);

FOUNDATION_EXPORT jbyte OrgMockitoArgumentMatchers_anyByte(void);

FOUNDATION_EXPORT jchar OrgMockitoArgumentMatchers_anyChar(void);

FOUNDATION_EXPORT jint OrgMockitoArgumentMatchers_anyInt(void);

FOUNDATION_EXPORT jlong OrgMockitoArgumentMatchers_anyLong(void);

FOUNDATION_EXPORT jfloat OrgMockitoArgumentMatchers_anyFloat(void);

FOUNDATION_EXPORT jdouble OrgMockitoArgumentMatchers_anyDouble(void);

FOUNDATION_EXPORT jshort OrgMockitoArgumentMatchers_anyShort(void);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_anyString(void);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoArgumentMatchers_anyList(void);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoArgumentMatchers_anyListOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoArgumentMatchers_anySet(void);

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoArgumentMatchers_anySetOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaUtilMap> OrgMockitoArgumentMatchers_anyMap(void);

FOUNDATION_EXPORT id<JavaUtilMap> OrgMockitoArgumentMatchers_anyMapOfWithIOSClass_withIOSClass_(IOSClass *keyClazz, IOSClass *valueClazz);

FOUNDATION_EXPORT id<JavaUtilCollection> OrgMockitoArgumentMatchers_anyCollection(void);

FOUNDATION_EXPORT id<JavaUtilCollection> OrgMockitoArgumentMatchers_anyCollectionOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaLangIterable> OrgMockitoArgumentMatchers_anyIterable(void);

FOUNDATION_EXPORT id<JavaLangIterable> OrgMockitoArgumentMatchers_anyIterableOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT jboolean OrgMockitoArgumentMatchers_eqWithBoolean_(jboolean value);

FOUNDATION_EXPORT jbyte OrgMockitoArgumentMatchers_eqWithByte_(jbyte value);

FOUNDATION_EXPORT jchar OrgMockitoArgumentMatchers_eqWithChar_(jchar value);

FOUNDATION_EXPORT jdouble OrgMockitoArgumentMatchers_eqWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoArgumentMatchers_eqWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoArgumentMatchers_eqWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoArgumentMatchers_eqWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoArgumentMatchers_eqWithShort_(jshort value);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_eqWithId_(id value);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_refEqWithId_withNSStringArray_(id value, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_sameWithId_(id value);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isNull(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_notNull(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_notNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isNotNull(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isNotNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_nullableWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_containsWithNSString_(NSString *substring);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_matchesWithNSString_(NSString *regex);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_matchesWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_endsWithWithNSString_(NSString *suffix);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_startsWithWithNSString_(NSString *prefix);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_argThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jchar OrgMockitoArgumentMatchers_charThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jboolean OrgMockitoArgumentMatchers_booleanThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jbyte OrgMockitoArgumentMatchers_byteThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jshort OrgMockitoArgumentMatchers_shortThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jint OrgMockitoArgumentMatchers_intThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jlong OrgMockitoArgumentMatchers_longThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jfloat OrgMockitoArgumentMatchers_floatThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jdouble OrgMockitoArgumentMatchers_doubleThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoArgumentMatchers)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoArgumentMatchers")
