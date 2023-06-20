//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/Runtime.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRuntime")
#ifdef RESTRICT_JavaLangRuntime
#define INCLUDE_ALL_JavaLangRuntime 0
#else
#define INCLUDE_ALL_JavaLangRuntime 1
#endif
#undef RESTRICT_JavaLangRuntime

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangRuntime_) && (INCLUDE_ALL_JavaLangRuntime || defined(INCLUDE_JavaLangRuntime))
#define JavaLangRuntime_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangThread;

/*!
 @brief Simple iOS version of java.lang.Runtime.No code was shared, just its
  public API.
 @author Tom Ball
 */
@interface JavaLangRuntime : NSObject

#pragma mark Public

- (void)addShutdownHookWithJavaLangThread:(JavaLangThread *)hook;

- (jint)availableProcessors;

- (void)exitWithInt:(jint)status;

- (jlong)freeMemory;

- (void)gc;

+ (JavaLangRuntime *)getRuntime;

- (void)haltWithInt:(jint)status;

/*!
 @brief No-op on iOS, since all code must be linked into app bundle.
 */
- (void)load__WithNSString:(NSString *)absolutePath;

/*!
 @brief No-op on iOS, since all code must be linked into app bundle.
 */
- (void)loadLibraryWithNSString:(NSString *)nickname;

- (jlong)maxMemory;

- (jboolean)removeShutdownHookWithJavaLangThread:(JavaLangThread *)hook;

/*!
 @brief No-op on iOS, since it doesn't use garbage collection.
 */
- (void)runFinalization;

- (jlong)totalMemory;

/*!
 @brief No-op on iOS.
 */
- (void)traceInstructionsWithBoolean:(jboolean)enable;

/*!
 @brief No-op on iOS.
 */
- (void)traceMethodCallsWithBoolean:(jboolean)enable;

@end

J2OBJC_STATIC_INIT(JavaLangRuntime)

FOUNDATION_EXPORT JavaLangRuntime *JavaLangRuntime_getRuntime(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRuntime)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangRuntime")
