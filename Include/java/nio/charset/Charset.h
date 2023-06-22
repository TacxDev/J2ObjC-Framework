//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/Charset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetCharset")
#ifdef RESTRICT_JavaNioCharsetCharset
#define INCLUDE_ALL_JavaNioCharsetCharset 0
#else
#define INCLUDE_ALL_JavaNioCharsetCharset 1
#endif
#undef RESTRICT_JavaNioCharsetCharset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioCharsetCharset_) && (INCLUDE_ALL_JavaNioCharsetCharset || defined(INCLUDE_JavaNioCharsetCharset))
#define JavaNioCharsetCharset_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaNioByteBuffer;
@class JavaNioCharBuffer;
@class JavaNioCharsetCharsetDecoder;
@class JavaNioCharsetCharsetEncoder;
@class JavaUtilLocale;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;

/*!
 @brief A named mapping between sequences of sixteen-bit Unicode <a href="../..
 /lang/Character.html#unicode">
 code units</a> and sequences of
  bytes.This class defines methods for creating decoders and encoders and
  for retrieving the various names associated with a charset.  Instances of
  this class are immutable. 
 <p> This class also defines static methods for testing whether a particular
  charset is supported, for locating charset instances by name, and for
  constructing a map that contains every charset for which support is
  available in the current Java virtual machine.  Support for new charsets can
  be added via the service-provider interface defined in the <code>java.nio.charset.spi.CharsetProvider</code>
  class. 
 <p> All of the methods defined in this class are safe for use by multiple
  concurrent threads. 
 <a id="names"></a><a id="charenc"></a>
  <h2>Charset names</h2>
  
 <p> Charsets are named by strings composed of the following characters: 
 <ul>
    <li> The uppercase letters <code>'A'</code> through <code>'Z'</code>
         (<code>'&#92;u0041'</code>&nbsp;through&nbsp;<code>'&#92;u005a'</code>),
    <li> The lowercase letters <code>'a'</code> through <code>'z'</code>
         (<code>'&#92;u0061'</code>&nbsp;through&nbsp;<code>'&#92;u007a'</code>),
    <li> The digits <code>'0'</code> through <code>'9'</code>
         (<code>'&#92;u0030'</code>&nbsp;through&nbsp;<code>'&#92;u0039'</code>),
    <li> The dash character <code>'-'</code>
         (<code>'&#92;u002d'</code>,&nbsp;<small>HYPHEN-MINUS</small>),
    <li> The plus character <code>'+'</code>
         (<code>'&#92;u002b'</code>,&nbsp;<small>PLUS SIGN</small>),
    <li> The period character <code>'.'</code>
         (<code>'&#92;u002e'</code>,&nbsp;<small>FULL STOP</small>),
    <li> The colon character <code>':'</code>
         (<code>'&#92;u003a'</code>,&nbsp;<small>COLON</small>), and
    <li> The underscore character <code>'_'</code>
         (<code>'&#92;u005f'</code>,&nbsp;<small>LOW&nbsp;LINE</small>).
  
 </ul>
  A charset name must begin with either a letter or a digit.  The empty string
  is not a legal charset name.  Charset names are not case-sensitive; that is,
  case is always ignored when comparing charset names.  Charset names
  generally follow the conventions documented in <a href="http://www.ietf.org/rfc/rfc2278.txt">
 <i>RFC&nbsp;2278:&nbsp;IANA Charset
  Registration Procedures</i></a>.
  
 <p> Every charset has a <i>canonical name</i> and may also have one or more 
 <i>aliases</i>.  The canonical name is returned by the <code>name</code> method
  of this class.  Canonical names are, by convention, usually in upper case.
  The aliases of a charset are returned by the <code>aliases</code>
  method. 
 <p><a id="hn">Some charsets have an <i>historical name</i> that is defined for
  compatibility with previous versions of the Java platform.</a>  A charset's
  historical name is either its canonical name or one of its aliases.  The
  historical name is returned by the <code>getEncoding()</code> methods of the 
 <code>InputStreamReader</code> and <code>OutputStreamWriter</code>
  classes. 
 <p><a id="iana"> </a>If a charset listed in the <a href="http://www.iana.org/assignments/character-sets">
 <i>IANA Charset
  Registry</i></a> is supported by an implementation of the Java platform then
  its canonical name must be the name listed in the registry. Many charsets
  are given more than one name in the registry, in which case the registry
  identifies one of the names as <i>MIME-preferred</i>.  If a charset has more
  than one registry name then its canonical name must be the MIME-preferred
  name and the other names in the registry must be valid aliases.  If a
  supported charset is not listed in the IANA registry then its canonical name
  must begin with one of the strings <code>"X-"</code> or <code>"x-"</code>.
  
 <p> The IANA charset registry does change over time, and so the canonical
  name and the aliases of a particular charset may also change over time.  To
  ensure compatibility it is recommended that no alias ever be removed from a
  charset, and that if the canonical name of a charset is changed then its
  previous canonical name be made into an alias. 
 <h2>Standard charsets</h2>
  
 <p><a id="standard">Every implementation of the Java platform is required to support the
  following standard charsets.</a>  Consult the release documentation for your
  implementation to see if any other charsets are supported.  The behavior
  of such optional charsets may differ between implementations. 
 <blockquote><table class="striped" style="width:80%">
  <caption style="display:none">Description of standard charsets</caption>
  <thead>
  <tr><th scope="col" style="text-align:left">Charset</th><th scope="col" style="text-align:left">Description</th></tr>
  </thead>
  <tbody>
  <tr><th scope="row" style="vertical-align:top"><code>US-ASCII</code></th>
      <td>Seven-bit ASCII, a.k.a. <code>ISO646-US</code>,
          a.k.a. the Basic Latin block of the Unicode character set</td></tr>
  <tr><th scope="row" style="vertical-align:top"><code>ISO-8859-1&nbsp;&nbsp;</code></th>
      <td>ISO Latin Alphabet No. 1, a.k.a. <code>ISO-LATIN-1</code></td></tr>
  <tr><th scope="row" style="vertical-align:top"><code>UTF-8</code></th>
      <td>Eight-bit UCS Transformation Format</td></tr>
  <tr><th scope="row" style="vertical-align:top"><code>UTF-16BE</code></th>
      <td>Sixteen-bit UCS Transformation Format,
          big-endian byte&nbsp;order</td></tr>
  <tr><th scope="row" style="vertical-align:top"><code>UTF-16LE</code></th>
      <td>Sixteen-bit UCS Transformation Format,
          little-endian byte&nbsp;order</td></tr>
  <tr><th scope="row" style="vertical-align:top"><code>UTF-16</code></th>
      <td>Sixteen-bit UCS Transformation Format,
          byte&nbsp;order identified by an optional byte-order mark</td></tr>
  </tbody>
  </table></blockquote>
  
 <p> The <code>UTF-8</code> charset is specified by <a href="http://www.ietf.org/rfc/rfc2279.txt">
 <i>RFC&nbsp;2279</i></a>; the
  transformation format upon which it is based is specified in
  Amendment&nbsp;2 of ISO&nbsp;10646-1 and is also described in the <a href="http://www.unicode.org/unicode/standard/standard.html">
 <i>Unicode
  Standard</i></a>.
  
 <p> The <code>UTF-16</code> charsets are specified by <a href="http://www.ietf.org/rfc/rfc2781.txt">
 <i>RFC&nbsp;2781</i></a>; the
  transformation formats upon which they are based are specified in
  Amendment&nbsp;1 of ISO&nbsp;10646-1 and are also described in the <a href="http://www.unicode.org/unicode/standard/standard.html">
 <i>Unicode
  Standard</i></a>.
  
 <p> The <code>UTF-16</code> charsets use sixteen-bit quantities and are
  therefore sensitive to byte order.  In these encodings the byte order of a
  stream may be indicated by an initial <i>byte-order mark</i> represented by
  the Unicode character <code>'&#92;uFEFF'</code>.  Byte-order marks are handled
  as follows: 
 <ul>
    <li><p> When decoding, the <code>UTF-16BE</code> and <code>UTF-16LE</code>
    charsets interpret the initial byte-order marks as a <small>ZERO-WIDTH
    NON-BREAKING SPACE</small>; when encoding, they do not write
    byte-order marks. </p></li>
    <li><p> When decoding, the <code>UTF-16</code> charset interprets the
    byte-order mark at the beginning of the input stream to indicate the
    byte-order of the stream but defaults to big-endian if there is no
    byte-order mark; when encoding, it uses big-endian byte order and writes
    a big-endian byte-order mark. </p></li>
  
 </ul>
  In any case, byte order marks occurring after the first element of an
  input sequence are not omitted since the same code is used to represent 
 <small>ZERO-WIDTH NON-BREAKING SPACE</small>.
  
 <p>Android note: The Android platform default is always UTF-8. 
 <p>The <code>StandardCharsets</code> class defines constants for each of the
  standard charsets. 
 <h2>Terminology</h2>
  
 <p> The name of this class is taken from the terms used in 
 <a href="http://www.ietf.org/rfc/rfc2278.txt"><i>RFC&nbsp;2278</i></a>.
  In that document a <i>charset</i> is defined as the combination of
  one or more coded character sets and a character-encoding scheme.
  (This definition is confusing; some other software systems define 
 <i>charset</i> as a synonym for <i>coded character set</i>.)
  
 <p> A <i>coded character set</i> is a mapping between a set of abstract
  characters and a set of integers.  US-ASCII, ISO&nbsp;8859-1,
  JIS&nbsp;X&nbsp;0201, and Unicode are examples of coded character sets. 
 <p> Some standards have defined a <i>character set</i> to be simply a
  set of abstract characters without an associated assigned numbering.
  An alphabet is an example of such a character set.  However, the subtle
  distinction between <i>character set</i> and <i>coded character set</i>
  is rarely used in practice; the former has become a short form for the
  latter, including in the Java API specification. 
 <p> A <i>character-encoding scheme</i> is a mapping between one or more
  coded character sets and a set of octet (eight-bit byte) sequences.
  UTF-8, UTF-16, ISO&nbsp;2022, and EUC are examples of
  character-encoding schemes.  Encoding schemes are often associated with
  a particular coded character set; UTF-8, for example, is used only to
  encode Unicode.  Some schemes, however, are associated with multiple
  coded character sets; EUC, for example, can be used to encode
  characters in a variety of Asian coded character sets. 
 <p> When a coded character set is used exclusively with a single
  character-encoding scheme then the corresponding charset is usually
  named for the coded character set; otherwise a charset is usually named
  for the encoding scheme and, possibly, the locale of the coded
  character sets that it supports.  Hence <code>US-ASCII</code> is both the
  name of a coded character set and of the charset that encodes it, while 
 <code>EUC-JP</code> is the name of the charset that encodes the
  JIS&nbsp;X&nbsp;0201, JIS&nbsp;X&nbsp;0208, and JIS&nbsp;X&nbsp;0212
  coded character sets for the Japanese language. 
 <p> The native character encoding of the Java programming language is
  UTF-16.  A charset in the Java platform therefore defines a mapping
  between sequences of sixteen-bit UTF-16 code units (that is, sequences
  of chars) and sequences of bytes. </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 - seealso: CharsetDecoder
 - seealso: CharsetEncoder
 - seealso: java.nio.charset.spi.CharsetProvider
 - seealso: java.lang.Character
 */
@interface JavaNioCharsetCharset : NSObject < JavaLangComparable >

#pragma mark Public

/*!
 @brief Returns a set containing this charset's aliases.
 @return An immutable set of this charset's aliases
 */
- (id<JavaUtilSet>)aliases;

/*!
 @brief Constructs a sorted map from canonical charset names to charset objects.
 <p> The map returned by this method will have one entry for each charset
  for which support is available in the current Java virtual machine.  If
  two or more supported charsets have the same canonical name then the
  resulting map will contain just one of them; which one it will contain
  is not specified. </p>
  
 <p> The invocation of this method, and the subsequent use of the
  resulting map, may cause time-consuming disk or network I/O operations
  to occur.  This method is provided for applications that need to
  enumerate all of the available charsets, for example to allow user
  charset selection.  This method is not used by the <code>forName</code>
  method, which instead employs an efficient incremental lookup
  algorithm. 
 <p> This method may return different results at different times if new
  charset providers are dynamically made available to the current Java
  virtual machine.  In the absence of such changes, the charsets returned
  by this method are exactly those that can be retrieved via the <code>forName</code>
  method.  </p>
 @return An immutable, case-insensitive map from canonical charset names
          to charset objects
 */
+ (id<JavaUtilSortedMap>)availableCharsets;

/*!
 @brief Tells whether or not this charset supports encoding.
 <p> Nearly all charsets support encoding.  The primary exceptions are
  special-purpose <i>auto-detect</i> charsets whose decoders can determine
  which of several possible encoding schemes is in use by examining the
  input byte sequence.  Such charsets do not support encoding because
  there is no way to determine which encoding should be used on output.
  Implementations of such charsets should override this method to return 
 <code>false</code>. </p>
 @return <code>true</code> if, and only if, this charset supports encoding
 */
- (jboolean)canEncode;

/*!
 @brief Compares this charset to another.
 <p> Charsets are ordered by their canonical names, without regard to
  case. </p>
 @param that The charset to which this charset is to be compared
 @return A negative integer, zero, or a positive integer as this charset
          is less than, equal to, or greater than the specified charset
 */
- (jint)compareToWithId:(JavaNioCharsetCharset *)that;

/*!
 @brief Tells whether or not this charset contains the given charset.
 <p> A charset <i>C</i> is said to <i>contain</i> a charset <i>D</i> if,
  and only if, every character representable in <i>D</i> is also
  representable in <i>C</i>.  If this relationship holds then it is
  guaranteed that every string that can be encoded in <i>D</i> can also be
  encoded in <i>C</i> without performing any replacements. 
 <p> That <i>C</i> contains <i>D</i> does not imply that each character
  representable in <i>C</i> by a particular byte sequence is represented
  in <i>D</i> by the same byte sequence, although sometimes this is the
  case. 
 <p> Every charset contains itself. 
 <p> This method computes an approximation of the containment relation:
  If it returns <code>true</code> then the given charset is known to be
  contained by this charset; if it returns <code>false</code>, however, then
  it is not necessarily the case that the given charset is not contained
  in this charset.
 @param cs The given charset
 @return <code>true</code> if the given charset is contained in this charset
 */
- (jboolean)containsWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)cs;

/*!
 @brief Convenience method that decodes bytes in this charset into Unicode
  characters.
 <p> An invocation of this method upon a charset <code>cs</code> returns the
  same result as the expression 
 @code

      cs.newDecoder()
        .onMalformedInput(CodingErrorAction.REPLACE)
        .onUnmappableCharacter(CodingErrorAction.REPLACE)
        .decode(bb); 
@endcode
  except that it is potentially more efficient because it can cache
  decoders between successive invocations. 
 <p> This method always replaces malformed-input and unmappable-character
  sequences with this charset's default replacement byte array.  In order
  to detect such sequences, use the <code>CharsetDecoder.decode(java.nio.ByteBuffer)</code>
  method directly.  </p>
 @param bb The byte buffer to be decoded
 @return A char buffer containing the decoded characters
 */
- (JavaNioCharBuffer *)decodeWithJavaNioByteBuffer:(JavaNioByteBuffer *)bb;

/*!
 @brief Returns the default charset of this Java virtual machine.
 <p>Android note: The Android platform default is always UTF-8.
 @return A charset object for the default charset
 @since 1.5
 */
+ (JavaNioCharsetCharset *)defaultCharset;

/*!
 @brief Returns this charset's human-readable name for the default locale.
 <p> The default implementation of this method simply returns this
  charset's canonical name.  Concrete subclasses of this class may
  override this method in order to provide a localized display name. </p>
 @return The display name of this charset in the default locale
 */
- (NSString *)displayName;

/*!
 @brief Returns this charset's human-readable name for the given locale.
 <p> The default implementation of this method simply returns this
  charset's canonical name.  Concrete subclasses of this class may
  override this method in order to provide a localized display name. </p>
 @param locale The locale for which the display name is to be retrieved
 @return The display name of this charset in the given locale
 */
- (NSString *)displayNameWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Convenience method that encodes Unicode characters into bytes in this
  charset.
 <p> An invocation of this method upon a charset <code>cs</code> returns the
  same result as the expression 
 @code

      cs.newEncoder()
        .onMalformedInput(CodingErrorAction.REPLACE)
        .onUnmappableCharacter(CodingErrorAction.REPLACE)
        .encode(bb); 
@endcode
  except that it is potentially more efficient because it can cache
  encoders between successive invocations. 
 <p> This method always replaces malformed-input and unmappable-character
  sequences with this charset's default replacement string.  In order to
  detect such sequences, use the <code>CharsetEncoder.encode(java.nio.CharBuffer)</code>
  method directly.  </p>
 @param cb The char buffer to be encoded
 @return A byte buffer containing the encoded characters
 */
- (JavaNioByteBuffer *)encodeWithJavaNioCharBuffer:(JavaNioCharBuffer *)cb;

/*!
 @brief Convenience method that encodes a string into bytes in this charset.
 <p> An invocation of this method upon a charset <code>cs</code> returns the
  same result as the expression 
 @code

      cs.encode(CharBuffer.wrap(s)); 
@endcode
 @param str The string to be encoded
 @return A byte buffer containing the encoded characters
 */
- (JavaNioByteBuffer *)encodeWithNSString:(NSString *)str;

/*!
 @brief Tells whether or not this object is equal to another.
 <p> Two charsets are equal if, and only if, they have the same canonical
  names.  A charset is never equal to any other type of object.  </p>
 @return <code>true</code> if, and only if, this charset is equal to the
           given object
 */
- (jboolean)isEqual:(id)ob;

/*!
 @brief Returns a charset object for the named charset.
 @param charsetName The name of the requested charset; may be either
           a canonical name or an alias
 @return A charset object for the named charset
 @throw IllegalCharsetNameException
 If the given charset name is illegal
 @throw IllegalArgumentException
 If the given <code>charsetName</code> is null
 @throw UnsupportedCharsetException
 If no support for the named charset is available
           in this instance of the Java virtual machine
 */
+ (JavaNioCharsetCharset *)forNameWithNSString:(NSString *)charsetName;

/*!
 @brief Equivalent to <code>forName</code> but only throws <code>UnsupportedEncodingException</code>,
  which is all pre-nio code claims to throw.
 */
+ (JavaNioCharsetCharset *)forNameUEEWithNSString:(NSString *)charsetName;

/*!
 @brief Computes a hashcode for this charset.
 @return An integer hashcode
 */
- (NSUInteger)hash;

/*!
 @brief Tells whether or not this charset is registered in the <a href="http://www.iana.org/assignments/character-sets">
 IANA Charset
  Registry</a>.
 @return <code>true</code> if, and only if, this charset is known by its
           implementor to be registered with the IANA
 */
- (jboolean)isRegistered;

/*!
 @brief Tells whether the named charset is supported.
 @param charsetName The name of the requested charset; may be either
           a canonical name or an alias
 @return <code>true</code> if, and only if, support for the named charset
           is available in the current Java virtual machine
 @throw IllegalCharsetNameException
 If the given charset name is illegal
 @throw IllegalArgumentException
 If the given <code>charsetName</code> is null
 */
+ (jboolean)isSupportedWithNSString:(NSString *)charsetName;

/*!
 @brief Returns this charset's canonical name.
 @return The canonical name of this charset
 */
- (NSString *)name;

/*!
 @brief Constructs a new decoder for this charset.
 @return A new decoder for this charset
 */
- (JavaNioCharsetCharsetDecoder *)newDecoder OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Constructs a new encoder for this charset.
 @return A new encoder for this charset
 @throw UnsupportedOperationException
 If this charset does not support encoding
 */
- (JavaNioCharsetCharsetEncoder *)newEncoder OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a string describing this charset.
 @return A string describing this charset
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Initializes a new charset with the given canonical name and alias
  set.
 @param canonicalName The canonical name of this charset
 @param aliases An array of this charset's aliases, or null if it has no aliases
 @throw IllegalCharsetNameException
 If the canonical name or any of the aliases are illegal
 */
- (instancetype __nonnull)initWithNSString:(NSString *)canonicalName
                         withNSStringArray:(IOSObjectArray *)aliases;

#pragma mark Package-Private

+ (jboolean)atBugLevelWithNSString:(NSString *)bl;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaNioCharsetCharset)

FOUNDATION_EXPORT jboolean JavaNioCharsetCharset_atBugLevelWithNSString_(NSString *bl);

FOUNDATION_EXPORT jboolean JavaNioCharsetCharset_isSupportedWithNSString_(NSString *charsetName);

FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetCharset_forNameWithNSString_(NSString *charsetName);

FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetCharset_forNameUEEWithNSString_(NSString *charsetName);

FOUNDATION_EXPORT id<JavaUtilSortedMap> JavaNioCharsetCharset_availableCharsets(void);

FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetCharset_defaultCharset(void);

FOUNDATION_EXPORT void JavaNioCharsetCharset_initWithNSString_withNSStringArray_(JavaNioCharsetCharset *self, NSString *canonicalName, IOSObjectArray *aliases);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCharset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetCharset")
