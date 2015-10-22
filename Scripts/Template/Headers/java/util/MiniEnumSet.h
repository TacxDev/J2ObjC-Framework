//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/MiniEnumSet.java
//

#ifndef _JavaUtilMiniEnumSet_H_
#define _JavaUtilMiniEnumSet_H_

#include "../../J2ObjC_header.h"
#include "../../java/util/EnumSet.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

/*!
 @brief A concrete EnumSet for enums with 64 or fewer elements.
 */
@interface JavaUtilMiniEnumSet : JavaUtilEnumSet

#pragma mark Public

- (jboolean)addWithId:(JavaLangEnum *)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEqual:(id)object;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

#pragma mark Package-Private

/*!
 @brief Constructs an instance.
 @param elementType non-null; type of the elements
 @param enums non-null; pre-populated array of constants in ordinal
 order
 */
- (instancetype)initWithIOSClass:(IOSClass *)elementType
           withJavaLangEnumArray:(IOSObjectArray *)enums;

- (void)complement;

- (void)setRangeWithJavaLangEnum:(JavaLangEnum *)start
                withJavaLangEnum:(JavaLangEnum *)end;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMiniEnumSet)

FOUNDATION_EXPORT void JavaUtilMiniEnumSet_initWithIOSClass_withJavaLangEnumArray_(JavaUtilMiniEnumSet *self, IOSClass *elementType, IOSObjectArray *enums);

FOUNDATION_EXPORT JavaUtilMiniEnumSet *new_JavaUtilMiniEnumSet_initWithIOSClass_withJavaLangEnumArray_(IOSClass *elementType, IOSObjectArray *enums) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMiniEnumSet)

#endif // _JavaUtilMiniEnumSet_H_
