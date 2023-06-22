//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/util/Primitives.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilPrimitives")
#ifdef RESTRICT_OrgMockitoInternalUtilPrimitives
#define INCLUDE_ALL_OrgMockitoInternalUtilPrimitives 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilPrimitives 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilPrimitives

#if !defined (OrgMockitoInternalUtilPrimitives_) && (INCLUDE_ALL_OrgMockitoInternalUtilPrimitives || defined(INCLUDE_OrgMockitoInternalUtilPrimitives))
#define OrgMockitoInternalUtilPrimitives_

@class IOSClass;
@class JavaLangBoolean;

@interface OrgMockitoInternalUtilPrimitives : NSObject

#pragma mark Public

- (instancetype)init;

+ (id)defaultValueWithIOSClass:(IOSClass *)primitiveOrWrapperType;

+ (jboolean)isAssignableFromWrapperWithIOSClass:(IOSClass *)valueClass
                                   withIOSClass:(IOSClass *)referenceType;

+ (jboolean)isPrimitiveOrWrapperWithIOSClass:(IOSClass *)type;

+ (IOSClass *)primitiveTypeOfWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalUtilPrimitives)

FOUNDATION_EXPORT void OrgMockitoInternalUtilPrimitives_init(OrgMockitoInternalUtilPrimitives *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilPrimitives *new_OrgMockitoInternalUtilPrimitives_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilPrimitives *create_OrgMockitoInternalUtilPrimitives_init(void);

FOUNDATION_EXPORT IOSClass *OrgMockitoInternalUtilPrimitives_primitiveTypeOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT jboolean OrgMockitoInternalUtilPrimitives_isPrimitiveOrWrapperWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT jboolean OrgMockitoInternalUtilPrimitives_isAssignableFromWrapperWithIOSClass_withIOSClass_(IOSClass *valueClass, IOSClass *referenceType);

FOUNDATION_EXPORT id OrgMockitoInternalUtilPrimitives_defaultValueWithIOSClass_(IOSClass *primitiveOrWrapperType);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilPrimitives)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilPrimitives")