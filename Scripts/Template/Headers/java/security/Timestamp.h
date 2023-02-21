//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/Timestamp.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityTimestamp")
#ifdef RESTRICT_JavaSecurityTimestamp
#define INCLUDE_ALL_JavaSecurityTimestamp 0
#else
#define INCLUDE_ALL_JavaSecurityTimestamp 1
#endif
#undef RESTRICT_JavaSecurityTimestamp

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityTimestamp_) && (INCLUDE_ALL_JavaSecurityTimestamp || defined(INCLUDE_JavaSecurityTimestamp))
#define JavaSecurityTimestamp_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class JavaSecurityCertCertPath;
@class JavaUtilDate;

/*!
 @brief <code>Timestamp</code> represents a signed time stamp.
 <code>Timestamp</code> is
 immutable.
 */
@interface JavaSecurityTimestamp : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>Timestamp</code> with the specified <code>timestamp</code>
  and the given certificate path.
 @param timestamp
 date and time.
 @param signerCertPath
 the certificate path.
 @throws NullPointerException
 if <code>timestamp</code> is <code>null</code> or if <code>signerCertPath</code>
  is <code>null</code>.
 */
- (instancetype)initWithJavaUtilDate:(JavaUtilDate *)timestamp
        withJavaSecurityCertCertPath:(JavaSecurityCertCertPath *)signerCertPath;

/*!
 @brief Compares the specified object with this <code>Timestamp</code> for equality
 and returns <code>true</code> if the specified object is equal, <code>false</code>
 otherwise.
 The given object is equal to this <code>Timestamp</code>, if it is
 an instance of <code>Timestamp</code>, the two timestamps have an equal date
 and time and their certificate paths are equal.
 @param obj
 object to be compared for equality with this <code>Timestamp</code>
 .
 @return <code>true</code> if the specified object is equal to this <code>Timestamp</code>
 , otherwise <code>false</code>.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the certificate path of this <code>Timestamp</code>.
 @return the certificate path of this <code>Timestamp</code>.
 */
- (JavaSecurityCertCertPath *)getSignerCertPath;

/*!
 @brief Returns the date and time of this <code>Timestamp</code>.
 @return the date and time of this <code>Timestamp</code>.
 */
- (JavaUtilDate *)getTimestamp;

/*!
 @brief Returns the hash code value for this <code>Timestamp</code>.
 Returns the same
 hash code for <code>Timestamp</code>s that are equal to each other as
 required by the general contract of <code>Object.hashCode</code>.
 @return the hash code value for this <code>Timestamp</code>.
 - seealso: Object#equals(Object)
 - seealso: Timestamp#equals(Object)
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string containing a concise, human-readable description of this
 <code>Timestamp</code>.
 @return a printable representation for this <code>Timestamp</code>.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityTimestamp)

FOUNDATION_EXPORT void JavaSecurityTimestamp_initWithJavaUtilDate_withJavaSecurityCertCertPath_(JavaSecurityTimestamp *self, JavaUtilDate *timestamp, JavaSecurityCertCertPath *signerCertPath);

FOUNDATION_EXPORT JavaSecurityTimestamp *new_JavaSecurityTimestamp_initWithJavaUtilDate_withJavaSecurityCertCertPath_(JavaUtilDate *timestamp, JavaSecurityCertCertPath *signerCertPath) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityTimestamp *create_JavaSecurityTimestamp_initWithJavaUtilDate_withJavaSecurityCertCertPath_(JavaUtilDate *timestamp, JavaSecurityCertCertPath *signerCertPath);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityTimestamp)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityTimestamp")