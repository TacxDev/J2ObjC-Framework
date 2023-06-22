//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/text/BreakIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextBreakIterator")
#ifdef RESTRICT_JavaTextBreakIterator
#define INCLUDE_ALL_JavaTextBreakIterator 0
#else
#define INCLUDE_ALL_JavaTextBreakIterator 1
#endif
#undef RESTRICT_JavaTextBreakIterator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextBreakIterator_) && (INCLUDE_ALL_JavaTextBreakIterator || defined(INCLUDE_JavaTextBreakIterator))
#define JavaTextBreakIterator_

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaUtilLocale;
@protocol JavaTextCharacterIterator;

/*!
 @brief The <code>BreakIterator</code> class implements methods for finding
  the location of boundaries in text.Instances of <code>BreakIterator</code>
  maintain a current position and scan over text
  returning the index of characters where boundaries occur.
 Internally, <code>BreakIterator</code> scans text using a 
 <code>CharacterIterator</code>, and is thus able to scan text held
  by any object implementing that protocol. A <code>StringCharacterIterator</code>
  is used to scan <code>String</code> objects passed to <code>setText</code>.
  The <code>CharacterIterator</code> object must not be modified after having been
  passed to <code>setText</code>. If the text in the <code>CharacterIterator</code> object
  is changed, the caller must reset <code>BreakIterator</code> by calling 
 <code>setText</code>.
  
 <p>
  You use the factory methods provided by this class to create
  instances of various types of break iterators. In particular,
  use <code>getWordInstance</code>, <code>getLineInstance</code>,
  <code>getSentenceInstance</code>, and <code>getCharacterInstance</code>
  to create <code>BreakIterator</code>s that perform
  word, line, sentence, and character boundary analysis respectively.
  A single <code>BreakIterator</code> can work only on one unit
  (word, line, sentence, and so on). You must use a different iterator
  for each unit boundary analysis you wish to perform. 
 <p><a id="line"></a>
  Line boundary analysis determines where a text string can be
  broken when line-wrapping. The mechanism correctly handles
  punctuation and hyphenated words. Actual line breaking needs
  to also consider the available line width and is handled by
  higher-level software. 
 <p><a id="sentence"></a>
  Sentence boundary analysis allows selection with correct interpretation
  of periods within numbers and abbreviations, and trailing punctuation
  marks such as quotation marks and parentheses. 
 <p><a id="word"></a>
  Word boundary analysis is used by search and replace functions, as
  well as within text editing applications that allow the user to
  select words with a double click. Word selection provides correct
  interpretation of punctuation marks within and following
  words. Characters that are not part of a word, such as symbols
  or punctuation marks, have word-breaks on both sides. 
 <p><a id="character"></a>
  Character boundary analysis allows users to interact with characters
  as they expect to, for example, when moving the cursor through a text
  string. Character boundary analysis provides correct navigation
  through character strings, regardless of how the character is stored.
  The boundaries returned may be those of supplementary characters,
  combining character sequences, or ligature clusters.
  For example, an accented character might be stored as a base character
  and a diacritical mark. What users consider to be a character can
  differ between languages. 
 <p>
  The <code>BreakIterator</code> instances returned by the factory methods
  of this class are intended for use with natural languages only, not for
  programming language text. It is however possible to define subclasses
  that tokenize a programming language. 
 <P>
  <strong>Examples</strong>:<P>
  Creating and using text boundaries: 
 <blockquote>
  @code

  public static void main(String args[]) {
       if (args.length == 1) {
           String stringToExamine = args[0];
           //print each word in order
           BreakIterator boundary = BreakIterator.getWordInstance();
           boundary.setText(stringToExamine);
           printEachForward(boundary, stringToExamine);
           //print each sentence in reverse order
           boundary = BreakIterator.getSentenceInstance(Locale.US);
           boundary.setText(stringToExamine);
           printEachBackward(boundary, stringToExamine);
           printFirst(boundary, stringToExamine);
           printLast(boundary, stringToExamine);
       }     }     
  
@endcode
  </blockquote>
  Print each element in order: 
 <blockquote>
  @code

  public static void printEachForward(BreakIterator boundary, String source) {
      int start = boundary.first();
      for (int end = boundary.next();
           end != BreakIterator.DONE;
           start = end, end = boundary.next()) {
           System.out.println(source.substring(start,end));
      }    }    
  
@endcode
  </blockquote>
  Print each element in reverse order: 
 <blockquote>
  @code

  public static void printEachBackward(BreakIterator boundary, String source) {
      int end = boundary.last();
      for (int start = boundary.previous();
           start != BreakIterator.DONE;
           end = start, start = boundary.previous()) {
          System.out.println(source.substring(start,end));
      }    }    
  
@endcode
  </blockquote>
  Print first element: 
 <blockquote>
  @code

  public static void printFirst(BreakIterator boundary, String source) {
      int start = boundary.first();
      int end = boundary.next();
      System.out.println(source.substring(start,end));
  } 
  
@endcode
  </blockquote>
  Print last element: 
 <blockquote>
  @code

  public static void printLast(BreakIterator boundary, String source) {
      int end = boundary.last();
      int start = boundary.previous();
      System.out.println(source.substring(start,end));
  } 
  
@endcode
  </blockquote>
  Print the element at a specified position: 
 <blockquote>
  @code

  public static void printAt(BreakIterator boundary, int pos, String source) {
      int end = boundary.following(pos);
      int start = boundary.previous();
      System.out.println(source.substring(start,end));
  } 
  
@endcode
  </blockquote>
  Find the next word: 
 <blockquote>
  @code
 public static int nextWordStartAfter(int pos, String text) {
      BreakIterator wb = BreakIterator.getWordInstance();
      wb.setText(text);
      int last = wb.following(pos);
      int current = wb.next();
      while (current != BreakIterator.DONE) {
          for (int p = last; p < current; p++) {
              if (Character.isLetter(text.codePointAt(p)))
                  return last;
          }
          last = current;
          current = wb.next();
      }
      return BreakIterator.DONE;
  } 
 
@endcode
  (The iterator returned by BreakIterator.getWordInstance() is unique in that
  the break positions it returns don't represent both the start and end of the
  thing being iterated over.  That is, a sentence-break iterator returns breaks
  that each represent the end of one sentence and the beginning of the next.
  With the word-break iterator, the characters between two boundaries might be a
  word, or they might be the punctuation or whitespace between two words.  The
  above code uses a simple heuristic to determine which boundary is the beginning
  of a word: If the characters between this boundary and the next boundary
  include at least one letter (this can be an alphabetical letter, a CJK ideograph,
  a Hangul syllable, a Kana character, etc.), then the text between this boundary
  and the next is a word; otherwise, it's the material between words.) 
 </blockquote>
 @since 1.1
 - seealso: CharacterIterator
 */
