//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/io/BaseEncoding.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoBaseEncoding")
#ifdef RESTRICT_ComGoogleCommonIoBaseEncoding
#define INCLUDE_ALL_ComGoogleCommonIoBaseEncoding 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoBaseEncoding 1
#endif
#undef RESTRICT_ComGoogleCommonIoBaseEncoding
#ifdef INCLUDE_ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding
#define INCLUDE_ComGoogleCommonIoBaseEncoding 1
#endif
#ifdef INCLUDE_ComGoogleCommonIoBaseEncoding_Base64Encoding
#define INCLUDE_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding 1
#endif
#ifdef INCLUDE_ComGoogleCommonIoBaseEncoding_Base16Encoding
#define INCLUDE_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding 1
#endif
#ifdef INCLUDE_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding
#define INCLUDE_ComGoogleCommonIoBaseEncoding 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoBaseEncoding_) && (INCLUDE_ALL_ComGoogleCommonIoBaseEncoding || defined(INCLUDE_ComGoogleCommonIoBaseEncoding))
#define ComGoogleCommonIoBaseEncoding_

@class ComGoogleCommonIoByteSink;
@class ComGoogleCommonIoByteSource;
@class ComGoogleCommonIoCharSink;
@class ComGoogleCommonIoCharSource;
@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoReader;
@class JavaIoWriter;
@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangInteger;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoBaseEncoding : NSObject

#pragma mark Public

+ (ComGoogleCommonIoBaseEncoding *)base16;

+ (ComGoogleCommonIoBaseEncoding *)base32;

+ (ComGoogleCommonIoBaseEncoding *)base32Hex;

+ (ComGoogleCommonIoBaseEncoding *)base64;

+ (ComGoogleCommonIoBaseEncoding *)base64Url;

- (jboolean)canDecodeWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (IOSByteArray *)decodeWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (ComGoogleCommonIoByteSource *)decodingSourceWithComGoogleCommonIoCharSource:(ComGoogleCommonIoCharSource *)encodedSource;

- (JavaIoInputStream *)decodingStreamWithJavaIoReader:(JavaIoReader *)reader;

- (NSString *)encodeWithByteArray:(IOSByteArray *)bytes;

- (NSString *)encodeWithByteArray:(IOSByteArray *)bytes
                          withInt:(jint)off
                          withInt:(jint)len;

- (ComGoogleCommonIoByteSink *)encodingSinkWithComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)encodedSink;

- (JavaIoOutputStream *)encodingStreamWithJavaIoWriter:(JavaIoWriter *)writer;

- (ComGoogleCommonIoBaseEncoding *)lowerCase;

- (ComGoogleCommonIoBaseEncoding *)omitPadding;

- (ComGoogleCommonIoBaseEncoding *)upperCase;

- (ComGoogleCommonIoBaseEncoding *)withPadCharWithChar:(jchar)padChar;

- (ComGoogleCommonIoBaseEncoding *)withSeparatorWithNSString:(NSString *)separator
                                                     withInt:(jint)n;

#pragma mark Package-Private

- (instancetype)init;

- (IOSByteArray *)decodeCheckedWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (jint)decodeToWithByteArray:(IOSByteArray *)target
     withJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (void)encodeToWithJavaLangAppendable:(id<JavaLangAppendable>)target
                         withByteArray:(IOSByteArray *)bytes
                               withInt:(jint)off
                               withInt:(jint)len;

+ (JavaIoReader *)ignoringReaderWithJavaIoReader:(JavaIoReader *)delegate
                                    withNSString:(NSString *)toIgnore;

- (jint)maxDecodedSizeWithInt:(jint)chars;

- (jint)maxEncodedSizeWithInt:(jint)bytes;

+ (id<JavaLangAppendable>)separatingAppendableWithJavaLangAppendable:(id<JavaLangAppendable>)delegate
                                                        withNSString:(NSString *)separator
                                                             withInt:(jint)afterEveryChars;

+ (JavaIoWriter *)separatingWriterWithJavaIoWriter:(JavaIoWriter *)delegate
                                      withNSString:(NSString *)separator
                                           withInt:(jint)afterEveryChars;

- (id<JavaLangCharSequence>)trimTrailingPaddingWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoBaseEncoding)

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_init(ComGoogleCommonIoBaseEncoding *self);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base64(void);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base64Url(void);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base32(void);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base32Hex(void);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base16(void);

FOUNDATION_EXPORT JavaIoReader *ComGoogleCommonIoBaseEncoding_ignoringReaderWithJavaIoReader_withNSString_(JavaIoReader *delegate, NSString *toIgnore);

FOUNDATION_EXPORT id<JavaLangAppendable> ComGoogleCommonIoBaseEncoding_separatingAppendableWithJavaLangAppendable_withNSString_withInt_(id<JavaLangAppendable> delegate, NSString *separator, jint afterEveryChars);

FOUNDATION_EXPORT JavaIoWriter *ComGoogleCommonIoBaseEncoding_separatingWriterWithJavaIoWriter_withNSString_withInt_(JavaIoWriter *delegate, NSString *separator, jint afterEveryChars);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoBaseEncoding)

#endif

#if !defined (ComGoogleCommonIoBaseEncoding_DecodingException_) && (INCLUDE_ALL_ComGoogleCommonIoBaseEncoding || defined(INCLUDE_ComGoogleCommonIoBaseEncoding_DecodingException))
#define ComGoogleCommonIoBaseEncoding_DecodingException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

@class JavaLangThrowable;

@interface ComGoogleCommonIoBaseEncoding_DecodingException : JavaIoIOException

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoBaseEncoding_DecodingException)

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_DecodingException_initWithNSString_(ComGoogleCommonIoBaseEncoding_DecodingException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_DecodingException *new_ComGoogleCommonIoBaseEncoding_DecodingException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_DecodingException *create_ComGoogleCommonIoBaseEncoding_DecodingException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_DecodingException_initWithJavaLangThrowable_(ComGoogleCommonIoBaseEncoding_DecodingException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_DecodingException *new_ComGoogleCommonIoBaseEncoding_DecodingException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_DecodingException *create_ComGoogleCommonIoBaseEncoding_DecodingException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoBaseEncoding_DecodingException)

#endif

#if !defined (ComGoogleCommonIoBaseEncoding_Alphabet_) && (INCLUDE_ALL_ComGoogleCommonIoBaseEncoding || defined(INCLUDE_ComGoogleCommonIoBaseEncoding_Alphabet))
#define ComGoogleCommonIoBaseEncoding_Alphabet_

@class IOSCharArray;
@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangInteger;

@interface ComGoogleCommonIoBaseEncoding_Alphabet : NSObject {
 @public
  jint mask_;
  jint bitsPerChar_;
  jint charsPerChunk_;
  jint bytesPerChunk_;
}

#pragma mark Public

- (jboolean)isEqual:(id)other;

- (NSUInteger)hash;

- (jboolean)matchesWithChar:(jchar)c;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)name
                   withCharArray:(IOSCharArray *)chars;

- (jboolean)canDecodeWithChar:(jchar)ch;

- (jint)decodeWithChar:(jchar)ch;

- (jchar)encodeWithInt:(jint)bits;

- (jboolean)isValidPaddingStartPositionWithInt:(jint)index;

- (ComGoogleCommonIoBaseEncoding_Alphabet *)lowerCase;

- (ComGoogleCommonIoBaseEncoding_Alphabet *)upperCase;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoBaseEncoding_Alphabet)

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_Alphabet_initWithNSString_withCharArray_(ComGoogleCommonIoBaseEncoding_Alphabet *self, NSString *name, IOSCharArray *chars);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_Alphabet *new_ComGoogleCommonIoBaseEncoding_Alphabet_initWithNSString_withCharArray_(NSString *name, IOSCharArray *chars) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_Alphabet *create_ComGoogleCommonIoBaseEncoding_Alphabet_initWithNSString_withCharArray_(NSString *name, IOSCharArray *chars);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoBaseEncoding_Alphabet)

#endif

#if !defined (ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_) && (INCLUDE_ALL_ComGoogleCommonIoBaseEncoding || defined(INCLUDE_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding))
#define ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_

@class ComGoogleCommonIoBaseEncoding;
@class ComGoogleCommonIoBaseEncoding_Alphabet;
@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoReader;
@class JavaIoWriter;
@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangInteger;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoBaseEncoding_StandardBaseEncoding : ComGoogleCommonIoBaseEncoding {
 @public
  ComGoogleCommonIoBaseEncoding_Alphabet *alphabet_;
  JavaLangCharacter *paddingChar_;
}

#pragma mark Public

- (jboolean)canDecodeWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (JavaIoInputStream *)decodingStreamWithJavaIoReader:(JavaIoReader *)reader;

- (JavaIoOutputStream *)encodingStreamWithJavaIoWriter:(JavaIoWriter *)outArg;

- (jboolean)isEqual:(id)other;

- (NSUInteger)hash;

- (ComGoogleCommonIoBaseEncoding *)lowerCase;

- (ComGoogleCommonIoBaseEncoding *)omitPadding;

- (NSString *)description;

- (ComGoogleCommonIoBaseEncoding *)upperCase;

- (ComGoogleCommonIoBaseEncoding *)withPadCharWithChar:(jchar)padChar;

- (ComGoogleCommonIoBaseEncoding *)withSeparatorWithNSString:(NSString *)separator
                                                     withInt:(jint)afterEveryChars;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonIoBaseEncoding_Alphabet:(ComGoogleCommonIoBaseEncoding_Alphabet *)alphabet
                                         withJavaLangCharacter:(JavaLangCharacter *)paddingChar;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)alphabetChars
           withJavaLangCharacter:(JavaLangCharacter *)paddingChar;

- (jint)decodeToWithByteArray:(IOSByteArray *)target
     withJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (void)encodeChunkToWithJavaLangAppendable:(id<JavaLangAppendable>)target
                              withByteArray:(IOSByteArray *)bytes
                                    withInt:(jint)off
                                    withInt:(jint)len;

- (void)encodeToWithJavaLangAppendable:(id<JavaLangAppendable>)target
                         withByteArray:(IOSByteArray *)bytes
                               withInt:(jint)off
                               withInt:(jint)len;

- (jint)maxDecodedSizeWithInt:(jint)chars;

- (jint)maxEncodedSizeWithInt:(jint)bytes;

- (ComGoogleCommonIoBaseEncoding *)newInstanceWithComGoogleCommonIoBaseEncoding_Alphabet:(ComGoogleCommonIoBaseEncoding_Alphabet *)alphabet
                                                                   withJavaLangCharacter:(JavaLangCharacter *)paddingChar OBJC_METHOD_FAMILY_NONE;

- (id<JavaLangCharSequence>)trimTrailingPaddingWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding)

J2OBJC_FIELD_SETTER(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding, alphabet_, ComGoogleCommonIoBaseEncoding_Alphabet *)
J2OBJC_FIELD_SETTER(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding, paddingChar_, JavaLangCharacter *)

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_initWithNSString_withNSString_withJavaLangCharacter_(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding *self, NSString *name, NSString *alphabetChars, JavaLangCharacter *paddingChar);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_StandardBaseEncoding *new_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_initWithNSString_withNSString_withJavaLangCharacter_(NSString *name, NSString *alphabetChars, JavaLangCharacter *paddingChar) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_StandardBaseEncoding *create_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_initWithNSString_withNSString_withJavaLangCharacter_(NSString *name, NSString *alphabetChars, JavaLangCharacter *paddingChar);

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_initWithComGoogleCommonIoBaseEncoding_Alphabet_withJavaLangCharacter_(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding *self, ComGoogleCommonIoBaseEncoding_Alphabet *alphabet, JavaLangCharacter *paddingChar);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_StandardBaseEncoding *new_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_initWithComGoogleCommonIoBaseEncoding_Alphabet_withJavaLangCharacter_(ComGoogleCommonIoBaseEncoding_Alphabet *alphabet, JavaLangCharacter *paddingChar) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_StandardBaseEncoding *create_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_initWithComGoogleCommonIoBaseEncoding_Alphabet_withJavaLangCharacter_(ComGoogleCommonIoBaseEncoding_Alphabet *alphabet, JavaLangCharacter *paddingChar);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding)

#endif

#if !defined (ComGoogleCommonIoBaseEncoding_Base16Encoding_) && (INCLUDE_ALL_ComGoogleCommonIoBaseEncoding || defined(INCLUDE_ComGoogleCommonIoBaseEncoding_Base16Encoding))
#define ComGoogleCommonIoBaseEncoding_Base16Encoding_

@class ComGoogleCommonIoBaseEncoding;
@class ComGoogleCommonIoBaseEncoding_Alphabet;
@class IOSByteArray;
@class IOSCharArray;
@class JavaLangCharacter;
@class JavaLangInteger;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoBaseEncoding_Base16Encoding : ComGoogleCommonIoBaseEncoding_StandardBaseEncoding {
 @public
  IOSCharArray *encoding_;
}

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)alphabetChars;

- (jint)decodeToWithByteArray:(IOSByteArray *)target
     withJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (void)encodeToWithJavaLangAppendable:(id<JavaLangAppendable>)target
                         withByteArray:(IOSByteArray *)bytes
                               withInt:(jint)off
                               withInt:(jint)len;

- (ComGoogleCommonIoBaseEncoding *)newInstanceWithComGoogleCommonIoBaseEncoding_Alphabet:(ComGoogleCommonIoBaseEncoding_Alphabet *)alphabet
                                                                   withJavaLangCharacter:(JavaLangCharacter *)paddingChar OBJC_METHOD_FAMILY_NONE;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonIoBaseEncoding_Alphabet:(ComGoogleCommonIoBaseEncoding_Alphabet *)arg0
                                         withJavaLangCharacter:(JavaLangCharacter *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
                    withNSString:(NSString *)arg1
           withJavaLangCharacter:(JavaLangCharacter *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoBaseEncoding_Base16Encoding)

J2OBJC_FIELD_SETTER(ComGoogleCommonIoBaseEncoding_Base16Encoding, encoding_, IOSCharArray *)

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_Base16Encoding_initWithNSString_withNSString_(ComGoogleCommonIoBaseEncoding_Base16Encoding *self, NSString *name, NSString *alphabetChars);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_Base16Encoding *new_ComGoogleCommonIoBaseEncoding_Base16Encoding_initWithNSString_withNSString_(NSString *name, NSString *alphabetChars) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_Base16Encoding *create_ComGoogleCommonIoBaseEncoding_Base16Encoding_initWithNSString_withNSString_(NSString *name, NSString *alphabetChars);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoBaseEncoding_Base16Encoding)

#endif

#if !defined (ComGoogleCommonIoBaseEncoding_Base64Encoding_) && (INCLUDE_ALL_ComGoogleCommonIoBaseEncoding || defined(INCLUDE_ComGoogleCommonIoBaseEncoding_Base64Encoding))
#define ComGoogleCommonIoBaseEncoding_Base64Encoding_

@class ComGoogleCommonIoBaseEncoding;
@class ComGoogleCommonIoBaseEncoding_Alphabet;
@class IOSByteArray;
@class JavaLangCharacter;
@class JavaLangInteger;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoBaseEncoding_Base64Encoding : ComGoogleCommonIoBaseEncoding_StandardBaseEncoding

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)alphabetChars
           withJavaLangCharacter:(JavaLangCharacter *)paddingChar;

- (jint)decodeToWithByteArray:(IOSByteArray *)target
     withJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (void)encodeToWithJavaLangAppendable:(id<JavaLangAppendable>)target
                         withByteArray:(IOSByteArray *)bytes
                               withInt:(jint)off
                               withInt:(jint)len;

- (ComGoogleCommonIoBaseEncoding *)newInstanceWithComGoogleCommonIoBaseEncoding_Alphabet:(ComGoogleCommonIoBaseEncoding_Alphabet *)alphabet
                                                                   withJavaLangCharacter:(JavaLangCharacter *)paddingChar OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoBaseEncoding_Base64Encoding)

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_Base64Encoding_initWithNSString_withNSString_withJavaLangCharacter_(ComGoogleCommonIoBaseEncoding_Base64Encoding *self, NSString *name, NSString *alphabetChars, JavaLangCharacter *paddingChar);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_Base64Encoding *new_ComGoogleCommonIoBaseEncoding_Base64Encoding_initWithNSString_withNSString_withJavaLangCharacter_(NSString *name, NSString *alphabetChars, JavaLangCharacter *paddingChar) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_Base64Encoding *create_ComGoogleCommonIoBaseEncoding_Base64Encoding_initWithNSString_withNSString_withJavaLangCharacter_(NSString *name, NSString *alphabetChars, JavaLangCharacter *paddingChar);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoBaseEncoding_Base64Encoding)

#endif

#if !defined (ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_) && (INCLUDE_ALL_ComGoogleCommonIoBaseEncoding || defined(INCLUDE_ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding))
#define ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_

@class ComGoogleCommonIoBaseEncoding;
@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoReader;
@class JavaIoWriter;
@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangInteger;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding : ComGoogleCommonIoBaseEncoding

#pragma mark Public

- (jboolean)canDecodeWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (JavaIoInputStream *)decodingStreamWithJavaIoReader:(JavaIoReader *)reader;

- (JavaIoOutputStream *)encodingStreamWithJavaIoWriter:(JavaIoWriter *)output;

- (ComGoogleCommonIoBaseEncoding *)lowerCase;

- (ComGoogleCommonIoBaseEncoding *)omitPadding;

- (NSString *)description;

- (ComGoogleCommonIoBaseEncoding *)upperCase;

- (ComGoogleCommonIoBaseEncoding *)withPadCharWithChar:(jchar)padChar;

- (ComGoogleCommonIoBaseEncoding *)withSeparatorWithNSString:(NSString *)separator
                                                     withInt:(jint)afterEveryChars;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonIoBaseEncoding:(ComGoogleCommonIoBaseEncoding *)delegate
                                         withNSString:(NSString *)separator
                                              withInt:(jint)afterEveryChars;

- (jint)decodeToWithByteArray:(IOSByteArray *)target
     withJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (void)encodeToWithJavaLangAppendable:(id<JavaLangAppendable>)target
                         withByteArray:(IOSByteArray *)bytes
                               withInt:(jint)off
                               withInt:(jint)len;

- (jint)maxDecodedSizeWithInt:(jint)chars;

- (jint)maxEncodedSizeWithInt:(jint)bytes;

- (id<JavaLangCharSequence>)trimTrailingPaddingWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding)

FOUNDATION_EXPORT void ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_initWithComGoogleCommonIoBaseEncoding_withNSString_withInt_(ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding *self, ComGoogleCommonIoBaseEncoding *delegate, NSString *separator, jint afterEveryChars);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding *new_ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_initWithComGoogleCommonIoBaseEncoding_withNSString_withInt_(ComGoogleCommonIoBaseEncoding *delegate, NSString *separator, jint afterEveryChars) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding *create_ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_initWithComGoogleCommonIoBaseEncoding_withNSString_withInt_(ComGoogleCommonIoBaseEncoding *delegate, NSString *separator, jint afterEveryChars);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoBaseEncoding")