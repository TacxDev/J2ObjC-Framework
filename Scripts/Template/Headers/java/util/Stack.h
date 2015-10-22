//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Stack.java
//

#ifndef _JavaUtilStack_H_
#define _JavaUtilStack_H_

#include "../../J2ObjC_header.h"
#include "../../java/util/Vector.h"

/*!
 @brief <code>Stack</code> is a Last-In/First-Out(LIFO) data structure which represents a
 stack of objects.
 It enables users to pop to and push from the stack,
 including null objects. There is no limit to the size of the stack.
 */
@interface JavaUtilStack : JavaUtilVector

#pragma mark Public

/*!
 @brief Constructs a stack with the default size of <code>Vector</code>.
 */
- (instancetype)init;

/*!
 @brief Returns whether the stack is empty or not.
 @return <code>true</code> if the stack is empty, <code>false</code> otherwise.
 */
- (jboolean)empty;

/*!
 @brief Returns the element at the top of the stack without removing it.
 @return the element at the top of the stack.
 @throws EmptyStackException
 if the stack is empty.
 */
- (id)peek;

/*!
 @brief Returns the element at the top of the stack and removes it.
 @return the element at the top of the stack.
 @throws EmptyStackException
 if the stack is empty.
 */
- (id)pop;

/*!
 @brief Pushes the specified object onto the top of the stack.
 @param object
 The object to be added on top of the stack.
 @return the object argument.
 */
- (id)pushWithId:(id)object;

/*!
 @brief Returns the index of the first occurrence of the object, starting from
 the top of the stack.
 @return the index of the first occurrence of the object, assuming that
 the topmost object on the stack has a distance of one.
 @param o
 the object to be searched.
 */
- (jint)searchWithId:(id)o;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStack)

FOUNDATION_EXPORT void JavaUtilStack_init(JavaUtilStack *self);

FOUNDATION_EXPORT JavaUtilStack *new_JavaUtilStack_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStack)

#endif // _JavaUtilStack_H_
