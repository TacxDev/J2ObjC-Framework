//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/jsr305/build_result/java/javax/annotation/meta/TypeQualifierDefault.java
//

#ifndef _JavaxAnnotationMetaTypeQualifierDefault_H_
#define _JavaxAnnotationMetaTypeQualifierDefault_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/lang/annotation/Annotation.h"

@class IOSObjectArray;

@protocol JavaxAnnotationMetaTypeQualifierDefault < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface JavaxAnnotationMetaTypeQualifierDefault : NSObject < JavaxAnnotationMetaTypeQualifierDefault > {
 @private
  IOSObjectArray *value_;
}

- (instancetype)initWithValue:(IOSObjectArray *)value__;

+ (IOSObjectArray *)valueDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaTypeQualifierDefault)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaTypeQualifierDefault)

#endif // _JavaxAnnotationMetaTypeQualifierDefault_H_
