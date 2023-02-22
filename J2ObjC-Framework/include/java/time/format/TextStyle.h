//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/format/TextStyle.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeFormatTextStyle")
#ifdef RESTRICT_JavaTimeFormatTextStyle
#define INCLUDE_ALL_JavaTimeFormatTextStyle 0
#else
#define INCLUDE_ALL_JavaTimeFormatTextStyle 1
#endif
#undef RESTRICT_JavaTimeFormatTextStyle

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeFormatTextStyle_) && (INCLUDE_ALL_JavaTimeFormatTextStyle || defined(INCLUDE_JavaTimeFormatTextStyle))
#define JavaTimeFormatTextStyle_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaTimeFormatTextStyle_Enum) {
  JavaTimeFormatTextStyle_Enum_FULL = 0,
  JavaTimeFormatTextStyle_Enum_FULL_STANDALONE = 1,
  JavaTimeFormatTextStyle_Enum_SHORT = 2,
  JavaTimeFormatTextStyle_Enum_SHORT_STANDALONE = 3,
  JavaTimeFormatTextStyle_Enum_NARROW = 4,
  JavaTimeFormatTextStyle_Enum_NARROW_STANDALONE = 5,
};

/*!
 @brief Enumeration of the style of text formatting and parsing.
 <p>
  Text styles define three sizes for the formatted text - 'full', 'short' and 'narrow'.
  Each of these three sizes is available in both 'standard' and 'stand-alone' variations. 
 <p>
  The difference between the three sizes is obvious in most languages.
  For example, in English the 'full' month is 'January', the 'short' month is 'Jan'
  and the 'narrow' month is 'J'. Note that the narrow size is often not unique.
  For example, 'January', 'June' and 'July' all have the 'narrow' text 'J'. 
 <p>
  The difference between the 'standard' and 'stand-alone' forms is trickier to describe
  as there is no difference in English. However, in other languages there is a difference
  in the word used when the text is used alone, as opposed to in a complete date.
  For example, the word used for a month when used alone in a date picker is different
  to the word used for month in association with a day and year in a date.
 */
@interface JavaTimeFormatTextStyle : JavaLangEnum

@property (readonly, class, nonnull) JavaTimeFormatTextStyle *FULL NS_SWIFT_NAME(FULL);
@property (readonly, class, nonnull) JavaTimeFormatTextStyle *FULL_STANDALONE NS_SWIFT_NAME(FULL_STANDALONE);
@property (readonly, class, nonnull) JavaTimeFormatTextStyle *SHORT NS_SWIFT_NAME(SHORT);
@property (readonly, class, nonnull) JavaTimeFormatTextStyle *SHORT_STANDALONE NS_SWIFT_NAME(SHORT_STANDALONE);
@property (readonly, class, nonnull) JavaTimeFormatTextStyle *NARROW NS_SWIFT_NAME(NARROW);
@property (readonly, class, nonnull) JavaTimeFormatTextStyle *NARROW_STANDALONE NS_SWIFT_NAME(NARROW_STANDALONE);
+ (JavaTimeFormatTextStyle * __nonnull)FULL;

+ (JavaTimeFormatTextStyle * __nonnull)FULL_STANDALONE;

+ (JavaTimeFormatTextStyle * __nonnull)SHORT;

+ (JavaTimeFormatTextStyle * __nonnull)SHORT_STANDALONE;

+ (JavaTimeFormatTextStyle * __nonnull)NARROW;

+ (JavaTimeFormatTextStyle * __nonnull)NARROW_STANDALONE;

#pragma mark Public

/*!
 @brief Returns the normal style with the same size.
 @return the normal style with the same size
 */
- (JavaTimeFormatTextStyle *)asNormal;

/*!
 @brief Returns the stand-alone style with the same size.
 @return the stand-alone style with the same size
 */
- (JavaTimeFormatTextStyle *)asStandalone;

/*!
 @brief Returns true if the Style is a stand-alone style.
 @return true if the style is a stand-alone style.
 */
- (jboolean)isStandalone;

+ (JavaTimeFormatTextStyle *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

/*!
 @brief Returns the <code>Calendar</code> style corresponding to this <code>TextStyle</code>.
 @return the corresponding <code>Calendar</code> style
 */
- (jint)toCalendarStyle;

/*!
 @brief Returns the relative index value to an element of the <code>DateFormatSymbols.getZoneStrings()</code>
  value, 0 for long names and 1 for short names (abbreviations).Note that these values
  do <em>not</em> correspond to the <code>java.util.TimeZone.LONG</code> and <code>java.util.TimeZone.SHORT</code>
  values.
 @return the relative index value to time zone names array
 */
- (jint)zoneNameStyleIndex;

- (JavaTimeFormatTextStyle_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaTimeFormatTextStyle)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_values_[];

/*!
 @brief Full text, typically the full description.
 For example, day-of-week Monday might output "Monday".
 */
inline JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_get_FULL(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatTextStyle, FULL)

/*!
 @brief Full text for stand-alone use, typically the full description.
 For example, day-of-week Monday might output "Monday".
 */
inline JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_get_FULL_STANDALONE(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatTextStyle, FULL_STANDALONE)

/*!
 @brief Short text, typically an abbreviation.
 For example, day-of-week Monday might output "Mon".
 */
inline JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_get_SHORT(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatTextStyle, SHORT)

/*!
 @brief Short text for stand-alone use, typically an abbreviation.
 For example, day-of-week Monday might output "Mon".
 */
inline JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_get_SHORT_STANDALONE(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatTextStyle, SHORT_STANDALONE)

/*!
 @brief Narrow text, typically a single letter.
 For example, day-of-week Monday might output "M".
 */
inline JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_get_NARROW(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatTextStyle, NARROW)

/*!
 @brief Narrow text for stand-alone use, typically a single letter.
 For example, day-of-week Monday might output "M".
 */
inline JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_get_NARROW_STANDALONE(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatTextStyle, NARROW_STANDALONE)

FOUNDATION_EXPORT IOSObjectArray *JavaTimeFormatTextStyle_values(void);

FOUNDATION_EXPORT JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaTimeFormatTextStyle *JavaTimeFormatTextStyle_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeFormatTextStyle)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeFormatTextStyle")
