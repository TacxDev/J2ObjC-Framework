//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/json/src/main/java/org/json/JSONArray.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJsonJSONArray")
#ifdef RESTRICT_OrgJsonJSONArray
#define INCLUDE_ALL_OrgJsonJSONArray 0
#else
#define INCLUDE_ALL_OrgJsonJSONArray 1
#endif
#undef RESTRICT_OrgJsonJSONArray

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJsonJSONArray_) && (INCLUDE_ALL_OrgJsonJSONArray || defined(INCLUDE_OrgJsonJSONArray))
#define OrgJsonJSONArray_

@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgJsonJSONObject;
@class OrgJsonJSONStringer;
@class OrgJsonJSONTokener;
@protocol JavaUtilCollection;

/*!
 @brief A dense indexed sequence of values.Values may be any mix of 
 <code>JSONObjects</code>, other <code>JSONArrays</code>, Strings,
  Booleans, Integers, Longs, Doubles, <code>null</code> or <code>JSONObject.NULL</code>.
 Values may not be <code>NaNs</code>, <code>infinities</code>
 , or of any type not listed here. 
 <p><code>JSONArray</code> has the same type coercion behavior and
  optional/mandatory accessors as <code>JSONObject</code>. See that class'
  documentation for details. 
 <p><strong>Warning:</strong> this class represents null in two incompatible
  ways: the standard Java <code>null</code> reference, and the sentinel value <code>JSONObject.NULL</code>
 . In particular, <code>get</code> fails if the requested index
  holds the null reference, but succeeds if it holds <code>JSONObject.NULL</code>.
  
 <p>Instances of this class are not thread safe. Although this class is
  nonfinal, it was not designed for inheritance and should not be subclassed.
  In particular, self-use by overridable methods is not specified. See 
 <i>Effective Java</i> Item 17, "Design and Document or inheritance or else
  prohibit it" for further information.
 */
@interface OrgJsonJSONArray : NSObject

#pragma mark Public

/*!
 @brief Creates a <code>JSONArray</code> with no values.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new <code>JSONArray</code> by copying all values from the given
  collection.
 @param copyFrom a collection whose values are of supported types.      Unsupported values are not permitted and will yield an array in an
       inconsistent state.
 */
- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)copyFrom;

/*!
 @brief Creates a new <code>JSONArray</code> with values from the next array in the
  tokener.
 @param readFrom a tokener whose nextValue() method will yield a      
 <code>JSONArray</code> .
 @throw JSONExceptionif the parse fails or doesn't yield a
      <code>JSONArray</code>.
 */
- (instancetype __nonnull)initWithOrgJsonJSONTokener:(OrgJsonJSONTokener *)readFrom;

/*!
 @brief Creates a new <code>JSONArray</code> with values from the given primitive array.
 */
- (instancetype __nonnull)initWithId:(id)array;

/*!
 @brief Creates a new <code>JSONArray</code> with values from the JSON string.
 @param json a JSON-encoded string containing an array.
 @throw JSONExceptionif the parse fails or doesn't yield a <code>JSONArray</code>
 .
 */
- (instancetype __nonnull)initWithNSString:(NSString *)json;

- (jboolean)isEqual:(id)o;

/*!
 @brief Returns the value at <code>index</code>.
 @throw JSONExceptionif this array has no value at <code>index</code>, or if
      that value is the <code>null</code> reference. This method returns
      normally if the value is <code>JSONObject#NULL</code>.
 */
- (id)getWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a boolean or can
  be coerced to a boolean.
 @throw JSONExceptionif the value at <code>index</code> doesn't exist or
      cannot be coerced to a boolean.
 */
- (jboolean)getBooleanWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a double or can
  be coerced to a double.
 @throw JSONExceptionif the value at <code>index</code> doesn't exist or
      cannot be coerced to a double.
 */
- (jdouble)getDoubleWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is an int or
  can be coerced to an int.
 @throw JSONExceptionif the value at <code>index</code> doesn't exist or
      cannot be coerced to a int.
 */
- (jint)getIntWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a <code>JSONArray</code>
 .
 @throw JSONExceptionif the value doesn't exist or is not a <code>JSONArray</code>
 .
 */
- (OrgJsonJSONArray *)getJSONArrayWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a <code>JSONObject</code>
 .
 @throw JSONExceptionif the value doesn't exist or is not a <code>JSONObject</code>
 .
 */
- (OrgJsonJSONObject *)getJSONObjectWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a long or
  can be coerced to a long.
 @throw JSONExceptionif the value at <code>index</code> doesn't exist or
      cannot be coerced to a long.
 */
- (jlong)getLongWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists, coercing it if
  necessary.
 @throw JSONExceptionif no such value exists.
 */
- (NSString *)getStringWithInt:(jint)index;

- (NSUInteger)hash;

/*!
 @brief Returns true if this array has no value at <code>index</code>, or if its value
  is the <code>null</code> reference or <code>JSONObject.NULL</code>.
 */
- (jboolean)isNullWithInt:(jint)index;

/*!
 @brief Returns a new string by alternating this array's values with <code>separator</code>
 .This array's string values are quoted and have their special
  characters escaped.
 For example, the array containing the strings '12"
  pizza', 'taco' and 'soda' joined on '+' returns this: 
 @code
"12\" pizza"+"taco"+"soda"
@endcode
 */
- (NSString *)joinWithNSString:(NSString *)separator;

/*!
 @brief Returns the number of values in this array.
 */
- (jint)length;

/*!
 @brief Returns the value at <code>index</code>, or null if the array has no value
  at <code>index</code>.
 */
- (id)optWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a boolean or can
  be coerced to a boolean.Returns false otherwise.
 */
- (jboolean)optBooleanWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a boolean or can
  be coerced to a boolean.Returns <code>fallback</code> otherwise.
 */
- (jboolean)optBooleanWithInt:(jint)index
                  withBoolean:(jboolean)fallback;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a double or can
  be coerced to a double.Returns <code>NaN</code> otherwise.
 */
- (jdouble)optDoubleWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a double or can
  be coerced to a double.Returns <code>fallback</code> otherwise.
 */
- (jdouble)optDoubleWithInt:(jint)index
                 withDouble:(jdouble)fallback;

/*!
 @brief Returns the value at <code>index</code> if it exists and is an int or
  can be coerced to an int.Returns 0 otherwise.
 */
- (jint)optIntWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is an int or
  can be coerced to an int.Returns <code>fallback</code> otherwise.
 */
- (jint)optIntWithInt:(jint)index
              withInt:(jint)fallback;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a <code>JSONArray</code>
 .Returns null otherwise.
 */
- (OrgJsonJSONArray *)optJSONArrayWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a <code>JSONObject</code>
 .Returns null otherwise.
 */
- (OrgJsonJSONObject *)optJSONObjectWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a long or
  can be coerced to a long.Returns 0 otherwise.
 */
- (jlong)optLongWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists and is a long or
  can be coerced to a long.Returns <code>fallback</code> otherwise.
 */
- (jlong)optLongWithInt:(jint)index
               withLong:(jlong)fallback;

/*!
 @brief Returns the value at <code>index</code> if it exists, coercing it if
  necessary.Returns the empty string if no such value exists.
 */
- (NSString *)optStringWithInt:(jint)index;

/*!
 @brief Returns the value at <code>index</code> if it exists, coercing it if
  necessary.Returns <code>fallback</code> if no such value exists.
 */
- (NSString *)optStringWithInt:(jint)index
                  withNSString:(NSString *)fallback;

/*!
 @brief Appends <code>value</code> to the end of this array.
 @return this array.
 */
- (OrgJsonJSONArray *)putWithBoolean:(jboolean)value;

/*!
 @brief Appends <code>value</code> to the end of this array.
 @param value a finite value. May not be <code>NaNs</code>  or
       <code>infinities</code> .
 @return this array.
 */
- (OrgJsonJSONArray *)putWithDouble:(jdouble)value;

/*!
 @brief Appends <code>value</code> to the end of this array.
 @return this array.
 */
- (OrgJsonJSONArray *)putWithInt:(jint)value;

/*!
 @brief Sets the value at <code>index</code> to <code>value</code>, null padding this array
  to the required length if necessary.If a value already exists at <code>index</code>
 , it will be replaced.
 @return this array.
 */
- (OrgJsonJSONArray *)putWithInt:(jint)index
                     withBoolean:(jboolean)value;

/*!
 @brief Sets the value at <code>index</code> to <code>value</code>, null padding this array
  to the required length if necessary.If a value already exists at <code>index</code>
 , it will be replaced.
 @param value a finite value. May not be <code>NaNs</code>  or
       <code>infinities</code> .
 @return this array.
 */
- (OrgJsonJSONArray *)putWithInt:(jint)index
                      withDouble:(jdouble)value;

/*!
 @brief Sets the value at <code>index</code> to <code>value</code>, null padding this array
  to the required length if necessary.If a value already exists at <code>index</code>
 , it will be replaced.
 @return this array.
 */
- (OrgJsonJSONArray *)putWithInt:(jint)index
                         withInt:(jint)value;

/*!
 @brief Sets the value at <code>index</code> to <code>value</code>, null padding this array
  to the required length if necessary.If a value already exists at <code>index</code>
 , it will be replaced.
 @return this array.
 */
- (OrgJsonJSONArray *)putWithInt:(jint)index
                        withLong:(jlong)value;

/*!
 @brief Sets the value at <code>index</code> to <code>value</code>, null padding this array
  to the required length if necessary.If a value already exists at <code>index</code>
 , it will be replaced.
 @param value a <code>JSONObject</code> , <code>JSONArray</code> , String, Boolean,
       Integer, Long, Double, <code>JSONObject.NULL</code> , or <code>null</code> . May      not be 
 <code>NaNs</code>  or <code>infinities</code>
  .
 @return this array.
 */
- (OrgJsonJSONArray *)putWithInt:(jint)index
                          withId:(id)value;

/*!
 @brief Appends <code>value</code> to the end of this array.
 @return this array.
 */
- (OrgJsonJSONArray *)putWithLong:(jlong)value;

/*!
 @brief Appends <code>value</code> to the end of this array.
 @param value a <code>JSONObject</code> , <code>JSONArray</code> , String, Boolean,
       Integer, Long, Double, <code>JSONObject.NULL</code> , or <code>null</code> . May      not be 
 <code>NaNs</code>  or <code>infinities</code>
  . Unsupported values are not permitted and will cause the      array to be in an inconsistent state.
 @return this array.
 */
- (OrgJsonJSONArray *)putWithId:(id)value;

/*!
 @brief Removes and returns the value at <code>index</code>, or null if the array has no value
  at <code>index</code>.
 */
- (id)removeWithInt:(jint)index;

/*!
 @brief Returns a new object whose values are the values in this array, and whose
  names are the values in <code>names</code>.Names and values are paired up by
  index from 0 through to the shorter array's length.
 Names that are not
  strings will be coerced to strings. This method returns null if either
  array is empty.
 */
- (OrgJsonJSONObject *)toJSONObjectWithOrgJsonJSONArray:(OrgJsonJSONArray *)names;

/*!
 @brief Encodes this array as a compact JSON string, such as:
 @code
[94043,90210]
@endcode
 */
- (NSString *)description;

/*!
 @brief Encodes this array as a human readable JSON string for debugging, such
  as:
 @code

  [
      94043,
      90210
  ]
@endcode
 @param indentSpaces the number of spaces to indent for each level of      nesting.
 */
- (NSString *)toStringWithInt:(jint)indentSpaces;

#pragma mark Package-Private

/*!
 @brief Same as <code>put</code>, with added validity checks.
 */
- (void)checkedPutWithId:(id)value;

- (void)writeToWithOrgJsonJSONStringer:(OrgJsonJSONStringer *)stringer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJsonJSONArray)

FOUNDATION_EXPORT void OrgJsonJSONArray_init(OrgJsonJSONArray *self);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_init(void);

FOUNDATION_EXPORT void OrgJsonJSONArray_initWithJavaUtilCollection_(OrgJsonJSONArray *self, id<JavaUtilCollection> copyFrom);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_initWithJavaUtilCollection_(id<JavaUtilCollection> copyFrom) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_initWithJavaUtilCollection_(id<JavaUtilCollection> copyFrom);

FOUNDATION_EXPORT void OrgJsonJSONArray_initWithOrgJsonJSONTokener_(OrgJsonJSONArray *self, OrgJsonJSONTokener *readFrom);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_initWithOrgJsonJSONTokener_(OrgJsonJSONTokener *readFrom) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_initWithOrgJsonJSONTokener_(OrgJsonJSONTokener *readFrom);

FOUNDATION_EXPORT void OrgJsonJSONArray_initWithNSString_(OrgJsonJSONArray *self, NSString *json);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_initWithNSString_(NSString *json) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_initWithNSString_(NSString *json);

FOUNDATION_EXPORT void OrgJsonJSONArray_initWithId_(OrgJsonJSONArray *self, id array);

FOUNDATION_EXPORT OrgJsonJSONArray *new_OrgJsonJSONArray_initWithId_(id array) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONArray *create_OrgJsonJSONArray_initWithId_(id array);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsonJSONArray)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgJsonJSONArray")
