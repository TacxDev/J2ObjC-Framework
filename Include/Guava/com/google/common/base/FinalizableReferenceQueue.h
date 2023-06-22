//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/base/FinalizableReferenceQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue")
#ifdef RESTRICT_ComGoogleCommonBaseFinalizableReferenceQueue
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFinalizableReferenceQueue
#ifdef INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader
#define INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader 1
#endif
#ifdef INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader
#define INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader 1
#endif
#ifdef INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader
#define INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue))
#define ComGoogleCommonBaseFinalizableReferenceQueue_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangRefPhantomReference;
@class JavaLangRefReferenceQueue;
@class JavaLangReflectMethod;

@interface ComGoogleCommonBaseFinalizableReferenceQueue : NSObject < JavaIoCloseable > {
 @public
  JavaLangRefReferenceQueue *queue_;
  JavaLangRefPhantomReference *frqRef_;
  jboolean threadStarted_;
}

#pragma mark Public

- (instancetype)init;

- (void)close;

#pragma mark Package-Private

- (void)cleanUp;

+ (JavaLangReflectMethod *)getStartFinalizerWithIOSClass:(IOSClass *)finalizer;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue)

J2OBJC_FIELD_SETTER(ComGoogleCommonBaseFinalizableReferenceQueue, queue_, JavaLangRefReferenceQueue *)
J2OBJC_FIELD_SETTER(ComGoogleCommonBaseFinalizableReferenceQueue, frqRef_, JavaLangRefPhantomReference *)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableReferenceQueue_init(ComGoogleCommonBaseFinalizableReferenceQueue *self);

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue *new_ComGoogleCommonBaseFinalizableReferenceQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue *create_ComGoogleCommonBaseFinalizableReferenceQueue_init(void);

FOUNDATION_EXPORT JavaLangReflectMethod *ComGoogleCommonBaseFinalizableReferenceQueue_getStartFinalizerWithIOSClass_(IOSClass *finalizer);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue)

#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader))
#define ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader_

@class IOSClass;

@protocol ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader < JavaObject >

- (IOSClass *)loadFinalizer;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader)

#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader))
#define ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_

@class IOSClass;
@class JavaLangBoolean;

@interface ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader : NSObject < ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader >

#pragma mark Public

- (IOSClass *)loadFinalizer;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader)

inline jboolean ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_get_disabled(void);
inline jboolean ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_set_disabled(jboolean value);
inline jboolean *ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_getRef_disabled(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jboolean ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_disabled;
J2OBJC_STATIC_FIELD_PRIMITIVE(ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader, disabled, jboolean)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_init(ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader *self);

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader *new_ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader *create_ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader)

#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader))
#define ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_

@class IOSClass;
@class JavaNetURL;
@class JavaNetURLClassLoader;

@interface ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader : NSObject < ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader >

#pragma mark Public

- (IOSClass *)loadFinalizer;

#pragma mark Package-Private

- (instancetype)init;

- (JavaNetURL *)getBaseUrl;

- (JavaNetURLClassLoader *)newLoaderWithJavaNetURL:(JavaNetURL *)base OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_init(ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader *self);

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader *new_ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader *create_ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader)

#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader))
#define ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_

@class IOSClass;

@interface ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader : NSObject < ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader >

#pragma mark Public

- (IOSClass *)loadFinalizer;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_init(ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader *self);

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader *new_ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader *create_ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue")