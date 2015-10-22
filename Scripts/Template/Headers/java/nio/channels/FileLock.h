//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/FileLock.java
//

#ifndef _JavaNioChannelsFileLock_H_
#define _JavaNioChannelsFileLock_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/lang/AutoCloseable.h"

@class JavaNioChannelsFileChannel;

/*!
 @brief A <code>FileLock</code> represents a locked region of a file.
 <p>
 Locks have certain properties that enable collaborating processes to avoid
 the lost update problem or reading inconsistent data. Logically, a file lock
 can be <em>exclusive</em> or <em>shared</em>. Multiple processes can hold
 shared locks on the same region of a file, but only a single process can hold
 an exclusive lock on a given region of a file and no other process can
 simultaneously hold a shared lock overlapping the exclusive lock. An
 application can determine whether a <code>FileLock</code> is shared or exclusive
 via the <code>isShared()</code> method.
 <p>
 Locks held by a particular process cannot overlap one another. Applications
 can determine whether a proposed lock will overlap by using the <code>overlaps(long, long)</code>
 ) method. Locks held in other processes may overlap
 locks held in this process. Locks are shared amongst all threads in the
 acquiring process, and are therefore unsuitable for intra-process
 synchronization.
 <p>
 Once a lock is acquired, it is immutable in all its state except <code>isValid()</code>
 . The lock will initially be valid, but may be rendered invalid by
 explicit removal of the lock, using <code>release()</code>, or implicitly by
 closing the channel or exiting the process (terminating the VM).
 <h3>Platform dependencies</h3>
 <p>
 Locks are intended to be true platform operating system file locks, and
 therefore locks held by the VM will be visible to other
 operating system processes.
 <p>
 The characteristics of the underlying operating system locks will show
 through in the Java implementation. For example, some platforms' locks are
 'mandatory' -- meaning the operating system enforces the locks on processes
 that attempt to access locked regions of files; whereas other platforms'
 locks are only 'advisory' -- meaning that processes are required to
 collaborate to ensure locks are acquired and there is a potential for
 processes to not play well. To be on the safe side, it is best to assume that
 the platform is adopting advisory locks and always acquire shared locks when
 reading a region of a file.
 <p>
 On some platforms, the presence of a lock will prevent the file from being
 memory-mapped. On some platforms, closing a channel on a given file handle
 will release all the locks held on that file -- even if there are other
 channels open on the same file; their locks will also be released. The safe
 option here is to ensure that you only acquire locks on a single channel for
 a particular file and that becomes the synchronization point.
 <p>
 Further care should be exercised when locking files maintained on network
 file systems, since they often have further limitations.
 */
@interface JavaNioChannelsFileLock : NSObject < JavaLangAutoCloseable >

#pragma mark Public

/*!
 @brief Returns the lock's <code>FileChannel</code>.
 @return the channel.
 */
- (JavaNioChannelsFileChannel *)channel;

/*!
 @brief Calls <code>release</code> for <code>AutoCloseable</code>.
 @since 1.7
 */
- (void)close;

/*!
 @brief Indicates if the file lock is shared with other processes or if it is
 exclusive.
 @return <code>true</code> if the lock is a shared lock, <code>false</code> if it is
 exclusive.
 */
- (jboolean)isShared;

/*!
 @brief Indicates whether this lock is a valid file lock.
 The lock is
 valid unless the underlying channel has been closed or it has been
 explicitly released.
 @return <code>true</code> if the lock is valid, <code>false</code> otherwise.
 */
- (jboolean)isValid;

/*!
 @brief Indicates if the receiver's lock region overlaps the region described
 in the parameter list.
 @param start
 the starting position for the comparative lock.
 @param length
 the length of the comparative lock.
 @return <code>true</code> if there is an overlap, <code>false</code> otherwise.
 */
- (jboolean)overlapsWithLong:(jlong)start
                    withLong:(jlong)length;

/*!
 @brief Returns the lock's starting position in the file.
 @return the lock position.
 */
- (jlong)position;

/*!
 @brief Releases this particular lock on the file.
 If the lock is invalid then
 this method has no effect. Once released, the lock becomes invalid.
 @throws ClosedChannelException
 if the channel is already closed when an attempt to release
 the lock is made.
 @throws IOException
 if another I/O error occurs.
 */
- (void)release__;

/*!
 @brief Returns the length of the file lock in bytes.
 @return the size of the file lock in bytes.
 */
- (jlong)size;

/*!
 @brief Returns a string that shows the details of the lock suitable for debugging.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Constructs a new file lock instance for a given channel.
 The constructor
 enforces the starting position, length and sharing mode of the lock.
 @param channel
 the underlying file channel that holds the lock.
 @param position
 the starting point for the lock.
 @param size
 the length of the lock in number of bytes.
 @param shared
 the lock's sharing mode of lock; <code>true</code> is shared,
 <code>false</code> is exclusive.
 */
- (instancetype)initWithJavaNioChannelsFileChannel:(JavaNioChannelsFileChannel *)channel
                                          withLong:(jlong)position
                                          withLong:(jlong)size
                                       withBoolean:(jboolean)shared;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsFileLock)

FOUNDATION_EXPORT void JavaNioChannelsFileLock_initWithJavaNioChannelsFileChannel_withLong_withLong_withBoolean_(JavaNioChannelsFileLock *self, JavaNioChannelsFileChannel *channel, jlong position, jlong size, jboolean shared);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsFileLock)

#endif // _JavaNioChannelsFileLock_H_
