//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/matchers/Null.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersNull")
#ifdef RESTRICT_OrgMockitoInternalMatchersNull
#define INCLUDE_ALL_OrgMockitoInternalMatchersNull 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersNull 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersNull

#if !defined (OrgMockitoInternalMatchersNull_) && (INCLUDE_ALL_OrgMockitoInternalMatchersNull || defined(INCLUDE_OrgMockitoInternalMatchersNull))
#define OrgMockitoInternalMatchersNull_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;

@interface OrgMockitoInternalMatchersNull : NSObject < OrgMockitoArgumentMatcher, JavaIoSerializable >

#pragma mark Public

- (jboolean)matchesWithId:(id)actual;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersNull)

inline OrgMockitoInternalMatchersNull *OrgMockitoInternalMatchersNull_get_NULL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgMockitoInternalMatchersNull *OrgMockitoInternalMatchersNull_NULL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalMatchersNull, NULL, OrgMockitoInternalMatchersNull *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersNull)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersNull")
