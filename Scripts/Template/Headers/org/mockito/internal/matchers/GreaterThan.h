//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/GreaterThan.java
//

#ifndef _OrgMockitoInternalMatchersGreaterThan_H_
#define _OrgMockitoInternalMatchersGreaterThan_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../java/io/Serializable.h"
#include "../../../../org/mockito/internal/matchers/CompareTo.h"

@protocol JavaLangComparable;

@interface OrgMockitoInternalMatchersGreaterThan : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

#pragma mark Protected

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersGreaterThan)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersGreaterThan_initWithJavaLangComparable_(OrgMockitoInternalMatchersGreaterThan *self, id<JavaLangComparable> value);

FOUNDATION_EXPORT OrgMockitoInternalMatchersGreaterThan *new_OrgMockitoInternalMatchersGreaterThan_initWithJavaLangComparable_(id<JavaLangComparable> value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersGreaterThan)

#endif // _OrgMockitoInternalMatchersGreaterThan_H_
