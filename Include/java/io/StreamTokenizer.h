//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/StreamTokenizer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoStreamTokenizer")
#ifdef RESTRICT_JavaIoStreamTokenizer
#define INCLUDE_ALL_JavaIoStreamTokenizer 0
#else
#define INCLUDE_ALL_JavaIoStreamTokenizer 1
#endif
#undef RESTRICT_JavaIoStreamTokenizer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoStreamTokenizer_) && (INCLUDE_ALL_JavaIoStreamTokenizer || defined(INCLUDE_JavaIoStreamTokenizer))
#define JavaIoStreamTokenizer_

@class JavaIoInputStream;
@class JavaIoReader;
@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangInteger;

/*!
 @brief Parses a stream into a set of defined tokens, one at a time.The different
  types of tokens that can be found are numbers, identifiers, quoted strings,
  and different comment styles.
 The class can be used for limited processing
  of source code of programming languages like Java, although it is nowhere
  near a full parser.
 */
@interface JavaIoStreamTokenizer : NSObject {
 @public
  /*!
   @brief Contains a number if the current token is a number (<code>ttype</code> == 
 <code>TT_NUMBER</code>).
   */
  jdouble nval_;
  /*!
   @brief Contains a string if the current token is a word (<code>ttype</code> == 
 <code>TT_WORD</code>).
   */
  NSString *sval_;
  /*!
   @brief After calling <code>nextToken()</code>, <code>ttype</code> contains the type of
  token that has been read.When a single character is read, its value
  converted to an integer is stored in <code>ttype</code>.
   For a quoted string,
  the value is the quoted character. Otherwise, its value is one of the
  following: 
 <ul>
  <li> <code>TT_WORD</code> - the token is a word.</li>
  <li> <code>TT_NUMBER</code> - the token is a number.</li>
  <li> <code>TT_EOL</code> - the end of line has been reached. Depends on
  whether <code>eolIsSignificant</code> is <code>true</code>.</li>
  <li> <code>TT_EOF</code> - the end of the stream has been reached.</li>
  </ul>
   */
  jint ttype_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>StreamTokenizer</code> with <code>is</code> as source input
  stream.This constructor is deprecated; instead, the constructor that
  takes a <code>Reader</code> as an arugment should be used.
 @param is the source stream from which to parse tokens.
 @throw NullPointerException
 if <code>is</code> is <code>null</code>.
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)is;

/*!
 @brief Constructs a new <code>StreamTokenizer</code> with <code>r</code> as source reader.
 The tokenizer's initial state is as follows: 
 <ul>
  <li>All byte values 'A' through 'Z', 'a' through 'z', and '&#92;u00A0'
  through '&#92;u00FF' are considered to be alphabetic.</li>
  <li>All byte values '&#92;u0000' through '&#92;u0020' are considered to
  be white space. '/' is a comment character.</li>
  <li>Single quote '\'' and double quote '"' are string quote characters. 
 </li>
  <li>Numbers are parsed.</li>
  <li>End of lines are considered to be white space rather than separate
  tokens.</li>
  <li>C-style and C++-style comments are not recognized.</LI>
  </ul>
 @param r the source reader from which to parse tokens.
 */
- (instancetype __nonnull)initWithJavaIoReader:(JavaIoReader *)r;

/*!
 @brief Specifies that the character <code>ch</code> shall be treated as a comment
  character.
 @param ch the character to be considered a comment character.
 */
- (void)commentCharWithInt:(jint)ch;

/*!
 @brief Specifies whether the end of a line is significant and should be returned
  as <code>TT_EOF</code> in <code>ttype</code> by this tokenizer.
 @param flag<code>true</code>
   if EOL is significant, <code>false</code>  otherwise.
 */
- (void)eolIsSignificantWithBoolean:(jboolean)flag;

/*!
 @brief Returns the current line number.
 @return this tokenizer's current line number.
 */
- (jint)lineno;

/*!
 @brief Specifies whether word tokens should be converted to lower case when they
  are stored in <code>sval</code>.
 @param flag<code>true</code>
   if <code>sval</code>  should be converted to lower             case, 
 <code>false</code>  otherwise.
 */
- (void)lowerCaseModeWithBoolean:(jboolean)flag;

/*!
 @brief Parses the next token from this tokenizer's source stream or reader.The
  type of the token is stored in the <code>ttype</code> field, additional
  information may be stored in the <code>nval</code> or <code>sval</code> fields.
 @return the value of <code>ttype</code>.
 @throw IOException
 if an I/O error occurs while parsing the next token.
 */
- (jint)nextToken;

/*!
 @brief Specifies that the character <code>ch</code> shall be treated as an ordinary
  character by this tokenizer.That is, it has no special meaning as a
  comment character, word component, white space, string delimiter or
  number.
 @param ch the character to be considered an ordinary character.
 */
- (void)ordinaryCharWithInt:(jint)ch;

/*!
 @brief Specifies that the characters in the range from <code>low</code> to <code>hi</code>
  shall be treated as an ordinary character by this tokenizer.That is,
  they have no special meaning as a comment character, word component,
  white space, string delimiter or number.
 @param low the first character in the range of ordinary characters.
 @param hi the last character in the range of ordinary characters.
 */
- (void)ordinaryCharsWithInt:(jint)low
                     withInt:(jint)hi;

/*!
 @brief Specifies that this tokenizer shall parse numbers.
 */
- (void)parseNumbers;

/*!
 @brief Indicates that the current token should be pushed back and returned again
  the next time <code>nextToken()</code> is called.
 */
- (void)pushBack;

/*!
 @brief Specifies that the character <code>ch</code> shall be treated as a quote
  character.
 @param ch the character to be considered a quote character.
 */
- (void)quoteCharWithInt:(jint)ch;

/*!
 @brief Specifies that all characters shall be treated as ordinary characters.
 */
- (void)resetSyntax;

/*!
 @brief Specifies whether "slash-slash" (C++-style) comments shall be recognized.
 This kind of comment ends at the end of the line.
 @param flag<code>true</code>
   if <code>//</code>  should be recognized as the start             of a comment, 
 <code>false</code>  otherwise.
 */
- (void)slashSlashCommentsWithBoolean:(jboolean)flag;

/*!
 @brief Specifies whether "slash-star" (C-style) comments shall be recognized.
 Slash-star comments cannot be nested and end when a star-slash
  combination is found.
 @param flag<code>true</code>
   if <code>/\*</code>  should be recognized as the start             of a comment, 
 <code>false</code>  otherwise.
 */
- (void)slashStarCommentsWithBoolean:(jboolean)flag;

/*!
 @brief Returns the state of this tokenizer in a readable format.
 @return the current state of this tokenizer.
 */
- (NSString *)description;

/*!
 @brief Specifies that the characters in the range from <code>low</code> to <code>hi</code>
  shall be treated as whitespace characters by this tokenizer.
 @param low the first character in the range of whitespace characters.
 @param hi the last character in the range of whitespace characters.
 */
- (void)whitespaceCharsWithInt:(jint)low
                       withInt:(jint)hi;

/*!
 @brief Specifies that the characters in the range from <code>low</code> to <code>hi</code>
  shall be treated as word characters by this tokenizer.A word consists of
  a word character followed by zero or more word or number characters.
 @param low the first character in the range of word characters.
 @param hi the last character in the range of word characters.
 */
- (void)wordCharsWithInt:(jint)low
                 withInt:(jint)hi;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStreamTokenizer)

J2OBJC_FIELD_SETTER(JavaIoStreamTokenizer, sval_, NSString *)

/*!
 @brief The constant representing the end of the stream.
 */
inline jint JavaIoStreamTokenizer_get_TT_EOF(void);
#define JavaIoStreamTokenizer_TT_EOF -1
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoStreamTokenizer, TT_EOF, jint)

/*!
 @brief The constant representing the end of the line.
 */
inline jint JavaIoStreamTokenizer_get_TT_EOL(void);
#define JavaIoStreamTokenizer_TT_EOL 10
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoStreamTokenizer, TT_EOL, jint)

/*!
 @brief The constant representing a number token.
 */
inline jint JavaIoStreamTokenizer_get_TT_NUMBER(void);
#define JavaIoStreamTokenizer_TT_NUMBER -2
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoStreamTokenizer, TT_NUMBER, jint)

/*!
 @brief The constant representing a word token.
 */
inline jint JavaIoStreamTokenizer_get_TT_WORD(void);
#define JavaIoStreamTokenizer_TT_WORD -3
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoStreamTokenizer, TT_WORD, jint)

FOUNDATION_EXPORT void JavaIoStreamTokenizer_initWithJavaIoInputStream_(JavaIoStreamTokenizer *self, JavaIoInputStream *is);

FOUNDATION_EXPORT JavaIoStreamTokenizer *new_JavaIoStreamTokenizer_initWithJavaIoInputStream_(JavaIoInputStream *is) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoStreamTokenizer *create_JavaIoStreamTokenizer_initWithJavaIoInputStream_(JavaIoInputStream *is);

FOUNDATION_EXPORT void JavaIoStreamTokenizer_initWithJavaIoReader_(JavaIoStreamTokenizer *self, JavaIoReader *r);

FOUNDATION_EXPORT JavaIoStreamTokenizer *new_JavaIoStreamTokenizer_initWithJavaIoReader_(JavaIoReader *r) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoStreamTokenizer *create_JavaIoStreamTokenizer_initWithJavaIoReader_(JavaIoReader *r);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStreamTokenizer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoStreamTokenizer")
