//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/jsr305/build_result/java/javax/annotation/concurrent/GuardedBy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy")
#ifdef RESTRICT_JavaxAnnotationConcurrentGuardedBy
#define INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentGuardedBy

#if !defined (JavaxAnnotationConcurrentGuardedBy_) && (INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy || defined(INCLUDE_JavaxAnnotationConcurrentGuardedBy))
#define JavaxAnnotationConcurrentGuardedBy_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol JavaxAnnotationConcurrentGuardedBy < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationConcurrentGuardedBy : NSObject < JavaxAnnotationConcurrentGuardedBy > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentGuardedBy)

FOUNDATION_EXPORT id<JavaxAnnotationConcurrentGuardedBy> create_JavaxAnnotationConcurrentGuardedBy(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentGuardedBy)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentGuardedBy")