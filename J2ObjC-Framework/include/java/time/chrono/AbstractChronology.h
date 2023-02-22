//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/chrono/AbstractChronology.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeChronoAbstractChronology")
#ifdef RESTRICT_JavaTimeChronoAbstractChronology
#define INCLUDE_ALL_JavaTimeChronoAbstractChronology 0
#else
#define INCLUDE_ALL_JavaTimeChronoAbstractChronology 1
#endif
#undef RESTRICT_JavaTimeChronoAbstractChronology

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeChronoAbstractChronology_) && (INCLUDE_ALL_JavaTimeChronoAbstractChronology || defined(INCLUDE_JavaTimeChronoAbstractChronology))
#define JavaTimeChronoAbstractChronology_

#define RESTRICT_JavaTimeChronoChronology 1
#define INCLUDE_JavaTimeChronoChronology 1
#include "java/time/chrono/Chronology.h"

@class JavaTimeClock;
@class JavaTimeFormatResolverStyle;
@class JavaTimeFormatTextStyle;
@class JavaTimeInstant;
@class JavaTimeTemporalChronoField;
@class JavaTimeZoneId;
@class JavaUtilLocale;
@protocol JavaIoDataInput;
@protocol JavaIoDataOutput;
@protocol JavaTimeChronoChronoLocalDate;
@protocol JavaTimeChronoChronoLocalDateTime;
@protocol JavaTimeChronoChronoPeriod;
@protocol JavaTimeChronoChronoZonedDateTime;
@protocol JavaTimeChronoEra;
@protocol JavaTimeTemporalTemporalAccessor;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief An abstract implementation of a calendar system, used to organize and identify dates.
 <p>
  The main date and time API is built on the ISO calendar system.
  The chronology operates behind the scenes to represent the general concept of a calendar system. 
 <p>
  See <code>Chronology</code> for more details.
 @since 1.8
 */
@interface JavaTimeChronoAbstractChronology : NSObject < JavaTimeChronoChronology >
@property (readonly, class, strong) id<JavaUtilComparator> DATE_ORDER NS_SWIFT_NAME(DATE_ORDER);
@property (readonly, class, strong) id<JavaUtilComparator> DATE_TIME_ORDER NS_SWIFT_NAME(DATE_TIME_ORDER);
@property (readonly, class, strong) id<JavaUtilComparator> INSTANT_ORDER NS_SWIFT_NAME(INSTANT_ORDER);

+ (id<JavaUtilComparator>)DATE_ORDER;

+ (id<JavaUtilComparator>)DATE_TIME_ORDER;

+ (id<JavaUtilComparator>)INSTANT_ORDER;

