//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/StringEndsWith.java
//

#ifndef _OrgHamcrestCoreStringEndsWith_H_
#define _OrgHamcrestCoreStringEndsWith_H_

#include "../../../J2ObjC_header.h"
#include "../../../org/hamcrest/core/SubstringMatcher.h"

@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreStringEndsWith : OrgHamcrestCoreSubstringMatcher

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)substring;

+ (id<OrgHamcrestMatcher>)endsWithWithNSString:(NSString *)suffix;

#pragma mark Protected

- (jboolean)evalSubstringOfWithNSString:(NSString *)s;

- (NSString *)relationship;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreStringEndsWith)

FOUNDATION_EXPORT void OrgHamcrestCoreStringEndsWith_initWithNSString_(OrgHamcrestCoreStringEndsWith *self, NSString *substring);

FOUNDATION_EXPORT OrgHamcrestCoreStringEndsWith *new_OrgHamcrestCoreStringEndsWith_initWithNSString_(NSString *substring) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreStringEndsWith_endsWithWithNSString_(NSString *suffix);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreStringEndsWith)

#endif // _OrgHamcrestCoreStringEndsWith_H_
