//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/com/tngtech/java/junit/dataprovider/internal/convert/ObjectArrayConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter

#if !defined (ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter || defined(INCLUDE_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter))
#define ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter_

#define RESTRICT_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter 1
#define INCLUDE_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter 1
#include "com/tngtech/java/junit/dataprovider/internal/convert/AbstractObjectConverter.h"

@class IOSObjectArray;
@class JavaLangBoolean;

@interface ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter : ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter

#pragma mark Public

- (instancetype)init;

- (IOSObjectArray *)convertWithId:(IOSObjectArray *)data
                      withBoolean:(jboolean)isVarArgs
                withIOSClassArray:(IOSObjectArray *)parameterTypes;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter_init(ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter *self);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter *new_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter *create_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter")