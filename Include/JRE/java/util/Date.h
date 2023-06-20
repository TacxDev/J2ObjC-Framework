//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Date.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilDate")
#ifdef RESTRICT_JavaUtilDate
#define INCLUDE_ALL_JavaUtilDate 0
#else
#define INCLUDE_ALL_JavaUtilDate 1
#endif
#undef RESTRICT_JavaUtilDate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilDate_) && (INCLUDE_ALL_JavaUtilDate || defined(INCLUDE_JavaUtilDate))
#define JavaUtilDate_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief The class <code>Date</code> represents a specific instant
  in time, with millisecond precision.
 <p>
  Prior to JDK&nbsp;1.1, the class <code>Date</code> had two additional
  functions.  It allowed the interpretation of dates as year, month, day, hour,
  minute, and second values.  It also allowed the formatting and parsing
  of date strings.  Unfortunately, the API for these functions was not
  amenable to internationalization.  As of JDK&nbsp;1.1, the 
 <code>Calendar</code> class should be used to convert between dates and time
  fields and the <code>DateFormat</code> class should be used to format and
  parse date strings.
  The corresponding methods in <code>Date</code> are deprecated. 
 <p>
  Although the <code>Date</code> class is intended to reflect
  coordinated universal time (UTC), it may not do so exactly,
  depending on the host environment of the Java Virtual Machine.
  Nearly all modern operating systems assume that 1&nbsp;day&nbsp;=
  24&nbsp;&times;&nbsp;60&nbsp;&times;&nbsp;60&nbsp;= 86400 seconds
  in all cases. In UTC, however, about once every year or two there
  is an extra second, called a "leap second." The leap
  second is always added as the last second of the day, and always
  on December 31 or June 30. For example, the last minute of the
  year 1995 was 61 seconds long, thanks to an added leap second.
  Most computer clocks are not accurate enough to be able to reflect
  the leap-second distinction. 
 <p>
  Some computer standards are defined in terms of Greenwich mean
  time (GMT), which is equivalent to universal time (UT).  GMT is
  the "civil" name for the standard; UT is the
  "scientific" name for the same standard. The
  distinction between UTC and UT is that UTC is based on an atomic
  clock and UT is based on astronomical observations, which for all
  practical purposes is an invisibly fine hair to split. Because the
  earth's rotation is not uniform (it slows down and speeds up
  in complicated ways), UT does not always flow uniformly. Leap
  seconds are introduced as needed into UTC so as to keep UTC within
  0.9 seconds of UT1, which is a version of UT with certain
  corrections applied. There are other time and date systems as
  well; for example, the time scale used by the satellite-based
  global positioning system (GPS) is synchronized to UTC but is 
 <i>not</i> adjusted for leap seconds. An interesting source of
  further information is the United States Naval Observatory (USNO): 
 <blockquote>@code

          <a href="http://www.usno.navy.mil/USNO">http://www.usno.navy.mil/USNO</a>
   
@endcode</blockquote>
  <p>
  and the material regarding "Systems of Time" at: 
 <blockquote>@code

          <a href="http://www.usno.navy.mil/USNO/time/master-clock/systems-of-time">http://www.usno.navy.mil/USNO/time/master-clock/systems-of-time</a>
   
@endcode</blockquote>
  <p>
  which has descriptions of various different time systems including
  UT, UT1, and UTC. 
 <p>
  In all methods of class <code>Date</code> that accept or return
  year, month, date, hours, minutes, and seconds values, the
  following representations are used: 
 <ul>
  <li>A year <i>y</i> is represented by the integer
      <i>y</i>&nbsp;<code>- 1900</code>.
  <li>A month is represented by an integer from 0 to 11; 0 is January,
      1 is February, and so forth; thus 11 is December. 
 <li>A date (day of month) is represented by an integer from 1 to 31
      in the usual manner. 
 <li>An hour is represented by an integer from 0 to 23. Thus, the hour
      from midnight to 1 a.m. is hour 0, and the hour from noon to 1
      p.m. is hour 12. 
 <li>A minute is represented by an integer from 0 to 59 in the usual manner. 
 <li>A second is represented by an integer from 0 to 61; the values 60 and
      61 occur only for leap seconds and even then only in Java
      implementations that actually track leap seconds correctly. Because
      of the manner in which leap seconds are currently introduced, it is
      extremely unlikely that two leap seconds will occur in the same
      minute, but this specification follows the date and time conventions
      for ISO C. 
 </ul>
  <p>
  In all cases, arguments given to methods for these purposes need
  not fall within the indicated ranges; for example, a date may be
  specified as January 32 and is interpreted as meaning February 1.
 @author James Gosling
 @author Arthur van Hoff
 @author Alan Liu
 - seealso: java.text.DateFormat
 - seealso: java.util.Calendar
 - seealso: java.util.TimeZone
 @since 1.0
 */
@interface JavaUtilDate : NSObject < JavaIoSerializable, NSCopying, JavaLangComparable >

#pragma mark Public

/*!
 @brief Allocates a <code>Date</code> object and initializes it so that
  it represents the time at which it was allocated, measured to the
  nearest millisecond.
 - seealso: java.lang.System#currentTimeMillis()
 */
- (instancetype __nonnull)init;

/*!
 @brief Allocates a <code>Date</code> object and initializes it so that
  it represents midnight, local time, at the beginning of the day
  specified by the <code>year</code>, <code>month</code>, and 
 <code>date</code> arguments.
 @param year the year minus 1900.
 @param month the month between 0-11.
 @param date the day of the month between 1-31.
 - seealso: java.util.Calendar
 */
- (instancetype __nonnull)initWithInt:(jint)year
                              withInt:(jint)month
                              withInt:(jint)date;

/*!
 @brief Allocates a <code>Date</code> object and initializes it so that
  it represents the instant at the start of the minute specified by the 
 <code>year</code>, <code>month</code>, <code>date</code>,
  <code>hrs</code>, and <code>min</code> arguments, in the local
  time zone.
 @param year the year minus 1900.
 @param month the month between 0-11.
 @param date the day of the month between 1-31.
 @param hrs the hours between 0-23.
 @param min the minutes between 0-59.
 - seealso: java.util.Calendar
 */
- (instancetype __nonnull)initWithInt:(jint)year
                              withInt:(jint)month
                              withInt:(jint)date
                              withInt:(jint)hrs
                              withInt:(jint)min;

/*!
 @brief Allocates a <code>Date</code> object and initializes it so that
  it represents the instant at the start of the second specified
  by the <code>year</code>, <code>month</code>, <code>date</code>,
  <code>hrs</code>, <code>min</code>, and <code>sec</code> arguments,
  in the local time zone.
 @param year the year minus 1900.
 @param month the month between 0-11.
 @param date the day of the month between 1-31.
 @param hrs the hours between 0-23.
 @param min the minutes between 0-59.
 @param sec the seconds between 0-59.
 - seealso: java.util.Calendar
 */
- (instancetype __nonnull)initWithInt:(jint)year
                              withInt:(jint)month
                              withInt:(jint)date
                              withInt:(jint)hrs
                              withInt:(jint)min
                              withInt:(jint)sec;

/*!
 @brief Allocates a <code>Date</code> object and initializes it to
  represent the specified number of milliseconds since the
  standard base time known as "the epoch", namely January 1,
  1970, 00:00:00 GMT.
 @param date the milliseconds since January 1, 1970, 00:00:00 GMT.
 - seealso: java.lang.System#currentTimeMillis()
 */
- (instancetype __nonnull)initWithLong:(jlong)date;

/*!
 @brief Allocates a <code>Date</code> object and initializes it so that
  it represents the date and time indicated by the string 
 <code>s</code>, which is interpreted as if by the 
 <code>Date.parse</code> method.
 @param s a string representation of the date.
 - seealso: java.text.DateFormat
 - seealso: java.util.Date#parse(java.lang.String)
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Tests if this date is after the specified date.
 @param when a date.
 @return <code>true</code> if and only if the instant represented
           by this <code>Date</code> object is strictly later than the
           instant represented by <code>when</code>;
           <code>false</code> otherwise.
 @throw NullPointerExceptionif <code>when</code> is null.
 */
- (jboolean)afterWithJavaUtilDate:(JavaUtilDate *)when;

/*!
 @brief Tests if this date is before the specified date.
 @param when a date.
 @return <code>true</code> if and only if the instant of time
             represented by this <code>Date</code> object is strictly
             earlier than the instant represented by <code>when</code>;
           <code>false</code> otherwise.
 @throw NullPointerExceptionif <code>when</code> is null.
 */
- (jboolean)beforeWithJavaUtilDate:(JavaUtilDate *)when;

/*!
 @brief Return a copy of this object.
 */
- (id)java_clone;

/*!
 @brief Compares two Dates for ordering.
 @param anotherDate the <code>Date</code>  to be compared.
 @return the value <code>0</code> if the argument Date is equal to
           this Date; a value less than <code>0</code> if this Date
           is before the Date argument; and a value greater than      
 <code>0</code> if this Date is after the Date argument.
 @since 1.2
 @throw NullPointerExceptionif <code>anotherDate</code> is null.
 */
- (jint)compareToWithId:(JavaUtilDate *)anotherDate;

/*!
 @brief Compares two dates for equality.
 The result is <code>true</code> if and only if the argument is
  not <code>null</code> and is a <code>Date</code> object that
  represents the same point in time, to the millisecond, as this object. 
 <p>
  Thus, two <code>Date</code> objects are equal if and only if the 
 <code>getTime</code> method returns the same <code>long</code>
  value for both.
 @param obj the object to compare with.
 @return <code>true</code> if the objects are the same;
           <code>false</code> otherwise.
 - seealso: java.util.Date#getTime()
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the day of the month represented by this <code>Date</code> object.
 The value returned is between <code>1</code> and <code>31</code>
  representing the day of the month that contains or begins with the
  instant in time represented by this <code>Date</code> object, as
  interpreted in the local time zone.
 @return the day of the month represented by this date.
 - seealso: java.util.Calendar
 */
- (jint)getDate;

/*!
 @brief Returns the day of the week represented by this date.The
  returned value (<code>0</code> = Sunday, <code>1</code> = Monday, 
 <code>2</code> = Tuesday, <code>3</code> = Wednesday, <code>4</code> =
  Thursday, <code>5</code> = Friday, <code>6</code> = Saturday)
  represents the day of the week that contains or begins with
  the instant in time represented by this <code>Date</code> object,
  as interpreted in the local time zone.
 @return the day of the week represented by this date.
 - seealso: java.util.Calendar
 */
- (jint)getDay;

/*!
 @brief Returns the hour represented by this <code>Date</code> object.The
  returned value is a number (<code>0</code> through <code>23</code>)
  representing the hour within the day that contains or begins
  with the instant in time represented by this <code>Date</code>
  object, as interpreted in the local time zone.
 @return the hour represented by this date.
 - seealso: java.util.Calendar
 */
- (jint)getHours;

/*!
 @brief Returns the number of minutes past the hour represented by this date,
  as interpreted in the local time zone.
 The value returned is between <code>0</code> and <code>59</code>.
 @return the number of minutes past the hour represented by this date.
 - seealso: java.util.Calendar
 */
- (jint)getMinutes;

/*!
 @brief Returns a number representing the month that contains or begins
  with the instant in time represented by this <code>Date</code> object.
 The value returned is between <code>0</code> and <code>11</code>,
  with the value <code>0</code> representing January.
 @return the month represented by this date.
 - seealso: java.util.Calendar
 */
- (jint)getMonth;

/*!
 @brief Returns the number of seconds past the minute represented by this date.
 The value returned is between <code>0</code> and <code>61</code>. The
  values <code>60</code> and <code>61</code> can only occur on those
  Java Virtual Machines that take leap seconds into account.
 @return the number of seconds past the minute represented by this date.
 - seealso: java.util.Calendar
 */
- (jint)getSeconds;

/*!
 @brief Returns the number of milliseconds since January 1, 1970, 00:00:00 GMT
  represented by this <code>Date</code> object.
 @return the number of milliseconds since January 1, 1970, 00:00:00 GMT
           represented by this date.
 */
- (jlong)getTime;

/*!
 @brief Returns the offset, measured in minutes, for the local time zone
  relative to UTC that is appropriate for the time represented by
  this <code>Date</code> object.
 <p>
  For example, in Massachusetts, five time zones west of Greenwich: 
 <blockquote>@code

  new Date(96, 1, 14).getTimezoneOffset() returns 300
@endcode</blockquote>
  because on February 14, 1996, standard time (Eastern Standard Time)
  is in use, which is offset five hours from UTC; but: 
 <blockquote>@code

  new Date(96, 5, 1).getTimezoneOffset() returns 240
@endcode</blockquote>
  because on June 1, 1996, daylight saving time (Eastern Daylight Time)
  is in use, which is offset only four hours from UTC.<p>
  This method produces the same result as if it computed: 
 <blockquote>@code

  (this.getTime() - UTC(this.getYear(),
                        this.getMonth(),
                        this.getDate(),
                        this.getHours(),
                        this.getMinutes(),
                        this.getSeconds())) / (60 * 1000) 
  
@endcode</blockquote>
 @return the time-zone offset, in minutes, for the current time zone.
 - seealso: java.util.Calendar#ZONE_OFFSET
 - seealso: java.util.Calendar#DST_OFFSET
 - seealso: java.util.TimeZone#getDefault
 */
- (jint)getTimezoneOffset;

/*!
 @brief Returns a value that is the result of subtracting 1900 from the
  year that contains or begins with the instant in time represented
  by this <code>Date</code> object, as interpreted in the local
  time zone.
 @return the year represented by this date, minus 1900.
 - seealso: java.util.Calendar
 */
- (jint)getYear;

/*!
 @brief Returns a hash code value for this object.The result is the
  exclusive OR of the two halves of the primitive <code>long</code>
  value returned by the <code>Date.getTime</code>
  method.
 That is, the hash code is the value of the expression: 
 <blockquote>@code
 (int)(this.getTime()^(this.getTime() >>> 32)) 
 
@endcode</blockquote>
 @return a hash code value for this object.
 */
- (NSUInteger)hash;

/*!
 @brief Attempts to interpret the string <code>s</code> as a representation
  of a date and time.If the attempt is successful, the time
  indicated is returned represented as the distance, measured in
  milliseconds, of that time from the epoch (00:00:00 GMT on
  January 1, 1970).
 If the attempt fails, an 
 <code>IllegalArgumentException</code> is thrown. 
 <p>
  It accepts many syntaxes; in particular, it recognizes the IETF
  standard date syntax: "Sat, 12 Aug 1995 13:30:00 GMT". It also
  understands the continental U.S. time-zone abbreviations, but for
  general use, a time-zone offset should be used: "Sat, 12 Aug 1995
  13:30:00 GMT+0430" (4 hours, 30 minutes west of the Greenwich
  meridian). If no time zone is specified, the local time zone is
  assumed. GMT and UTC are considered equivalent. 
 <p>
  The string <code>s</code> is processed from left to right, looking for
  data of interest. Any material in <code>s</code> that is within the
  ASCII parenthesis characters <code>(</code> and <code>)</code> is ignored.
  Parentheses may be nested. Otherwise, the only characters permitted
  within <code>s</code> are these ASCII characters: 
 <blockquote>@code

  abcdefghijklmnopqrstuvwxyz
  ABCDEFGHIJKLMNOPQRSTUVWXYZ
  0123456789,+-:/
@endcode</blockquote>
  and whitespace characters.<p>
  A consecutive sequence of decimal digits is treated as a decimal
  number:<ul>
  <li>If a number is preceded by <code>+</code> or <code>-</code> and a year
      has already been recognized, then the number is a time-zone
      offset. If the number is less than 24, it is an offset measured
      in hours. Otherwise, it is regarded as an offset in minutes,
      expressed in 24-hour time format without punctuation. A
      preceding <code>-</code> means a westward offset. Time zone offsets
      are always relative to UTC (Greenwich). Thus, for example,     
 <code>-5</code> occurring in the string would mean "five hours west
      of Greenwich" and <code>+0430</code> would mean "four hours and
      thirty minutes east of Greenwich." It is permitted for the
      string to specify <code>GMT</code>, <code>UT</code>, or <code>UTC</code>
      redundantly-for example, <code>GMT-5</code> or <code>utc+0430</code>.
  <li>The number is regarded as a year number if one of the
      following conditions is true: 
 <ul>
      <li>The number is equal to or greater than 70 and followed by a
          space, comma, slash, or end of string     
 <li>The number is less than 70, and both a month and a day of
          the month have already been recognized</li>
  </ul>
      If the recognized year number is less than 100, it is
      interpreted as an abbreviated year relative to a century of
      which dates are within 80 years before and 19 years after
      the time when the Date class is initialized.
      After adjusting the year number, 1900 is subtracted from
      it. For example, if the current year is 1999 then years in
      the range 19 to 99 are assumed to mean 1919 to 1999, while
      years from 0 to 18 are assumed to mean 2000 to 2018.  Note
      that this is slightly different from the interpretation of
      years less than 100 that is used in <code>java.text.SimpleDateFormat</code>.
  <li>If the number is followed by a colon, it is regarded as an hour,
      unless an hour has already been recognized, in which case it is
      regarded as a minute. 
 <li>If the number is followed by a slash, it is regarded as a month
      (it is decreased by 1 to produce a number in the range <code>0</code>
      to <code>11</code>), unless a month has already been recognized, in
      which case it is regarded as a day of the month. 
 <li>If the number is followed by whitespace, a comma, a hyphen, or
      end of string, then if an hour has been recognized but not a
      minute, it is regarded as a minute; otherwise, if a minute has
      been recognized but not a second, it is regarded as a second;
      otherwise, it is regarded as a day of the month. </ul><p>
  A consecutive sequence of letters is regarded as a word and treated
  as follows:<ul>
  <li>A word that matches <code>AM</code>, ignoring case, is ignored (but
      the parse fails if an hour has not been recognized or is less
      than <code>1</code> or greater than <code>12</code>).
  <li>A word that matches <code>PM</code>, ignoring case, adds <code>12</code>
      to the hour (but the parse fails if an hour has not been
      recognized or is less than <code>1</code> or greater than <code>12</code>).
  <li>Any word that matches any prefix of <code>SUNDAY, MONDAY, TUESDAY,
      WEDNESDAY, THURSDAY, FRIDAY</code>
 , or <code>SATURDAY</code>, ignoring
      case, is ignored. For example, <code>sat, Friday, TUE</code>, and
      <code>Thurs</code> are ignored. 
 <li>Otherwise, any word that matches any prefix of <code>JANUARY,
      FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER,
      OCTOBER, NOVEMBER</code>
 , or <code>DECEMBER</code>, ignoring case, and
      considering them in the order given here, is recognized as
      specifying a month and is converted to a number (<code>0</code> to
      <code>11</code>). For example, <code>aug, Sept, april</code>, and
      <code>NOV</code> are recognized as months. So is <code>Ma</code>, which
      is recognized as <code>MARCH</code>, not <code>MAY</code>.
  <li>Any word that matches <code>GMT, UT</code>, or <code>UTC</code>, ignoring
      case, is treated as referring to UTC. 
 <li>Any word that matches <code>EST, CST, MST</code>, or <code>PST</code>,
      ignoring case, is recognized as referring to the time zone in
      North America that is five, six, seven, or eight hours west of
      Greenwich, respectively. Any word that matches <code>EDT, CDT,
      MDT</code>
 , or <code>PDT</code>, ignoring case, is recognized as
      referring to the same time zone, respectively, during daylight
      saving time.</ul><p>
  Once the entire string s has been scanned, it is converted to a time
  result in one of two ways. If a time zone or time-zone offset has been
  recognized, then the year, month, day of month, hour, minute, and
  second are interpreted in UTC and then the time-zone offset is
  applied. Otherwise, the year, month, day of month, hour, minute, and
  second are interpreted in the local time zone.
 @param s a string to be parsed as a date.
 @return the number of milliseconds since January 1, 1970, 00:00:00 GMT
           represented by the string argument.
 - seealso: java.text.DateFormat
 */
+ (jlong)parseWithNSString:(NSString *)s;

/*!
 @brief Sets the day of the month of this <code>Date</code> object to the
  specified value.This <code>Date</code> object is modified so that
  it represents a point in time within the specified day of the
  month, with the year, month, hour, minute, and second the same
  as before, as interpreted in the local time zone.
 If the date
  was April 30, for example, and the date is set to 31, then it
  will be treated as if it were on May 1, because April has only
  30 days.
 @param date the day of the month value between 1-31.
 - seealso: java.util.Calendar
 */
- (void)setDateWithInt:(jint)date;

/*!
 @brief Sets the hour of this <code>Date</code> object to the specified value.
 This <code>Date</code> object is modified so that it represents a point
  in time within the specified hour of the day, with the year, month,
  date, minute, and second the same as before, as interpreted in the
  local time zone.
 @param hours the hour value.
 - seealso: java.util.Calendar
 */
- (void)setHoursWithInt:(jint)hours;

/*!
 @brief Sets the minutes of this <code>Date</code> object to the specified value.
 This <code>Date</code> object is modified so that it represents a point
  in time within the specified minute of the hour, with the year, month,
  date, hour, and second the same as before, as interpreted in the
  local time zone.
 @param minutes the value of the minutes.
 - seealso: java.util.Calendar
 */
- (void)setMinutesWithInt:(jint)minutes;

/*!
 @brief Sets the month of this date to the specified value.This
  <code>Date</code> object is modified so that it represents a point
  in time within the specified month, with the year, date, hour,
  minute, and second the same as before, as interpreted in the
  local time zone.
 If the date was October 31, for example, and
  the month is set to June, then the new date will be treated as
  if it were on July 1, because June has only 30 days.
 @param month the month value between 0-11.
 - seealso: java.util.Calendar
 */
- (void)setMonthWithInt:(jint)month;

/*!
 @brief Sets the seconds of this <code>Date</code> to the specified value.
 This <code>Date</code> object is modified so that it represents a
  point in time within the specified second of the minute, with
  the year, month, date, hour, and minute the same as before, as
  interpreted in the local time zone.
 @param seconds the seconds value.
 - seealso: java.util.Calendar
 */
- (void)setSecondsWithInt:(jint)seconds;

/*!
 @brief Sets this <code>Date</code> object to represent a point in time that is 
 <code>time</code> milliseconds after January 1, 1970 00:00:00 GMT.
 @param time the number of milliseconds.
 */
- (void)setTimeWithLong:(jlong)time;

/*!
 @brief Sets the year of this <code>Date</code> object to be the specified
  value plus 1900.This <code>Date</code> object is modified so
  that it represents a point in time within the specified year,
  with the month, date, hour, minute, and second the same as
  before, as interpreted in the local time zone.
 (Of course, if
  the date was February 29, for example, and the year is set to a
  non-leap year, then the new date will be treated as if it were
  on March 1.)
 @param year the year value.
 - seealso: java.util.Calendar
 */
- (void)setYearWithInt:(jint)year;

/*!
 @brief Creates a string representation of this <code>Date</code> object of
  the form: 
 <blockquote>@code

  d mon yyyy hh:mm:ss GMT
@endcode</blockquote>
  where:<ul>
  <li><i>d</i> is the day of the month (<code>1</code> through <code>31</code>),
      as one or two decimal digits.
 <li><i>mon</i> is the month (<code>Jan, Feb, Mar, Apr, May, Jun, Jul,
      Aug, Sep, Oct, Nov, Dec</code>
 ).
  <li><i>yyyy</i> is the year, as four decimal digits. 
 <li><i>hh</i> is the hour of the day (<code>00</code> through <code>23</code>),
      as two decimal digits. 
 <li><i>mm</i> is the minute within the hour (<code>00</code> through
      <code>59</code>), as two decimal digits. 
 <li><i>ss</i> is the second within the minute (<code>00</code> through
      <code>61</code>), as two decimal digits. 
 <li><i>GMT</i> is exactly the ASCII letters "<code>GMT</code>" to indicate
      Greenwich Mean Time. 
 </ul><p>
  The result does not depend on the local time zone.
 @return a string representation of this date, using the Internet GMT
           conventions.
 - seealso: java.text.DateFormat
 - seealso: java.util.Date#toString()
 - seealso: java.util.Date#toLocaleString()
 */
- (NSString *)toGMTString;

/*!
 @brief Creates a string representation of this <code>Date</code> object in an
  implementation-dependent form.The intent is that the form should
  be familiar to the user of the Java application, wherever it may
  happen to be running.
 The intent is comparable to that of the
  "<code>%c</code>" format supported by the <code>strftime()</code>
  function of ISO&nbsp;C.
 @return a string representation of this date, using the locale
           conventions.
 - seealso: java.text.DateFormat
 - seealso: java.util.Date#toString()
 - seealso: java.util.Date#toGMTString()
 */
- (NSString *)toLocaleString;

/*!
 @brief Converts this <code>Date</code> object to a <code>String</code>
  of the form: 
 <blockquote>@code

  dow mon dd hh:mm:ss zzz yyyy
@endcode</blockquote>
  where:<ul>
  <li><code>dow</code> is the day of the week (<code>Sun, Mon, Tue, Wed,
      Thu, Fri, Sat</code>
 ).
 <li><code>mon</code> is the month (<code>Jan, Feb, Mar, Apr, May, Jun,
      Jul, Aug, Sep, Oct, Nov, Dec</code>
 ).
  <li><code>dd</code> is the day of the month (<code>01</code> through
      <code>31</code>), as two decimal digits. 
 <li><code>hh</code> is the hour of the day (<code>00</code> through
      <code>23</code>), as two decimal digits. 
 <li><code>mm</code> is the minute within the hour (<code>00</code> through
      <code>59</code>), as two decimal digits. 
 <li><code>ss</code> is the second within the minute (<code>00</code> through
      <code>61</code>, as two decimal digits. 
 <li><code>zzz</code> is the time zone (and may reflect daylight saving
      time). Standard time zone abbreviations include those
      recognized by the method <code>parse</code>. If time zone
      information is not available, then <code>zzz</code> is empty -
      that is, it consists of no characters at all. 
 <li><code>yyyy</code> is the year, as four decimal digits. 
 </ul>
 @return a string representation of this date.
 - seealso: java.util.Date#toLocaleString()
 - seealso: java.util.Date#toGMTString()
 */
- (NSString *)description;

/*!
 @brief Determines the date and time based on the arguments.The
  arguments are interpreted as a year, month, day of the month,
  hour of the day, minute within the hour, and second within the
  minute, exactly as for the <code>Date</code> constructor with six
  arguments, except that the arguments are interpreted relative
  to UTC rather than to the local time zone.
 The time indicated is
  returned represented as the distance, measured in milliseconds,
  of that time from the epoch (00:00:00 GMT on January 1, 1970).
 @param year the year minus 1900.
 @param month the month between 0-11.
 @param date the day of the month between 1-31.
 @param hrs the hours between 0-23.
 @param min the minutes between 0-59.
 @param sec the seconds between 0-59.
 @return the number of milliseconds since January 1, 1970, 00:00:00 GMT for
           the date and time specified by the arguments.
 - seealso: java.util.Calendar
 */
+ (jlong)UTCWithInt:(jint)year
            withInt:(jint)month
            withInt:(jint)date
            withInt:(jint)hrs
            withInt:(jint)min
            withInt:(jint)sec;

#pragma mark Package-Private

/*!
 @brief Returns the millisecond value of this <code>Date</code> object
  without affecting its internal state.
 */
+ (jlong)getMillisOfWithJavaUtilDate:(JavaUtilDate *)date;

@end

J2OBJC_STATIC_INIT(JavaUtilDate)

FOUNDATION_EXPORT void JavaUtilDate_init(JavaUtilDate *self);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilDate *create_JavaUtilDate_init(void);

FOUNDATION_EXPORT void JavaUtilDate_initWithLong_(JavaUtilDate *self, jlong date);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithLong_(jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilDate *create_JavaUtilDate_initWithLong_(jlong date);

FOUNDATION_EXPORT void JavaUtilDate_initWithInt_withInt_withInt_(JavaUtilDate *self, jint year, jint month, jint date);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithInt_withInt_withInt_(jint year, jint month, jint date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilDate *create_JavaUtilDate_initWithInt_withInt_withInt_(jint year, jint month, jint date);

FOUNDATION_EXPORT void JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_(JavaUtilDate *self, jint year, jint month, jint date, jint hrs, jint min);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hrs, jint min) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilDate *create_JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hrs, jint min);

FOUNDATION_EXPORT void JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_withInt_(JavaUtilDate *self, jint year, jint month, jint date, jint hrs, jint min, jint sec);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hrs, jint min, jint sec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilDate *create_JavaUtilDate_initWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hrs, jint min, jint sec);

FOUNDATION_EXPORT void JavaUtilDate_initWithNSString_(JavaUtilDate *self, NSString *s);

FOUNDATION_EXPORT JavaUtilDate *new_JavaUtilDate_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilDate *create_JavaUtilDate_initWithNSString_(NSString *s);

FOUNDATION_EXPORT jlong JavaUtilDate_UTCWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hrs, jint min, jint sec);

FOUNDATION_EXPORT jlong JavaUtilDate_parseWithNSString_(NSString *s);

FOUNDATION_EXPORT jlong JavaUtilDate_getMillisOfWithJavaUtilDate_(JavaUtilDate *date);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilDate")
