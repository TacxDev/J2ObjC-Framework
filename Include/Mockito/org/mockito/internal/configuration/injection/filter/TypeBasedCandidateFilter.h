//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/TypeBasedCandidateFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter

#if !defined (OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter))
#define OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_

#define RESTRICT_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#define INCLUDE_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjector;

@interface OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter:(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)next;

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjector>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)candidateFieldToBeInjected
                                                                                          withJavaUtilList:(id<JavaUtilList>)allRemainingCandidateFields
                                                                                                    withId:(id)injectee;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *self, id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *new_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *create_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter")
