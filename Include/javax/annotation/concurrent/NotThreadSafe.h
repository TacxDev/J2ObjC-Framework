//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/jsr305/build_result/java/javax/annotation/concurrent/NotThreadSafe.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe")
#ifdef RESTRICT_JavaxAnnotationConcurrentNotThreadSafe
#define INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentNotThreadSafe

#if !defined (JavaxAnnotationConcurrentNotThreadSafe_) && (INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe || defined(INCLUDE_JavaxAnnotationConcurrentNotThreadSafe))
#define JavaxAnnotationConcurrentNotThreadSafe_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol JavaxAnnotationConcurrentNotThreadSafe < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationConcurrentNotThreadSafe : NSObject < JavaxAnnotationConcurrentNotThreadSafe >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentNotThreadSafe)

FOUNDATION_EXPORT id<JavaxAnnotationConcurrentNotThreadSafe> create_JavaxAnnotationConcurrentNotThreadSafe(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentNotThreadSafe)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe")
