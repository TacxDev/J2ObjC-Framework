//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runners/model/RunnerScheduler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler")
#ifdef RESTRICT_OrgJunitRunnersModelRunnerScheduler
#define INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler 1
#endif
#undef RESTRICT_OrgJunitRunnersModelRunnerScheduler

#if !defined (OrgJunitRunnersModelRunnerScheduler_) && (INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler || defined(INCLUDE_OrgJunitRunnersModelRunnerScheduler))
#define OrgJunitRunnersModelRunnerScheduler_

@protocol JavaLangRunnable;

@protocol OrgJunitRunnersModelRunnerScheduler < JavaObject >

- (void)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)childStatement;

- (void)finished;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelRunnerScheduler)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelRunnerScheduler)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler")