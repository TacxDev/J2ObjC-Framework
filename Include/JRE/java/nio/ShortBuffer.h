//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/ShortBuffer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioShortBuffer")
#ifdef RESTRICT_JavaNioShortBuffer
#define INCLUDE_ALL_JavaNioShortBuffer 0
#else
#define INCLUDE_ALL_JavaNioShortBuffer 1
#endif
#undef RESTRICT_JavaNioShortBuffer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioShortBuffer_) && (INCLUDE_ALL_JavaNioShortBuffer || defined(INCLUDE_JavaNioShortBuffer))
#define JavaNioShortBuffer_

#define RESTRICT_JavaNioBuffer 1
#define INCLUDE_JavaNioBuffer 1
#include "java/nio/Buffer.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSShortArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangShort;
@class JavaNioByteOrder;

/*!
 @brief A short buffer.
 <p> This class defines four categories of operations upon
  short buffers: 
 <ul>
    <li><p> Absolute and relative <code><i>get</i></code> and
    <code><i>put</i></code> methods that read and write
    single shorts; </p></li>
    <li><p> Relative <code><i>bulk get</i></code>
    methods that transfer contiguous sequences of shorts from this buffer
    into an array; and</p></li>
    <li><p> Relative <code><i>bulk put</i></code>
    methods that transfer contiguous sequences of shorts from a
    short array or some other short
    buffer into this buffer;&#32;and </p></li>
    <li><p> Methods for <code>compacting</code>, <code>duplicating</code>
 , and <code>slicing</code>
    a short buffer.  </p></li>
  
 </ul>
  
 <p> Short buffers can be created either by <code><i>allocation</i></code>
 , which allocates space for the buffer's
  content, by <code><i>wrapping</i></code> an existing
  short array  into a buffer, or by creating a 
 <a href="ByteBuffer.html#views"><i>view</i></a> of an existing byte buffer. 
 <p> Like a byte buffer, a short buffer is either <a href="ByteBuffer.html#direct">
 <i>direct</i> or <i>non-direct</i></a>.  A
  short buffer created via the <tt>wrap</tt> methods of this class will
  be non-direct.  A short buffer created as a view of a byte buffer will
  be direct if, and only if, the byte buffer itself is direct.  Whether or not
  a short buffer is direct may be determined by invoking the <code>isDirect</code>
  method.  </p>
  
 <p> Methods in this class that do not otherwise have a value to return are
  specified to return the buffer upon which they are invoked.  This allows
  method invocations to be chained.
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioShortBuffer : JavaNioBuffer < JavaLangComparable > {
 @public
  IOSShortArray *hb_;
  jint offset_;
  jboolean isReadOnly_;
}

#pragma mark Public

/*!
 @brief Allocates a new short buffer.
 <p> The new buffer's position will be zero, its limit will be its
  capacity, its mark will be undefined, and each of its elements will be
  initialized to zero.  It will have a <code>backing array</code>,
  and its <code>array offset</code> will be zero.
 @param capacity The new buffer's capacity, in shorts
 @return The new short buffer
 @throw IllegalArgumentException
 If the <tt>capacity</tt> is a negative integer
 */
+ (JavaNioShortBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns the short array that backs this
  buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Modifications to this buffer's content will cause the returned
  array's content to be modified, and vice versa. 
 <p> Invoke the <code>hasArray</code> method before invoking this
  method in order to ensure that this buffer has an accessible backing
  array.  </p>
 @return The array that backs this buffer
 @throw ReadOnlyBufferException
 If this buffer is backed by an array but is read-only
 @throw UnsupportedOperationException
 If this buffer is not backed by an accessible array
 */
- (IOSShortArray *)array;

/*!
 @brief Returns the offset within this buffer's backing array of the first
  element of the buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> If this buffer is backed by an array then buffer position <i>p</i>
  corresponds to array index <i>p</i>&nbsp;+&nbsp;<tt>arrayOffset()</tt>.
  
 <p> Invoke the <code>hasArray</code> method before invoking this
  method in order to ensure that this buffer has an accessible backing
  array.  </p>
 @return The offset within this buffer's array
           of the first element of the buffer
 @throw ReadOnlyBufferException
 If this buffer is backed by an array but is read-only
 @throw UnsupportedOperationException
 If this buffer is not backed by an accessible array
 */
- (jint)arrayOffset;

/*!
 @brief Creates a new, read-only short buffer that shares this buffer's
  content.
 <p> The content of the new buffer will be that of this buffer.  Changes
  to this buffer's content will be visible in the new buffer; the new
  buffer itself, however, will be read-only and will not allow the shared
  content to be modified.  The two buffers' position, limit, and mark
  values will be independent. 
 <p> The new buffer's capacity, limit, position, and mark values will be
  identical to those of this buffer. 
 <p> If this buffer is itself read-only then this method behaves in
  exactly the same way as the <code>duplicate</code> method.  </p>
 @return The new, read-only short buffer
 */
- (JavaNioShortBuffer *)asReadOnlyBuffer;

- (JavaNioBuffer *)clear;

/*!
 @brief Compacts this buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> The shorts between the buffer's current position and its limit,
  if any, are copied to the beginning of the buffer.  That is, the
  short at index <i>p</i>&nbsp;=&nbsp;<tt>position()</tt> is copied
  to index zero, the short at index <i>p</i>&nbsp;+&nbsp;1 is copied
  to index one, and so forth until the short at index 
 <tt>limit()</tt>&nbsp;-&nbsp;1 is copied to index 
 <i>n</i>&nbsp;=&nbsp;<tt>limit()</tt>&nbsp;-&nbsp;<tt>1</tt>&nbsp;-&nbsp;<i>p</i>.
  The buffer's position is then set to <i>n+1</i> and its limit is set to
  its capacity.  The mark, if defined, is discarded. 
 <p> The buffer's position is set to the number of shorts copied,
  rather than to zero, so that an invocation of this method can be
  followed immediately by an invocation of another relative <i>put</i>
  method. </p>
 @return This buffer
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioShortBuffer *)compact;

/*!
 @brief Compares this buffer to another.
 <p> Two short buffers are compared by comparing their sequences of
  remaining elements lexicographically, without regard to the starting
  position of each sequence within its corresponding buffer.
  Pairs of <code>short</code> elements are compared as if by invoking 
 <code>Short.compare(short,short)</code>.
  
 <p> A short buffer is not comparable to any other type of object.
 @return A negative integer, zero, or a positive integer as this buffer
           is less than, equal to, or greater than the given buffer
 */
- (jint)compareToWithId:(JavaNioShortBuffer *)that;

/*!
 @brief Creates a new short buffer that shares this buffer's content.
 <p> The content of the new buffer will be that of this buffer.  Changes
  to this buffer's content will be visible in the new buffer, and vice
  versa; the two buffers' position, limit, and mark values will be
  independent. 
 <p> The new buffer's capacity, limit, position, and mark values will be
  identical to those of this buffer.  The new buffer will be direct if,
  and only if, this buffer is direct, and it will be read-only if, and
  only if, this buffer is read-only.  </p>
 @return The new short buffer
 */
- (JavaNioShortBuffer *)duplicate;

/*!
 @brief Tells whether or not this buffer is equal to another object.
 <p> Two short buffers are equal if, and only if, 
 <ol>
    
 <li><p> They have the same element type,  </p></li>
    
 <li><p> They have the same number of remaining elements, and
    </p></li>
    
 <li><p> The two sequences of remaining elements, considered
    independently of their starting positions, are pointwise equal.   
 </p></li>
  
 </ol>
  
 <p> A short buffer is not equal to any other type of object.  </p>
 @param ob The object to which this buffer is to be compared
 @return <tt>true</tt> if, and only if, this buffer is equal to the
            given object
 */
- (jboolean)isEqual:(id)ob;

- (JavaNioBuffer *)flip;

/*!
 @brief Relative <i>get</i> method.Reads the short at this buffer's
  current position, and then increments the position.
 @return The short at the buffer's current position
 @throw BufferUnderflowException
 If the buffer's current position is not smaller than its limit
 */
- (jshort)get;

/*!
 @brief Absolute <i>get</i> method.Reads the short at the given
  index.
 @param index The index from which the short will be read
 @return The short at the given index
 @throw IndexOutOfBoundsException
 If <tt>index</tt> is negative
           or not smaller than the buffer's limit
 */
- (jshort)getWithInt:(jint)index;

/*!
 @brief Relative bulk <i>get</i> method.
 <p> This method transfers shorts from this buffer into the given
  destination array.  An invocation of this method of the form 
 <tt>src.get(a)</tt> behaves in exactly the same way as the invocation 
 @code

      src.get(a, 0, a.length) 
@endcode
 @param dst The destination array
 @return This buffer
 @throw BufferUnderflowException
 If there are fewer than <tt>length</tt> shorts
           remaining in this buffer
 */
- (JavaNioShortBuffer *)getWithShortArray:(IOSShortArray *)dst;

/*!
 @brief Relative bulk <i>get</i> method.
 <p> This method transfers shorts from this buffer into the given
  destination array.  If there are fewer shorts remaining in the
  buffer than are required to satisfy the request, that is, if 
 <tt>length</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>, then no
  shorts are transferred and a <code>BufferUnderflowException</code> is
  thrown. 
 <p> Otherwise, this method copies <tt>length</tt> shorts from this
  buffer into the given array, starting at the current position of this
  buffer and at the given offset in the array.  The position of this
  buffer is then incremented by <tt>length</tt>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>src.get(dst,&nbsp;off,&nbsp;len)</tt> has exactly the same effect as
  the loop 
 @code
     for (int i = off; i < off + len; i++)
          dst[i] = src.get(); 
 
@endcode
  except that it first checks that there are sufficient shorts in
  this buffer and it is potentially much more efficient.
 @param dst The array into which shorts are to be written
 @param offset The offset within the array of the first short to be
           written; must be non-negative and no larger than
            <tt> dst.length
  </tt>
 @param length The maximum number of shorts to be written to the given
           array; must be non-negative and no larger than
            <tt> dst.length - offset
  </tt>
 @return This buffer
 @throw BufferUnderflowException
 If there are fewer than <tt>length</tt> shorts
           remaining in this buffer
 @throw IndexOutOfBoundsException
 If the preconditions on the <tt>offset</tt> and <tt>length</tt>
           parameters do not hold
 */
- (JavaNioShortBuffer *)getWithShortArray:(IOSShortArray *)dst
                                  withInt:(jint)offset
                                  withInt:(jint)length;

/*!
 @brief Tells whether or not this buffer is backed by an accessible short
  array.
 <p> If this method returns <tt>true</tt> then the <code>array</code>
  and <code>arrayOffset</code> methods may safely be invoked. 
 </p>
 @return <tt>true</tt> if, and only if, this buffer
           is backed by an array and is not read-only
 */
- (jboolean)hasArray;

/*!
 @brief Returns the current hash code of this buffer.
 <p> The hash code of a short buffer depends only upon its remaining
  elements; that is, upon the elements from <tt>position()</tt> up to, and
  including, the element at <tt>limit()</tt>&nbsp;-&nbsp;<tt>1</tt>.
  
 <p> Because buffer hash codes are content-dependent, it is inadvisable
  to use buffers as keys in hash maps or similar data structures unless it
  is known that their contents will not change.  </p>
 @return The current hash code of this buffer
 */
- (NSUInteger)hash;

/*!
 @brief Tells whether or not this short buffer is direct.
 @return <tt>true</tt> if, and only if, this buffer is direct
 */
- (jboolean)isDirect;

- (JavaNioBuffer *)limitWithInt:(jint)newLimit;

- (JavaNioBuffer *)mark;

/*!
 @brief Retrieves this buffer's byte order.
 <p> The byte order of a short buffer created by allocation or by
  wrapping an existing <tt>short</tt> array is the <code>native order</code>
  of the underlying
  hardware.  The byte order of a short buffer created as a <a href="ByteBuffer.html#views">
 view</a> of a byte buffer is that of the
  byte buffer at the moment that the view is created.  </p>
 @return This buffer's byte order
 */
- (JavaNioByteOrder *)order;

- (JavaNioBuffer *)positionWithInt:(jint)newPosition;

/*!
 @brief Absolute <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Writes the given short into this buffer at the given
  index. </p>
 @param index The index at which the short will be written
 @param s The short value to be written
 @return This buffer
 @throw IndexOutOfBoundsException
 If <tt>index</tt> is negative
           or not smaller than the buffer's limit
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioShortBuffer *)putWithInt:(jint)index
                         withShort:(jshort)s;

/*!
 @brief Relative <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Writes the given short into this buffer at the current
  position, and then increments the position. </p>
 @param s The short to be written
 @return This buffer
 @throw BufferOverflowException
 If this buffer's current position is not smaller than its limit
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioShortBuffer *)putWithShort:(jshort)s;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers the entire content of the given source
  short array into this buffer.  An invocation of this method of the
  form <tt>dst.put(a)</tt> behaves in exactly the same way as the
  invocation 
 @code

      dst.put(a, 0, a.length) 
@endcode
 @param src The source array
 @return This buffer
 @throw BufferOverflowException
 If there is insufficient space in this buffer
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioShortBuffer *)putWithShortArray:(IOSShortArray *)src;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers shorts into this buffer from the given
  source array.  If there are more shorts to be copied from the array
  than remain in this buffer, that is, if 
 <tt>length</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>, then no
  shorts are transferred and a <code>BufferOverflowException</code> is
  thrown. 
 <p> Otherwise, this method copies <tt>length</tt> shorts from the
  given array into this buffer, starting at the given offset in the array
  and at the current position of this buffer.  The position of this buffer
  is then incremented by <tt>length</tt>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>dst.put(src,&nbsp;off,&nbsp;len)</tt> has exactly the same effect as
  the loop 
 @code
     for (int i = off; i < off + len; i++)
          dst.put(a[i]); 
 
@endcode
  except that it first checks that there is sufficient space in this
  buffer and it is potentially much more efficient.
 @param src The array from which shorts are to be read
 @param offset The offset within the array of the first short to be read;
           must be non-negative and no larger than 
  <tt> array.length </tt>
 @param length The number of shorts to be read from the given array;
           must be non-negative and no larger than
            <tt> array.length - offset
  </tt>
 @return This buffer
 @throw BufferOverflowException
 If there is insufficient space in this buffer
 @throw IndexOutOfBoundsException
 If the preconditions on the <tt>offset</tt> and <tt>length</tt>
           parameters do not hold
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioShortBuffer *)putWithShortArray:(IOSShortArray *)src
                                  withInt:(jint)offset
                                  withInt:(jint)length;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers the shorts remaining in the given source
  buffer into this buffer.  If there are more shorts remaining in the
  source buffer than in this buffer, that is, if 
 <tt>src.remaining()</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>,
  then no shorts are transferred and a <code>BufferOverflowException</code>
  is thrown. 
 <p> Otherwise, this method copies 
 <i>n</i>&nbsp;=&nbsp;<tt>src.remaining()</tt> shorts from the given
  buffer into this buffer, starting at each buffer's current position.
  The positions of both buffers are then incremented by <i>n</i>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>dst.put(src)</tt> has exactly the same effect as the loop 
 @code

      while (src.hasRemaining())
          dst.put(src.get()); 
@endcode
  except that it first checks that there is sufficient space in this
  buffer and it is potentially much more efficient.
 @param src The source buffer from which shorts are to be read;
           must not be this buffer
 @return This buffer
 @throw BufferOverflowException
 If there is insufficient space in this buffer
           for the remaining shorts in the source buffer
 @throw IllegalArgumentException
 If the source buffer is this buffer
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioShortBuffer *)putWithJavaNioShortBuffer:(JavaNioShortBuffer *)src;

- (JavaNioBuffer *)reset;

- (JavaNioBuffer *)rewind;

/*!
 @brief Creates a new short buffer whose content is a shared subsequence of
  this buffer's content.
 <p> The content of the new buffer will start at this buffer's current
  position.  Changes to this buffer's content will be visible in the new
  buffer, and vice versa; the two buffers' position, limit, and mark
  values will be independent. 
 <p> The new buffer's position will be zero, its capacity and its limit
  will be the number of shorts remaining in this buffer, and its mark
  will be undefined.  The new buffer will be direct if, and only if, this
  buffer is direct, and it will be read-only if, and only if, this buffer
  is read-only.  </p>
 @return The new short buffer
 */
- (JavaNioShortBuffer *)slice;

/*!
 @brief Returns a string summarizing the state of this buffer.
 @return A summary string
 */
- (NSString *)description;

/*!
 @brief Wraps a short array into a buffer.
 <p> The new buffer will be backed by the given short array;
  that is, modifications to the buffer will cause the array to be modified
  and vice versa.  The new buffer's capacity and limit will be 
 <tt>array.length</tt>, its position will be zero, and its mark will be
  undefined.  Its <code>backing array</code> will be the
  given array, and its <code>array offset></code> will
  be zero.  </p>
 @param array The array that will back this buffer
 @return The new short buffer
 */
+ (JavaNioShortBuffer *)wrapWithShortArray:(IOSShortArray *)array;

/*!
 @brief Wraps a short array into a buffer.
 <p> The new buffer will be backed by the given short array;
  that is, modifications to the buffer will cause the array to be modified
  and vice versa.  The new buffer's capacity will be 
 <tt>array.length</tt>, its position will be <tt>offset</tt>, its limit
  will be <tt>offset + length</tt>, and its mark will be undefined.  Its 
 <code>backing array</code> will be the given array, and
  its <code>array offset</code> will be zero.  </p>
 @param array The array that will back the new buffer
 @param offset The offset of the subarray to be used; must be non-negative and
           no larger than 
  <tt> array.length </tt> .  The new buffer's position          will be set to this value.
 @param length The length of the subarray to be used;
           must be non-negative and no larger than
            <tt> array.length - offset
  </tt> .          The new buffer's limit will be set to 
  <tt> offset + length </tt> .
 @return The new short buffer
 @throw IndexOutOfBoundsException
 If the preconditions on the <tt>offset</tt> and <tt>length</tt>
           parameters do not hold
 */
+ (JavaNioShortBuffer *)wrapWithShortArray:(IOSShortArray *)array
                                   withInt:(jint)offset
                                   withInt:(jint)length;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)mark
                              withInt:(jint)pos
                              withInt:(jint)lim
                              withInt:(jint)cap;

- (instancetype __nonnull)initWithInt:(jint)mark
                              withInt:(jint)pos
                              withInt:(jint)lim
                              withInt:(jint)cap
                       withShortArray:(IOSShortArray *)hb
                              withInt:(jint)offset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0
                              withInt:(jint)arg1
                              withInt:(jint)arg2
                              withInt:(jint)arg3
                              withInt:(jint)arg4 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioShortBuffer)

J2OBJC_FIELD_SETTER(JavaNioShortBuffer, hb_, IOSShortArray *)

FOUNDATION_EXPORT void JavaNioShortBuffer_initWithInt_withInt_withInt_withInt_withShortArray_withInt_(JavaNioShortBuffer *self, jint mark, jint pos, jint lim, jint cap, IOSShortArray *hb, jint offset);

FOUNDATION_EXPORT void JavaNioShortBuffer_initWithInt_withInt_withInt_withInt_(JavaNioShortBuffer *self, jint mark, jint pos, jint lim, jint cap);

FOUNDATION_EXPORT JavaNioShortBuffer *JavaNioShortBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioShortBuffer *JavaNioShortBuffer_wrapWithShortArray_withInt_withInt_(IOSShortArray *array, jint offset, jint length);

FOUNDATION_EXPORT JavaNioShortBuffer *JavaNioShortBuffer_wrapWithShortArray_(IOSShortArray *array);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioShortBuffer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioShortBuffer")
