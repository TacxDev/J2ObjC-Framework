//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/EventObject.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilEventObject")
#ifdef RESTRICT_JavaUtilEventObject
#define INCLUDE_ALL_JavaUtilEventObject 0
#else
#define INCLUDE_ALL_JavaUtilEventObject 1
#endif
#undef RESTRICT_JavaUtilEventObject

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilEventObject_) && (INCLUDE_ALL_JavaUtilEventObject || defined(INCLUDE_JavaUtilEventObject))
#define JavaUtilEventObject_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief <p>
  The root class from which all event state objects shall be derived.
 <p>
  All Events are constructed with a reference to the object, the "source",
  that is logically deemed to be the object upon which the Event in question
  initially occurred upon.
 @since JDK1.1
 */
@interface JavaUtilEventObject : NSObject < JavaIoSerializable > {
 @public
  /*!
   @brief The object on which the Event initially occurred.
   */
  id source_;
}

#pragma mark Public

/*!
 @brief Constructs a prototypical Event.
 @param source The object on which the Event initially occurred.
 @throw IllegalArgumentExceptionif source is null.
 */
- (instancetype __nonnull)initWithId:(id)source;

/*!
 @brief The object on which the Event initially occurred.
 @return The object on which the Event initially occurred.
 */
- (id)getSource;

/*!
 @brief Returns a String representation of this EventObject.
 @return A a String representation of this EventObject.
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEventObject)

J2OBJC_FIELD_SETTER(JavaUtilEventObject, source_, id)

FOUNDATION_EXPORT void JavaUtilEventObject_initWithId_(JavaUtilEventObject *self, id source);

FOUNDATION_EXPORT JavaUtilEventObject *new_JavaUtilEventObject_initWithId_(id source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilEventObject *create_JavaUtilEventObject_initWithId_(id source);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEventObject)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilEventObject")