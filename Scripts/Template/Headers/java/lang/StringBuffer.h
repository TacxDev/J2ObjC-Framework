//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/StringBuffer.java
//

#ifndef _JavaLangStringBuffer_H_
#define _JavaLangStringBuffer_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/Serializable.h"
#include "../../java/lang/AbstractStringBuilder.h"
#include "../../java/lang/Appendable.h"
#include "../../java/lang/CharSequence.h"

@class IOSCharArray;

/*!
 @brief A modifiable <code>sequence of characters</code> for use in creating
 strings, where all accesses are synchronized.
 This class has mostly been replaced
 by <code>StringBuilder</code> because this synchronization is rarely useful. This
 class is mainly used to interact with legacy APIs that expose it.
 <p>For particularly complex string-building needs, consider <code>java.util.Formatter</code>.
 <p>The majority of the modification methods on this class return <code>this</code>
  so that method calls can be chained together. For example:
 <code>new StringBuffer("a").append("b").append("c").toString()</code>.
 @since 1.0
 */
@interface JavaLangStringBuffer : JavaLangAbstractStringBuilder < JavaLangAppendable, JavaIoSerializable, JavaLangCharSequence >

#pragma mark Public

/*!
 @brief Constructs a new StringBuffer using the default capacity which is 16.
 */
- (instancetype)init;

/*!
 @brief Constructs a StringBuffer and initializes it with the content from the
 specified <code>CharSequence</code>.
 The capacity of the new buffer will be
 the length of the <code>CharSequence</code> plus the default capacity.
 @param cs
 the content to initialize the instance.
 @throws NullPointerException
 if <code>cs</code> is <code>null</code>.
 @since 1.5
 */
- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)cs;

/*!
 @brief Constructs a new StringBuffer using the specified capacity.
 @param capacity
 the initial capacity.
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Constructs a new StringBuffer containing the characters in the specified
 string.
 The capacity of the new buffer will be the length of the
 <code>String</code> plus the default capacity.
 @param string
 the string content with which to initialize the new instance.
 @throws NullPointerException
 if <code>string</code> is <code>null</code>.
 */
- (instancetype)initWithNSString:(NSString *)string;

/*!
 @brief Adds the string representation of the specified boolean to the end of
 this StringBuffer.
 <p>
 If the argument is <code>true</code> the string <code>"true"</code> is appended,
 otherwise the string <code>"false"</code> is appended.
 @param b
 the boolean to append.
 @return this StringBuffer.
 */
- (JavaLangStringBuffer *)appendWithBoolean:(jboolean)b;

/*!
 @brief Adds the specified character to the end of this buffer.
 @param ch
 the character to append.
 @return this StringBuffer.
 */
- (JavaLangStringBuffer *)appendWithChar:(jchar)ch;

/*!
 @brief Adds the character array to the end of this buffer.
 @param chars
 the character array to append.
 @return this StringBuffer.
 @throws NullPointerException
 if <code>chars</code> is <code>null</code>.
 */
- (JavaLangStringBuffer *)appendWithCharArray:(IOSCharArray *)chars;

/*!
 @brief Adds the specified sequence of characters to the end of this buffer.
 @param chars
 the character array to append.
 @param start
 the starting offset.
 @param length
 the number of characters.
 @return this StringBuffer.
 @throws ArrayIndexOutOfBoundsException
 if <code>length < 0</code> , <code>start < 0</code> or <code>start +
 length > chars.length</code>
 .
 @throws NullPointerException
 if <code>chars</code> is <code>null</code>.
 */
- (JavaLangStringBuffer *)appendWithCharArray:(IOSCharArray *)chars
                                      withInt:(jint)start
                                      withInt:(jint)length;

/*!
 @brief Appends the specified CharSequence to this buffer.
 <p>
 If the specified CharSequence is <code>null</code> the string <code>"null"</code>
 is appended, otherwise the contents of the specified CharSequence is
 appended.
 @param s
 the CharSequence to append.
 @return this StringBuffer.
 @since 1.5
 */
- (JavaLangStringBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)s;

/*!
 @brief Appends the specified subsequence of the CharSequence to this buffer.
 <p>
 If the specified CharSequence is <code>null</code>, then the string <code>"null"</code>
  is used to extract a subsequence.
 @param s
 the CharSequence to append.
 @param start
 the inclusive start index.
 @param end
 the exclusive end index.
 @return this StringBuffer.
 @throws IndexOutOfBoundsException
 if <code>start</code> or <code>end</code> are negative, <code>start</code>
 is greater than <code>end</code> or <code>end</code> is greater than
 the length of <code>s</code>.
 @since 1.5
 */
- (JavaLangStringBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                                 withInt:(jint)start
                                                 withInt:(jint)end;

/*!
 @brief Adds the string representation of the specified double to the end of this
 StringBuffer.
 @param d
 the double to append.
 @return this StringBuffer.
 */
- (JavaLangStringBuffer *)appendWithDouble:(jdouble)d;

/*!
 @brief Adds the string representation of the specified float to the end of this
 StringBuffer.
 @param f
 the float to append.
 @return this StringBuffer.
 */
- (JavaLangStringBuffer *)appendWithFloat:(jfloat)f;

/*!
 @brief Adds the string representation of the specified integer to the end of
 this StringBuffer.
 @param i
 the integer to append.
 @return this StringBuffer.
 */
- (JavaLangStringBuffer *)appendWithInt:(jint)i;

/*!
 @brief Adds the string representation of the specified long to the end of this
 StringBuffer.
 @param l
 the long to append.
 @return this StringBuffer.
 */
- (JavaLangStringBuffer *)appendWithLong:(jlong)l;

/*!
 @brief Adds the string representation of the specified object to the end of this
 StringBuffer.
 <p>
 If the specified object is <code>null</code> the string <code>"null"</code> is
 appended, otherwise the objects <code>toString</code> is used to get its
 string representation.
 @param obj
 the object to append (may be null).
 @return this StringBuffer.
 */
- (JavaLangStringBuffer *)appendWithId:(id)obj;

/*!
 @brief Adds the specified string to the end of this buffer.
 <p>
 If the specified string is <code>null</code> the string <code>"null"</code> is
 appended, otherwise the contents of the specified string is appended.
 @param string
 the string to append (may be null).
 @return this StringBuffer.
 */
- (JavaLangStringBuffer *)appendWithNSString:(NSString *)string;

/*!
 @brief Adds the specified StringBuffer to the end of this buffer.
 <p>
 If the specified StringBuffer is <code>null</code> the string <code>"null"</code>
 is appended, otherwise the contents of the specified StringBuffer is
 appended.
 @param sb
 the StringBuffer to append (may be null).
 @return this StringBuffer.
 @since 1.4
 */
- (JavaLangStringBuffer *)appendWithJavaLangStringBuffer:(JavaLangStringBuffer *)sb;

/*!
 @brief Appends the string representation of the specified Unicode code point to
 the end of this buffer.
 <p>
 The code point is converted to a <code>char[]</code> as defined by
 <code>Character.toChars(int)</code>.
 @param codePoint
 the Unicode code point to encode and append.
 @return this StringBuffer.
 @since 1.5
 */
- (JavaLangStringBuffer *)appendCodePointWithInt:(jint)codePoint;

- (jchar)charAtWithInt:(jint)index;

- (jint)codePointAtWithInt:(jint)index;

- (jint)codePointBeforeWithInt:(jint)index;

- (jint)codePointCountWithInt:(jint)beginIndex
                      withInt:(jint)endIndex;

/*!
 @brief Deletes a range of characters.
 @param start
 the offset of the first character.
 @param end
 the offset one past the last character.
 @return this StringBuffer.
 @throws StringIndexOutOfBoundsException
 if <code>start < 0</code>, <code>start > end</code> or <code>end >
 length()</code>
 .
 */
- (JavaLangStringBuffer *)delete__WithInt:(jint)start
                                  withInt:(jint)end;

/*!
 @brief Deletes the character at the specified offset.
 @param location
 the offset of the character to delete.
 @return this StringBuffer.
 @throws StringIndexOutOfBoundsException
 if <code>location < 0</code> or <code>location >= length()</code>
 */
- (JavaLangStringBuffer *)deleteCharAtWithInt:(jint)location;

- (void)ensureCapacityWithInt:(jint)min;

/*!
 @brief Copies the requested sequence of characters to the <code>char[]</code> passed
 starting at <code>idx</code>.
 @param start
 the starting offset of characters to copy.
 @param end
 the ending offset of characters to copy.
 @param buffer
 the destination character array.
 @param idx
 the starting offset in the character array.
 @throws IndexOutOfBoundsException
 if <code>start < 0</code>, <code>end > length()</code>, <code>start >
 end</code>
 , <code>index < 0</code>, <code>end - start > buffer.length -
 index</code>
 */
- (void)getCharsWithInt:(jint)start
                withInt:(jint)end
          withCharArray:(IOSCharArray *)buffer
                withInt:(jint)idx;

- (jint)indexOfWithNSString:(NSString *)subString
                    withInt:(jint)start;

/*!
 @brief Inserts the string representation of the specified boolean into this
 buffer at the specified offset.
 @param index
 the index at which to insert.
 @param b
 the boolean to insert.
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                            withBoolean:(jboolean)b;

/*!
 @brief Inserts the character into this buffer at the specified offset.
 @param index
 the index at which to insert.
 @param ch
 the character to insert.
 @return this buffer.
 @throws ArrayIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                               withChar:(jchar)ch;

/*!
 @brief Inserts the character array into this buffer at the specified offset.
 @param index
 the index at which to insert.
 @param chars
 the character array to insert.
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 @throws NullPointerException
 if <code>chars</code> is <code>null</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                          withCharArray:(IOSCharArray *)chars;

/*!
 @brief Inserts the specified subsequence of characters into this buffer at the
 specified index.
 @param index
 the index at which to insert.
 @param chars
 the character array to insert.
 @param start
 the starting offset.
 @param length
 the number of characters.
 @return this buffer.
 @throws NullPointerException
 if <code>chars</code> is <code>null</code>.
 @throws StringIndexOutOfBoundsException
 if <code>length < 0</code>, <code>start < 0</code>, <code>start +
 length > chars.length</code>
 , <code>index < 0</code> or <code>index >
 length()</code>
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                          withCharArray:(IOSCharArray *)chars
                                withInt:(jint)start
                                withInt:(jint)length;

/*!
 @brief Inserts the specified CharSequence into this buffer at the specified
 index.
 <p>
 If the specified CharSequence is <code>null</code>, the string <code>"null"</code>
 is inserted, otherwise the contents of the CharSequence.
 @param index
 The index at which to insert.
 @param s
 The char sequence to insert.
 @return this buffer.
 @throws IndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 @since 1.5
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
               withJavaLangCharSequence:(id<JavaLangCharSequence>)s;

/*!
 @brief Inserts the specified subsequence into this buffer at the specified
 index.
 <p>
 If the specified CharSequence is <code>null</code>, the string <code>"null"</code>
 is inserted, otherwise the contents of the CharSequence.
 @param index
 The index at which to insert.
 @param s
 The char sequence to insert.
 @param start
 The inclusive start index in the char sequence.
 @param end
 The exclusive end index in the char sequence.
 @return this buffer.
 @throws IndexOutOfBoundsException
 if <code>index</code> is negative or greater than the current
 length, <code>start</code> or <code>end</code> are negative, <code>start</code>
  is greater than <code>end</code> or <code>end</code> is greater
 than the length of <code>s</code>.
 @since 1.5
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
               withJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                withInt:(jint)start
                                withInt:(jint)end;

/*!
 @brief Inserts the string representation of the specified into this buffer
 double at the specified offset.
 @param index
 the index at which to insert.
 @param d
 the double to insert.
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                             withDouble:(jdouble)d;

/*!
 @brief Inserts the string representation of the specified float into this buffer
 at the specified offset.
 @param index
 the index at which to insert.
 @param f
 the float to insert.
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                              withFloat:(jfloat)f;

/*!
 @brief Inserts the string representation of the specified integer into this
 buffer at the specified offset.
 @param index
 the index at which to insert.
 @param i
 the integer to insert.
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                                withInt:(jint)i;

/*!
 @brief Inserts the string representation of the specified long into this buffer
 at the specified offset.
 @param index
 the index at which to insert.
 @param l
 the long to insert.
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                               withLong:(jlong)l;

/*!
 @brief Inserts the string representation of the specified object into this
 buffer at the specified offset.
 <p>
 If the specified object is <code>null</code>, the string <code>"null"</code> is
 inserted, otherwise the objects <code>toString</code> method is used to get
 its string representation.
 @param index
 the index at which to insert.
 @param obj
 the object to insert (may be null).
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                                 withId:(id)obj;

/*!
 @brief Inserts the string into this buffer at the specified offset.
 <p>
 If the specified string is <code>null</code>, the string <code>"null"</code> is
 inserted, otherwise the contents of the string is inserted.
 @param index
 the index at which to insert.
 @param string
 the string to insert (may be null).
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>index < 0</code> or <code>index > length()</code>.
 */
- (JavaLangStringBuffer *)insertWithInt:(jint)index
                           withNSString:(NSString *)string;

- (jint)lastIndexOfWithNSString:(NSString *)subString
                        withInt:(jint)start;

- (jint)length;

- (jint)offsetByCodePointsWithInt:(jint)index
                          withInt:(jint)codePointOffset;

/*!
 @brief Replaces the characters in the specified range with the contents of the
 specified string.
 @param start
 the inclusive begin index.
 @param end
 the exclusive end index.
 @param string
 the string that will replace the contents in the range.
 @return this buffer.
 @throws StringIndexOutOfBoundsException
 if <code>start</code> or <code>end</code> are negative, <code>start</code>
 is greater than <code>end</code> or <code>end</code> is greater than
 the length of <code>s</code>.
 */
- (JavaLangStringBuffer *)replaceWithInt:(jint)start
                                 withInt:(jint)end
                            withNSString:(NSString *)string;

/*!
 @brief Reverses the order of characters in this buffer.
 @return this buffer.
 */
- (JavaLangStringBuffer *)reverse;

- (void)setCharAtWithInt:(jint)index
                withChar:(jchar)ch;

- (void)setLengthWithInt:(jint)length;

- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

- (NSString *)substringWithInt:(jint)start;

- (NSString *)substringWithInt:(jint)start
                       withInt:(jint)end;

- (NSString *)description;

- (void)trimToSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStringBuffer)

FOUNDATION_EXPORT void JavaLangStringBuffer_init(JavaLangStringBuffer *self);

FOUNDATION_EXPORT JavaLangStringBuffer *new_JavaLangStringBuffer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangStringBuffer_initWithInt_(JavaLangStringBuffer *self, jint capacity);

FOUNDATION_EXPORT JavaLangStringBuffer *new_JavaLangStringBuffer_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangStringBuffer_initWithNSString_(JavaLangStringBuffer *self, NSString *string);

FOUNDATION_EXPORT JavaLangStringBuffer *new_JavaLangStringBuffer_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangStringBuffer_initWithJavaLangCharSequence_(JavaLangStringBuffer *self, id<JavaLangCharSequence> cs);

FOUNDATION_EXPORT JavaLangStringBuffer *new_JavaLangStringBuffer_initWithJavaLangCharSequence_(id<JavaLangCharSequence> cs) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStringBuffer)

#endif // _JavaLangStringBuffer_H_
