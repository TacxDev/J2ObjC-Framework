//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/com/tngtech/java/junit/dataprovider/DataProviderFrameworkMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod

#if !defined (ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod || defined(INCLUDE_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod))
#define ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_

#define RESTRICT_OrgJunitRunnersModelFrameworkMethod 1
#define INCLUDE_OrgJunitRunnersModelFrameworkMethod 1
#include "org/junit/runners/model/FrameworkMethod.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangReflectMethod;
@protocol JavaUtilList;

@interface ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod : OrgJunitRunnersModelFrameworkMethod {
 @public
  jint idx_;
  IOSObjectArray *parameters_;
  NSString *nameFormat_;
}

#pragma mark Public

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method
                                      withInt:(jint)idx
                            withNSObjectArray:(IOSObjectArray *)parameters
                                 withNSString:(NSString *)nameFormat;

- (jboolean)isEqual:(id)obj;

- (NSString *)getName;

- (NSUInteger)hash;

- (id)invokeExplosivelyWithId:(id)target
            withNSObjectArray:(IOSObjectArray *)params;

#pragma mark Package-Private

- (OrgJunitRunnersModelFrameworkMethod *)handlePossibleBridgeMethodWithJavaUtilList:(id<JavaUtilList>)arg0;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod)

J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod, parameters_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod, nameFormat_, NSString *)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_initWithJavaLangReflectMethod_withInt_withNSObjectArray_withNSString_(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod *self, JavaLangReflectMethod *method, jint idx, IOSObjectArray *parameters, NSString *nameFormat);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod *new_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_initWithJavaLangReflectMethod_withInt_withNSObjectArray_withNSString_(JavaLangReflectMethod *method, jint idx, IOSObjectArray *parameters, NSString *nameFormat) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod *create_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod_initWithJavaLangReflectMethod_withInt_withNSObjectArray_withNSString_(JavaLangReflectMethod *method, jint idx, IOSObjectArray *parameters, NSString *nameFormat);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod)

#endif

#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderFrameworkMethod")
