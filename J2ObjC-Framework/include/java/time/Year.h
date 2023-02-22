//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/Year.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeYear")
#ifdef RESTRICT_JavaTimeYear
#define INCLUDE_ALL_JavaTimeYear 0
#else
#define INCLUDE_ALL_JavaTimeYear 1
#endif
#undef RESTRICT_JavaTimeYear

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeYear_) && (INCLUDE_ALL_JavaTimeYear || defined(INCLUDE_JavaTimeYear))
#define JavaTimeYear_

#define RESTRICT_JavaTimeTemporalTemporal 1
#define INCLUDE_JavaTimeTemporalTemporal 1
#include "java/time/temporal/Temporal.h"

#define RESTRICT_JavaTimeTemporalTemporalAdjuster 1
#define INCLUDE_JavaTimeTemporalTemporalAdjuster 1
#include "java/time/temporal/TemporalAdjuster.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaTimeClock;
@class JavaTimeFormatDateTimeFormatter;
@class JavaTimeLocalDate;
@class JavaTimeMonth;
@class JavaTimeMonthDay;
@class JavaTimeTemporalValueRange;
@class JavaTimeYearMonth;
@class JavaTimeZoneId;
@protocol JavaIoDataInput;
@protocol JavaIoDataOutput;
@protocol JavaLangCharSequence;
@protocol JavaTimeTemporalTemporalAccessor;
@protocol JavaTimeTemporalTemporalAmount;
@protocol JavaTimeTemporalTemporalField;
@protocol JavaTimeTemporalTemporalQuery;
@protocol JavaTimeTemporalTemporalUnit;

/*!
 @brief A year in the ISO-8601 calendar system, such as <code>2007</code>.
 <p>
  <code>Year</code> is an immutable date-time object that represents a year.
  Any field that can be derived from a year can be obtained. 
 <p>
  <b>Note that years in the ISO chronology only align with years in the
  Gregorian-Julian system for modern years. Parts of Russia did not switch to the
  modern Gregorian/ISO rules until 1920.
  As such, historical years must be treated with caution.</b>
  <p>
  This class does not store or represent a month, day, time or time-zone.
  For example, the value "2007" can be stored in a <code>Year</code>.
  <p>
  Years represented by this class follow the ISO-8601 standard and use
  the proleptic numbering system. Year 1 is preceded by year 0, then by year -1. 
 <p>
  The ISO-8601 calendar system is the modern civil calendar system used today
  in most of the world. It is equivalent to the proleptic Gregorian calendar
  system, in which today's rules for leap years are applied for all time.
  For most applications written today, the ISO-8601 rules are entirely suitable.
  However, any application that makes use of historical dates, and requires them
  to be accurate will find the ISO-8601 approach unsuitable.
 @since 1.8
 */
@interface JavaTimeYear : NSObject < JavaTimeTemporalTemporal, JavaTimeTemporalTemporalAdjuster, JavaLangComparable, JavaIoSerializable >
@property (readonly, class) jint MIN_VALUE NS_SWIFT_NAME(MIN_VALUE);
@property (readonly, class) jint MAX_VALUE NS_SWIFT_NAME(MAX_VALUE);

+ (jint)MIN_VALUE;

+ (jint)MAX_VALUE;

#pragma mark Public

/*!
 @brief Adjusts the specified temporal object to have this year.
 <p>
  This returns a temporal object of the same observable type as the input
  with the year changed to be the same as this. 
 <p>
  The adjustment is equivalent to using <code>Temporal.with(TemporalField, long)</code>
  passing <code>ChronoField.YEAR</code> as the field.
  If the specified temporal object does not use the ISO calendar system then
  a <code>DateTimeException</code> is thrown. 
 <p>
  In most cases, it is clearer to reverse the calling pattern by using 
 <code>Temporal.with(TemporalAdjuster)</code>:
  @code

    // these two lines are equivalent, but the second approach is recommended
    temporal = thisYear.adjustInto(temporal);
    temporal = temporal.with(thisYear); 
  
@endcode
  <p>
  This instance is immutable and unaffected by this method call.
 @param temporal the target object to be adjusted, not null
 @return the adjusted object, not null
 @throw DateTimeExceptionif unable to make the adjustment
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeTemporalTemporal>)adjustIntoWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)temporal;

/*!
 @brief Combines this year with a day-of-year to create a <code>LocalDate</code>.
 <p>
  This returns a <code>LocalDate</code> formed from this year and the specified day-of-year. 
 <p>
  The day-of-year value 366 is only valid in a leap year.
 @param dayOfYear the day-of-year to use, from 1 to 365-366
 @return the local date formed from this year and the specified date of year, not null
 @throw DateTimeExceptionif the day of year is zero or less, 366 or greater or equal
   to 366 and this is not a leap year
 */
- (JavaTimeLocalDate *)atDayWithInt:(jint)dayOfYear;

/*!
 @brief Combines this year with a month to create a <code>YearMonth</code>.
 <p>
  This returns a <code>YearMonth</code> formed from this year and the specified month.
  All possible combinations of year and month are valid. 
 <p>
  This method can be used as part of a chain to produce a date: 
 @code

   LocalDate date = year.atMonth(month).atDay(day); 
  
@endcode
 @param month the month-of-year to use, from 1 (January) to 12 (December)
 @return the year-month formed from this year and the specified month, not null
 @throw DateTimeExceptionif the month is invalid
 */
- (JavaTimeYearMonth *)atMonthWithInt:(jint)month;

/*!
 @brief Combines this year with a month to create a <code>YearMonth</code>.
 <p>
  This returns a <code>YearMonth</code> formed from this year and the specified month.
  All possible combinations of year and month are valid. 
 <p>
  This method can be used as part of a chain to produce a date: 
 @code

   LocalDate date = year.atMonth(month).atDay(day); 
  
@endcode
 @param month the month-of-year to use, not null
 @return the year-month formed from this year and the specified month, not null
 */
- (JavaTimeYearMonth *)atMonthWithJavaTimeMonth:(JavaTimeMonth *)month;

/*!
 @brief Combines this year with a month-day to create a <code>LocalDate</code>.
 <p>
  This returns a <code>LocalDate</code> formed from this year and the specified month-day. 
 <p>
  A month-day of February 29th will be adjusted to February 28th in the resulting
  date if the year is not a leap year.
 @param monthDay the month-day to use, not null
 @return the local date formed from this year and the specified month-day, not null
 */
- (JavaTimeLocalDate *)atMonthDayWithJavaTimeMonthDay:(JavaTimeMonthDay *)monthDay;

/*!
 @brief Compares this year to another year.
 <p>
  The comparison is based on the value of the year.
  It is "consistent with equals", as defined by <code>Comparable</code>.
 @param other the other year to compare to, not null
 @return the comparator value, negative if less, positive if greater
 */
- (jint)compareToWithId:(JavaTimeYear *)other;

/*!
 @brief Checks if this year is equal to another year.
 <p>
  The comparison is based on the time-line position of the years.
 @param obj the object to check, null returns false
 @return true if this is equal to the other year
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Formats this year using the specified formatter.
 <p>
  This year will be passed to the formatter to produce a string.
 @param formatter the formatter to use, not null
 @return the formatted year string, not null
 @throw DateTimeExceptionif an error occurs during printing
 */
- (NSString *)formatWithJavaTimeFormatDateTimeFormatter:(JavaTimeFormatDateTimeFormatter *)formatter;

/*!
 @brief Obtains an instance of <code>Year</code> from a temporal object.
 <p>
  This obtains a year based on the specified temporal.
  A <code>TemporalAccessor</code> represents an arbitrary set of date and time information,
  which this factory converts to an instance of <code>Year</code>.
  <p>
  The conversion extracts the <code>year</code> field.
  The extraction is only permitted if the temporal object has an ISO
  chronology, or can be converted to a <code>LocalDate</code>.
  <p>
  This method matches the signature of the functional interface <code>TemporalQuery</code>
  allowing it to be used as a query via method reference, <code>Year::from</code>.
 @param temporal the temporal object to convert, not null
 @return the year, not null
 @throw DateTimeExceptionif unable to convert to a <code>Year</code>
 */
+ (JavaTimeYear *)fromWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

/*!
 @brief Gets the value of the specified field from this year as an <code>int</code>.
 <p>
  This queries this year for the value of the specified field.
  The returned value will always be within the valid range of values for the field.
  If it is not possible to return the value, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>supported fields</code> will return valid
  values based on this year.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.getFrom(TemporalAccessor)</code>
  passing <code>this</code> as the argument. Whether the value can be obtained,
  and what the value represents, is determined by the field.
 @param field the field to get, not null
 @return the value for the field
 @throw DateTimeExceptionif a value for the field cannot be obtained or
          the value is outside the range of valid values for the field
 @throw UnsupportedTemporalTypeExceptionif the field is not supported or
          the range of values exceeds an <code>int</code>
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jint)getWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the value of the specified field from this year as a <code>long</code>.
 <p>
  This queries this year for the value of the specified field.
  If it is not possible to return the value, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>supported fields</code> will return valid
  values based on this year.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.getFrom(TemporalAccessor)</code>
  passing <code>this</code> as the argument. Whether the value can be obtained,
  and what the value represents, is determined by the field.
 @param field the field to get, not null
 @return the value for the field
 @throw DateTimeExceptionif a value for the field cannot be obtained
 @throw UnsupportedTemporalTypeExceptionif the field is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jlong)getLongWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the year value.
 <p>
  The year returned by this method is proleptic as per <code>get(YEAR)</code>.
 @return the year, <code>MIN_VALUE</code> to <code>MAX_VALUE</code>
 */
- (jint)getValue;

/*!
 @brief A hash code for this year.
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Checks if this year is after the specified year.
 @param other the other year to compare to, not null
 @return true if this is after the specified year
 */
- (jboolean)isAfterWithJavaTimeYear:(JavaTimeYear *)other;

/*!
 @brief Checks if this year is before the specified year.
 @param other the other year to compare to, not null
 @return true if this point is before the specified year
 */
- (jboolean)isBeforeWithJavaTimeYear:(JavaTimeYear *)other;

/*!
 @brief Checks if the year is a leap year, according to the ISO proleptic
  calendar system rules.
 <p>
  This method applies the current rules for leap years across the whole time-line.
  In general, a year is a leap year if it is divisible by four without
  remainder. However, years divisible by 100, are not leap years, with
  the exception of years divisible by 400 which are. 
 <p>
  For example, 1904 is a leap year it is divisible by 4.
  1900 was not a leap year as it is divisible by 100, however 2000 was a
  leap year as it is divisible by 400. 
 <p>
  The calculation is proleptic - applying the same rules into the far future and far past.
  This is historically inaccurate, but is correct for the ISO-8601 standard.
 @return true if the year is leap, false otherwise
 */
- (jboolean)isLeap;

/*!
 @brief Checks if the year is a leap year, according to the ISO proleptic
  calendar system rules.
 <p>
  This method applies the current rules for leap years across the whole time-line.
  In general, a year is a leap year if it is divisible by four without
  remainder. However, years divisible by 100, are not leap years, with
  the exception of years divisible by 400 which are. 
 <p>
  For example, 1904 is a leap year it is divisible by 4.
  1900 was not a leap year as it is divisible by 100, however 2000 was a
  leap year as it is divisible by 400. 
 <p>
  The calculation is proleptic - applying the same rules into the far future and far past.
  This is historically inaccurate, but is correct for the ISO-8601 standard.
 @param year the year to check
 @return true if the year is leap, false otherwise
 */
+ (jboolean)isLeapWithLong:(jlong)year;

/*!
 @brief Checks if the specified field is supported.
 <p>
  This checks if this year can be queried for the specified field.
  If false, then calling the <code>range</code>,
  <code>get</code> and <code>with(TemporalField, long)</code>
  methods will throw an exception. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The supported fields are: 
 <ul>
  <li><code>YEAR_OF_ERA</code>
  <li><code>YEAR</code>
  <li><code>ERA</code>
  </ul>
  All other <code>ChronoField</code> instances will return false. 
 <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.isSupportedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the field is supported is determined by the field.
 @param field the field to check, null returns false
 @return true if the field is supported on this year, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Checks if the specified unit is supported.
 <p>
  This checks if the specified unit can be added to, or subtracted from, this year.
  If false, then calling the <code>plus(long, TemporalUnit)</code> and 
 <code>minus</code> methods will throw an exception. 
 <p>
  If the unit is a <code>ChronoUnit</code> then the query is implemented here.
  The supported units are: 
 <ul>
  <li><code>YEARS</code>
  <li><code>DECADES</code>
  <li><code>CENTURIES</code>
  <li><code>MILLENNIA</code>
  <li><code>ERAS</code>
  </ul>
  All other <code>ChronoUnit</code> instances will return false. 
 <p>
  If the unit is not a <code>ChronoUnit</code>, then the result of this method
  is obtained by invoking <code>TemporalUnit.isSupportedBy(Temporal)</code>
  passing <code>this</code> as the argument.
  Whether the unit is supported is determined by the unit.
 @param unit the unit to check, null returns false
 @return true if the unit can be added/subtracted, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Checks if the month-day is valid for this year.
 <p>
  This method checks whether this year and the input month and day form
  a valid date.
 @param monthDay the month-day to validate, null returns false
 @return true if the month and day are valid for this year
 */
- (jboolean)isValidMonthDayWithJavaTimeMonthDay:(JavaTimeMonthDay *)monthDay;

/*!
 @brief Gets the length of this year in days.
 @return the length of this year in days, 365 or 366
 */
- (jint)length;

/*!
 @brief Returns a copy of this year with the specified amount subtracted.
 <p>
  This returns a <code>Year</code>, based on this one, with the amount
  in terms of the unit subtracted. If it is not possible to subtract the amount,
  because the unit is not supported or for some other reason, an exception is thrown. 
 <p>
  This method is equivalent to <code>plus(long, TemporalUnit)</code> with the amount negated.
  See that method for a full description of how addition, and thus subtraction, works. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToSubtract the amount of the unit to subtract from the result, may be negative
 @param unit the unit of the amount to subtract, not null
 @return a <code>Year</code> based on this year with the specified amount subtracted, not null
 @throw DateTimeExceptionif the subtraction cannot be made
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYear *)minusWithLong:(jlong)amountToSubtract
withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Returns a copy of this year with the specified amount subtracted.
 <p>
  This returns a <code>Year</code>, based on this one, with the specified amount subtracted.
  The amount is typically <code>Period</code> but may be any other type implementing
  the <code>TemporalAmount</code> interface. 
 <p>
  The calculation is delegated to the amount object by calling 
 <code>TemporalAmount.subtractFrom(Temporal)</code>. The amount implementation is free
  to implement the subtraction in any way it wishes, however it typically
  calls back to <code>minus(long, TemporalUnit)</code>. Consult the documentation
  of the amount implementation to determine if it can be successfully subtracted. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToSubtract the amount to subtract, not null
 @return a <code>Year</code> based on this year with the subtraction made, not null
 @throw DateTimeExceptionif the subtraction cannot be made
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYear *)minusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amountToSubtract;

/*!
 @brief Returns a copy of this <code>Year</code> with the specified number of years subtracted.
 <p>
  This instance is immutable and unaffected by this method call.
 @param yearsToSubtract the years to subtract, may be negative
 @return a <code>Year</code> based on this year with the year subtracted, not null
 @throw DateTimeExceptionif the result exceeds the supported range
 */
- (JavaTimeYear *)minusYearsWithLong:(jlong)yearsToSubtract;

/*!
 @brief Obtains the current year from the system clock in the default time-zone.
 <p>
  This will query the <code>system clock</code> in the default
  time-zone to obtain the current year. 
 <p>
  Using this method will prevent the ability to use an alternate clock for testing
  because the clock is hard-coded.
 @return the current year using the system clock and default time-zone, not null
 */
+ (JavaTimeYear *)now;

/*!
 @brief Obtains the current year from the specified clock.
 <p>
  This will query the specified clock to obtain the current year.
  Using this method allows the use of an alternate clock for testing.
  The alternate clock may be introduced using <code>dependency injection</code>.
 @param clock the clock to use, not null
 @return the current year, not null
 */
+ (JavaTimeYear *)nowWithJavaTimeClock:(JavaTimeClock *)clock;

/*!
 @brief Obtains the current year from the system clock in the specified time-zone.
 <p>
  This will query the <code>system clock</code> to obtain the current year.
  Specifying the time-zone avoids dependence on the default time-zone. 
 <p>
  Using this method will prevent the ability to use an alternate clock for testing
  because the clock is hard-coded.
 @param zone the zone ID to use, not null
 @return the current year using the system clock, not null
 */
+ (JavaTimeYear *)nowWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Obtains an instance of <code>Year</code>.
 <p>
  This method accepts a year value from the proleptic ISO calendar system. 
 <p>
  The year 2AD/CE is represented by 2.<br>
  The year 1AD/CE is represented by 1.<br>
  The year 1BC/BCE is represented by 0.<br>
  The year 2BC/BCE is represented by -1.<br>
 @param isoYear the ISO proleptic year to represent, from <code>MIN_VALUE</code>  to <code>MAX_VALUE</code>
 @return the year, not null
 @throw DateTimeExceptionif the field is invalid
 */
+ (JavaTimeYear *)ofWithInt:(jint)isoYear;

/*!
 @brief Obtains an instance of <code>Year</code> from a text string such as <code>2007</code>.
 <p>
  The string must represent a valid year.
  Years outside the range 0000 to 9999 must be prefixed by the plus or minus symbol.
 @param text the text to parse such as "2007", not null
 @return the parsed year, not null
 @throw DateTimeParseExceptionif the text cannot be parsed
 */
+ (JavaTimeYear *)parseWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Obtains an instance of <code>Year</code> from a text string using a specific formatter.
 <p>
  The text is parsed using the formatter, returning a year.
 @param text the text to parse, not null
 @param formatter the formatter to use, not null
 @return the parsed year, not null
 @throw DateTimeParseExceptionif the text cannot be parsed
 */
+ (JavaTimeYear *)parseWithJavaLangCharSequence:(id<JavaLangCharSequence>)text
            withJavaTimeFormatDateTimeFormatter:(JavaTimeFormatDateTimeFormatter *)formatter;

/*!
 @brief Returns a copy of this year with the specified amount added.
 <p>
  This returns a <code>Year</code>, based on this one, with the amount
  in terms of the unit added. If it is not possible to add the amount, because the
  unit is not supported or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoUnit</code> then the addition is implemented here.
  The supported fields behave as follows: 
 <ul>
  <li><code>YEARS</code> -
   Returns a <code>Year</code> with the specified number of years added.
   This is equivalent to <code>plusYears(long)</code>.
  <li><code>DECADES</code> -
   Returns a <code>Year</code> with the specified number of decades added.
   This is equivalent to calling <code>plusYears(long)</code> with the amount
   multiplied by 10. 
 <li><code>CENTURIES</code> -
   Returns a <code>Year</code> with the specified number of centuries added.
   This is equivalent to calling <code>plusYears(long)</code> with the amount
   multiplied by 100. 
 <li><code>MILLENNIA</code> -
   Returns a <code>Year</code> with the specified number of millennia added.
   This is equivalent to calling <code>plusYears(long)</code> with the amount
   multiplied by 1,000. 
 <li><code>ERAS</code> -
   Returns a <code>Year</code> with the specified number of eras added.
   Only two eras are supported so the amount must be one, zero or minus one.
   If the amount is non-zero then the year is changed such that the year-of-era
   is unchanged. 
 </ul>
  <p>
  All other <code>ChronoUnit</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoUnit</code>, then the result of this method
  is obtained by invoking <code>TemporalUnit.addTo(Temporal, long)</code>
  passing <code>this</code> as the argument. In this case, the unit determines
  whether and how to perform the addition. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToAdd the amount of the unit to add to the result, may be negative
 @param unit the unit of the amount to add, not null
 @return a <code>Year</code> based on this year with the specified amount added, not null
 @throw DateTimeExceptionif the addition cannot be made
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYear *)plusWithLong:(jlong)amountToAdd
withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Returns a copy of this year with the specified amount added.
 <p>
  This returns a <code>Year</code>, based on this one, with the specified amount added.
  The amount is typically <code>Period</code> but may be any other type implementing
  the <code>TemporalAmount</code> interface. 
 <p>
  The calculation is delegated to the amount object by calling 
 <code>TemporalAmount.addTo(Temporal)</code>. The amount implementation is free
  to implement the addition in any way it wishes, however it typically
  calls back to <code>plus(long, TemporalUnit)</code>. Consult the documentation
  of the amount implementation to determine if it can be successfully added. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToAdd the amount to add, not null
 @return a <code>Year</code> based on this year with the addition made, not null
 @throw DateTimeExceptionif the addition cannot be made
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYear *)plusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amountToAdd;

/*!
 @brief Returns a copy of this <code>Year</code> with the specified number of years added.
 <p>
  This instance is immutable and unaffected by this method call.
 @param yearsToAdd the years to add, may be negative
 @return a <code>Year</code> based on this year with the years added, not null
 @throw DateTimeExceptionif the result exceeds the supported range
 */
- (JavaTimeYear *)plusYearsWithLong:(jlong)yearsToAdd;

/*!
 @brief Queries this year using the specified query.
 <p>
  This queries this year using the specified query strategy object.
  The <code>TemporalQuery</code> object defines the logic to be used to
  obtain the result. Read the documentation of the query to understand
  what the result of this method will be. 
 <p>
  The result of this method is obtained by invoking the 
 <code>TemporalQuery.queryFrom(TemporalAccessor)</code> method on the
  specified query passing <code>this</code> as the argument.
 @param query the query to invoke, not null
 @return the query result, null may be returned (defined by the query)
 @throw DateTimeExceptionif unable to query (defined by the query)
 @throw ArithmeticExceptionif numeric overflow occurs (defined by the query)
 */
- (id)queryWithJavaTimeTemporalTemporalQuery:(id<JavaTimeTemporalTemporalQuery>)query;

/*!
 @brief Gets the range of valid values for the specified field.
 <p>
  The range object expresses the minimum and maximum valid values for a field.
  This year is used to enhance the accuracy of the returned range.
  If it is not possible to return the range, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>supported fields</code> will return
  appropriate range instances.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.rangeRefinedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the range can be obtained is determined by the field.
 @param field the field to query the range for, not null
 @return the range of valid values for the field, not null
 @throw DateTimeExceptionif the range for the field cannot be obtained
 @throw UnsupportedTemporalTypeExceptionif the field is not supported
 */
- (JavaTimeTemporalValueRange *)rangeWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Outputs this year as a <code>String</code>.
 @return a string representation of this year, not null
 */
- (NSString *)description;

/*!
 @brief Calculates the amount of time until another year in terms of the specified unit.
 <p>
  This calculates the amount of time between two <code>Year</code>
  objects in terms of a single <code>TemporalUnit</code>.
  The start and end points are <code>this</code> and the specified year.
  The result will be negative if the end is before the start. The 
 <code>Temporal</code> passed to this method is converted to a 
 <code>Year</code> using <code>from(TemporalAccessor)</code>.
  For example, the amount in decades between two year can be calculated
  using <code>startYear.until(endYear, DECADES)</code>.
  <p>
  The calculation returns a whole number, representing the number of
  complete units between the two years.
  For example, the amount in decades between 2012 and 2031
  will only be one decade as it is one year short of two decades. 
 <p>
  There are two equivalent ways of using this method.
  The first is to invoke this method.
  The second is to use <code>TemporalUnit.between(Temporal, Temporal)</code>:
  @code

    // these two lines are equivalent
    amount = start.until(end, YEARS);
    amount = YEARS.between(start, end); 
  
@endcode
  The choice should be made based on which makes the code more readable. 
 <p>
  The calculation is implemented in this method for <code>ChronoUnit</code>.
  The units <code>YEARS</code>, <code>DECADES</code>, <code>CENTURIES</code>,
  <code>MILLENNIA</code> and <code>ERAS</code> are supported.
  Other <code>ChronoUnit</code> values will throw an exception. 
 <p>
  If the unit is not a <code>ChronoUnit</code>, then the result of this method
  is obtained by invoking <code>TemporalUnit.between(Temporal, Temporal)</code>
  passing <code>this</code> as the first argument and the converted input temporal
  as the second argument. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param endExclusive the end date, exclusive, which is converted to a <code>Year</code> , not null
 @param unit the unit to measure the amount in, not null
 @return the amount of time between this year and the end year
 @throw DateTimeExceptionif the amount cannot be calculated, or the end
   temporal cannot be converted to a <code>Year</code>
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jlong)untilWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)endExclusive
          withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Returns an adjusted copy of this year.
 <p>
  This returns a <code>Year</code>, based on this one, with the year adjusted.
  The adjustment takes place using the specified adjuster strategy object.
  Read the documentation of the adjuster to understand what adjustment will be made. 
 <p>
  The result of this method is obtained by invoking the 
 <code>TemporalAdjuster.adjustInto(Temporal)</code> method on the
  specified adjuster passing <code>this</code> as the argument. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param adjuster the adjuster to use, not null
 @return a <code>Year</code> based on <code>this</code> with the adjustment made, not null
 @throw DateTimeExceptionif the adjustment cannot be made
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYear *)withWithJavaTimeTemporalTemporalAdjuster:(id<JavaTimeTemporalTemporalAdjuster>)adjuster;

/*!
 @brief Returns a copy of this year with the specified field set to a new value.
 <p>
  This returns a <code>Year</code>, based on this one, with the value
  for the specified field changed.
  If it is not possible to set the value, because the field is not supported or for
  some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the adjustment is implemented here.
  The supported fields behave as follows: 
 <ul>
  <li><code>YEAR_OF_ERA</code> -
   Returns a <code>Year</code> with the specified year-of-era
   The era will be unchanged. 
 <li><code>YEAR</code> -
   Returns a <code>Year</code> with the specified year.
   This completely replaces the date and is equivalent to <code>of(int)</code>.
  <li><code>ERA</code> -
   Returns a <code>Year</code> with the specified era.
   The year-of-era will be unchanged. 
 </ul>
  <p>
  In all cases, if the new value is outside the valid range of values for the field
  then a <code>DateTimeException</code> will be thrown. 
 <p>
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.adjustInto(Temporal, long)</code>
  passing <code>this</code> as the argument. In this case, the field determines
  whether and how to adjust the instant. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param field the field to set in the result, not null
 @param newValue the new value of the field in the result
 @return a <code>Year</code> based on <code>this</code> with the specified field set, not null
 @throw DateTimeExceptionif the field cannot be set
 @throw UnsupportedTemporalTypeExceptionif the field is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYear *)withWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field
                                               withLong:(jlong)newValue;

#pragma mark Package-Private

+ (JavaTimeYear *)readExternalWithJavaIoDataInput:(id<JavaIoDataInput>)inArg;

- (void)writeExternalWithJavaIoDataOutput:(id<JavaIoDataOutput>)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaTimeYear)

/*!
 @brief The minimum supported year, '-999,999,999'.
 */
inline jint JavaTimeYear_get_MIN_VALUE(void);
#define JavaTimeYear_MIN_VALUE -999999999
J2OBJC_STATIC_FIELD_CONSTANT(JavaTimeYear, MIN_VALUE, jint)

/*!
 @brief The maximum supported year, '+999,999,999'.
 */
inline jint JavaTimeYear_get_MAX_VALUE(void);
#define JavaTimeYear_MAX_VALUE 999999999
J2OBJC_STATIC_FIELD_CONSTANT(JavaTimeYear, MAX_VALUE, jint)

FOUNDATION_EXPORT JavaTimeYear *JavaTimeYear_now(void);

FOUNDATION_EXPORT JavaTimeYear *JavaTimeYear_nowWithJavaTimeZoneId_(JavaTimeZoneId *zone);

FOUNDATION_EXPORT JavaTimeYear *JavaTimeYear_nowWithJavaTimeClock_(JavaTimeClock *clock);

FOUNDATION_EXPORT JavaTimeYear *JavaTimeYear_ofWithInt_(jint isoYear);

FOUNDATION_EXPORT JavaTimeYear *JavaTimeYear_fromWithJavaTimeTemporalTemporalAccessor_(id<JavaTimeTemporalTemporalAccessor> temporal);

FOUNDATION_EXPORT JavaTimeYear *JavaTimeYear_parseWithJavaLangCharSequence_(id<JavaLangCharSequence> text);

FOUNDATION_EXPORT JavaTimeYear *JavaTimeYear_parseWithJavaLangCharSequence_withJavaTimeFormatDateTimeFormatter_(id<JavaLangCharSequence> text, JavaTimeFormatDateTimeFormatter *formatter);

FOUNDATION_EXPORT jboolean JavaTimeYear_isLeapWithLong_(jlong year);

FOUNDATION_EXPORT JavaTimeYear *JavaTimeYear_readExternalWithJavaIoDataInput_(id<JavaIoDataInput> inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeYear)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeYear")
