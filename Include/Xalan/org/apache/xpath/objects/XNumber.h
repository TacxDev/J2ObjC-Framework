//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XNumber.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNumber")
#ifdef RESTRICT_OrgApacheXpathObjectsXNumber
#define INCLUDE_ALL_OrgApacheXpathObjectsXNumber 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXNumber 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXNumber

#if !defined (OrgApacheXpathObjectsXNumber_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNumber || defined(INCLUDE_OrgApacheXpathObjectsXNumber))
#define OrgApacheXpathObjectsXNumber_

#define RESTRICT_OrgApacheXpathObjectsXObject 1
#define INCLUDE_OrgApacheXpathObjectsXObject 1
#include "org/apache/xpath/objects/XObject.h"

@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXpathExpressionOwner;

@interface OrgApacheXpathObjectsXNumber : OrgApacheXpathObjectsXObject {
 @public
  jdouble m_val_;
}

#pragma mark Public

- (instancetype)initWithDouble:(jdouble)d;

- (instancetype)initWithNSNumber:(NSNumber *)num;

- (jboolean)bool__;

- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

- (jint)getType;

- (NSString *)getTypeString;

- (jboolean)isStableNumber;

- (jdouble)num;

- (jdouble)numWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (id)object;

- (NSString *)str;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXNumber)

inline jlong OrgApacheXpathObjectsXNumber_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXNumber_serialVersionUID -2720400709619020193LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXNumber, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNumber_initWithDouble_(OrgApacheXpathObjectsXNumber *self, jdouble d);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *new_OrgApacheXpathObjectsXNumber_initWithDouble_(jdouble d) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *create_OrgApacheXpathObjectsXNumber_initWithDouble_(jdouble d);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNumber_initWithNSNumber_(OrgApacheXpathObjectsXNumber *self, NSNumber *num);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *new_OrgApacheXpathObjectsXNumber_initWithNSNumber_(NSNumber *num) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *create_OrgApacheXpathObjectsXNumber_initWithNSNumber_(NSNumber *num);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXNumber)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNumber")
