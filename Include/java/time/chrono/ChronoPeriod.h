//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/chrono/ChronoPeriod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeChronoChronoPeriod")
#ifdef RESTRICT_JavaTimeChronoChronoPeriod
#define INCLUDE_ALL_JavaTimeChronoChronoPeriod 0
#else
#define INCLUDE_ALL_JavaTimeChronoChronoPeriod 1
#endif
#undef RESTRICT_JavaTimeChronoChronoPeriod

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeChronoChronoPeriod_) && (INCLUDE_ALL_JavaTimeChronoChronoPeriod || defined(INCLUDE_JavaTimeChronoChronoPeriod))
#define JavaTimeChronoChronoPeriod_

#define RESTRICT_JavaTimeTemporalTemporalAmount 1
#define INCLUDE_JavaTimeTemporalTemporalAmount 1
#include "java/time/temporal/TemporalAmount.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@protocol JavaTimeChronoChronoLocalDate;
@protocol JavaTimeChronoChronology;
@protocol JavaTimeTemporalTemporal;
@protocol JavaTimeTemporalTemporalUnit;
@protocol JavaUtilList;

/*!
 @brief A date-based amount of time, such as '3 years, 4 months and 5 days' in an
  arbitrary chronology, intended for advanced globalization use cases.
 <p>
  This interface models a date-based amount of time in a calendar system.
  While most calendar systems use years, months and days, some do not.
  Therefore, this interface operates solely in terms of a set of supported
  units that are defined by the <code>Chronology</code>.
  The set of supported units is fixed for a given chronology.
  The amount of a supported unit may be set to zero. 
 <p>
  The period is modeled as a directed amount of time, meaning that individual
  parts of the period may be negative.
 @since 1.8
 */
@protocol JavaTimeChronoChronoPeriod < JavaTimeTemporalTemporalAmount, JavaObject >

/*!
 @brief Gets the value of the requested unit.
 <p>
  The supported units are chronology specific.
  They will typically be <code>YEARS</code>,
  <code>MONTHS</code> and <code>DAYS</code>.
  Requesting an unsupported unit will throw an exception.
 @param unit the <code>TemporalUnit</code>  for which to return the value
 @return the long value of the unit
 @throw DateTimeExceptionif the unit is not supported
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 */
- (jlong)getWithJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Gets the set of units supported by this period.
 <p>
  The supported units are chronology specific.
  They will typically be <code>YEARS</code>,
  <code>MONTHS</code> and <code>DAYS</code>.
  They are returned in order from largest to smallest. 
 <p>
  This set can be used in conjunction with <code>get(TemporalUnit)</code>
  to access the entire state of the period.
 @return a list containing the supported units, not null
 */
- (id<JavaUtilList>)getUnits;

/*!
 @brief Gets the chronology that defines the meaning of the supported units.
 <p>
  The period is defined by the chronology.
  It controls the supported units and restricts addition/subtraction
  to <code>ChronoLocalDate</code> instances of the same chronology.
 @return the chronology defining the period, not null
 */
- (id<JavaTimeChronoChronology>)getChronology;

/*!
 @brief Checks if all the supported units of this period are zero.
 @return true if this period is zero-length
 */
- (jboolean)isZero;

/*!
 @brief Checks if any of the supported units of this period are negative.
 @return true if any unit of this period is negative
 */
- (jboolean)isNegative;

/*!
 @brief Returns a copy of this period with the specified period added.
 <p>
  If the specified amount is a <code>ChronoPeriod</code> then it must have
  the same chronology as this period. Implementations may choose to
  accept or reject other <code>TemporalAmount</code> implementations. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToAdd the period to add, not null
 @return a <code>ChronoPeriod</code> based on this period with the requested period added, not null
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeChronoChronoPeriod>)plusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amountToAdd;

/*!
 @brief Returns a copy of this period with the specified period subtracted.
 <p>
  If the specified amount is a <code>ChronoPeriod</code> then it must have
  the same chronology as this period. Implementations may choose to
  accept or reject other <code>TemporalAmount</code> implementations. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToSubtract the period to subtract, not null
 @return a <code>ChronoPeriod</code> based on this period with the requested period subtracted, not null
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeChronoChronoPeriod>)minusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amountToSubtract;

/*!
 @brief Returns a new instance with each amount in this period in this period
  multiplied by the specified scalar.
 <p>
  This returns a period with each supported unit individually multiplied.
  For example, a period of "2 years, -3 months and 4 days" multiplied by
  3 will return "6 years, -9 months and 12 days".
  No normalization is performed.
 @param scalar the scalar to multiply by, not null
 @return a <code>ChronoPeriod</code> based on this period with the amounts multiplied
   by the scalar, not null
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeChronoChronoPeriod>)multipliedByWithInt:(jint)scalar;

/*!
 @brief Returns a new instance with each amount in this period negated.
 <p>
  This returns a period with each supported unit individually negated.
  For example, a period of "2 years, -3 months and 4 days" will be
  negated to "-2 years, 3 months and -4 days".
  No normalization is performed.
 @return a <code>ChronoPeriod</code> based on this period with the amounts negated, not null
 @throw ArithmeticExceptionif numeric overflow occurs, which only happens if
   one of the units has the value <code>Long.MIN_VALUE</code>
 */
- (id<JavaTimeChronoChronoPeriod>)negated;

/*!
 @brief Returns a copy of this period with the amounts of each unit normalized.
 <p>
  The process of normalization is specific to each calendar system.
  For example, in the ISO calendar system, the years and months are
  normalized but the days are not, such that "15 months" would be
  normalized to "1 year and 3 months". 
 <p>
  This instance is immutable and unaffected by this method call.
 @return a <code>ChronoPeriod</code> based on this period with the amounts of each
   unit normalized, not null
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeChronoChronoPeriod>)normalized;

/*!
 @brief Adds this period to the specified temporal object.
 <p>
  This returns a temporal object of the same observable type as the input
  with this period added. 
 <p>
  In most cases, it is clearer to reverse the calling pattern by using 
 <code>Temporal.plus(TemporalAmount)</code>.
  @code

    // these two lines are equivalent, but the second approach is recommended
    dateTime = thisPeriod.addTo(dateTime);
    dateTime = dateTime.plus(thisPeriod); 
  
@endcode
  <p>
  The specified temporal must have the same chronology as this period.
  This returns a temporal with the non-zero supported units added. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param temporal the temporal object to adjust, not null
 @return an object of the same type with the adjustment made, not null
 @throw DateTimeExceptionif unable to add
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeTemporalTemporal>)addToWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)temporal;

/*!
 @brief Subtracts this period from the specified temporal object.
 <p>
  This returns a temporal object of the same observable type as the input
  with this period subtracted. 
 <p>
  In most cases, it is clearer to reverse the calling pattern by using 
 <code>Temporal.minus(TemporalAmount)</code>.
  @code

    // these two lines are equivalent, but the second approach is recommended
    dateTime = thisPeriod.subtractFrom(dateTime);
    dateTime = dateTime.minus(thisPeriod); 
  
@endcode
  <p>
  The specified temporal must have the same chronology as this period.
  This returns a temporal with the non-zero supported units subtracted. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param temporal the temporal object to adjust, not null
 @return an object of the same type with the adjustment made, not null
 @throw DateTimeExceptionif unable to subtract
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeTemporalTemporal>)subtractFromWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)temporal;

/*!
 @brief Checks if this period is equal to another period, including the chronology.
 <p>
  Compares this period with another ensuring that the type, each amount and
  the chronology are the same.
  Note that this means that a period of "15 Months" is not equal to a period
  of "1 Year and 3 Months".
 @param obj the object to check, null returns false
 @return true if this is equal to the other period
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief A hash code for this period.
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Outputs this period as a <code>String</code>.
 <p>
  The output will include the period amounts and chronology.
 @return a string representation of this period, not null
 */
- (NSString *)description;

@end

@interface JavaTimeChronoChronoPeriod : NSObject

/*!
 @brief Obtains a <code>ChronoPeriod</code> consisting of amount of time between two dates.
 <p>
  The start date is included, but the end date is not.
  The period is calculated using <code>ChronoLocalDate.until(ChronoLocalDate)</code>.
  As such, the calculation is chronology specific. 
 <p>
  The chronology of the first date is used.
  The chronology of the second date is ignored, with the date being converted
  to the target chronology system before the calculation starts. 
 <p>
  The result of this method can be a negative period if the end is before the start.
  In most cases, the positive/negative sign will be the same in each of the supported fields.
 @param startDateInclusive the start date, inclusive, specifying the chronology of the calculation, not null
 @param endDateExclusive the end date, exclusive, in any chronology, not null
 @return the period between this date and the end date, not null
 - seealso: ChronoLocalDate#until(ChronoLocalDate)
 */
+ (id<JavaTimeChronoChronoPeriod>)betweenWithJavaTimeChronoChronoLocalDate:(id<JavaTimeChronoChronoLocalDate>)startDateInclusive
                                         withJavaTimeChronoChronoLocalDate:(id<JavaTimeChronoChronoLocalDate>)endDateExclusive;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeChronoChronoPeriod)

FOUNDATION_EXPORT id<JavaTimeChronoChronoPeriod> JavaTimeChronoChronoPeriod_betweenWithJavaTimeChronoChronoLocalDate_withJavaTimeChronoChronoLocalDate_(id<JavaTimeChronoChronoLocalDate> startDateInclusive, id<JavaTimeChronoChronoLocalDate> endDateExclusive);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoPeriod_isZero(id<JavaTimeChronoChronoPeriod> self);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoPeriod_isNegative(id<JavaTimeChronoChronoPeriod> self);

FOUNDATION_EXPORT id<JavaTimeChronoChronoPeriod> JavaTimeChronoChronoPeriod_negated(id<JavaTimeChronoChronoPeriod> self);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeChronoChronoPeriod)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTimeChronoChronoPeriod")
