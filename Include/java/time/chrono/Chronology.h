//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/chrono/Chronology.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeChronoChronology")
#ifdef RESTRICT_JavaTimeChronoChronology
#define INCLUDE_ALL_JavaTimeChronoChronology 0
#else
#define INCLUDE_ALL_JavaTimeChronoChronology 1
#endif
#undef RESTRICT_JavaTimeChronoChronology

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeChronoChronology_) && (INCLUDE_ALL_JavaTimeChronoChronology || defined(INCLUDE_JavaTimeChronoChronology))
#define JavaTimeChronoChronology_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeClock;
@class JavaTimeFormatResolverStyle;
@class JavaTimeFormatTextStyle;
@class JavaTimeInstant;
@class JavaTimeTemporalChronoField;
@class JavaTimeTemporalValueRange;
@class JavaTimeZoneId;
@class JavaTimeZoneOffset;
@class JavaUtilLocale;
@protocol JavaTimeChronoChronoLocalDate;
@protocol JavaTimeChronoChronoLocalDateTime;
@protocol JavaTimeChronoChronoPeriod;
@protocol JavaTimeChronoChronoZonedDateTime;
@protocol JavaTimeChronoEra;
@protocol JavaTimeTemporalTemporalAccessor;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A calendar system, used to organize and identify dates.
 <p>The main date and time API is built on the ISO calendar system. The chronology operates behind
  the scenes to represent the general concept of a calendar system. For example, the Japanese,
  Minguo, Thai Buddhist and others. 
 <p>Most other calendar systems also operate on the shared concepts of year, month and day, linked
  to the cycles of the Earth around the Sun, and the Moon around the Earth. These shared concepts
  are defined by <code>ChronoField</code> and are available for use by any <code>Chronology</code>
  implementation: 
 @code

    LocalDate isoDate = ...
    ThaiBuddhistDate thaiDate = ...
    int isoYear = isoDate.get(ChronoField.YEAR);
    int thaiYear = thaiDate.get(ChronoField.YEAR); 
  
@endcode
  As shown, although the date objects are in different calendar systems, represented by different 
 <code>Chronology</code> instances, both can be queried using the same constant on <code>ChronoField</code>.
  For a full discussion of the implications of this, see <code>ChronoLocalDate</code>. In general, the
  advice is to use the known ISO-based <code>LocalDate</code>, rather than <code>ChronoLocalDate</code>.
  
 <p>While a <code>Chronology</code> object typically uses <code>ChronoField</code> and is based on an era,
  year-of-era, month-of-year, day-of-month model of a date, this is not required. A <code>Chronology</code>
  instance may represent a totally different kind of calendar system, such as the
  Mayan. 
 <p>In practical terms, the <code>Chronology</code> instance also acts as a factory. The <code>of(String)</code>
  method allows an instance to be looked up by identifier, while the <code>ofLocale(Locale)</code>
  method allows lookup by locale. 
 <p>The <code>Chronology</code> instance provides a set of methods to create <code>ChronoLocalDate</code>
  instances. The date classes are used to manipulate specific dates. 
 <ul>
    <li><code>dateNow()</code>
    <li><code>dateNow(clock)</code>
    <li><code>dateNow(zone)</code>
    <li><code>date(yearProleptic, month, day)</code>
    <li><code>date(era, yearOfEra, month, day)</code>
    <li><code>dateYearDay(yearProleptic, dayOfYear)</code>
    <li><code>dateYearDay(era, yearOfEra, dayOfYear)</code>
    <li><code>date(TemporalAccessor)</code>
  </ul>
  
 <h3 id="addcalendars">Adding New Calendars</h3>
  The set of available chronologies can be extended by applications. Adding a new calendar system
  requires the writing of an implementation of <code>Chronology</code>, <code>ChronoLocalDate</code> and 
 <code>Era</code>. The majority of the logic specific to the calendar system will be in the <code>ChronoLocalDate</code>
  implementation. The <code>Chronology</code> implementation acts as a factory. 
 <p>To permit the discovery of additional chronologies, the <code>ServiceLoader</code>
  is used. A file must be added to the <code>META-INF/services</code> directory with the
  name 'java.time.chrono.Chronology' listing the implementation classes. See the ServiceLoader for
  more details on service loading. For lookup by id or calendarType, the system provided calendars
  are found first followed by application provided calendars. 
 <p>Each chronology must define a chronology ID that is unique within the system. If the
  chronology represents a calendar system defined by the CLDR specification then the calendar type
  is the concatenation of the CLDR type and, if applicable, the CLDR variant.
 @since 1.8
 */
@protocol JavaTimeChronoChronology < JavaLangComparable, JavaObject >

/*!
 @brief Gets the ID of the chronology.
 <p>
  The ID uniquely identifies the <code>Chronology</code>.
  It can be used to lookup the <code>Chronology</code> using <code>of(String)</code>.
 @return the chronology ID, not null
 - seealso: #getCalendarType()
 */
- (NSString *)getId;

/*!
 @brief Gets the calendar type of the calendar system.
 <p>The calendar type is an identifier defined by the CLDR and <em>Unicode Locale Data Markup
  Language (LDML)</em> specifications to uniquely identify a calendar. The <code>getCalendarType</code>
  is the concatenation of the CLDR calendar type and the variant, if applicable,
  is appended separated by "-". The calendar type is used to lookup the <code>Chronology</code> using 
 <code>of(String)</code>.
 @return the calendar system type, null if the calendar is not defined by CLDR/LDML
 - seealso: #getId()
 */
- (NSString *)getCalendarType;

/*!
 @brief Obtains a local date in this chronology from the era, year-of-era,
  month-of-year and day-of-month fields.
 @param era the era of the correct type for the chronology, not null
 @param yearOfEra the chronology year-of-era
 @param month the chronology month-of-year
 @param dayOfMonth the chronology day-of-month
 @return the local date in this chronology, not null
 @throw DateTimeExceptionif unable to create the date
 @throw ClassCastExceptionif the <code>era</code> is not of the correct type for the chronology
 */
- (id<JavaTimeChronoChronoLocalDate>)dateWithJavaTimeChronoEra:(id<JavaTimeChronoEra>)era
                                                       withInt:(jint)yearOfEra
                                                       withInt:(jint)month
                                                       withInt:(jint)dayOfMonth;

/*!
 @brief Obtains a local date in this chronology from the proleptic-year,
  month-of-year and day-of-month fields.
 @param prolepticYear the chronology proleptic-year
 @param month the chronology month-of-year
 @param dayOfMonth the chronology day-of-month
 @return the local date in this chronology, not null
 @throw DateTimeExceptionif unable to create the date
 */
- (id<JavaTimeChronoChronoLocalDate>)dateWithInt:(jint)prolepticYear
                                         withInt:(jint)month
                                         withInt:(jint)dayOfMonth;

/*!
 @brief Obtains a local date in this chronology from the era, year-of-era and
  day-of-year fields.
 @param era the era of the correct type for the chronology, not null
 @param yearOfEra the chronology year-of-era
 @param dayOfYear the chronology day-of-year
 @return the local date in this chronology, not null
 @throw DateTimeExceptionif unable to create the date
 @throw ClassCastExceptionif the <code>era</code> is not of the correct type for the chronology
 */
- (id<JavaTimeChronoChronoLocalDate>)dateYearDayWithJavaTimeChronoEra:(id<JavaTimeChronoEra>)era
                                                              withInt:(jint)yearOfEra
                                                              withInt:(jint)dayOfYear;

/*!
 @brief Obtains a local date in this chronology from the proleptic-year and
  day-of-year fields.
 @param prolepticYear the chronology proleptic-year
 @param dayOfYear the chronology day-of-year
 @return the local date in this chronology, not null
 @throw DateTimeExceptionif unable to create the date
 */
- (id<JavaTimeChronoChronoLocalDate>)dateYearDayWithInt:(jint)prolepticYear
                                                withInt:(jint)dayOfYear;

/*!
 @brief Obtains a local date in this chronology from the epoch-day.
 <p>
  The definition of <code>EPOCH_DAY</code> is the same
  for all calendar systems, thus it can be used for conversion.
 @param epochDay the epoch day
 @return the local date in this chronology, not null
 @throw DateTimeExceptionif unable to create the date
 */
- (id<JavaTimeChronoChronoLocalDate>)dateEpochDayWithLong:(jlong)epochDay;

/*!
 @brief Obtains the current local date in this chronology from the system clock in the default time-zone.
 <p>
  This will query the <code>system clock</code> in the default
  time-zone to obtain the current date. 
 <p>
  Using this method will prevent the ability to use an alternate clock for testing
  because the clock is hard-coded.
 @return the current local date using the system clock and default time-zone, not null
 @throw DateTimeExceptionif unable to create the date
 */
- (id<JavaTimeChronoChronoLocalDate>)dateNow;

/*!
 @brief Obtains the current local date in this chronology from the system clock in the specified time-zone.
 <p>
  This will query the <code>system clock</code> to obtain the current date.
  Specifying the time-zone avoids dependence on the default time-zone. 
 <p>
  Using this method will prevent the ability to use an alternate clock for testing
  because the clock is hard-coded.
 @param zone the zone ID to use, not null
 @return the current local date using the system clock, not null
 @throw DateTimeExceptionif unable to create the date
 */
- (id<JavaTimeChronoChronoLocalDate>)dateNowWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Obtains the current local date in this chronology from the specified clock.
 <p>
  This will query the specified clock to obtain the current date - today.
  Using this method allows the use of an alternate clock for testing.
  The alternate clock may be introduced using <code>dependency injection</code>.
 @param clock the clock to use, not null
 @return the current local date, not null
 @throw DateTimeExceptionif unable to create the date
 */
- (id<JavaTimeChronoChronoLocalDate>)dateNowWithJavaTimeClock:(JavaTimeClock *)clock;

/*!
 @brief Obtains a local date in this chronology from another temporal object.
 <p>
  This obtains a date in this chronology based on the specified temporal.
  A <code>TemporalAccessor</code> represents an arbitrary set of date and time information,
  which this factory converts to an instance of <code>ChronoLocalDate</code>.
  <p>
  The conversion typically uses the <code>EPOCH_DAY</code>
  field, which is standardized across calendar systems. 
 <p>
  This method matches the signature of the functional interface <code>TemporalQuery</code>
  allowing it to be used as a query via method reference, <code>aChronology::date</code>.
 @param temporal the temporal object to convert, not null
 @return the local date in this chronology, not null
 @throw DateTimeExceptionif unable to create the date
 - seealso: ChronoLocalDate#from(TemporalAccessor)
 */
- (id<JavaTimeChronoChronoLocalDate>)dateWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

/*!
 @brief Obtains a local date-time in this chronology from another temporal object.
 <p>
  This obtains a date-time in this chronology based on the specified temporal.
  A <code>TemporalAccessor</code> represents an arbitrary set of date and time information,
  which this factory converts to an instance of <code>ChronoLocalDateTime</code>.
  <p>
  The conversion extracts and combines the <code>ChronoLocalDate</code> and the 
 <code>LocalTime</code> from the temporal object.
  Implementations are permitted to perform optimizations such as accessing
  those fields that are equivalent to the relevant objects.
  The result uses this chronology. 
 <p>
  This method matches the signature of the functional interface <code>TemporalQuery</code>
  allowing it to be used as a query via method reference, <code>aChronology::localDateTime</code>.
 @param temporal the temporal object to convert, not null
 @return the local date-time in this chronology, not null
 @throw DateTimeExceptionif unable to create the date-time
 - seealso: ChronoLocalDateTime#from(TemporalAccessor)
 */
- (id<JavaTimeChronoChronoLocalDateTime>)localDateTimeWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

/*!
 @brief Obtains a <code>ChronoZonedDateTime</code> in this chronology from another temporal object.
 <p>
  This obtains a zoned date-time in this chronology based on the specified temporal.
  A <code>TemporalAccessor</code> represents an arbitrary set of date and time information,
  which this factory converts to an instance of <code>ChronoZonedDateTime</code>.
  <p>
  The conversion will first obtain a <code>ZoneId</code> from the temporal object,
  falling back to a <code>ZoneOffset</code> if necessary. It will then try to obtain
  an <code>Instant</code>, falling back to a <code>ChronoLocalDateTime</code> if necessary.
  The result will be either the combination of <code>ZoneId</code> or <code>ZoneOffset</code>
  with <code>Instant</code> or <code>ChronoLocalDateTime</code>.
  Implementations are permitted to perform optimizations such as accessing
  those fields that are equivalent to the relevant objects.
  The result uses this chronology. 
 <p>
  This method matches the signature of the functional interface <code>TemporalQuery</code>
  allowing it to be used as a query via method reference, <code>aChronology::zonedDateTime</code>.
 @param temporal the temporal object to convert, not null
 @return the zoned date-time in this chronology, not null
 @throw DateTimeExceptionif unable to create the date-time
 - seealso: ChronoZonedDateTime#from(TemporalAccessor)
 */
- (id<JavaTimeChronoChronoZonedDateTime>)zonedDateTimeWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

/*!
 @brief Obtains a <code>ChronoZonedDateTime</code> in this chronology from an <code>Instant</code>.
 <p>
  This obtains a zoned date-time with the same instant as that specified.
 @param instant the instant to create the date-time from, not null
 @param zone the time-zone, not null
 @return the zoned date-time, not null
 @throw DateTimeExceptionif the result exceeds the supported range
 */
- (id<JavaTimeChronoChronoZonedDateTime>)zonedDateTimeWithJavaTimeInstant:(JavaTimeInstant *)instant
                                                       withJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Checks if the specified year is a leap year.
 <p>A leap-year is a year of a longer length than normal. The exact meaning is determined by the
  chronology according to the following constraints. 
 <ul>
    <li>a leap-year must imply a year-length longer than a non leap-year.
    <li>a chronology that does not support the concept of a year must return false.
    <li>the correct result must be returned for all years within the valid range of years for the
        chronology. 
 </ul>
  
 <p>Outside the range of valid years an implementation is free to return either a best guess or
  false. An implementation must not throw an exception, even if the year is outside the range of
  valid years.
 @param prolepticYear the proleptic-year to check, not validated for range
 @return true if the year is a leap year
 */
- (jboolean)isLeapYearWithLong:(jlong)prolepticYear;

/*!
 @brief Calculates the proleptic-year given the era and year-of-era.
 <p>
  This combines the era and year-of-era into the single proleptic-year field. 
 <p>
  If the chronology makes active use of eras, such as <code>JapaneseChronology</code>
  then the year-of-era will be validated against the era.
  For other chronologies, validation is optional.
 @param era the era of the correct type for the chronology, not null
 @param yearOfEra the chronology year-of-era
 @return the proleptic-year
 @throw DateTimeExceptionif unable to convert to a proleptic-year,
   such as if the year is invalid for the era
 @throw ClassCastExceptionif the <code>era</code> is not of the correct type for the chronology
 */
- (jint)prolepticYearWithJavaTimeChronoEra:(id<JavaTimeChronoEra>)era
                                   withInt:(jint)yearOfEra;

/*!
 @brief Creates the chronology era object from the numeric value.
 <p>
  The era is, conceptually, the largest division of the time-line.
  Most calendar systems have a single epoch dividing the time-line into two eras.
  However, some have multiple eras, such as one for the reign of each leader.
  The exact meaning is determined by the chronology according to the following constraints. 
 <p>
  The era in use at 1970-01-01 must have the value 1.
  Later eras must have sequentially higher values.
  Earlier eras must have sequentially lower values.
  Each chronology must refer to an enum or similar singleton to provide the era values. 
 <p>
  This method returns the singleton era of the correct type for the specified era value.
 @param eraValue the era value
 @return the calendar system era, not null
 @throw DateTimeExceptionif unable to create the era
 */
- (id<JavaTimeChronoEra>)eraOfWithInt:(jint)eraValue;

/*!
 @brief Gets the list of eras for the chronology.
 <p>
  Most calendar systems have an era, within which the year has meaning.
  If the calendar system does not support the concept of eras, an empty
  list must be returned.
 @return the list of eras for the chronology, may be immutable, not null
 */
- (id<JavaUtilList>)eras;

/*!
 @brief Gets the range of valid values for the specified field.
 <p>
  All fields can be expressed as a <code>long</code> integer.
  This method returns an object that describes the valid range for that value. 
 <p>
  Note that the result only describes the minimum and maximum valid values
  and it is important not to read too much into them. For example, there
  could be values within the range that are invalid for the field. 
 <p>
  This method will return a result whether or not the chronology supports the field.
 @param field the field to get the range for, not null
 @return the range of valid values for the field, not null
 @throw DateTimeExceptionif the range for the field cannot be obtained
 */
- (JavaTimeTemporalValueRange *)rangeWithJavaTimeTemporalChronoField:(JavaTimeTemporalChronoField *)field;

/*!
 @brief Gets the textual representation of this chronology.
 <p>
  This returns the textual name used to identify the chronology,
  suitable for presentation to the user.
  The parameters control the style of the returned text and the locale.
 @param style the style of the text required, not null
 @param locale the locale to use, not null
 @return the text value of the chronology, not null
 */
- (NSString *)getDisplayNameWithJavaTimeFormatTextStyle:(JavaTimeFormatTextStyle *)style
                                     withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Resolves parsed <code>ChronoField</code> values into a date during parsing.
 <p>
  Most <code>TemporalField</code> implementations are resolved using the
  resolve method on the field. By contrast, the <code>ChronoField</code> class
  defines fields that only have meaning relative to the chronology.
  As such, <code>ChronoField</code> date fields are resolved here in the
  context of a specific chronology. 
 <p>
  The default implementation, which explains typical resolve behaviour,
  is provided in <code>AbstractChronology</code>.
 @param fieldValues the map of fields to values, which can be updated, not null
 @param resolverStyle the requested type of resolve, not null
 @return the resolved date, null if insufficient information to create a date
 @throw DateTimeExceptionif the date cannot be resolved, typically
   because of a conflict in the input data
 */
- (id<JavaTimeChronoChronoLocalDate>)resolveDateWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                                withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

/*!
 @brief Obtains a period for this chronology based on years, months and days.
 <p>
  This returns a period tied to this chronology using the specified
  years, months and days.  All supplied chronologies use periods
  based on years, months and days, however the <code>ChronoPeriod</code> API
  allows the period to be represented using other units.
 @param years the number of years, may be negative
 @param months the number of years, may be negative
 @param days the number of years, may be negative
 @return the period in terms of this chronology, not null
 */
- (id<JavaTimeChronoChronoPeriod>)periodWithInt:(jint)years
                                        withInt:(jint)months
                                        withInt:(jint)days;

/*!
 @brief Gets the number of seconds from the epoch of 1970-01-01T00:00:00Z.
 <p>The number of seconds is calculated using the proleptic-year, month, day-of-month, hour,
  minute, second, and zoneOffset.
 @param prolepticYear the chronology proleptic-year
 @param month the chronology month-of-year
 @param dayOfMonth the chronology day-of-month
 @param hour the hour-of-day, from 0 to 23
 @param minute the minute-of-hour, from 0 to 59
 @param second the second-of-minute, from 0 to 59
 @param zoneOffset the zone offset, not null
 @return the number of seconds relative to 1970-01-01T00:00:00Z, may be negative
 @throw DateTimeExceptionif any of the values are out of range
 @since 9
 */
- (jlong)epochSecondWithInt:(jint)prolepticYear
                    withInt:(jint)month
                    withInt:(jint)dayOfMonth
                    withInt:(jint)hour
                    withInt:(jint)minute
                    withInt:(jint)second
     withJavaTimeZoneOffset:(JavaTimeZoneOffset *)zoneOffset;

/*!
 @brief Gets the number of seconds from the epoch of 1970-01-01T00:00:00Z.
 <p>The number of seconds is calculated using the era, year-of-era, month, day-of-month, hour,
  minute, second, and zoneOffset.
 @param era the era of the correct type for the chronology, not null
 @param yearOfEra the chronology year-of-era
 @param month the chronology month-of-year
 @param dayOfMonth the chronology day-of-month
 @param hour the hour-of-day, from 0 to 23
 @param minute the minute-of-hour, from 0 to 59
 @param second the second-of-minute, from 0 to 59
 @param zoneOffset the zone offset, not null
 @return the number of seconds relative to 1970-01-01T00:00:00Z, may be negative
 @throw DateTimeExceptionif any of the values are out of range
 @since 9
 */
- (jlong)epochSecondWithJavaTimeChronoEra:(id<JavaTimeChronoEra>)era
                                  withInt:(jint)yearOfEra
                                  withInt:(jint)month
                                  withInt:(jint)dayOfMonth
                                  withInt:(jint)hour
                                  withInt:(jint)minute
                                  withInt:(jint)second
                   withJavaTimeZoneOffset:(JavaTimeZoneOffset *)zoneOffset;

/*!
 @brief Compares this chronology to another chronology.
 <p>
  The comparison order first by the chronology ID string, then by any
  additional information specific to the subclass.
  It is "consistent with equals", as defined by <code>Comparable</code>.
 @param other the other chronology to compare to, not null
 @return the comparator value, negative if less, positive if greater
 */
- (jint)compareToWithId:(id<JavaTimeChronoChronology>)other;

/*!
 @brief Checks if this chronology is equal to another chronology.
 <p>
  The comparison is based on the entire state of the object.
 @param obj the object to check, null returns false
 @return true if this is equal to the other chronology
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief A hash code for this chronology.
 <p>
  The hash code should be based on the entire state of the object.
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Outputs this chronology as a <code>String</code>.
 <p>
  The format should include the entire state of the object.
 @return a string representation of this chronology, not null
 */
- (NSString *)description;

@end

@interface JavaTimeChronoChronology : NSObject

/*!
 @brief Obtains an instance of <code>Chronology</code> from a temporal object.
 <p>This obtains a chronology based on the specified temporal. A <code>TemporalAccessor</code>
  represents an arbitrary set of date and time information, which this factory converts to an
  instance of <code>Chronology</code>.
  
 <p>The conversion will obtain the chronology using <code>TemporalQueries.chronology()</code>. If the
  specified temporal object does not have a chronology, <code>IsoChronology</code> is returned. 
 <p>This method matches the signature of the functional interface <code>TemporalQuery</code> allowing
  it to be used as a query via method reference, <code>Chronology::from</code>.
 @param temporal the temporal to convert, not null
 @return the chronology, not null
 @throw DateTimeExceptionif unable to convert to a <code>Chronology</code>
 */
+ (id<JavaTimeChronoChronology>)fromWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

/*!
 @brief Obtains an instance of <code>Chronology</code> from a locale.
 <p>This returns a <code>Chronology</code> based on the specified locale, typically returning <code>IsoChronology</code>
 . Other calendar systems are only returned if they are explicitly selected within
  the locale. 
 <p>The <code>Locale</code> class provide access to a range of information useful for localizing an
  application. This includes the language and region, such as "en-GB" for English as used in
  Great Britain. 
 <p>The <code>Locale</code> class also supports an extension mechanism that can be used to identify a
  calendar system. The mechanism is a form of key-value pairs, where the calendar system has the
  key "ca". For example, the locale "en-JP-u-ca-japanese" represents the English language as used
  in Japan with the Japanese calendar system. 
 <p>This method finds the desired calendar system in a manner equivalent to passing "ca" to 
 <code>Locale.getUnicodeLocaleType(String)</code>. If the "ca" key is not present, then <code>IsoChronology</code>
  is returned. 
 <p>Note that the behavior of this method differs from the older <code>java.util.Calendar.getInstance(Locale)</code>
  method. If that method receives a locale of "th_TH" it
  will return <code>BuddhistCalendar</code>. By contrast, this method will return <code>IsoChronology</code>
 . Passing the locale "th-TH-u-ca-buddhist" into either method will result in the
  Thai Buddhist calendar system and is therefore the recommended approach going forward for Thai
  calendar system localization. 
 <p>A similar, but simpler, situation occurs for the Japanese calendar system. The locale
  "jp_JP_JP" has previously been used to access the calendar. However, unlike the Thai locale,
  "ja_JP_JP" is automatically converted by <code>Locale</code> to the modern and recommended form of
  "ja-JP-u-ca-japanese". Thus, there is no difference in behavior between this method and <code>Calendar#getInstance(Locale)</code>
 .
 @param locale the locale to use to obtain the calendar system, not null
 @return the calendar system associated with the locale, not null
 @throw DateTimeExceptionif the locale-specified calendar cannot be found
 */
+ (id<JavaTimeChronoChronology>)ofLocaleWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Obtains an instance of <code>Chronology</code> from a chronology ID or
  calendar system type.
 <p>
  This returns a chronology based on either the ID or the type.
  The <code>chronology ID</code> uniquely identifies the chronology.
  The <code>calendar system type</code> is defined by the
  CLDR specification. 
 <p>
  The chronology may be a system chronology or a chronology
  provided by the application via ServiceLoader configuration. 
 <p>
  Since some calendars can be customized, the ID or type typically refers
  to the default customization. For example, the Gregorian calendar can have multiple
  cutover dates from the Julian, but the lookup only provides the default cutover date.
 @param id_ the chronology ID or calendar system type, not null
 @return the chronology with the identifier requested, not null
 @throw DateTimeExceptionif the chronology cannot be found
 */
+ (id<JavaTimeChronoChronology>)ofWithNSString:(NSString *)id_;

/*!
 @brief Returns the available chronologies.
 <p>
  Each returned <code>Chronology</code> is available for use in the system.
  The set of chronologies includes the system chronologies and
  any chronologies provided by the application via ServiceLoader
  configuration.
 @return the independent, modifiable set of the available chronology IDs, not null
 */
+ (id<JavaUtilSet>)getAvailableChronologies;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeChronoChronology)

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoChronology_fromWithJavaTimeTemporalTemporalAccessor_(id<JavaTimeTemporalTemporalAccessor> temporal);

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoChronology_ofLocaleWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoChronology_ofWithNSString_(NSString *id_);

FOUNDATION_EXPORT id<JavaUtilSet> JavaTimeChronoChronology_getAvailableChronologies(void);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronology_dateWithJavaTimeChronoEra_withInt_withInt_withInt_(id<JavaTimeChronoChronology> self, id<JavaTimeChronoEra> era, jint yearOfEra, jint month, jint dayOfMonth);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronology_dateYearDayWithJavaTimeChronoEra_withInt_withInt_(id<JavaTimeChronoChronology> self, id<JavaTimeChronoEra> era, jint yearOfEra, jint dayOfYear);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronology_dateNow(id<JavaTimeChronoChronology> self);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronology_dateNowWithJavaTimeZoneId_(id<JavaTimeChronoChronology> self, JavaTimeZoneId *zone);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronology_dateNowWithJavaTimeClock_(id<JavaTimeChronoChronology> self, JavaTimeClock *clock);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDateTime> JavaTimeChronoChronology_localDateTimeWithJavaTimeTemporalTemporalAccessor_(id<JavaTimeChronoChronology> self, id<JavaTimeTemporalTemporalAccessor> temporal);

FOUNDATION_EXPORT id<JavaTimeChronoChronoZonedDateTime> JavaTimeChronoChronology_zonedDateTimeWithJavaTimeTemporalTemporalAccessor_(id<JavaTimeChronoChronology> self, id<JavaTimeTemporalTemporalAccessor> temporal);

FOUNDATION_EXPORT id<JavaTimeChronoChronoZonedDateTime> JavaTimeChronoChronology_zonedDateTimeWithJavaTimeInstant_withJavaTimeZoneId_(id<JavaTimeChronoChronology> self, JavaTimeInstant *instant, JavaTimeZoneId *zone);

FOUNDATION_EXPORT NSString *JavaTimeChronoChronology_getDisplayNameWithJavaTimeFormatTextStyle_withJavaUtilLocale_(id<JavaTimeChronoChronology> self, JavaTimeFormatTextStyle *style, JavaUtilLocale *locale);

FOUNDATION_EXPORT id<JavaTimeChronoChronoPeriod> JavaTimeChronoChronology_periodWithInt_withInt_withInt_(id<JavaTimeChronoChronology> self, jint years, jint months, jint days);

FOUNDATION_EXPORT jlong JavaTimeChronoChronology_epochSecondWithInt_withInt_withInt_withInt_withInt_withInt_withJavaTimeZoneOffset_(id<JavaTimeChronoChronology> self, jint prolepticYear, jint month, jint dayOfMonth, jint hour, jint minute, jint second, JavaTimeZoneOffset *zoneOffset);

FOUNDATION_EXPORT jlong JavaTimeChronoChronology_epochSecondWithJavaTimeChronoEra_withInt_withInt_withInt_withInt_withInt_withInt_withJavaTimeZoneOffset_(id<JavaTimeChronoChronology> self, id<JavaTimeChronoEra> era, jint yearOfEra, jint month, jint dayOfMonth, jint hour, jint minute, jint second, JavaTimeZoneOffset *zoneOffset);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeChronoChronology)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTimeChronoChronology")
