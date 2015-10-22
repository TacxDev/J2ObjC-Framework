//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runner/manipulation/Filter.java
//

#ifndef _OrgJunitRunnerManipulationFilter_H_
#define _OrgJunitRunnerManipulationFilter_H_

#include "../../../../J2ObjC_header.h"

@class OrgJunitRunnerDescription;

@interface OrgJunitRunnerManipulationFilter : NSObject

#pragma mark Public

- (instancetype)init;

- (void)applyWithId:(id)child;

- (NSString *)describe;

- (OrgJunitRunnerManipulationFilter *)intersectWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)second;

+ (OrgJunitRunnerManipulationFilter *)matchMethodDescriptionWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)desiredDescription;

- (jboolean)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnerManipulationFilter)

FOUNDATION_EXPORT OrgJunitRunnerManipulationFilter *OrgJunitRunnerManipulationFilter_ALL_;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnerManipulationFilter, ALL_, OrgJunitRunnerManipulationFilter *)
J2OBJC_STATIC_FIELD_SETTER(OrgJunitRunnerManipulationFilter, ALL_, OrgJunitRunnerManipulationFilter *)

FOUNDATION_EXPORT OrgJunitRunnerManipulationFilter *OrgJunitRunnerManipulationFilter_matchMethodDescriptionWithOrgJunitRunnerDescription_(OrgJunitRunnerDescription *desiredDescription);

FOUNDATION_EXPORT void OrgJunitRunnerManipulationFilter_init(OrgJunitRunnerManipulationFilter *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationFilter)

#endif // _OrgJunitRunnerManipulationFilter_H_