#pragma mark Public

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
 @brief Resolves parsed <code>ChronoField</code> values into a date during parsing.
 <p>
  Most <code>TemporalField</code> implementations are resolved using the
  resolve method on the field. By contrast, the <code>ChronoField</code> class
  defines fields that only have meaning relative to the chronology.
  As such, <code>ChronoField</code> date fields are resolved here in the
  context of a specific chronology. 
 <p>
  <code>ChronoField</code> instances are resolved by this method, which may
  be overridden in subclasses. 
 <ul>
  <li><code>EPOCH_DAY</code> - If present, this is converted to a date and
   all other date fields are then cross-checked against the date. 
 <li><code>PROLEPTIC_MONTH</code> - If present, then it is split into the
   <code>YEAR</code> and <code>MONTH_OF_YEAR</code>. If the mode is strict or smart
   then the field is validated. 
 <li><code>YEAR_OF_ERA</code> and <code>ERA</code> - If both are present, then they
   are combined to form a <code>YEAR</code>. In lenient mode, the <code>YEAR_OF_ERA</code>
   range is not validated, in smart and strict mode it is. The <code>ERA</code> is
   validated for range in all three modes. If only the <code>YEAR_OF_ERA</code> is
   present, and the mode is smart or lenient, then the last available era
   is assumed. In strict mode, no era is assumed and the <code>YEAR_OF_ERA</code> is
   left untouched. If only the <code>ERA</code> is present, then it is left untouched. 
 <li><code>YEAR</code>, <code>MONTH_OF_YEAR</code> and <code>DAY_OF_MONTH</code> -
   If all three are present, then they are combined to form a date.
   In all three modes, the <code>YEAR</code> is validated.
   If the mode is smart or strict, then the month and day are validated.
   If the mode is lenient, then the date is combined in a manner equivalent to
   creating a date on the first day of the first month in the requested year,
   then adding the difference in months, then the difference in days.
   If the mode is smart, and the day-of-month is greater than the maximum for
   the year-month, then the day-of-month is adjusted to the last day-of-month.
   If the mode is strict, then the three fields must form a valid date. 
 <li><code>YEAR</code> and <code>DAY_OF_YEAR</code> -
   If both are present, then they are combined to form a date.
   In all three modes, the <code>YEAR</code> is validated.
   If the mode is lenient, then the date is combined in a manner equivalent to
   creating a date on the first day of the requested year, then adding
   the difference in days.
   If the mode is smart or strict, then the two fields must form a valid date. 
 <li><code>YEAR</code>, <code>MONTH_OF_YEAR</code>, <code>ALIGNED_WEEK_OF_MONTH</code> and
   <code>ALIGNED_DAY_OF_WEEK_IN_MONTH</code> -
   If all four are present, then they are combined to form a date.
   In all three modes, the <code>YEAR</code> is validated.
   If the mode is lenient, then the date is combined in a manner equivalent to
   creating a date on the first day of the first month in the requested year, then adding
   the difference in months, then the difference in weeks, then in days.
   If the mode is smart or strict, then the all four fields are validated to
   their outer ranges. The date is then combined in a manner equivalent to
   creating a date on the first day of the requested year and month, then adding
   the amount in weeks and days to reach their values. If the mode is strict,
   the date is additionally validated to check that the day and week adjustment
   did not change the month. 
 <li><code>YEAR</code>, <code>MONTH_OF_YEAR</code>, <code>ALIGNED_WEEK_OF_MONTH</code> and
   <code>DAY_OF_WEEK</code> - If all four are present, then they are combined to
   form a date. The approach is the same as described above for
   years, months and weeks in <code>ALIGNED_DAY_OF_WEEK_IN_MONTH</code>.
   The day-of-week is adjusted as the next or same matching day-of-week once
   the years, months and weeks have been handled. 
 <li><code>YEAR</code>, <code>ALIGNED_WEEK_OF_YEAR</code> and <code>ALIGNED_DAY_OF_WEEK_IN_YEAR</code> -
   If all three are present, then they are combined to form a date.
   In all three modes, the <code>YEAR</code> is validated.
   If the mode is lenient, then the date is combined in a manner equivalent to
   creating a date on the first day of the requested year, then adding
   the difference in weeks, then in days.
   If the mode is smart or strict, then the all three fields are validated to
   their outer ranges. The date is then combined in a manner equivalent to
   creating a date on the first day of the requested year, then adding
   the amount in weeks and days to reach their values. If the mode is strict,
   the date is additionally validated to check that the day and week adjustment
   did not change the year. 
 <li><code>YEAR</code>, <code>ALIGNED_WEEK_OF_YEAR</code> and <code>DAY_OF_WEEK</code> -
   If all three are present, then they are combined to form a date.
   The approach is the same as described above for years and weeks in  
 <code>ALIGNED_DAY_OF_WEEK_IN_YEAR</code>. The day-of-week is adjusted as the
   next or same matching day-of-week once the years and weeks have been handled. 
 </ul>
  <p>
  The default implementation is suitable for most calendar systems.
  If <code>java.time.temporal.ChronoField.YEAR_OF_ERA</code> is found without an <code>java.time.temporal.ChronoField.ERA</code>
  then the last era in <code>eras()</code> is used.
  The implementation assumes a 7 day week, that the first day-of-month
  has the value 1, that first day-of-year has the value 1, and that the
  first of the month and year always exists.
 @param fieldValues the map of fields to values, which can be updated, not null
 @param resolverStyle the requested type of resolve, not null
 @return the resolved date, null if insufficient information to create a date
 @throw java.time.DateTimeExceptionif the date cannot be resolved, typically
   because of a conflict in the input data
 */
- (id<JavaTimeChronoChronoLocalDate>)resolveDateWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                                withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

/*!
 @brief Outputs this chronology as a <code>String</code>, using the chronology ID.
 @return a string representation of this chronology, not null
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Creates an instance.
 */
- (instancetype __nonnull)init;

#pragma mark Package-Private

/*!
 @brief Adds a field-value pair to the map, checking for conflicts.
 <p>
  If the field is not already present, then the field-value pair is added to the map.
  If the field is already present and it has the same value as that specified, no action occurs.
  If the field is already present and it has a different value to that specified, then
  an exception is thrown.
 @param field the field to add, not null
 @param value the value to add, not null
 @throw java.time.DateTimeExceptionif the field is already present with a different value
 */
- (void)addFieldValueWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
     withJavaTimeTemporalChronoField:(JavaTimeTemporalChronoField *)field
                            withLong:(jlong)value;

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

/*!
 @brief Obtains an instance of <code>Chronology</code> from a chronology ID or
  calendar system type.
 <p>
  See <code>Chronology.of(String)</code>.
 @param id_ the chronology ID or calendar system type, not null
 @return the chronology with the identifier requested, not null
 @throw java.time.DateTimeExceptionif the chronology cannot be found
 */
+ (id<JavaTimeChronoChronology>)ofWithNSString:(NSString *)id_;

/*!
 @brief Obtains an instance of <code>Chronology</code> from a locale.
 <p>
  See <code>Chronology.ofLocale(Locale)</code>.
 @param locale the locale to use to obtain the calendar system, not null
 @return the calendar system associated with the locale, not null
 @throw java.time.DateTimeExceptionif the locale-specified calendar cannot be found
 */
+ (id<JavaTimeChronoChronology>)ofLocaleWithJavaUtilLocale:(JavaUtilLocale *)locale;

+ (id<JavaTimeChronoChronology>)readExternalWithJavaIoDataInput:(id<JavaIoDataInput>)inArg;

/*!
 @brief Register a Chronology by its ID and type for lookup by <code>of(String)</code>.
 Chronologies must not be registered until they are completely constructed.
  Specifically, not in the constructor of Chronology.
 @param chrono the chronology to register; not null
 @return the already registered Chronology if any, may be null
 */
+ (id<JavaTimeChronoChronology>)registerChronoWithJavaTimeChronoChronology:(id<JavaTimeChronoChronology>)chrono;

/*!
 @brief Register a Chronology by ID and type for lookup by <code>of(String)</code>.
 Chronos must not be registered until they are completely constructed.
  Specifically, not in the constructor of Chronology.
 @param chrono the chronology to register; not null
 @param id_ the ID to register the chronology; not null
 @return the already registered Chronology if any, may be null
 */
+ (id<JavaTimeChronoChronology>)registerChronoWithJavaTimeChronoChronology:(id<JavaTimeChronoChronology>)chrono
                                                              withNSString:(NSString *)id_;

- (id<JavaTimeChronoChronoLocalDate>)resolveAlignedWithJavaTimeChronoChronoLocalDate:(id<JavaTimeChronoChronoLocalDate>)base
                                                                            withLong:(jlong)months
                                                                            withLong:(jlong)weeks
                                                                            withLong:(jlong)dow;

- (void)resolveProlepticMonthWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
             withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

- (id<JavaTimeChronoChronoLocalDate>)resolveYAAWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                               withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

- (id<JavaTimeChronoChronoLocalDate>)resolveYADWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                               withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

- (id<JavaTimeChronoChronoLocalDate>)resolveYDWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                              withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

- (id<JavaTimeChronoChronoLocalDate>)resolveYearOfEraWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                                     withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

- (id<JavaTimeChronoChronoLocalDate>)resolveYMAAWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                                withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

- (id<JavaTimeChronoChronoLocalDate>)resolveYMADWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                                withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

- (id<JavaTimeChronoChronoLocalDate>)resolveYMDWithJavaUtilMap:(id<JavaUtilMap>)fieldValues
                               withJavaTimeFormatResolverStyle:(JavaTimeFormatResolverStyle *)resolverStyle;

- (void)writeExternalWithJavaIoDataOutput:(id<JavaIoDataOutput>)outArg;

/*!
 @brief Writes the Chronology using a 
 <a href="../../..
 /serialized-form.html#java.time.chrono.Ser">dedicated serialized form</a>.
 @code

   out.writeByte(1);  // identifies this as a Chronology
   out.writeUTF(getId()); 
  
@endcode
 @return the instance of <code>Ser</code>, not null
 */
- (id)writeReplace;

@end

J2OBJC_STATIC_INIT(JavaTimeChronoAbstractChronology)

/*!
 @brief ChronoLocalDate order constant.
 */
inline id<JavaUtilComparator> JavaTimeChronoAbstractChronology_get_DATE_ORDER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> JavaTimeChronoAbstractChronology_DATE_ORDER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTimeChronoAbstractChronology, DATE_ORDER, id<JavaUtilComparator>)

/*!
 @brief ChronoLocalDateTime order constant.
 */
inline id<JavaUtilComparator> JavaTimeChronoAbstractChronology_get_DATE_TIME_ORDER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> JavaTimeChronoAbstractChronology_DATE_TIME_ORDER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTimeChronoAbstractChronology, DATE_TIME_ORDER, id<JavaUtilComparator>)

/*!
 @brief ChronoZonedDateTime order constant.
 */
inline id<JavaUtilComparator> JavaTimeChronoAbstractChronology_get_INSTANT_ORDER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> JavaTimeChronoAbstractChronology_INSTANT_ORDER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTimeChronoAbstractChronology, INSTANT_ORDER, id<JavaUtilComparator>)

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoAbstractChronology_registerChronoWithJavaTimeChronoChronology_(id<JavaTimeChronoChronology> chrono);

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoAbstractChronology_registerChronoWithJavaTimeChronoChronology_withNSString_(id<JavaTimeChronoChronology> chrono, NSString *id_);

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoAbstractChronology_ofLocaleWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoAbstractChronology_ofWithNSString_(NSString *id_);

FOUNDATION_EXPORT id<JavaUtilSet> JavaTimeChronoAbstractChronology_getAvailableChronologies(void);

FOUNDATION_EXPORT void JavaTimeChronoAbstractChronology_init(JavaTimeChronoAbstractChronology *self);

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoAbstractChronology_readExternalWithJavaIoDataInput_(id<JavaIoDataInput> inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeChronoAbstractChronology)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeChronoAbstractChronology")