@interface JavaTextBreakIterator : NSObject < NSCopying >

#pragma mark Public

/*!
 @brief Create a copy of this iterator
 @return A copy of this
 */
- (id)java_clone;

/*!
 @brief Returns character index of the text boundary that was most
  recently returned by next(), next(int), previous(), first(), last(),
  following(int) or preceding(int).If any of these methods returns 
 <code>BreakIterator.DONE</code> because either first or last text boundary
  has been reached, it returns the first or last text boundary depending on
  which one is reached.
 @return The text boundary returned from the above methods, first or last
  text boundary.
 - seealso: #next()
 - seealso: #next(int)
 - seealso: #previous()
 - seealso: #first()
 - seealso: #last()
 - seealso: #following(int)
 - seealso: #preceding(int)
 */
- (jint)current;

/*!
 @brief Returns the first boundary.The iterator's current position is set
  to the first text boundary.
 @return The character index of the first text boundary.
 */
- (jint)first;

/*!
 @brief Returns the first boundary following the specified character offset.If the
  specified offset equals to the last text boundary, it returns 
 <code>BreakIterator.DONE</code> and the iterator's current position is unchanged.
 Otherwise, the iterator's current position is set to the returned boundary.
  The value returned is always greater than the offset or the value 
 <code>BreakIterator.DONE</code>.
 @param offset the character offset to begin scanning.
 @return The first boundary after the specified offset or 
 <code>BreakIterator.DONE</code> if the last text boundary is passed in
  as the offset.
 @throw IllegalArgumentExceptionif the specified offset is less than
  the first text boundary or greater than the last text boundary.
 */
- (jint)followingWithInt:(jint)offset;

/*!
 @brief Returns an array of all locales for which the 
 <code>get*Instance</code> methods of this class can return
  localized instances.
 @return An array of locales for which localized
          <code>BreakIterator</code> instances are available.
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief Returns a new <code>BreakIterator</code> instance
  for <a href="BreakIterator.html#character">character breaks</a>
  for the default locale.
 @return A break iterator for character breaks
 */
+ (JavaTextBreakIterator *)getCharacterInstance;

/*!
 @brief Returns a new <code>BreakIterator</code> instance
  for <a href="BreakIterator.html#character">character breaks</a>
  for the given locale.
 @param locale the desired locale
 @return A break iterator for character breaks
 @throw NullPointerExceptionif <code>locale</code> is null
 */
+ (JavaTextBreakIterator *)getCharacterInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a new <code>BreakIterator</code> instance
  for <a href="BreakIterator.html#line">line breaks</a>
  for the default locale.
 @return A break iterator for line breaks
 */
+ (JavaTextBreakIterator *)getLineInstance;

/*!
 @brief Returns a new <code>BreakIterator</code> instance
  for <a href="BreakIterator.html#line">line breaks</a>
  for the given locale.
 @param locale the desired locale
 @return A break iterator for line breaks
 @throw NullPointerExceptionif <code>locale</code> is null
 */
+ (JavaTextBreakIterator *)getLineInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a new <code>BreakIterator</code> instance
  for <a href="BreakIterator.html#sentence">sentence breaks</a>
  for the default locale.
 @return A break iterator for sentence breaks
 */
+ (JavaTextBreakIterator *)getSentenceInstance;

/*!
 @brief Returns a new <code>BreakIterator</code> instance
  for <a href="BreakIterator.html#sentence">sentence breaks</a>
  for the given locale.
 @param locale the desired locale
 @return A break iterator for sentence breaks
 @throw NullPointerExceptionif <code>locale</code> is null
 */
+ (JavaTextBreakIterator *)getSentenceInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Get the text being scanned
 @return the text being scanned
 */
- (id<JavaTextCharacterIterator>)getText;

/*!
 @brief Returns a new <code>BreakIterator</code> instance
  for <a href="BreakIterator.html#word">word breaks</a>
  for the default locale.
 @return A break iterator for word breaks
 */
+ (JavaTextBreakIterator *)getWordInstance;

/*!
 @brief Returns a new <code>BreakIterator</code> instance
  for <a href="BreakIterator.html#word">word breaks</a>
  for the given locale.
 @param locale the desired locale
 @return A break iterator for word breaks
 @throw NullPointerExceptionif <code>locale</code> is null
 */
+ (JavaTextBreakIterator *)getWordInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns true if the specified character offset is a text boundary.
 @param offset the character offset to check.
 @return <code>true</code> if "offset" is a boundary position, 
 <code>false</code> otherwise.
 @throw IllegalArgumentExceptionif the specified offset is less than
  the first text boundary or greater than the last text boundary.
 @since 1.2
 */
- (jboolean)isBoundaryWithInt:(jint)offset;

/*!
 @brief Returns the last boundary.The iterator's current position is set
  to the last text boundary.
 @return The character index of the last text boundary.
 */
- (jint)last;

/*!
 @brief Returns the boundary following the current boundary.If the current boundary
  is the last text boundary, it returns <code>BreakIterator.DONE</code> and
  the iterator's current position is unchanged.
 Otherwise, the iterator's
  current position is set to the boundary following the current boundary.
 @return The character index of the next text boundary or 
 <code>BreakIterator.DONE</code> if the current boundary is the last text
  boundary.
  Equivalent to next(1).
 - seealso: #next(int)
 */
- (jint)next;

/*!
 @brief Returns the nth boundary from the current boundary.If either
  the first or last text boundary has been reached, it returns 
 <code>BreakIterator.DONE</code> and the current position is set to either
  the first or last text boundary depending on which one is reached.
 Otherwise,
  the iterator's current position is set to the new boundary.
  For example, if the iterator's current position is the mth text boundary
  and three more boundaries exist from the current boundary to the last text
  boundary, the next(2) call will return m + 2. The new text position is set
  to the (m + 2)th text boundary. A next(4) call would return 
 <code>BreakIterator.DONE</code> and the last text boundary would become the
  new text position.
 @param n which boundary to return.  A value of 0  does nothing.  Negative values move to previous boundaries
   and positive values move to later boundaries.
 @return The character index of the nth boundary from the current position
  or <code>BreakIterator.DONE</code> if either first or last text boundary
  has been reached.
 */
- (jint)nextWithInt:(jint)n;

/*!
 @brief Returns the last boundary preceding the specified character offset.If the
  specified offset equals to the first text boundary, it returns 
 <code>BreakIterator.DONE</code> and the iterator's current position is unchanged.
 Otherwise, the iterator's current position is set to the returned boundary.
  The value returned is always less than the offset or the value 
 <code>BreakIterator.DONE</code>.
 @param offset the character offset to begin scanning.
 @return The last boundary before the specified offset or 
 <code>BreakIterator.DONE</code> if the first text boundary is passed in
  as the offset.
 @throw IllegalArgumentExceptionif the specified offset is less than
  the first text boundary or greater than the last text boundary.
 @since 1.2
 */
- (jint)precedingWithInt:(jint)offset;

/*!
 @brief Returns the boundary preceding the current boundary.If the current boundary
  is the first text boundary, it returns <code>BreakIterator.DONE</code> and
  the iterator's current position is unchanged.
 Otherwise, the iterator's
  current position is set to the boundary preceding the current boundary.
 @return The character index of the previous text boundary or 
 <code>BreakIterator.DONE</code> if the current boundary is the first text
  boundary.
 */
- (jint)previous;

/*!
 @brief Set a new text for scanning.The current scan
  position is reset to first().
 @param newText new text to scan.
 */
- (void)setTextWithJavaTextCharacterIterator:(id<JavaTextCharacterIterator>)newText;

/*!
 @brief Set a new text string to be scanned.The current scan
  position is reset to first().
 @param newText new text to scan.
 */
- (void)setTextWithNSString:(NSString *)newText;

#pragma mark Protected

/*!
 @brief Constructor.BreakIterator is stateless and has no default behavior.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextBreakIterator)

/*!
 @brief DONE is returned by previous(), next(), next(int), preceding(int)
  and following(int) when either the first or last text boundary has been
  reached.
 */
inline jint JavaTextBreakIterator_get_DONE(void);
#define JavaTextBreakIterator_DONE -1
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextBreakIterator, DONE, jint)

FOUNDATION_EXPORT void JavaTextBreakIterator_init(JavaTextBreakIterator *self);

FOUNDATION_EXPORT JavaTextBreakIterator *JavaTextBreakIterator_getWordInstance(void);

FOUNDATION_EXPORT JavaTextBreakIterator *JavaTextBreakIterator_getWordInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextBreakIterator *JavaTextBreakIterator_getLineInstance(void);

FOUNDATION_EXPORT JavaTextBreakIterator *JavaTextBreakIterator_getLineInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextBreakIterator *JavaTextBreakIterator_getCharacterInstance(void);

FOUNDATION_EXPORT JavaTextBreakIterator *JavaTextBreakIterator_getCharacterInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextBreakIterator *JavaTextBreakIterator_getSentenceInstance(void);

FOUNDATION_EXPORT JavaTextBreakIterator *JavaTextBreakIterator_getSentenceInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT IOSObjectArray *JavaTextBreakIterator_getAvailableLocales(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextBreakIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTextBreakIterator")