//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/matchers/NotNull.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersNotNull")
#ifdef RESTRICT_OrgMockitoInternalMatchersNotNull
#define INCLUDE_ALL_OrgMockitoInternalMatchersNotNull 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersNotNull 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersNotNull

#if !defined (OrgMockitoInternalMatchersNotNull_) && (INCLUDE_ALL_OrgMockitoInternalMatchersNotNull || defined(INCLUDE_OrgMockitoInternalMatchersNotNull))
#define OrgMockitoInternalMatchersNotNull_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;

@interface OrgMockitoInternalMatchersNotNull : NSObject < OrgMockitoArgumentMatcher, JavaIoSerializable >

#pragma mark Public

- (jboolean)matchesWithId:(id)actual;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersNotNull)

inline OrgMockitoInternalMatchersNotNull *OrgMockitoInternalMatchersNotNull_get_NOT_NULL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgMockitoInternalMatchersNotNull *OrgMockitoInternalMatchersNotNull_NOT_NULL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalMatchersNotNull, NOT_NULL, OrgMockitoInternalMatchersNotNull *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersNotNull)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersNotNull")
