//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/eventbus/DeadEvent.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusDeadEvent")
#ifdef RESTRICT_ComGoogleCommonEventbusDeadEvent
#define INCLUDE_ALL_ComGoogleCommonEventbusDeadEvent 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusDeadEvent 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusDeadEvent

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEventbusDeadEvent_) && (INCLUDE_ALL_ComGoogleCommonEventbusDeadEvent || defined(INCLUDE_ComGoogleCommonEventbusDeadEvent))
#define ComGoogleCommonEventbusDeadEvent_

@interface ComGoogleCommonEventbusDeadEvent : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)source
                    withId:(id)event;

- (id)getEvent;

- (id)getSource;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusDeadEvent)

FOUNDATION_EXPORT void ComGoogleCommonEventbusDeadEvent_initWithId_withId_(ComGoogleCommonEventbusDeadEvent *self, id source, id event);

FOUNDATION_EXPORT ComGoogleCommonEventbusDeadEvent *new_ComGoogleCommonEventbusDeadEvent_initWithId_withId_(id source, id event) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEventbusDeadEvent *create_ComGoogleCommonEventbusDeadEvent_initWithId_withId_(id source, id event);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusDeadEvent)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusDeadEvent")
