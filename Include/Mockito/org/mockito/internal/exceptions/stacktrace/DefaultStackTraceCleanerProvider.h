//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/DefaultStackTraceCleanerProvider.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider")
#ifdef RESTRICT_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider 0
#else
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider 1
#endif
#undef RESTRICT_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider

#if !defined (OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_) && (INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider || defined(INCLUDE_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider))
#define OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_

#define RESTRICT_OrgMockitoPluginsStackTraceCleanerProvider 1
#define INCLUDE_OrgMockitoPluginsStackTraceCleanerProvider 1
#include "org/mockito/plugins/StackTraceCleanerProvider.h"

@protocol OrgMockitoExceptionsStacktraceStackTraceCleaner;

@interface OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider : NSObject < OrgMockitoPluginsStackTraceCleanerProvider >

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoExceptionsStacktraceStackTraceCleaner>)getStackTraceCleanerWithOrgMockitoExceptionsStacktraceStackTraceCleaner:(id<OrgMockitoExceptionsStacktraceStackTraceCleaner>)defaultCleaner;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider)

FOUNDATION_EXPORT void OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_init(OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider *self);

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider *new_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider *create_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider")
