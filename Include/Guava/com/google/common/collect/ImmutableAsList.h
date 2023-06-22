//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/ImmutableAsList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableAsList
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableAsList

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableAsList_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList || defined(INCLUDE_ComGoogleCommonCollectImmutableAsList))
#define ComGoogleCommonCollectImmutableAsList_

#define RESTRICT_ComGoogleCommonCollectImmutableList 1
#define INCLUDE_ComGoogleCommonCollectImmutableList 1
#include "com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectImmutableCollection;
@class JavaLangBoolean;
@class JavaLangInteger;

@interface ComGoogleCommonCollectImmutableAsList : ComGoogleCommonCollectImmutableList

#pragma mark Public

- (jboolean)containsWithId:(id)target;

- (jboolean)isEmpty;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (jboolean)isPartialView;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableAsList)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableAsList_initPackagePrivate(ComGoogleCommonCollectImmutableAsList *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableAsList)

#endif

#if !defined (ComGoogleCommonCollectImmutableAsList_SerializedForm_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList || defined(INCLUDE_ComGoogleCommonCollectImmutableAsList_SerializedForm))
#define ComGoogleCommonCollectImmutableAsList_SerializedForm_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableCollection;

@interface ComGoogleCommonCollectImmutableAsList_SerializedForm : NSObject < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableCollection *collection_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection *)collection;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableAsList_SerializedForm)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableAsList_SerializedForm, collection_, ComGoogleCommonCollectImmutableCollection *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableAsList_SerializedForm_initWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableAsList_SerializedForm *self, ComGoogleCommonCollectImmutableCollection *collection);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableAsList_SerializedForm *new_ComGoogleCommonCollectImmutableAsList_SerializedForm_initWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableCollection *collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableAsList_SerializedForm *create_ComGoogleCommonCollectImmutableAsList_SerializedForm_initWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableCollection *collection);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableAsList_SerializedForm)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList")
