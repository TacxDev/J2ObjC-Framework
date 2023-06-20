//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/base/Ascii.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseAscii")
#ifdef RESTRICT_ComGoogleCommonBaseAscii
#define INCLUDE_ALL_ComGoogleCommonBaseAscii 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseAscii 1
#endif
#undef RESTRICT_ComGoogleCommonBaseAscii

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseAscii_) && (INCLUDE_ALL_ComGoogleCommonBaseAscii || defined(INCLUDE_ComGoogleCommonBaseAscii))
#define ComGoogleCommonBaseAscii_

@class JavaLangBoolean;
@class JavaLangByte;
@class JavaLangCharacter;
@class JavaLangInteger;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonBaseAscii : NSObject

#pragma mark Public

+ (jboolean)equalsIgnoreCaseWithJavaLangCharSequence:(id<JavaLangCharSequence>)s1
                            withJavaLangCharSequence:(id<JavaLangCharSequence>)s2;

+ (jboolean)isLowerCaseWithChar:(jchar)c;

+ (jboolean)isUpperCaseWithChar:(jchar)c;

+ (jchar)toLowerCaseWithChar:(jchar)c;

+ (NSString *)toLowerCaseWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

+ (NSString *)toLowerCaseWithNSString:(NSString *)string;

+ (jchar)toUpperCaseWithChar:(jchar)c;

+ (NSString *)toUpperCaseWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

+ (NSString *)toUpperCaseWithNSString:(NSString *)string;

+ (NSString *)truncateWithJavaLangCharSequence:(id<JavaLangCharSequence>)seq
                                       withInt:(jint)maxLength
                                  withNSString:(NSString *)truncationIndicator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseAscii)

inline jbyte ComGoogleCommonBaseAscii_get_NUL(void);
#define ComGoogleCommonBaseAscii_NUL 0
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, NUL, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_SOH(void);
#define ComGoogleCommonBaseAscii_SOH 1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, SOH, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_STX(void);
#define ComGoogleCommonBaseAscii_STX 2
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, STX, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_ETX(void);
#define ComGoogleCommonBaseAscii_ETX 3
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, ETX, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_EOT(void);
#define ComGoogleCommonBaseAscii_EOT 4
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, EOT, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_ENQ(void);
#define ComGoogleCommonBaseAscii_ENQ 5
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, ENQ, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_ACK(void);
#define ComGoogleCommonBaseAscii_ACK 6
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, ACK, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_BEL(void);
#define ComGoogleCommonBaseAscii_BEL 7
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, BEL, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_BS(void);
#define ComGoogleCommonBaseAscii_BS 8
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, BS, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_HT(void);
#define ComGoogleCommonBaseAscii_HT 9
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, HT, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_LF(void);
#define ComGoogleCommonBaseAscii_LF 10
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, LF, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_NL(void);
#define ComGoogleCommonBaseAscii_NL 10
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, NL, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_VT(void);
#define ComGoogleCommonBaseAscii_VT 11
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, VT, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_FF(void);
#define ComGoogleCommonBaseAscii_FF 12
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, FF, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_CR(void);
#define ComGoogleCommonBaseAscii_CR 13
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, CR, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_SO(void);
#define ComGoogleCommonBaseAscii_SO 14
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, SO, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_SI(void);
#define ComGoogleCommonBaseAscii_SI 15
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, SI, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_DLE(void);
#define ComGoogleCommonBaseAscii_DLE 16
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, DLE, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_DC1(void);
#define ComGoogleCommonBaseAscii_DC1 17
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, DC1, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_XON(void);
#define ComGoogleCommonBaseAscii_XON 17
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, XON, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_DC2(void);
#define ComGoogleCommonBaseAscii_DC2 18
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, DC2, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_DC3(void);
#define ComGoogleCommonBaseAscii_DC3 19
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, DC3, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_XOFF(void);
#define ComGoogleCommonBaseAscii_XOFF 19
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, XOFF, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_DC4(void);
#define ComGoogleCommonBaseAscii_DC4 20
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, DC4, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_NAK(void);
#define ComGoogleCommonBaseAscii_NAK 21
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, NAK, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_SYN(void);
#define ComGoogleCommonBaseAscii_SYN 22
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, SYN, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_ETB(void);
#define ComGoogleCommonBaseAscii_ETB 23
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, ETB, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_CAN(void);
#define ComGoogleCommonBaseAscii_CAN 24
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, CAN, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_EM(void);
#define ComGoogleCommonBaseAscii_EM 25
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, EM, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_SUB(void);
#define ComGoogleCommonBaseAscii_SUB 26
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, SUB, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_ESC(void);
#define ComGoogleCommonBaseAscii_ESC 27
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, ESC, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_FS(void);
#define ComGoogleCommonBaseAscii_FS 28
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, FS, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_GS(void);
#define ComGoogleCommonBaseAscii_GS 29
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, GS, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_RS(void);
#define ComGoogleCommonBaseAscii_RS 30
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, RS, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_US(void);
#define ComGoogleCommonBaseAscii_US 31
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, US, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_SP(void);
#define ComGoogleCommonBaseAscii_SP 32
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, SP, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_SPACE(void);
#define ComGoogleCommonBaseAscii_SPACE 32
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, SPACE, jbyte)

inline jbyte ComGoogleCommonBaseAscii_get_DEL(void);
#define ComGoogleCommonBaseAscii_DEL 127
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, DEL, jbyte)

inline jchar ComGoogleCommonBaseAscii_get_MIN(void);
#define ComGoogleCommonBaseAscii_MIN 0x0000
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, MIN, jchar)

inline jchar ComGoogleCommonBaseAscii_get_MAX(void);
#define ComGoogleCommonBaseAscii_MAX 0x007f
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonBaseAscii, MAX, jchar)

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_toLowerCaseWithNSString_(NSString *string);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_toLowerCaseWithJavaLangCharSequence_(id<JavaLangCharSequence> chars);

FOUNDATION_EXPORT jchar ComGoogleCommonBaseAscii_toLowerCaseWithChar_(jchar c);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_toUpperCaseWithNSString_(NSString *string);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_toUpperCaseWithJavaLangCharSequence_(id<JavaLangCharSequence> chars);

FOUNDATION_EXPORT jchar ComGoogleCommonBaseAscii_toUpperCaseWithChar_(jchar c);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseAscii_isLowerCaseWithChar_(jchar c);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseAscii_isUpperCaseWithChar_(jchar c);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_truncateWithJavaLangCharSequence_withInt_withNSString_(id<JavaLangCharSequence> seq, jint maxLength, NSString *truncationIndicator);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseAscii_equalsIgnoreCaseWithJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> s1, id<JavaLangCharSequence> s2);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseAscii)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseAscii")
