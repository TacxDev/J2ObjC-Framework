//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/SimpleDateFormat.java
//

#ifndef _JavaTextSimpleDateFormat_H_
#define _JavaTextSimpleDateFormat_H_

#include "../../J2ObjC_header.h"
#include "../../java/text/DateFormat.h"

@class JavaLangStringBuffer;
@class JavaTextDateFormatSymbols;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilDate;
@class JavaUtilLocale;
@protocol JavaTextAttributedCharacterIterator;

/*!
 @brief Formats and parses dates in a locale-sensitive manner.
 Formatting turns a <code>Date</code> into
 a <code>String</code>, and parsing turns a <code>String</code> into a <code>Date</code>.
 <h4>Time Pattern Syntax</h4>
 <p>You can supply a Unicode <a href="http://www.unicode.org/reports/tr35/#Date_Format_Patterns">UTS #35</a>
 pattern describing what strings are produced/accepted, but almost all
 callers should use <code>DateFormat.getDateInstance</code>, <code>DateFormat.getDateTimeInstance</code>,
 or <code>DateFormat.getTimeInstance</code> to get a ready-made instance suitable for the user's
 locale.
 <p>The main reason you'd create an instance this class directly is because you need to
 format/parse a specific machine-readable format, in which case you almost certainly want
 to explicitly ask for <code>Locale.US</code> to ensure that you get ASCII digits (rather than,
 say, Arabic digits).
 (See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".)
 The most useful non-localized pattern is <code>"yyyy-MM-dd HH:mm:ss.SSSZ"</code>, which corresponds
 to the ISO 8601 international standard date format.
 <p>To specify the time format, use a <i>time pattern</i> string. In this
 string, any character from <code>'A'</code> to <code>'Z'</code> or <code>'a'</code> to <code>'z'</code> is
 treated specially. All other characters are passed through verbatim. The interpretation of each
 of the ASCII letters is given in the table below. ASCII letters not appearing in the table are
 reserved for future use, and it is an error to attempt to use them.
 <p>The number of consecutive copies (the "count") of a pattern character further influences
 the format, as shown in the table. For fields of kind "number", the count is the minimum number
 of digits; shorter values are zero-padded to the given width and longer values overflow it.
 <p><table BORDER="1" WIDTH="100%" CELLPADDING="3" CELLSPACING="0" SUMMARY="">
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <td><B>Symbol</B></td> <td><B>Meaning</B></td> <td><B>Kind</B></td> <td><B>Example</B></td> </tr>
 <tr> <td><code>D</code></td> <td>day in year</td>             <td>(Number)</td>      <td>189</td> </tr>
 <tr> <td><code>E</code></td> <td>day of week</td>             <td>(Text)</td>        <td><code>E</code>/<code>EE</code>/<code>EEE</code>:Tue, <code>EEEE</code>:Tuesday, <code>EEEEE</code>:T</td> </tr>
 <tr> <td><code>F</code></td> <td>day of week in month</td>    <td>(Number)</td>      <td>2 <i>(2nd Wed in July)</i></td> </tr>
 <tr> <td><code>G</code></td> <td>era designator</td>          <td>(Text)</td>        <td>AD</td> </tr>
 <tr> <td><code>H</code></td> <td>hour in day (0-23)</td>      <td>(Number)</td>      <td>0</td> </tr>
 <tr> <td><code>K</code></td> <td>hour in am/pm (0-11)</td>    <td>(Number)</td>      <td>0</td> </tr>
 <tr> <td><code>L</code></td> <td>stand-alone month</td>       <td>(Text)</td>        <td><code>L</code>:1 <code>LL</code>:01 <code>LLL</code>:Jan <code>LLLL</code>:January <code>LLLLL</code>:J</td> </tr>
 <tr> <td><code>M</code></td> <td>month in year</td>           <td>(Text)</td>        <td><code>M</code>:1 <code>MM</code>:01 <code>MMM</code>:Jan <code>MMMM</code>:January <code>MMMMM</code>:J</td> </tr>
 <tr> <td><code>S</code></td> <td>fractional seconds</td>      <td>(Number)</td>      <td>978</td> </tr>
 <tr> <td><code>W</code></td> <td>week in month</td>           <td>(Number)</td>      <td>2</td> </tr>
 <tr> <td><code>Z</code></td> <td>time zone (RFC 822)</td>     <td>(Time Zone)</td>   <td><code>Z</code>/<code>ZZ</code>/<code>ZZZ</code>:-0800 <code>ZZZZ</code>:GMT-08:00 <code>ZZZZZ</code>:-08:00</td> </tr>
 <tr> <td><code>a</code></td> <td>am/pm marker</td>            <td>(Text)</td>        <td>PM</td> </tr>
 <tr> <td><code>c</code></td> <td>stand-alone day of week</td> <td>(Text)</td>        <td><code>c</code>/<code>cc</code>/<code>ccc</code>:Tue, <code>cccc</code>:Tuesday, <code>ccccc</code>:T</td> </tr>
 <tr> <td><code>d</code></td> <td>day in month</td>            <td>(Number)</td>      <td>10</td> </tr>
 <tr> <td><code>h</code></td> <td>hour in am/pm (1-12)</td>    <td>(Number)</td>      <td>12</td> </tr>
 <tr> <td><code>k</code></td> <td>hour in day (1-24)</td>      <td>(Number)</td>      <td>24</td> </tr>
 <tr> <td><code>m</code></td> <td>minute in hour</td>          <td>(Number)</td>      <td>30</td> </tr>
 <tr> <td><code>s</code></td> <td>second in minute</td>        <td>(Number)</td>      <td>55</td> </tr>
 <tr> <td><code>w</code></td> <td>week in year</td>            <td>(Number)</td>      <td>27</td> </tr>
 <tr> <td><code>y</code></td> <td>year</td>                    <td>(Number)</td>      <td><code>yy</code>:10 <code>y</code>/<code>yyy</code>/<code>yyyy</code>:2010</td> </tr>
 <tr> <td><code>z</code></td> <td>time zone</td>               <td>(Time Zone)</td>   <td><code>z</code>/<code>zz</code>/<code>zzz</code>:PST <code>zzzz</code>:Pacific Standard Time</td> </tr>
 <tr> <td><code>'</code></td> <td>escape for text</td>         <td>(Delimiter)</td>   <td><code>'Date='</code>:Date=</td> </tr>
 <tr> <td><code>''</code></td> <td>single quote</td>           <td>(Literal)</td>     <td><code>'o''clock'</code>:o'clock</td> </tr>
 </table>
 <p>Fractional seconds are handled specially: they're zero-padded on the <i>right</i>.
 <p>The two pattern characters <code>L</code> and <code>c</code> are ICU-compatible extensions, not
 available in the RI or in Android before Android 2.3 (Gingerbread, API level 9). These
 extensions are necessary for correct localization in languages such as Russian
 that make a grammatical distinction between, say, the word "June" in the sentence "June" and
 in the sentence "June 10th"; the former is the stand-alone form, the latter the regular
 form (because the usual case is to format a complete date). The relationship between <code>E</code>
 and <code>c</code> is equivalent, but for weekday names.
 <p>Five-count patterns (such as "MMMMM") used for the shortest non-numeric
 representation of a field were introduced in Android 4.3 (Jelly Bean MR2, API level 18).
 <p>When two numeric fields are directly adjacent with no intervening delimiter
 characters, they constitute a run of adjacent numeric fields. Such runs are
 parsed specially. For example, the format "HHmmss" parses the input text
 "123456" to 12:34:56, parses the input text "12345" to 1:23:45, and fails to
 parse "1234". In other words, the leftmost field of the run is flexible,
 while the others keep a fixed width. If the parse fails anywhere in the run,
 then the leftmost field is shortened by one character, and the entire run is
 parsed again. This is repeated until either the parse succeeds or the
 leftmost field is one character in length. If the parse still fails at that
 point, the parse of the run fails.
 <p>See <code>set2DigitYearStart</code> for more about handling two-digit years.
 <h4>Sample Code</h4>
 <p>If you're formatting for human use, you should use an instance returned from
 <code>DateFormat</code> as described above. This code:
 @code

  DateFormat[] formats = new DateFormat[] {
   DateFormat.getDateInstance(),
   DateFormat.getDateTimeInstance(),
   DateFormat.getTimeInstance(),
  };
  for (DateFormat df : formats) {
   System.out.println(df.format(new Date(0)));
  }
  
@endcode
 <p>Produces this output when run on an <code>en_US</code> device in the America/Los_Angeles time zone:
 @code

  Dec 31, 1969
  Dec 31, 1969 4:00:00 PM
  4:00:00 PM
  
@endcode
 And will produce similarly appropriate localized human-readable output on any user's system.
 <p>If you're formatting for machine use, consider this code:
 @code

  String[] formats = new String[] {
   "yyyy-MM-dd",
   "yyyy-MM-dd HH:mm",
   "yyyy-MM-dd HH:mmZ",
   "yyyy-MM-dd HH:mm:ss.SSSZ",
   "yyyy-MM-dd'T'HH:mm:ss.SSSZ",
  };
  for (String format : formats) {
   SimpleDateFormat sdf = new SimpleDateFormat(format, Locale.US);
   System.out.format("%30s %s\n", format, sdf.format(new Date(0)));
   sdf.setTimeZone(TimeZone.getTimeZone("UTC"));
   System.out.format("%30s %s\n", format, sdf.format(new Date(0)));
  }
  
@endcode
 <p>Which produces this output when run in the America/Los_Angeles time zone:
 @code

                     yyyy-MM-dd 1969-12-31
                     yyyy-MM-dd 1970-01-01
               yyyy-MM-dd HH:mm 1969-12-31 16:00
               yyyy-MM-dd HH:mm 1970-01-01 00:00
              yyyy-MM-dd HH:mmZ 1969-12-31 16:00-0800
              yyyy-MM-dd HH:mmZ 1970-01-01 00:00+0000
       yyyy-MM-dd HH:mm:ss.SSSZ 1969-12-31 16:00:00.000-0800
       yyyy-MM-dd HH:mm:ss.SSSZ 1970-01-01 00:00:00.000+0000
     yyyy-MM-dd'T'HH:mm:ss.SSSZ 1969-12-31T16:00:00.000-0800
     yyyy-MM-dd'T'HH:mm:ss.SSSZ 1970-01-01T00:00:00.000+0000
  
@endcode
 <p>As this example shows, each <code>SimpleDateFormat</code> instance has a <code>TimeZone</code>.
 This is because it's called upon to format instances of <code>Date</code>, which represents an
 absolute time in UTC. That is, <code>Date</code> does not carry time zone information.
 By default, <code>SimpleDateFormat</code> will use the system's default time zone. This is
 appropriate for human-readable output (for which, see the previous sample instead), but
 generally inappropriate for machine-readable output, where ambiguity is a problem. Note that
 in this example, the output that included a time but no time zone cannot be parsed back into
 the original <code>Date</code>. For this
 reason it is almost always necessary and desirable to include the timezone in the output.
 It may also be desirable to set the formatter's time zone to UTC (to ease comparison, or to
 make logs more readable, for example). It is often best to avoid formatting completely when
 writing dates/times in machine-readable form. Simply sending the "Unix time" as a <code>long</code>
 or as the string corresponding to the long is cheaper and unambiguous, and can be formatted any
 way the recipient deems appropriate.
 <h4>Synchronization</h4>
 <code>SimpleDateFormat</code> is not thread-safe. Users should create a separate instance for
 each thread.
 */
@interface JavaTextSimpleDateFormat : JavaTextDateFormat

#pragma mark Public

/*!
 @brief Constructs a new <code>SimpleDateFormat</code> for formatting and parsing
 dates and times in the <code>SHORT</code> style for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>SimpleDateFormat</code> using the specified
 non-localized pattern and the <code>DateFormatSymbols</code> and <code>Calendar</code>
  for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param pattern
 the pattern.
 @throws NullPointerException
 if the pattern is <code>null</code>.
 @throws IllegalArgumentException
 if <code>pattern</code> is not considered to be usable by this
 formatter.
 */
- (instancetype)initWithNSString:(NSString *)pattern;

/*!
 @brief Constructs a new <code>SimpleDateFormat</code> using the specified
 non-localized pattern and <code>DateFormatSymbols</code> and the <code>Calendar</code>
  for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param template_
 the pattern.
 @param value
 the DateFormatSymbols.
 @throws NullPointerException
 if the pattern is <code>null</code>.
 @throws IllegalArgumentException
 if the pattern is invalid.
 */
- (instancetype)initWithNSString:(NSString *)template_
   withJavaTextDateFormatSymbols:(JavaTextDateFormatSymbols *)value;

/*!
 @brief Constructs a new <code>SimpleDateFormat</code> using the specified
 non-localized pattern and the <code>DateFormatSymbols</code> and <code>Calendar</code>
  for the specified locale.
 @param template_
 the pattern.
 @param locale
 the locale.
 @throws NullPointerException
 if the pattern is <code>null</code>.
 @throws IllegalArgumentException
 if the pattern is invalid.
 */
- (instancetype)initWithNSString:(NSString *)template_
              withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Changes the pattern of this simple date format to the specified pattern
 which uses localized pattern characters.
 @param template_
 the localized pattern.
 */
- (void)applyLocalizedPatternWithNSString:(NSString *)template_;

/*!
 @brief Changes the pattern of this simple date format to the specified pattern
 which uses non-localized pattern characters.
 @param template_
 the non-localized pattern.
 @throws NullPointerException
 if the pattern is <code>null</code>.
 @throws IllegalArgumentException
 if the pattern is invalid.
 */
- (void)applyPatternWithNSString:(NSString *)template_;

/*!
 @brief Returns a new <code>SimpleDateFormat</code> with the same pattern and
 properties as this simple date format.
 */
- (id)clone;

/*!
 @brief Compares the specified object with this simple date format and indicates
 if they are equal.
 In order to be equal, <code>object</code> must be an
 instance of <code>SimpleDateFormat</code> and have the same <code>DateFormat</code>
 properties, pattern, <code>DateFormatSymbols</code> and creation year.
 @param object
 the object to compare with this object.
 @return <code>true</code> if the specified object is equal to this simple date
 format; <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Formats the specified date as a string using the pattern of this date
 format and appends the string to the specified string buffer.
 <p>
 If the <code>field</code> member of <code>field</code> contains a value specifying
 a format field, then its <code>beginIndex</code> and <code>endIndex</code> members
 will be updated with the position of the first occurrence of this field
 in the formatted text.
 @param date
 the date to format.
 @param buffer
 the target string buffer to append the formatted date/time to.
 @param fieldPos
 on input: an optional alignment field; on output: the offsets
 of the alignment field in the formatted text.
 @return the string buffer.
 @throws IllegalArgumentException
 if there are invalid characters in the pattern.
 */
- (JavaLangStringBuffer *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                       withJavaTextFieldPosition:(JavaTextFieldPosition *)fieldPos;

/*!
 @brief Formats the specified object using the rules of this simple date format
 and returns an <code>AttributedCharacterIterator</code> with the formatted
 date and attributes.
 @param object
 the object to format.
 @return an <code>AttributedCharacterIterator</code> with the formatted date
 and attributes.
 @throws NullPointerException
 if the object is <code>null</code>.
 @throws IllegalArgumentException
 if the object cannot be formatted by this simple date
 format.
 */
- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorWithId:(id)object;

/*!
 @brief Returns the date which is the start of the one hundred year period for two-digit year values.
 See <code>set2DigitYearStart</code> for details.
 */
- (JavaUtilDate *)get2DigitYearStart;

/*!
 @brief Returns the <code>DateFormatSymbols</code> used by this simple date format.
 @return the <code>DateFormatSymbols</code> object.
 */
- (JavaTextDateFormatSymbols *)getDateFormatSymbols;

- (NSUInteger)hash;

/*!
 @brief Parses a date from the specified string starting at the index specified
 by <code>position</code>.
 If the string is successfully parsed then the index
 of the <code>ParsePosition</code> is updated to the index following the parsed
 text. On error, the index is unchanged and the error index of <code>ParsePosition</code>
  is set to the index where the error occurred.
 @param string
 the string to parse using the pattern of this simple date
 format.
 @param position
 input/output parameter, specifies the start index in <code>string</code>
  from where to start parsing. If parsing is successful,
 it is updated with the index following the parsed text; on
 error, the index is unchanged and the error index is set to
 the index where the error occurred.
 @return the date resulting from the parse, or <code>null</code> if there is an
 error.
 @throws IllegalArgumentException
 if there are invalid characters in the pattern.
 */
- (JavaUtilDate *)parseWithNSString:(NSString *)string
          withJavaTextParsePosition:(JavaTextParsePosition *)position;

/*!
 @brief Sets the date which is the start of the one hundred year period for two-digit year values.
 <p>When parsing a date string using the abbreviated year pattern <code>yy</code>, <code>SimpleDateFormat</code>
  must interpret the abbreviated year relative to some
 century. It does this by adjusting dates to be within 80 years before and 20
 years after the time the <code>SimpleDateFormat</code> instance was created. For
 example, using a pattern of <code>MM/dd/yy</code>, an
 instance created on Jan 1, 1997 would interpret the string <code>"01/11/12"</code>
 as Jan 11, 2012 but interpret the string <code>"05/04/64"</code> as May 4, 1964.
 During parsing, only strings consisting of exactly two digits, as
 defined by <code>java.lang.Character.isDigit(char)</code>, will be parsed into the
 default century. Any other numeric string, such as a one digit string, a
 three or more digit string, or a two digit string that isn't all digits (for
 example, <code>"-1"</code>), is interpreted literally. So using the same pattern, both
 <code>"01/02/3"</code> and <code>"01/02/003"</code> are parsed as Jan 2, 3 AD.
 Similarly, <code>"01/02/-3"</code> is parsed as Jan 2, 4 BC.
 <p>If the year pattern does not have exactly two 'y' characters, the year is
 interpreted literally, regardless of the number of digits. So using the
 pattern <code>MM/dd/yyyy</code>, <code>"01/11/12"</code> is parsed as Jan 11, 12 A.D.
 */
- (void)set2DigitYearStartWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Sets the <code>DateFormatSymbols</code> used by this simple date format.
 @param value
 the new <code>DateFormatSymbols</code> object.
 */
- (void)setDateFormatSymbolsWithJavaTextDateFormatSymbols:(JavaTextDateFormatSymbols *)value;

/*!
 @brief Returns the pattern of this simple date format using localized pattern
 characters.
 @return the localized pattern.
 */
- (NSString *)toLocalizedPattern;

/*!
 @brief Returns the pattern of this simple date format using non-localized
 pattern characters.
 @return the non-localized pattern.
 */
- (NSString *)toPattern;

@end

J2OBJC_STATIC_INIT(JavaTextSimpleDateFormat)

FOUNDATION_EXPORT NSString *JavaTextSimpleDateFormat_PATTERN_CHARS_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextSimpleDateFormat, PATTERN_CHARS_, NSString *)

FOUNDATION_EXPORT void JavaTextSimpleDateFormat_init(JavaTextSimpleDateFormat *self);

FOUNDATION_EXPORT JavaTextSimpleDateFormat *new_JavaTextSimpleDateFormat_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaTextSimpleDateFormat_initWithNSString_(JavaTextSimpleDateFormat *self, NSString *pattern);

FOUNDATION_EXPORT JavaTextSimpleDateFormat *new_JavaTextSimpleDateFormat_initWithNSString_(NSString *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaTextSimpleDateFormat_initWithNSString_withJavaTextDateFormatSymbols_(JavaTextSimpleDateFormat *self, NSString *template_, JavaTextDateFormatSymbols *value);

FOUNDATION_EXPORT JavaTextSimpleDateFormat *new_JavaTextSimpleDateFormat_initWithNSString_withJavaTextDateFormatSymbols_(NSString *template_, JavaTextDateFormatSymbols *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaTextSimpleDateFormat_initWithNSString_withJavaUtilLocale_(JavaTextSimpleDateFormat *self, NSString *template_, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextSimpleDateFormat *new_JavaTextSimpleDateFormat_initWithNSString_withJavaUtilLocale_(NSString *template_, JavaUtilLocale *locale) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaTextSimpleDateFormat)

#endif // _JavaTextSimpleDateFormat_H_
