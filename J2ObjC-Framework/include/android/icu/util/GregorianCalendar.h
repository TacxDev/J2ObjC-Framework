//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/util/GregorianCalendar.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuUtilGregorianCalendar")
#ifdef RESTRICT_AndroidIcuUtilGregorianCalendar
#define INCLUDE_ALL_AndroidIcuUtilGregorianCalendar 0
#else
#define INCLUDE_ALL_AndroidIcuUtilGregorianCalendar 1
#endif
#undef RESTRICT_AndroidIcuUtilGregorianCalendar

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuUtilGregorianCalendar_) && (INCLUDE_ALL_AndroidIcuUtilGregorianCalendar || defined(INCLUDE_AndroidIcuUtilGregorianCalendar))
#define AndroidIcuUtilGregorianCalendar_

#define RESTRICT_AndroidIcuUtilCalendar 1
#define INCLUDE_AndroidIcuUtilCalendar 1
#include "android/icu/util/Calendar.h"

@class AndroidIcuUtilTimeZone;
@class AndroidIcuUtilULocale;
@class JavaUtilDate;
@class JavaUtilLocale;

/*!
 @brief <strong>[icu enhancement]</strong> ICU's replacement for <code>java.util.GregorianCalendar</code>.
 &nbsp;Methods, fields, and other functionality specific to ICU are labeled '<strong>[icu]</strong>'.
 <p><code>GregorianCalendar</code> is a concrete subclass of 
 <code>Calendar</code>
  and provides the standard calendar used by most of the world. 
 <p>The standard (Gregorian) calendar has 2 eras, BC and AD. 
 <p>This implementation handles a single discontinuity, which corresponds by
  default to the date the Gregorian calendar was instituted (October 15, 1582
  in some countries, later in others).  The cutover date may be changed by the
  caller by calling <code>setGregorianChange()</code>.
  
 <p>Historically, in those countries which adopted the Gregorian calendar first,
  October 4, 1582 was thus followed by October 15, 1582. This calendar models
  this correctly.  Before the Gregorian cutover, <code>GregorianCalendar</code>
  implements the Julian calendar.  The only difference between the Gregorian
  and the Julian calendar is the leap year rule. The Julian calendar specifies
  leap years every four years, whereas the Gregorian calendar omits century
  years which are not divisible by 400. 
 <p><code>GregorianCalendar</code> implements <em>proleptic</em> Gregorian and
  Julian calendars. That is, dates are computed by extrapolating the current
  rules indefinitely far backward and forward in time. As a result, 
 <code>GregorianCalendar</code> may be used for all years to generate
  meaningful and consistent results. However, dates obtained using 
 <code>GregorianCalendar</code> are historically accurate only from March 1, 4
  AD onward, when modern Julian calendar rules were adopted.  Before this date,
  leap year rules were applied irregularly, and before 45 BC the Julian
  calendar did not even exist. 
 <p>Prior to the institution of the Gregorian calendar, New Year's Day was
  March 25. To avoid confusion, this calendar always uses January 1. A manual
  adjustment may be made if desired for dates that are prior to the Gregorian
  changeover and which fall between January 1 and March 24. 
 <p>Values calculated for the <code>WEEK_OF_YEAR</code> field range from 1 to
  53.  Week 1 for a year is the earliest seven day period starting on 
 <code>getFirstDayOfWeek()</code> that contains at least 
 <code>getMinimalDaysInFirstWeek()</code> days from that year.  It thus
  depends on the values of <code>getMinimalDaysInFirstWeek()</code>,
  <code>getFirstDayOfWeek()</code>, and the day of the week of January 1.
  Weeks between week 1 of one year and week 1 of the following year are
  numbered sequentially from 2 to 52 or 53 (as needed). 
 <p>For example, January 1, 1998 was a Thursday.  If 
 <code>getFirstDayOfWeek()</code> is <code>MONDAY</code> and 
 <code>getMinimalDaysInFirstWeek()</code> is 4 (these are the values
  reflecting ISO 8601 and many national standards), then week 1 of 1998 starts
  on December 29, 1997, and ends on January 4, 1998.  If, however, 
 <code>getFirstDayOfWeek()</code> is <code>SUNDAY</code>, then week 1 of 1998
  starts on January 4, 1998, and ends on January 10, 1998; the first three days
  of 1998 then are part of week 53 of 1997. 
 <p>Values calculated for the <code>WEEK_OF_MONTH</code> field range from 0 or
  1 to 4 or 5.  Week 1 of a month (the days with <code>WEEK_OF_MONTH =
  1</code>) is the earliest set of at least 
 <code>getMinimalDaysInFirstWeek()</code> contiguous days in that month,
  ending on the day before <code>getFirstDayOfWeek()</code>.  Unlike
  week 1 of a year, week 1 of a month may be shorter than 7 days, need
  not start on <code>getFirstDayOfWeek()</code>, and will not include days of
  the previous month.  Days of a month before week 1 have a 
 <code>WEEK_OF_MONTH</code> of 0. 
 <p>For example, if <code>getFirstDayOfWeek()</code> is <code>SUNDAY</code>
  and <code>getMinimalDaysInFirstWeek()</code> is 4, then the first week of
  January 1998 is Sunday, January 4 through Saturday, January 10.  These days
  have a <code>WEEK_OF_MONTH</code> of 1.  Thursday, January 1 through
  Saturday, January 3 have a <code>WEEK_OF_MONTH</code> of 0.  If 
 <code>getMinimalDaysInFirstWeek()</code> is changed to 3, then January 1
  through January 3 have a <code>WEEK_OF_MONTH</code> of 1. 
 <p>
  <strong>Example:</strong>
  <blockquote>
  @code

  // get the supported ids for GMT-08:00 (Pacific Standard Time)
  String[] ids = TimeZone.getAvailableIDs(-8 * 60 * 60 * 1000);
  // if no ids were returned, something is wrong. get out.
  if (ids.length == 0)
      System.exit(0);
   // begin output
  System.out.println("Current Time");
  // create a Pacific Standard Time time zone
  SimpleTimeZone pdt = new SimpleTimeZone(-8 * 60 * 60 * 1000, ids[0]);
  // set up rules for daylight savings time
  pdt.setStartRule(Calendar.MARCH, 2, Calendar.SUNDAY, 2 * 60 * 60 * 1000);
  pdt.setEndRule(Calendar.NOVEMBER, 1, Calendar.SUNDAY, 2 * 60 * 60 * 1000);
  // create a GregorianCalendar with the Pacific Daylight time zone
  // and the current date and time
  Calendar calendar = new GregorianCalendar(pdt);
  Date trialTime = new Date();
  calendar.setTime(trialTime);
  // print out a bunch of interesting things
  System.out.println("ERA: " + calendar.get(Calendar.ERA));
  System.out.println("YEAR: " + calendar.get(Calendar.YEAR));
  System.out.println("MONTH: " + calendar.get(Calendar.MONTH));
  System.out.println("WEEK_OF_YEAR: " + calendar.get(Calendar.WEEK_OF_YEAR));
  System.out.println("WEEK_OF_MONTH: " + calendar.get(Calendar.WEEK_OF_MONTH));
  System.out.println("DATE: " + calendar.get(Calendar.DATE));
  System.out.println("DAY_OF_MONTH: " + calendar.get(Calendar.DAY_OF_MONTH));
  System.out.println("DAY_OF_YEAR: " + calendar.get(Calendar.DAY_OF_YEAR));
  System.out.println("DAY_OF_WEEK: " + calendar.get(Calendar.DAY_OF_WEEK));
  System.out.println("DAY_OF_WEEK_IN_MONTH: "
                     + calendar.get(Calendar.DAY_OF_WEEK_IN_MONTH));
  System.out.println("AM_PM: " + calendar.get(Calendar.AM_PM));
  System.out.println("HOUR: " + calendar.get(Calendar.HOUR));
  System.out.println("HOUR_OF_DAY: " + calendar.get(Calendar.HOUR_OF_DAY));
  System.out.println("MINUTE: " + calendar.get(Calendar.MINUTE));
  System.out.println("SECOND: " + calendar.get(Calendar.SECOND));
  System.out.println("MILLISECOND: " + calendar.get(Calendar.MILLISECOND));
  System.out.println("ZONE_OFFSET: "
                     + (calendar.get(Calendar.ZONE_OFFSET)/(60*60*1000)));
  System.out.println("DST_OFFSET: "
                     + (calendar.get(Calendar.DST_OFFSET)/(60*60*1000)));
  System.out.println("Current Time, with hour reset to 3");
  calendar.clear(Calendar.HOUR_OF_DAY); // so doesn't override
  calendar.set(Calendar.HOUR, 3);
  System.out.println("ERA: " + calendar.get(Calendar.ERA));
  System.out.println("YEAR: " + calendar.get(Calendar.YEAR));
  System.out.println("MONTH: " + calendar.get(Calendar.MONTH));
  System.out.println("WEEK_OF_YEAR: " + calendar.get(Calendar.WEEK_OF_YEAR));
  System.out.println("WEEK_OF_MONTH: " + calendar.get(Calendar.WEEK_OF_MONTH));
  System.out.println("DATE: " + calendar.get(Calendar.DATE));
  System.out.println("DAY_OF_MONTH: " + calendar.get(Calendar.DAY_OF_MONTH));
  System.out.println("DAY_OF_YEAR: " + calendar.get(Calendar.DAY_OF_YEAR));
  System.out.println("DAY_OF_WEEK: " + calendar.get(Calendar.DAY_OF_WEEK));
  System.out.println("DAY_OF_WEEK_IN_MONTH: "
                     + calendar.get(Calendar.DAY_OF_WEEK_IN_MONTH));
  System.out.println("AM_PM: " + calendar.get(Calendar.AM_PM));
  System.out.println("HOUR: " + calendar.get(Calendar.HOUR));
  System.out.println("HOUR_OF_DAY: " + calendar.get(Calendar.HOUR_OF_DAY));
  System.out.println("MINUTE: " + calendar.get(Calendar.MINUTE));
  System.out.println("SECOND: " + calendar.get(Calendar.SECOND));
  System.out.println("MILLISECOND: " + calendar.get(Calendar.MILLISECOND));
  System.out.println("ZONE_OFFSET: "
         + (calendar.get(Calendar.ZONE_OFFSET)/(60*60*1000))); // in hours
  System.out.println("DST_OFFSET: "
         + (calendar.get(Calendar.DST_OFFSET)/(60*60*1000))); // in hours
@endcode
  </blockquote>
  <p>
  GregorianCalendar usually should be instantiated using  
 <code>android.icu.util.Calendar.getInstance(ULocale)</code> passing in a <code>ULocale</code>
  with the tag <code>"@@calendar=gregorian"</code>.</p>
 - seealso: Calendar
 - seealso: TimeZone
 @author Deborah Goldsmith, Mark Davis, Chen-Lieh Huang, Alan Liu
 */
@interface AndroidIcuUtilGregorianCalendar : AndroidIcuUtilCalendar {
 @public
  /*!
   @brief Used by handleComputeJulianDay() and handleComputeMonthStart().
   */
  jboolean isGregorian_;
  /*!
   @brief Used by handleComputeJulianDay() and handleComputeMonthStart().
   */
  jboolean invertGregorian_;
}
@property (readonly, class) jint BC NS_SWIFT_NAME(BC);
@property (readonly, class) jint AD NS_SWIFT_NAME(AD);

+ (jint)BC;

+ (jint)AD;

#pragma mark Public

/*!
 @brief Constructs a default GregorianCalendar using the current time
  in the default time zone with the default <code>FORMAT</code> locale.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a GregorianCalendar with the given date set
  in the default time zone with the default <code>FORMAT</code> locale.
 @param year the value used to set the YEAR time field in the calendar.
 @param month the value used to set the MONTH time field in the calendar.  Month value is 0-based. e.g., 0 for January.
 @param date the value used to set the DATE time field in the calendar.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithInt:(jint)year
                              withInt:(jint)month
                              withInt:(jint)date;

/*!
 @brief Constructs a GregorianCalendar with the given date
  and time set for the default time zone with the default <code>FORMAT</code> locale.
 @param year the value used to set the YEAR time field in the calendar.
 @param month the value used to set the MONTH time field in the calendar.  Month value is 0-based. e.g., 0 for January.
 @param date the value used to set the DATE time field in the calendar.
 @param hour the value used to set the HOUR_OF_DAY time field  in the calendar.
 @param minute the value used to set the MINUTE time field  in the calendar.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithInt:(jint)year
                              withInt:(jint)month
                              withInt:(jint)date
                              withInt:(jint)hour
                              withInt:(jint)minute;

/*!
 @brief Constructs a GregorianCalendar with the given date
  and time set for the default time zone with the default <code>FORMAT</code> locale.
 @param year the value used to set the YEAR time field in the calendar.
 @param month the value used to set the MONTH time field in the calendar.  Month value is 0-based. e.g., 0 for January.
 @param date the value used to set the DATE time field in the calendar.
 @param hour the value used to set the HOUR_OF_DAY time field  in the calendar.
 @param minute the value used to set the MINUTE time field  in the calendar.
 @param second the value used to set the SECOND time field  in the calendar.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithInt:(jint)year
                              withInt:(jint)month
                              withInt:(jint)date
                              withInt:(jint)hour
                              withInt:(jint)minute
                              withInt:(jint)second;

/*!
 @brief Constructs a GregorianCalendar based on the current time
  in the default time zone with the given locale.
 @param aLocale the given locale.
 */
- (instancetype __nonnull)initWithJavaUtilLocale:(JavaUtilLocale *)aLocale;

/*!
 @brief Constructs a GregorianCalendar based on the current time
  in the given time zone with the default <code>FORMAT</code> locale.
 @param zone the given time zone.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithAndroidIcuUtilTimeZone:(AndroidIcuUtilTimeZone *)zone;

/*!
 @brief <strong>[icu]</strong> Constructs a GregorianCalendar based on the current time
  in the given time zone with the given locale.
 @param zone the given time zone.
 @param aLocale the given locale.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilTimeZone:(AndroidIcuUtilTimeZone *)zone
                                      withJavaUtilLocale:(JavaUtilLocale *)aLocale;

/*!
 @brief Constructs a GregorianCalendar based on the current time
  in the given time zone with the given locale.
 @param zone the given time zone.
 @param locale the given ulocale.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilTimeZone:(AndroidIcuUtilTimeZone *)zone
                               withAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale;

/*!
 @brief <strong>[icu]</strong> Constructs a GregorianCalendar based on the current time
  in the default time zone with the given locale.
 @param locale the given ulocale.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale;

/*!
 @brief Return the maximum value that this field could have, given the current date.
 For example, with the date "Feb 3, 1997" and the DAY_OF_MONTH field, the actual
  maximum would be 28; for "Feb 3, 1996" it s 29.  Similarly for a Hebrew calendar,
  for some years the actual maximum for MONTH is 12, and for others 13.
 */
- (jint)getActualMaximumWithInt:(jint)field;

/*!
 @brief Return the minimum value that this field could have, given the current date.
 For the Gregorian calendar, this is the same as getMinimum() and getGreatestMinimum().
 */
- (jint)getActualMinimumWithInt:(jint)field;

/*!
 @brief Gets the Gregorian Calendar change date.This is the point when the
  switch from Julian dates to Gregorian dates occurred.
 Default is
  October 15, 1582. Previous to this, dates will be in the Julian
  calendar.
 @return the Gregorian cutover date for this calendar.
 */
- (JavaUtilDate *)getGregorianChange;

/*!
 */
- (NSString *)getType;

/*!
 @brief Override hashCode.
 Generates the hash code for the GregorianCalendar object
 */
- (NSUInteger)hash;

/*!
 @brief Returns true if the given Calendar object is equivalent to this
  one.Calendar override.
 @param other the Calendar to be compared with this Calendar
 */
- (jboolean)isEquivalentToWithAndroidIcuUtilCalendar:(AndroidIcuUtilCalendar *)other;

/*!
 @brief Determines if the given year is a leap year.Returns true if the
  given year is a leap year.
 @param year the given year.
 @return true if the given year is a leap year; false otherwise.
 */
- (jboolean)isLeapYearWithInt:(jint)year;

/*!
 @brief Roll a field by a signed amount.
 */
- (void)rollWithInt:(jint)field
            withInt:(jint)amount;

/*!
 @brief Sets the GregorianCalendar change date.This is the point when the switch
  from Julian dates to Gregorian dates occurred.
 Default is October 15,
  1582. Previous to this, dates will be in the Julian calendar. 
 <p>
  To obtain a pure Julian calendar, set the change date to 
 <code>Date(Long.MAX_VALUE)</code>.  To obtain a pure Gregorian calendar,
  set the change date to <code>Date(Long.MIN_VALUE)</code>.
 @param date the given Gregorian cutover date.
 */
- (void)setGregorianChangeWithJavaUtilDate:(JavaUtilDate *)date;

#pragma mark Protected

/*!
 @brief Override Calendar to compute several fields specific to the hybrid
  Gregorian-Julian calendar system.These are: 
 <ul><li>ERA
  <li>YEAR
  <li>MONTH
  <li>DAY_OF_MONTH
  <li>DAY_OF_YEAR
  <li>EXTENDED_YEAR</ul>
 */
- (void)handleComputeFieldsWithInt:(jint)julianDay;

/*!
 */
- (jint)handleComputeJulianDayWithInt:(jint)bestField;

/*!
 @brief Return JD of start of given month/year
 */
- (jint)handleComputeMonthStartWithInt:(jint)eyear
                               withInt:(jint)month
                           withBoolean:(jboolean)useMonth;

/*!
 */
- (jint)handleGetExtendedYear;

/*!
 */
- (jint)handleGetLimitWithInt:(jint)field
                      withInt:(jint)limitType;

/*!
 */
- (jint)handleGetMonthLengthWithInt:(jint)extendedYear
                            withInt:(jint)month;

/*!
 */
- (jint)handleGetYearLengthWithInt:(jint)eyear;

#pragma mark Package-Private

/*!
 @brief Return true if the current time for this Calendar is in Daylignt
  Savings Time.
 */
- (jboolean)inDaylightTime;

@end

J2OBJC_STATIC_INIT(AndroidIcuUtilGregorianCalendar)

/*!
 @brief Value of the <code>ERA</code> field indicating
  the period before the common era (before Christ), also known as BCE.
 The sequence of years at the transition from <code>BC</code> to <code>AD</code> is
  ..., 2 BC, 1 BC, 1 AD, 2 AD,...
 - seealso: Calendar#ERA
 */
inline jint AndroidIcuUtilGregorianCalendar_get_BC(void);
#define AndroidIcuUtilGregorianCalendar_BC 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilGregorianCalendar, BC, jint)

/*!
 @brief Value of the <code>ERA</code> field indicating
  the common era (Anno Domini), also known as CE.
 The sequence of years at the transition from <code>BC</code> to <code>AD</code> is
  ..., 2 BC, 1 BC, 1 AD, 2 AD,...
 - seealso: Calendar#ERA
 */
inline jint AndroidIcuUtilGregorianCalendar_get_AD(void);
#define AndroidIcuUtilGregorianCalendar_AD 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilGregorianCalendar, AD, jint)

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_init(AndroidIcuUtilGregorianCalendar *self);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_init(void);

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_(AndroidIcuUtilGregorianCalendar *self, AndroidIcuUtilTimeZone *zone);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_(AndroidIcuUtilTimeZone *zone) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_(AndroidIcuUtilTimeZone *zone);

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_initWithJavaUtilLocale_(AndroidIcuUtilGregorianCalendar *self, JavaUtilLocale *aLocale);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_initWithJavaUtilLocale_(JavaUtilLocale *aLocale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_initWithJavaUtilLocale_(JavaUtilLocale *aLocale);

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilULocale_(AndroidIcuUtilGregorianCalendar *self, AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_withJavaUtilLocale_(AndroidIcuUtilGregorianCalendar *self, AndroidIcuUtilTimeZone *zone, JavaUtilLocale *aLocale);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_withJavaUtilLocale_(AndroidIcuUtilTimeZone *zone, JavaUtilLocale *aLocale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_withJavaUtilLocale_(AndroidIcuUtilTimeZone *zone, JavaUtilLocale *aLocale);

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_withAndroidIcuUtilULocale_(AndroidIcuUtilGregorianCalendar *self, AndroidIcuUtilTimeZone *zone, AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_withAndroidIcuUtilULocale_(AndroidIcuUtilTimeZone *zone, AndroidIcuUtilULocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_initWithAndroidIcuUtilTimeZone_withAndroidIcuUtilULocale_(AndroidIcuUtilTimeZone *zone, AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_(AndroidIcuUtilGregorianCalendar *self, jint year, jint month, jint date);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_(jint year, jint month, jint date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_(jint year, jint month, jint date);

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_withInt_withInt_(AndroidIcuUtilGregorianCalendar *self, jint year, jint month, jint date, jint hour, jint minute);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hour, jint minute) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hour, jint minute);

FOUNDATION_EXPORT void AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_withInt_withInt_withInt_(AndroidIcuUtilGregorianCalendar *self, jint year, jint month, jint date, jint hour, jint minute, jint second);

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *new_AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hour, jint minute, jint second) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilGregorianCalendar *create_AndroidIcuUtilGregorianCalendar_initWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hour, jint minute, jint second);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuUtilGregorianCalendar)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuUtilGregorianCalendar")
