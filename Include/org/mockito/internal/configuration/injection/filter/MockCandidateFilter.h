//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/MockCandidateFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter

#if !defined (OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter))
#define OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjector;

@protocol OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter < JavaObject >

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjector>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)candidateFieldToBeInjected
                                                                                          withJavaUtilList:(id<JavaUtilList>)allRemainingCandidateFields
                                                                                                    withId:(id)injectee;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter")