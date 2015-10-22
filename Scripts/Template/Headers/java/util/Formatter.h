//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Formatter.java
//

#ifndef _JavaUtilFormatter_H_
#define _JavaUtilFormatter_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/Closeable.h"
#include "../../java/io/Flushable.h"
#include "../../java/lang/Enum.h"

@class IOSObjectArray;
@class JavaIoFile;
@class JavaIoIOException;
@class JavaIoOutputStream;
@class JavaIoPrintStream;
@class JavaUtilLocale;
@protocol JavaLangAppendable;

/*!
 @brief Formats arguments according to a format string (like <code>printf</code> in C).
 <p>
 It's relatively rare to use a <code>Formatter</code> directly. A variety of classes offer convenience
 methods for accessing formatter functionality.
 Of these, <code>String.format</code> is generally the most useful.
 <code>java.io.PrintStream</code> and <code>java.io.PrintWriter</code> both offer
 <code>format</code> and <code>printf</code> methods.
 <p>
 <i>Format strings</i> consist of plain text interspersed with format specifiers, such
 as <code>"name: %s weight: %03dkg\n"</code>. Being a Java string, the usual Java string literal
 backslash escapes are of course available.
 <p>
 <i>Format specifiers</i> (such as <code>"%s"</code> or <code>"%03d"</code> in the example) start with a
 <code>%</code> and describe how to format their corresponding argument. It includes an optional
 argument index, optional flags, an optional width, an optional precision, and a mandatory
 conversion type.
 In the example, <code>"%s"</code> has no flags, no width, and no precision, while
 <code>"%03d"</code> has the flag <code>0</code>, the width 3, and no precision.
 <p>
 Not all combinations of argument index, flags, width, precision, and conversion type
 are valid.
 <p>
 <i>Argument index</i>. Normally, each format specifier consumes the next argument to
 <code>format</code>.
 For convenient localization, it's possible to reorder arguments so that they appear in a
 different order in the output than the order in which they were supplied.
 For example, <code>"%4$s"</code> formats the fourth argument (<code>4$</code>) as a string (<code>s</code>).
 It's also possible to reuse an argument with <code><</code>. For example,
 <code>format("%o %&lt;d %&lt;x", 64)</code> results in <code>"100 64 40"</code>.
 <p>
 <i>Flags</i>. The available flags are:
 <p>
 <table BORDER="1" WIDTH="100%" CELLPADDING="3" CELLSPACING="0" SUMMARY="">
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor"> <TD COLSPAN=4> <B>Flags</B> </TD> </tr>
 <tr>
 <td width="5%"><code>,</code></td>
 <td width="25%">Use grouping separators for large numbers. (Decimal only.)</td>
 <td width="30%"><code>format("%,d", 1024);</code></td>
 <td width="30%"><code>1,234</code></td>
 </tr>
 <tr>
 <td width="5%"><code>+</code></td>
 <td width="25%">Always show sign. (Decimal only.)</td>
 <td width="30%"><code>format("%+d, %+4d", 5, 5);</code></td>
 <td width="30%">
@code
+5,   +5
@endcode</td>
 </tr>
 <tr>
 <td width="5%"><code></code></td>
 <td width="25%">A space indicates that non-negative numbers
 should have a leading space. (Decimal only.)</td>
 <td width="30%"><code>format("x% d% 5d", 4, 4);</code></td>
 <td width="30%">
@code
x 4    4
@endcode</td>
 </tr>
 <tr>
 <td width="5%"><code>(</code></td>
 <td width="25%">Put parentheses around negative numbers. (Decimal only.)</td>
 <td width="30%"><code>format("%(d, %(d, %(6d", 12, -12, -12);</code></td>
 <td width="30%">
@code
12, (12),   (12)
@endcode</td>
 </tr>
 <tr>
 <td width="5%"><code>-</code></td>
 <td width="25%">Left-justify. (Requires width.)</td>
 <td width="30%"><code>format("%-6dx", 5);</code><br/><code>format("%-3C, %3C", 'd', 0x65);</code></td>
 <td width="30%">
@code
5      x
@endcode<br/>
@code
D  ,   E
@endcode</td>
 </tr>
 <tr>
 <td width="5%"><code>0</code></td>
 <td width="25%">Pad the number with leading zeros. (Requires width.)</td>
 <td width="30%"><code>format("%07d, %03d", 4, 5555);</code></td>
 <td width="30%"><code>0000004, 5555</code></td>
 </tr>
 <tr>
 <td width="5%"><code>#</code></td>
 <td width="25%">Alternate form. (Octal and hex only.) </td>
 <td width="30%"><code>format("%o %#o", 010, 010);</code><br/><code>format("%x %#x", 0x12, 0x12);</code></td>
 <td width="30%"><code>10 010</code><br/><code>12 0x12</code></td>
 </tr>
 </table>
 <p>
 <i>Width</i>. The width is a decimal integer specifying the minimum number of characters to be
 used to represent the argument. If the result would otherwise be shorter than the width, padding
 will be added (the exact details of which depend on the flags). Note that you can't use width to
 truncate a field, only to make it wider: see precision for control over the maximum width.
 <p>
 <i>Precision</i>. The precision is a <code>.</code> followed by a decimal integer, giving the minimum
 number of digits for <code>d</code>, <code>o</code>, <code>x</code>, or <code>X</code>; the minimum number of digits
 after the decimal point for <code>a</code>, <code>A</code>, <code>e</code>, <code>E</code>, <code>f</code>, or <code>F</code>;
 the maximum number of significant digits for <code>g</code> or <code>G</code>; or the maximum number of
 characters for <code>s</code> or <code>S</code>.
 <p>
 <i>Conversion type</i>. One or two characters describing how to interpret the argument. Most
 conversions are a single character, but date/time conversions all start with <code>t</code> and
 have a single extra character describing the desired output.
 <p>
 Many conversion types have a corresponding uppercase variant that converts its result to
 uppercase using the rules of the relevant locale (either the default or the locale set for
 this formatter).
 <p>
 This table shows the available single-character (non-date/time) conversion types:
 <table BORDER="1" WIDTH="100%" CELLPADDING="3" CELLSPACING="0" SUMMARY="">
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <TD COLSPAN=4>
 <B>String conversions</B>
 <br>
 All types are acceptable arguments. Values of type <code>Formattable</code> have their
 <code>formatTo</code> method invoked; all other types use <code>toString</code>.
 </TD>
 </tr>
 <tr>
 <td width="5%"><code>s</code></td>
 <td width="25%">String.</td>
 <td width="30%"><code>format("%s %s", "hello", "Hello");</code></td>
 <td width="30%"><code>hello Hello</code></td>
 </tr>
 <tr>
 <td width="5%"><code>S</code></td>
 <td width="25%">Uppercase string.</td>
 <td width="30%"><code>format("%S %S", "hello", "Hello");</code></td>
 <td width="30%"><code>HELLO HELLO</code></td>
 </tr>
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <TD COLSPAN=4>
 <B>Character conversions</B>
 <br>
 Byte, Character, Short, and Integer (and primitives that box to those types) are all acceptable
 as character arguments. Any other type is an error.
 </TD>
 </tr>
 <tr>
 <td width="5%"><code>c</code></td>
 <td width="25%">Character.</td>
 <td width="30%"><code>format("%c %c", 'd', 'E');</code></td>
 <td width="30%"><code>d E</code></td>
 </tr>
 <tr>
 <td width="5%"><code>C</code></td>
 <td width="25%">Uppercase character.</td>
 <td width="30%"><code>format("%C %C", 'd', 'E');</code></td>
 <td width="30%"><code>D E</code></td>
 </tr>
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <TD COLSPAN=4>
 <B>Integer conversions</B>
 <br>
 Byte, Short, Integer, Long, and BigInteger (and primitives that box to those types) are all
 acceptable as integer arguments. Any other type is an error.
 </TD>
 </tr>
 <tr>
 <td width="5%"><code>d</code></td>
 <td width="25%">Decimal.</td>
 <td width="30%"><code>format("%d", 26);</code></td>
 <td width="30%"><code>26</code></td>
 </tr>
 <tr>
 <td width="5%"><code>o</code></td>
 <td width="25%">Octal.</td>
 <td width="30%"><code>format("%o", 032);</code></td>
 <td width="30%"><code>32</code></td>
 </tr>
 <tr>
 <td width="5%"><code>x</code>, <code>X</code></td>
 <td width="25%">Hexadecimal.</td>
 <td width="30%"><code>format("%x %X", 0x1a, 0x1a);</code></td>
 <td width="30%"><code>1a 1A</code></td>
 </tr>
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <TD COLSPAN=4><B>Floating-point conversions</B>
 <br>
 Float, Double, and BigDecimal (and primitives that box to those types) are all acceptable as
 floating-point arguments. Any other type is an error.
 </TD>
 </tr>
 <tr>
 <td width="5%"><code>f</code></td>
 <td width="25%">Decimal floating point.</td>
 <td width="30%">
@code

 format("%f", 123.456f);
 format("%.1f", 123.456f);
 format("%1.5f", 123.456f);
 format("%10f", 123.456f);
 format("%6.0f", 123.456f);</td>
  <td width="30%" valign="top">
@code

 123.456001
 123.5
 123.45600
 123.456001
 
@endcode</td>
 </tr>
 <tr>
 <td width="5%"><code>e</code>, <code>E</code></td>
 <td width="25%">Engineering/exponential floating point.</td>
 <td width="30%">
@code

 format("%e", 123.456f);
 format("%.1e", 123.456f);
 format("%1.5E", 123.456f);
 format("%10E", 123.456f);
 format("%6.0E", 123.456f);</td>
  <td width="30%" valign="top">
@code

 1.234560e+02
 1.2e+02
 1.23456E+02
 1.234560E+02
 
@endcode</td>
 </tr>
 <tr>
 <td width="5%" valign="top"><code>g</code>, <code>G</code></td>
 <td width="25%" valign="top">Decimal or engineering, depending on the magnitude of the value.</td>
 <td width="30%" valign="top"><code>format("%g %g", 0.123, 0.0000123);</code></td>
 <td width="30%" valign="top"><code>0.123000 1.23000e-05</code></td>
 </tr>
 <tr>
 <td width="5%"><code>a</code>, <code>A</code></td>
 <td width="25%">Hexadecimal floating point.</td>
 <td width="30%"><code>format("%a", 123.456f);</code></td>
 <td width="30%"><code>0x1.edd2f2p6</code></td>
 </tr>
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <TD COLSPAN=4>
 <B>Boolean conversion</B>
 <br>
 Accepts Boolean values. <code>null</code> is considered false, and instances of all other
 types are considered true.
 </TD>
 </tr>
 <tr>
 <td width="5%"><code>b</code>, <code>B</code></td>
 <td width="25%">Boolean.</td>
 <td width="30%"><code>format("%b %b", true, false);</code><br><code>format("%B %B", true, false);</code><br><code>format("%b", null);</code><br><code>format("%b", "hello");</code></td>
 <td width="30%"><code>true false</code><br><code>TRUE FALSE</code><br><code>false</code><br><code>true</code></td>
 </tr>
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <TD COLSPAN=4>
 <B>Hash code conversion</B>
 <br>
 Invokes <code>hashCode</code> on its argument, which may be of any type.
 </TD>
 </tr>
 <tr>
 <td width="5%"><code>h</code>, <code>H</code></td>
 <td width="25%">Hexadecimal hash code.</td>
 <td width="30%"><code>format("%h", this);</code><br><code>format("%H", this);</code><br><code>format("%h", null);</code></td>
 <td width="30%"><code>190d11</code><br><code>190D11</code><br><code>null</code></td>
 </tr>
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <TD COLSPAN=4>
 <B>Zero-argument conversions</B></TD>
 </tr>
 <tr>
 <td width="5%"><code>%</code></td>
 <td width="25%">A literal % character.</td>
 <td width="30%"><code>format("%d%%", 50);</code></td>
 <td width="30%"><code>50%</code></td>
 </tr>
 <tr>
 <td width="5%"><code>n</code></td>
 <td width="25%">Newline. (The value of <code>System.lineSeparator</code>.)</td>
 <td width="30%"><code>format("first%nsecond");</code></td>
 <td width="30%"><code>first\nsecond</code></td>
 </tr>
 </table>
 <p>
 It's also possible to format dates and times with <code>Formatter</code>, though you should
 use <code>java.text.SimpleDateFormat</code> (probably via the factory methods in
 <code>java.text.DateFormat</code>) instead.
 The facilities offered by <code>Formatter</code> are low-level and place the burden of localization
 on the developer. Using <code>java.text.DateFormat.getDateInstance</code>,
 <code>java.text.DateFormat.getTimeInstance</code>, and
 <code>java.text.DateFormat.getDateTimeInstance</code> is preferable for dates and times that will be
 presented to a human. Those methods will select the best format strings for the user's locale.
 <p>
 The best non-localized form is <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>,
 which you can get with <code>"%tF"</code> (2010-01-22), <code>"%tF %tR"</code> (2010-01-22 13:39),
 <code>"%tF %tT"</code> (2010-01-22 13:39:15), or <code>"%tF %tT%z"</code> (2010-01-22 13:39:15-0800).
 <p>
 This table shows the date/time conversions, but you should use <code>java.text.SimpleDateFormat</code>
 instead:
 <table BORDER="1" WIDTH="100%" CELLPADDING="3" CELLSPACING="0" SUMMARY="">
 <tr BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
 <TD COLSPAN=4><B>Date/time conversions</B>
 <br>
 Calendar, Date, and Long (representing milliseconds past the epoch) are all acceptable
 as date/time arguments. Any other type is an error. The epoch is 1970-01-01 00:00:00 UTC.
 <font color="red">Use <code>java.text.SimpleDateFormat</code> instead.</font>
 </TD>
 </tr>
 <tr>
 <td width="5%"><code>ta</code></td>
 <td width="25%">Localized weekday name (abbreviated).</td>
 <td width="30%"><code>format("%ta", cal, cal);</code></td>
 <td width="30%"><code>Tue</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tA</code></td>
 <td width="25%">Localized weekday name (full).</td>
 <td width="30%"><code>format("%tA", cal, cal);</code></td>
 <td width="30%"><code>Tuesday</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tb</code></td>
 <td width="25%">Localized month name (abbreviated).</td>
 <td width="30%"><code>format("%tb", cal);</code></td>
 <td width="30%"><code>Apr</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tB</code></td>
 <td width="25%">Localized month name (full).</td>
 <td width="30%"><code>format("%tB", cal);</code></td>
 <td width="30%"><code>April</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tc</code></td>
 <td width="25%">C library <i>asctime(3)</i>-like output. Do not use.</td>
 <td width="30%"><code>format("%tc", cal);</code></td>
 <td width="30%"><code>Tue Apr 01 16:19:17 CEST 2008</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tC</code></td>
 <td width="25%">2-digit century.</td>
 <td width="30%"><code>format("%tC", cal);</code></td>
 <td width="30%"><code>20</code></td>
 </tr>
 <tr>
 <td width="5%"><code>td</code></td>
 <td width="25%">2-digit day of month (01-31).</td>
 <td width="30%"><code>format("%td", cal);</code></td>
 <td width="30%"><code>01</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tD</code></td>
 <td width="25%">Ambiguous US date format (MM/DD/YY). Do not use.</td>
 <td width="30%"><code>format("%tD", cal);</code></td>
 <td width="30%"><code>04/01/08</code></td>
 </tr>
 <tr>
 <td width="5%"><code>te</code></td>
 <td width="25%">Day of month (1-31).</td>
 <td width="30%"><code>format("%te", cal);</code></td>
 <td width="30%"><code>1</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tF</code></td>
 <td width="25%">Full date in ISO 8601 format (YYYY-MM-DD).</td>
 <td width="30%"><code>format("%tF", cal);</code></td>
 <td width="30%"><code>2008-04-01</code></td>
 </tr>
 <tr>
 <td width="5%"><code>th</code></td>
 <td width="25%">Synonym for <code>%tb</code>.</td>
 <td width="30%"></td>
 <td width="30%"></td>
 </tr>
 <tr>
 <td width="5%"><code>tH</code></td>
 <td width="25%">2-digit 24-hour hour of day (00-23).</td>
 <td width="30%"><code>format("%tH", cal);</code></td>
 <td width="30%"><code>16</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tI</code></td>
 <td width="25%">2-digit 12-hour hour of day (01-12).</td>
 <td width="30%"><code>format("%tI", cal);</code></td>
 <td width="30%"><code>04</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tj</code></td>
 <td width="25%">3-digit day of year (001-366).</td>
 <td width="30%"><code>format("%tj", cal);</code></td>
 <td width="30%"><code>092</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tk</code></td>
 <td width="25%">24-hour hour of day (0-23).</td>
 <td width="30%"><code>format("%tk", cal);</code></td>
 <td width="30%"><code>16</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tl</code></td>
 <td width="25%">12-hour hour of day (1-12).</td>
 <td width="30%"><code>format("%tl", cal);</code></td>
 <td width="30%"><code>4</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tL</code></td>
 <td width="25%">Milliseconds.</td>
 <td width="30%"><code>format("%tL", cal);</code></td>
 <td width="30%"><code>359</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tm</code></td>
 <td width="25%">2-digit month of year (01-12).</td>
 <td width="30%"><code>format("%tm", cal);</code></td>
 <td width="30%"><code>04</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tM</code></td>
 <td width="25%">2-digit minute.</td>
 <td width="30%"><code>format("%tM", cal);</code></td>
 <td width="30%"><code>08</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tN</code></td>
 <td width="25%">Nanoseconds.</td>
 <td width="30%"><code>format("%tN", cal);</code></td>
 <td width="30%"><code>359000000</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tp</code></td>
 <td width="25%">a.m. or p.m.</td>
 <td width="30%"><code>format("%tp %Tp", cal, cal);</code></td>
 <td width="30%"><code>pm PM</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tQ</code></td>
 <td width="25%">Milliseconds since the epoch.</td>
 <td width="30%"><code>format("%tQ", cal);</code></td>
 <td width="30%"><code>1207059412656</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tr</code></td>
 <td width="25%">Full 12-hour time (<code>%tI:%tM:%tS %Tp</code>).</td>
 <td width="30%"><code>format("%tr", cal);</code></td>
 <td width="30%"><code>04:15:32 PM</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tR</code></td>
 <td width="25%">Short 24-hour time (<code>%tH:%tM</code>).</td>
 <td width="30%"><code>format("%tR", cal);</code></td>
 <td width="30%"><code>16:15</code></td>
 </tr>
 <tr>
 <td width="5%"><code>ts</code></td>
 <td width="25%">Seconds since the epoch.</td>
 <td width="30%"><code>format("%ts", cal);</code></td>
 <td width="30%"><code>1207059412</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tS</code></td>
 <td width="25%">2-digit seconds (00-60).</td>
 <td width="30%"><code>format("%tS", cal);</code></td>
 <td width="30%"><code>17</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tT</code></td>
 <td width="25%">Full 24-hour time (<code>%tH:%tM:%tS</code>).</td>
 <td width="30%"><code>format("%tT", cal);</code></td>
 <td width="30%"><code>16:15:32</code></td>
 </tr>
 <tr>
 <td width="5%"><code>ty</code></td>
 <td width="25%">2-digit year (00-99).</td>
 <td width="30%"><code>format("%ty", cal);</code></td>
 <td width="30%"><code>08</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tY</code></td>
 <td width="25%">4-digit year.</td>
 <td width="30%"><code>format("%tY", cal);</code></td>
 <td width="30%"><code>2008</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tz</code></td>
 <td width="25%">Time zone GMT offset.</td>
 <td width="30%"><code>format("%tz", cal);</code></td>
 <td width="30%"><code>+0100</code></td>
 </tr>
 <tr>
 <td width="5%"><code>tZ</code></td>
 <td width="25%">Localized time zone abbreviation.</td>
 <td width="30%"><code>format("%tZ", cal);</code></td>
 <td width="30%"><code>CEST</code></td>
 </tr>
 </table>
 <p>
 As with the other conversions, date/time conversion has an uppercase format. Replacing
 <code>%t</code> with <code>%T</code> will uppercase the field according to the rules of the formatter's
 locale.
 <p><i>Number localization</i>. Some conversions use localized decimal digits rather than the
 usual ASCII digits. So formatting <code>123</code> with <code>%d</code> will give 123 in English locales
 but &#x0661;&#x0662;&#x0663; in appropriate Arabic locales, for example. This number localization
 occurs for the decimal integer conversion <code>%d</code>, the floating point conversions <code>%e</code>,
 <code>%f</code>, and <code>%g</code>, and all date/time <code>%t</code> or <code>%T</code> conversions, but no other
 conversions.
 <p><i>Thread safety</i>. Formatter is not thread-safe.
 @since 1.5
 */
@interface JavaUtilFormatter : NSObject < JavaIoCloseable, JavaIoFlushable >

#pragma mark Public

/*!
 @brief Constructs a <code>Formatter</code>.
 <p>The output is written to a <code>StringBuilder</code> which can be acquired by invoking
 <code>out()</code> and whose content can be obtained by calling <code>toString</code>.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>Formatter</code> whose output will be written to the
 specified <code>Appendable</code>.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param a
 the output destination of the <code>Formatter</code>. If <code>a</code> is <code>null</code>,
 then a <code>StringBuilder</code> will be used.
 */
- (instancetype)initWithJavaLangAppendable:(id<JavaLangAppendable>)a;

/*!
 @brief Constructs a <code>Formatter</code> with the specified <code>Locale</code>
 and whose output will be written to the
 specified <code>Appendable</code>.
 @param a
 the output destination of the <code>Formatter</code>. If <code>a</code> is <code>null</code>,
 then a <code>StringBuilder</code> will be used.
 @param l
 the <code>Locale</code> of the <code>Formatter</code>. If <code>l</code> is <code>null</code>,
 then no localization will be used.
 */
- (instancetype)initWithJavaLangAppendable:(id<JavaLangAppendable>)a
                        withJavaUtilLocale:(JavaUtilLocale *)l;

/*!
 @brief Constructs a <code>Formatter</code> whose output is written to the specified <code>File</code>.
 The charset of the <code>Formatter</code> is the default charset.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param file
 the <code>File</code> that is used as the output destination for the
 <code>Formatter</code>. The <code>File</code> will be truncated to zero size if the <code>File</code>
 exists, or else a new <code>File</code> will be created. The output of the
 <code>Formatter</code> is buffered.
 @throws FileNotFoundException
 if the <code>File</code> is not a normal and writable <code>File</code>, or if a
 new <code>File</code> cannot be created, or if any error rises when opening or
 creating the <code>File</code>.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Constructs a <code>Formatter</code> with the given charset,
 and whose output is written to the specified <code>File</code>.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param file
 the <code>File</code> that is used as the output destination for the
 <code>Formatter</code>. The <code>File</code> will be truncated to zero size if the <code>File</code>
 exists, or else a new <code>File</code> will be created. The output of the
 <code>Formatter</code> is buffered.
 @param csn
 the name of the charset for the <code>Formatter</code>.
 @throws FileNotFoundException
 if the <code>File</code> is not a normal and writable <code>File</code>, or if a
 new <code>File</code> cannot be created, or if any error rises when opening or
 creating the <code>File</code>.
 @throws UnsupportedEncodingException
 if the charset with the specified name is not supported.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)csn;

/*!
 @brief Constructs a <code>Formatter</code> with the given <code>Locale</code> and charset,
 and whose output is written to the specified <code>File</code>.
 @param file
 the <code>File</code> that is used as the output destination for the
 <code>Formatter</code>. The <code>File</code> will be truncated to zero size if the <code>File</code>
 exists, or else a new <code>File</code> will be created. The output of the
 <code>Formatter</code> is buffered.
 @param csn
 the name of the charset for the <code>Formatter</code>.
 @param l
 the <code>Locale</code> of the <code>Formatter</code>. If <code>l</code> is <code>null</code>,
 then no localization will be used.
 @throws FileNotFoundException
 if the <code>File</code> is not a normal and writable <code>File</code>, or if a
 new <code>File</code> cannot be created, or if any error rises when opening or
 creating the <code>File</code>.
 @throws UnsupportedEncodingException
 if the charset with the specified name is not supported.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)csn
                withJavaUtilLocale:(JavaUtilLocale *)l;

/*!
 @brief Constructs a <code>Formatter</code> with the specified <code>Locale</code>.
 <p>The output is written to a <code>StringBuilder</code> which can be acquired by invoking
 <code>out()</code> and whose content can be obtained by calling <code>toString</code>.
 @param l
 the <code>Locale</code> of the <code>Formatter</code>. If <code>l</code> is <code>null</code>,
 then no localization will be used.
 */
- (instancetype)initWithJavaUtilLocale:(JavaUtilLocale *)l;

/*!
 @brief Constructs a <code>Formatter</code> whose output is written to the specified <code>OutputStream</code>.
 <p>The charset of the <code>Formatter</code> is the default charset.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param os
 the stream to be used as the destination of the <code>Formatter</code>.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os;

/*!
 @brief Constructs a <code>Formatter</code> with the given charset,
 and whose output is written to the specified <code>OutputStream</code>.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param os
 the stream to be used as the destination of the <code>Formatter</code>.
 @param csn
 the name of the charset for the <code>Formatter</code>.
 @throws UnsupportedEncodingException
 if the charset with the specified name is not supported.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                              withNSString:(NSString *)csn;

/*!
 @brief Constructs a <code>Formatter</code> with the given <code>Locale</code> and charset,
 and whose output is written to the specified <code>OutputStream</code>.
 @param os
 the stream to be used as the destination of the <code>Formatter</code>.
 @param csn
 the name of the charset for the <code>Formatter</code>.
 @param l
 the <code>Locale</code> of the <code>Formatter</code>. If <code>l</code> is <code>null</code>,
 then no localization will be used.
 @throws UnsupportedEncodingException
 if the charset with the specified name is not supported.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                              withNSString:(NSString *)csn
                        withJavaUtilLocale:(JavaUtilLocale *)l;

/*!
 @brief Constructs a <code>Formatter</code> whose output is written to the specified <code>PrintStream</code>.
 <p>The charset of the <code>Formatter</code> is the default charset.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param ps
 the <code>PrintStream</code> used as destination of the <code>Formatter</code>. If
 <code>ps</code> is <code>null</code>, then a <code>NullPointerException</code> will
 be raised.
 */
- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)ps;

/*!
 @brief Constructs a <code>Formatter</code> whose output is written to the specified file.
 <p>The charset of the <code>Formatter</code> is the default charset.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param fileName
 the filename of the file that is used as the output
 destination for the <code>Formatter</code>. The file will be truncated to
 zero size if the file exists, or else a new file will be
 created. The output of the <code>Formatter</code> is buffered.
 @throws FileNotFoundException
 if the filename does not denote a normal and writable file,
 or if a new file cannot be created, or if any error arises when
 opening or creating the file.
 */
- (instancetype)initWithNSString:(NSString *)fileName;

/*!
 @brief Constructs a <code>Formatter</code> whose output is written to the specified file.
 <p>The <code>Locale</code> used is the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param fileName
 the filename of the file that is used as the output
 destination for the <code>Formatter</code>. The file will be truncated to
 zero size if the file exists, or else a new file will be
 created. The output of the <code>Formatter</code> is buffered.
 @param csn
 the name of the charset for the <code>Formatter</code>.
 @throws FileNotFoundException
 if the filename does not denote a normal and writable file,
 or if a new file cannot be created, or if any error arises when
 opening or creating the file.
 @throws UnsupportedEncodingException
 if the charset with the specified name is not supported.
 */
- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)csn;

/*!
 @brief Constructs a <code>Formatter</code> with the given <code>Locale</code> and charset,
 and whose output is written to the specified file.
 @param fileName
 the filename of the file that is used as the output
 destination for the <code>Formatter</code>. The file will be truncated to
 zero size if the file exists, or else a new file will be
 created. The output of the <code>Formatter</code> is buffered.
 @param csn
 the name of the charset for the <code>Formatter</code>.
 @param l
 the <code>Locale</code> of the <code>Formatter</code>. If <code>l</code> is <code>null</code>,
 then no localization will be used.
 @throws FileNotFoundException
 if the filename does not denote a normal and writable file,
 or if a new file cannot be created, or if any error arises when
 opening or creating the file.
 @throws UnsupportedEncodingException
 if the charset with the specified name is not supported.
 */
- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)csn
              withJavaUtilLocale:(JavaUtilLocale *)l;

/*!
 @brief Closes the <code>Formatter</code>.
 If the output destination is <code>Closeable</code>,
 then the method <code>close()</code> will be called on that destination.
 If the <code>Formatter</code> has been closed, then calling the this method will have no
 effect.
 Any method but the <code>ioException()</code> that is called after the
 <code>Formatter</code> has been closed will raise a <code>FormatterClosedException</code>.
 */
- (void)close;

/*!
 @brief Flushes the <code>Formatter</code>.
 If the output destination is <code>Flushable</code>,
 then the method <code>flush()</code> will be called on that destination.
 @throws FormatterClosedException
 if the <code>Formatter</code> has been closed.
 */
- (void)flush;

/*!
 @brief Writes a formatted string to the output destination of the <code>Formatter</code>.
 @param l
 the <code>Locale</code> used in the method. If <code>locale</code> is
 <code>null</code>, then no localization will be applied. This
 parameter does not change this Formatter's default <code>Locale</code>
 as specified during construction, and only applies for the
 duration of this call.
 @param format
 a format string.
 @param args
 the arguments list used in the <code>format()</code> method. If there are
 more arguments than those specified by the format string, then
 the additional arguments are ignored.
 @return this <code>Formatter</code>.
 @throws IllegalFormatException
 if the format string is illegal or incompatible with the
 arguments, or if fewer arguments are sent than those required by
 the format string, or any other illegal situation.
 @throws FormatterClosedException
 if the <code>Formatter</code> has been closed.
 */
- (JavaUtilFormatter *)formatWithJavaUtilLocale:(JavaUtilLocale *)l
                                   withNSString:(NSString *)format
                              withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Writes a formatted string to the output destination of the <code>Formatter</code>.
 @param format
 a format string.
 @param args
 the arguments list used in the <code>format()</code> method. If there are
 more arguments than those specified by the format string, then
 the additional arguments are ignored.
 @return this <code>Formatter</code>.
 @throws IllegalFormatException
 if the format string is illegal or incompatible with the
 arguments, or if fewer arguments are sent than those required by
 the format string, or any other illegal situation.
 @throws FormatterClosedException
 if the <code>Formatter</code> has been closed.
 */
- (JavaUtilFormatter *)formatWithNSString:(NSString *)format
                        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Returns the last <code>IOException</code> thrown by the <code>Formatter</code>'s output
 destination.
 If the <code>append()</code> method of the destination does not throw
 <code>IOException</code>s, the <code>ioException()</code> method will always return <code>null</code>.
 @return the last <code>IOException</code> thrown by the <code>Formatter</code>'s output
 destination.
 */
- (JavaIoIOException *)ioException;

/*!
 @brief Returns the <code>Locale</code> of the <code>Formatter</code>.
 @return the <code>Locale</code> for the <code>Formatter</code> or <code>null</code> for no <code>Locale</code>.
 @throws FormatterClosedException
 if the <code>Formatter</code> has been closed.
 */
- (JavaUtilLocale *)locale;

/*!
 @brief Returns the output destination of the <code>Formatter</code>.
 @return the output destination of the <code>Formatter</code>.
 @throws FormatterClosedException
 if the <code>Formatter</code> has been closed.
 */
- (id<JavaLangAppendable>)out;

/*!
 @brief Returns the content by calling the <code>toString()</code> method of the output
 destination.
 @return the content by calling the <code>toString()</code> method of the output
 destination.
 @throws FormatterClosedException
 if the <code>Formatter</code> has been closed.
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaUtilFormatter)

FOUNDATION_EXPORT void JavaUtilFormatter_init(JavaUtilFormatter *self);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaLangAppendable_(JavaUtilFormatter *self, id<JavaLangAppendable> a);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaLangAppendable_(id<JavaLangAppendable> a) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaUtilLocale_(JavaUtilFormatter *self, JavaUtilLocale *l);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaUtilLocale_(JavaUtilLocale *l) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaLangAppendable_withJavaUtilLocale_(JavaUtilFormatter *self, id<JavaLangAppendable> a, JavaUtilLocale *l);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaLangAppendable_withJavaUtilLocale_(id<JavaLangAppendable> a, JavaUtilLocale *l) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithNSString_(JavaUtilFormatter *self, NSString *fileName);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithNSString_(NSString *fileName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithNSString_withNSString_(JavaUtilFormatter *self, NSString *fileName, NSString *csn);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithNSString_withNSString_(NSString *fileName, NSString *csn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithNSString_withNSString_withJavaUtilLocale_(JavaUtilFormatter *self, NSString *fileName, NSString *csn, JavaUtilLocale *l);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithNSString_withNSString_withJavaUtilLocale_(NSString *fileName, NSString *csn, JavaUtilLocale *l) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaIoFile_(JavaUtilFormatter *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaIoFile_withNSString_(JavaUtilFormatter *self, JavaIoFile *file, NSString *csn);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *csn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaIoFile_withNSString_withJavaUtilLocale_(JavaUtilFormatter *self, JavaIoFile *file, NSString *csn, JavaUtilLocale *l);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaIoFile_withNSString_withJavaUtilLocale_(JavaIoFile *file, NSString *csn, JavaUtilLocale *l) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaIoOutputStream_(JavaUtilFormatter *self, JavaIoOutputStream *os);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaIoOutputStream_(JavaIoOutputStream *os) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaIoOutputStream_withNSString_(JavaUtilFormatter *self, JavaIoOutputStream *os, NSString *csn);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaIoOutputStream_withNSString_(JavaIoOutputStream *os, NSString *csn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaIoOutputStream_withNSString_withJavaUtilLocale_(JavaUtilFormatter *self, JavaIoOutputStream *os, NSString *csn, JavaUtilLocale *l);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaIoOutputStream_withNSString_withJavaUtilLocale_(JavaIoOutputStream *os, NSString *csn, JavaUtilLocale *l) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilFormatter_initWithJavaIoPrintStream_(JavaUtilFormatter *self, JavaIoPrintStream *ps);

FOUNDATION_EXPORT JavaUtilFormatter *new_JavaUtilFormatter_initWithJavaIoPrintStream_(JavaIoPrintStream *ps) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatter)

typedef NS_ENUM(NSUInteger, JavaUtilFormatter_BigDecimalLayoutForm) {
  JavaUtilFormatter_BigDecimalLayoutForm_SCIENTIFIC = 0,
  JavaUtilFormatter_BigDecimalLayoutForm_DECIMAL_FLOAT = 1,
};

/*!
 @brief The enumeration giving the available styles for formatting very large
 decimal numbers.
 */
@interface JavaUtilFormatter_BigDecimalLayoutFormEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaUtilFormatter_BigDecimalLayoutFormEnum_values();

+ (JavaUtilFormatter_BigDecimalLayoutFormEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT JavaUtilFormatter_BigDecimalLayoutFormEnum *JavaUtilFormatter_BigDecimalLayoutFormEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaUtilFormatter_BigDecimalLayoutFormEnum)

FOUNDATION_EXPORT JavaUtilFormatter_BigDecimalLayoutFormEnum *JavaUtilFormatter_BigDecimalLayoutFormEnum_values_[];

#define JavaUtilFormatter_BigDecimalLayoutFormEnum_SCIENTIFIC JavaUtilFormatter_BigDecimalLayoutFormEnum_values_[JavaUtilFormatter_BigDecimalLayoutForm_SCIENTIFIC]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilFormatter_BigDecimalLayoutFormEnum, SCIENTIFIC)

#define JavaUtilFormatter_BigDecimalLayoutFormEnum_DECIMAL_FLOAT JavaUtilFormatter_BigDecimalLayoutFormEnum_values_[JavaUtilFormatter_BigDecimalLayoutForm_DECIMAL_FLOAT]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilFormatter_BigDecimalLayoutFormEnum, DECIMAL_FLOAT)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatter_BigDecimalLayoutFormEnum)

#endif // _JavaUtilFormatter_H_
