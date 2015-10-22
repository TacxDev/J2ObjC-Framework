//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpannableString.java
//

#ifndef _AndroidTextSpannableString_H_
#define _AndroidTextSpannableString_H_

#include "../../J2ObjC_header.h"
#include "../../android/text/GetChars.h"
#include "../../android/text/Spannable.h"
#include "../../android/text/SpannableStringInternal.h"
#include "../../java/lang/CharSequence.h"

/*!
 @brief This is the class for text whose content is immutable but to which
 markup objects can be attached and detached.
 For mutable text, see <code>SpannableStringBuilder</code>.
 */
@interface AndroidTextSpannableString : AndroidTextSpannableStringInternal < JavaLangCharSequence, AndroidTextGetChars, AndroidTextSpannable >

#pragma mark Public

- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

- (void)removeSpanWithId:(id)what;

- (void)setSpanWithId:(id)what
              withInt:(jint)start
              withInt:(jint)end
              withInt:(jint)flags;

- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

+ (AndroidTextSpannableString *)valueOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpannableString)

FOUNDATION_EXPORT void AndroidTextSpannableString_initWithJavaLangCharSequence_(AndroidTextSpannableString *self, id<JavaLangCharSequence> source);

FOUNDATION_EXPORT AndroidTextSpannableString *new_AndroidTextSpannableString_initWithJavaLangCharSequence_(id<JavaLangCharSequence> source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidTextSpannableString *AndroidTextSpannableString_valueOfWithJavaLangCharSequence_(id<JavaLangCharSequence> source);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpannableString)

#endif // _AndroidTextSpannableString_H_
