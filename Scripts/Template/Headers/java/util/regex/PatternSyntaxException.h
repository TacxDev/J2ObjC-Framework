//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/regex/PatternSyntaxException.java
//

#ifndef _JavaUtilRegexPatternSyntaxException_H_
#define _JavaUtilRegexPatternSyntaxException_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/lang/IllegalArgumentException.h"

/*!
 @brief Encapsulates a syntax error that occurred during the compilation of a
 <code>Pattern</code>.
 Might include a detailed description, the original regular
 expression, and the index at which the error occurred.
 */
@interface JavaUtilRegexPatternSyntaxException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Creates a new PatternSyntaxException for a given message, pattern, and
 error index.
 @param description_
 the description of the syntax error, or <code>null</code> if the
 description is not known.
 @param pattern
 the syntactically incorrect regular expression, or
 <code>null</code> if the regular expression is not known.
 @param index
 the character index around which the error occurred, or -1 if
 the index is not known.
 */
- (instancetype)initWithNSString:(NSString *)description_
                    withNSString:(NSString *)pattern
                         withInt:(jint)index;

/*!
 @brief Returns the description of the syntax error, or <code>null</code> if the
 description is not known.
 @return the description.
 */
- (NSString *)getDescription;

/*!
 @brief Returns the character index around which the error occurred, or -1 if the
 index is not known.
 @return the index.
 */
- (jint)getIndex;

/*!
 @brief Returns a detailed error message for the exception.
 The message is
 potentially multi-line, and it might include a detailed description, the
 original regular expression, and the index at which the error occurred.
 @return the error message.
 */
- (NSString *)getMessage;

/*!
 @brief Returns the syntactically incorrect regular expression.
 @return the regular expression.
 */
- (NSString *)getPattern;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexPatternSyntaxException)

FOUNDATION_EXPORT void JavaUtilRegexPatternSyntaxException_initWithNSString_withNSString_withInt_(JavaUtilRegexPatternSyntaxException *self, NSString *description_, NSString *pattern, jint index);

FOUNDATION_EXPORT JavaUtilRegexPatternSyntaxException *new_JavaUtilRegexPatternSyntaxException_initWithNSString_withNSString_withInt_(NSString *description_, NSString *pattern, jint index) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexPatternSyntaxException)

#endif // _JavaUtilRegexPatternSyntaxException_H_
