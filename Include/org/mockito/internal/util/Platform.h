//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/util/Platform.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilPlatform")
#ifdef RESTRICT_OrgMockitoInternalUtilPlatform
#define INCLUDE_ALL_OrgMockitoInternalUtilPlatform 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilPlatform 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilPlatform

#if !defined (OrgMockitoInternalUtilPlatform_) && (INCLUDE_ALL_OrgMockitoInternalUtilPlatform || defined(INCLUDE_OrgMockitoInternalUtilPlatform))
#define OrgMockitoInternalUtilPlatform_

@class JavaLangBoolean;

@interface OrgMockitoInternalUtilPlatform : NSObject

#pragma mark Public

+ (NSString *)describe;

+ (jboolean)isAndroid;

+ (jboolean)isAndroidMockMakerRequired;

+ (jboolean)isJava8BelowUpdate45;

+ (NSString *)warnForVMWithNSString:(NSString *)vmName1
                       withNSString:(NSString *)warnMessage1
                       withNSString:(NSString *)vmName2
                       withNSString:(NSString *)warnMessage2;

#pragma mark Package-Private

+ (jboolean)isJava8BelowUpdate45WithNSString:(NSString *)jvmVersion;

+ (NSString *)warnForVMWithNSString:(NSString *)current
                       withNSString:(NSString *)vmName1
                       withNSString:(NSString *)warnMessage1
                       withNSString:(NSString *)vmName2
                       withNSString:(NSString *)warnMessage2;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalUtilPlatform)

inline NSString *OrgMockitoInternalUtilPlatform_get_JAVA_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_JAVA_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalUtilPlatform, JAVA_VERSION, NSString *)

inline NSString *OrgMockitoInternalUtilPlatform_get_JVM_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_JVM_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalUtilPlatform, JVM_VERSION, NSString *)

inline NSString *OrgMockitoInternalUtilPlatform_get_JVM_VENDOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_JVM_VENDOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalUtilPlatform, JVM_VENDOR, NSString *)

inline NSString *OrgMockitoInternalUtilPlatform_get_JVM_VENDOR_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_JVM_VENDOR_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalUtilPlatform, JVM_VENDOR_VERSION, NSString *)

inline NSString *OrgMockitoInternalUtilPlatform_get_JVM_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_JVM_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalUtilPlatform, JVM_NAME, NSString *)

inline NSString *OrgMockitoInternalUtilPlatform_get_JVM_INFO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_JVM_INFO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalUtilPlatform, JVM_INFO, NSString *)

inline NSString *OrgMockitoInternalUtilPlatform_get_OS_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_OS_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalUtilPlatform, OS_NAME, NSString *)

inline NSString *OrgMockitoInternalUtilPlatform_get_OS_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_OS_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalUtilPlatform, OS_VERSION, NSString *)

FOUNDATION_EXPORT jboolean OrgMockitoInternalUtilPlatform_isAndroid(void);

FOUNDATION_EXPORT jboolean OrgMockitoInternalUtilPlatform_isAndroidMockMakerRequired(void);

FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_describe(void);

FOUNDATION_EXPORT jboolean OrgMockitoInternalUtilPlatform_isJava8BelowUpdate45(void);

FOUNDATION_EXPORT jboolean OrgMockitoInternalUtilPlatform_isJava8BelowUpdate45WithNSString_(NSString *jvmVersion);

FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_warnForVMWithNSString_withNSString_withNSString_withNSString_(NSString *vmName1, NSString *warnMessage1, NSString *vmName2, NSString *warnMessage2);

FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilPlatform_warnForVMWithNSString_withNSString_withNSString_withNSString_withNSString_(NSString *current, NSString *vmName1, NSString *warnMessage1, NSString *vmName2, NSString *warnMessage2);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilPlatform)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilPlatform")