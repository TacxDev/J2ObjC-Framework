//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/Editable.java
//

#ifndef _AndroidTextEditable_H_
#define _AndroidTextEditable_H_

#include "../../J2ObjC_header.h"
#include "../../android/text/GetChars.h"
#include "../../android/text/Spannable.h"
#include "../../java/lang/Appendable.h"
#include "../../java/lang/CharSequence.h"

@class IOSObjectArray;

/*!
 @brief This is the interface for text whose content and markup
 can be changed (as opposed
 to immutable text like Strings).
 */
@protocol AndroidTextEditable < JavaLangCharSequence, AndroidTextGetChars, AndroidTextSpannable, JavaLangAppendable, NSObject, JavaObject >

/*!
 @brief Replaces the specified range (<code>st&hellip;en</code>) of text in this
 Editable with a copy of the slice <code>start&hellip;end</code> from
 <code>source</code>.
 The destination slice may be empty, in which case
 the operation is an insertion, or the source slice may be empty,
 in which case the operation is a deletion.
 <p>
 Before the change is committed, each filter that was set with
 <code>setFilters</code> is given the opportunity to modify the
 <code>source</code> text.
 <p>
 If <code>source</code>
 is Spanned, the spans from it are preserved into the Editable.
 Existing spans within the Editable that entirely cover the replaced
 range are retained, but any that were strictly within the range
 that was replaced are removed.  As a special case, the cursor
 position is preserved even when the entire range where it is
 located is replaced.
 @return a reference to this object.
 */
- (id<AndroidTextEditable>)replaceWithInt:(jint)st
                                  withInt:(jint)en
                 withJavaLangCharSequence:(id<JavaLangCharSequence>)source
                                  withInt:(jint)start
                                  withInt:(jint)end;

/*!
 @brief Convenience for replace(st, en, text, 0, text.length())
 */
- (id<AndroidTextEditable>)replaceWithInt:(jint)st
                                  withInt:(jint)en
                 withJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Convenience for replace(where, where, text, start, end)
 */
- (id<AndroidTextEditable>)insertWithInt:(jint)where
                withJavaLangCharSequence:(id<JavaLangCharSequence>)text
                                 withInt:(jint)start
                                 withInt:(jint)end;

/*!
 @brief Convenience for replace(where, where, text, 0, text.length());
 */
- (id<AndroidTextEditable>)insertWithInt:(jint)where
                withJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Convenience for replace(st, en, "", 0, 0)
 */
- (id<AndroidTextEditable>)delete__WithInt:(jint)st
                                   withInt:(jint)en;

/*!
 @brief Convenience for replace(length(), length(), text, 0, text.length())
 */
- (id<AndroidTextEditable>)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Convenience for replace(length(), length(), text, start, end)
 */
- (id<AndroidTextEditable>)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)text
                                                  withInt:(jint)start
                                                  withInt:(jint)end;

/*!
 @brief Convenience for append(String.valueOf(text)).
 */
- (id<AndroidTextEditable>)appendWithChar:(jchar)text;

/*!
 @brief Convenience for replace(0, length(), "", 0, 0)
 */
- (void)clear;

/*!
 @brief Removes all spans from the Editable, as if by calling
 <code>removeSpan</code> on each of them.
 */
- (void)clearSpans;

/*!
 @brief Sets the series of filters that will be called in succession
 whenever the text of this Editable is changed, each of which has
 the opportunity to limit or transform the text that is being inserted.
 */
- (void)setFiltersWithAndroidTextInputFilterArray:(IOSObjectArray *)filters;

/*!
 @brief Returns the array of input filters that are currently applied
 to changes to this Editable.
 */
- (IOSObjectArray *)getFilters;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextEditable)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextEditable)

/*!
 @brief Factory used by TextView to create new Editables.
 You can subclass
 it to provide something other than SpannableStringBuilder.
 */
@interface AndroidTextEditable_Factory : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns the standard Editable Factory.
 */
+ (AndroidTextEditable_Factory *)getInstance;

/*!
 @brief Returns a new SpannedStringBuilder from the specified
 CharSequence.
 You can override this to provide
 a different kind of Spanned.
 */
- (id<AndroidTextEditable>)newEditableWithJavaLangCharSequence:(id<JavaLangCharSequence>)source OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(AndroidTextEditable_Factory)

FOUNDATION_EXPORT AndroidTextEditable_Factory *AndroidTextEditable_Factory_getInstance();

FOUNDATION_EXPORT void AndroidTextEditable_Factory_init(AndroidTextEditable_Factory *self);

FOUNDATION_EXPORT AndroidTextEditable_Factory *new_AndroidTextEditable_Factory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextEditable_Factory)

#endif // _AndroidTextEditable_H_
