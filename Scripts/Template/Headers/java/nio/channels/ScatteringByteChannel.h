//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ScatteringByteChannel.java
//

#ifndef _JavaNioChannelsScatteringByteChannel_H_
#define _JavaNioChannelsScatteringByteChannel_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/nio/channels/ReadableByteChannel.h"

@class IOSObjectArray;

/*!
 @brief The interface for channels that can read data into a set of buffers in a
 single operation.
 The corresponding interface for writes is
 <code>GatheringByteChannel</code>.
 */
@protocol JavaNioChannelsScatteringByteChannel < JavaNioChannelsReadableByteChannel, NSObject, JavaObject >

/*!
 @brief Reads bytes from this channel into the specified array of buffers.
 <p>
 This method is equivalent to <code>read(buffers, 0, buffers.length);</code>
 @param buffers
 the array of byte buffers to store the bytes being read.
 @return the number of bytes actually read.
 @throws AsynchronousCloseException
 if the channel is closed by another thread during this read
 operation.
 @throws ClosedByInterruptException
 if another thread interrupts the calling thread while the
 operation is in progress. The interrupt state of the calling
 thread is set and the channel is closed.
 @throws ClosedChannelException
 if the channel is closed.
 @throws IOException
 if another I/O error occurs; details are in the message.
 @throws NonWritableChannelException
 if the channel has not been opened in a mode that permits
 reading.
 */
- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)buffers;

/*!
 @brief Attempts to read all <code>remaining()</code> bytes from <code>length</code> byte
 buffers, in order, starting at <code>buffers[offset]</code>.
 The number of
 bytes actually read is returned.
 <p>
 If a read operation is in progress, subsequent threads will block until
 the read is completed and will then contend for the ability to read.
 @param buffers
 the array of byte buffers into which the bytes will be copied.
 @param offset
 the index of the first buffer to store bytes in.
 @param length
 the maximum number of buffers to store bytes in.
 @return the number of bytes actually read.
 @throws AsynchronousCloseException
 if the channel is closed by another thread during this read
 operation.
 @throws ClosedByInterruptException
 if another thread interrupts the calling thread while the
 operation is in progress. The interrupt state of the calling
 thread is set and the channel is closed.
 @throws ClosedChannelException
 if the channel is closed.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>length < 0</code>, or if
 <code>offset + length</code> is greater than the size of
 <code>buffers</code>.
 @throws IOException
 if another I/O error occurs; details are in the message.
 @throws NonWritableChannelException
 if the channel has not been opened in a mode that permits
 reading.
 */
- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)buffers
                                withInt:(jint)offset
                                withInt:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsScatteringByteChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsScatteringByteChannel)

#endif // _JavaNioChannelsScatteringByteChannel_H_
