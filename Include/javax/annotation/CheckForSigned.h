//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/jsr305/build_result/java/javax/annotation/CheckForSigned.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationCheckForSigned")
#ifdef RESTRICT_JavaxAnnotationCheckForSigned
#define INCLUDE_ALL_JavaxAnnotationCheckForSigned 0
#else
#define INCLUDE_ALL_JavaxAnnotationCheckForSigned 1
#endif
#undef RESTRICT_JavaxAnnotationCheckForSigned

#if !defined (JavaxAnnotationCheckForSigned_) && (INCLUDE_ALL_JavaxAnnotationCheckForSigned || defined(INCLUDE_JavaxAnnotationCheckForSigned))
#define JavaxAnnotationCheckForSigned_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol JavaxAnnotationCheckForSigned < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationCheckForSigned : NSObject < JavaxAnnotationCheckForSigned >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationCheckForSigned)

FOUNDATION_EXPORT id<JavaxAnnotationCheckForSigned> create_JavaxAnnotationCheckForSigned(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationCheckForSigned)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationCheckForSigned")
