//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/com/tngtech/java/junit/dataprovider/internal/DataConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalDataConverter")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderInternalDataConverter
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalDataConverter 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalDataConverter 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderInternalDataConverter

#if !defined (ComTngtechJavaJunitDataproviderInternalDataConverter_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalDataConverter || defined(INCLUDE_ComTngtechJavaJunitDataproviderInternalDataConverter))
#define ComTngtechJavaJunitDataproviderInternalDataConverter_

@class ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter;
@class ComTngtechJavaJunitDataproviderInternalConvertSingleArgConverter;
@class ComTngtechJavaJunitDataproviderInternalConvertStringConverter;
@class IOSObjectArray;
@class JavaLangBoolean;
@protocol ComTngtechJavaJunitDataproviderDataProvider;
@protocol JavaLangReflectType;
@protocol JavaUtilList;

@interface ComTngtechJavaJunitDataproviderInternalDataConverter : NSObject {
 @public
  ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter *objectArrayConverter_;
  ComTngtechJavaJunitDataproviderInternalConvertSingleArgConverter *singleArgConverter_;
  ComTngtechJavaJunitDataproviderInternalConvertStringConverter *stringConverter_;
}

#pragma mark Public

- (instancetype)init;

- (jboolean)canConvertWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (id<JavaUtilList>)convertWithId:(id)data
                      withBoolean:(jboolean)isVarArgs
                withIOSClassArray:(IOSObjectArray *)parameterTypes
withComTngtechJavaJunitDataproviderDataProvider:(id<ComTngtechJavaJunitDataproviderDataProvider>)dataProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderInternalDataConverter)

J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderInternalDataConverter, objectArrayConverter_, ComTngtechJavaJunitDataproviderInternalConvertObjectArrayConverter *)
J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderInternalDataConverter, singleArgConverter_, ComTngtechJavaJunitDataproviderInternalConvertSingleArgConverter *)
J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderInternalDataConverter, stringConverter_, ComTngtechJavaJunitDataproviderInternalConvertStringConverter *)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderInternalDataConverter_init(ComTngtechJavaJunitDataproviderInternalDataConverter *self);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalDataConverter *new_ComTngtechJavaJunitDataproviderInternalDataConverter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalDataConverter *create_ComTngtechJavaJunitDataproviderInternalDataConverter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderInternalDataConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalDataConverter")
