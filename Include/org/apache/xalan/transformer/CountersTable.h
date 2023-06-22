//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/CountersTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerCountersTable")
#ifdef RESTRICT_OrgApacheXalanTransformerCountersTable
#define INCLUDE_ALL_OrgApacheXalanTransformerCountersTable 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerCountersTable 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerCountersTable

#if !defined (OrgApacheXalanTransformerCountersTable_) && (INCLUDE_ALL_OrgApacheXalanTransformerCountersTable || defined(INCLUDE_OrgApacheXalanTransformerCountersTable))
#define OrgApacheXalanTransformerCountersTable_

#define RESTRICT_JavaUtilHashtable 1
#define INCLUDE_JavaUtilHashtable 1
#include "java/util/Hashtable.h"

@class JavaLangFloat;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilVector;
@class OrgApacheXalanTemplatesElemNumber;
@class OrgApacheXpathNodeSetDTM;
@class OrgApacheXpathXPathContext;
@protocol JavaUtilMap;

@interface OrgApacheXalanTransformerCountersTable : JavaUtilHashtable {
 @public
  jint m_countersMade_;
}

#pragma mark Public

- (instancetype)init;

- (jint)countNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support
          withOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)numberElem
                                        withInt:(jint)node;

#pragma mark Package-Private

- (void)appendBtoFListWithOrgApacheXpathNodeSetDTM:(OrgApacheXpathNodeSetDTM *)flist
                      withOrgApacheXpathNodeSetDTM:(OrgApacheXpathNodeSetDTM *)blist;

- (JavaUtilVector *)getCountersWithOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)numberElem;

- (JavaUtilVector *)putElemNumberWithOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)numberElem;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithInt:(jint)arg0 NS_UNAVAILABLE;

- (instancetype)initWithInt:(jint)arg0
                  withFloat:(jfloat)arg1 NS_UNAVAILABLE;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerCountersTable)

inline jlong OrgApacheXalanTransformerCountersTable_get_serialVersionUID(void);
#define OrgApacheXalanTransformerCountersTable_serialVersionUID 2159100770924179875LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTransformerCountersTable, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTransformerCountersTable_init(OrgApacheXalanTransformerCountersTable *self);

FOUNDATION_EXPORT OrgApacheXalanTransformerCountersTable *new_OrgApacheXalanTransformerCountersTable_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerCountersTable *create_OrgApacheXalanTransformerCountersTable_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerCountersTable)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerCountersTable")