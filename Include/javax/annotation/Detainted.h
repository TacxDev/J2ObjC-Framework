//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/jsr305/build_result/java/javax/annotation/Detainted.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationDetainted")
#ifdef RESTRICT_JavaxAnnotationDetainted
#define INCLUDE_ALL_JavaxAnnotationDetainted 0
#else
#define INCLUDE_ALL_JavaxAnnotationDetainted 1
#endif
#undef RESTRICT_JavaxAnnotationDetainted

#if !defined (JavaxAnnotationDetainted_) && (INCLUDE_ALL_JavaxAnnotationDetainted || defined(INCLUDE_JavaxAnnotationDetainted))
#define JavaxAnnotationDetainted_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol JavaxAnnotationDetainted < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationDetainted : NSObject < JavaxAnnotationDetainted >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationDetainted)

FOUNDATION_EXPORT id<JavaxAnnotationDetainted> create_JavaxAnnotationDetainted(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationDetainted)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationDetainted")