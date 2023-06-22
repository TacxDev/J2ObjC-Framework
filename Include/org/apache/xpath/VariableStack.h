//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/VariableStack.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathVariableStack")
#ifdef RESTRICT_OrgApacheXpathVariableStack
#define INCLUDE_ALL_OrgApacheXpathVariableStack 0
#else
#define INCLUDE_ALL_OrgApacheXpathVariableStack 1
#endif
#undef RESTRICT_OrgApacheXpathVariableStack

#if !defined (OrgApacheXpathVariableStack_) && (INCLUDE_ALL_OrgApacheXpathVariableStack || defined(INCLUDE_OrgApacheXpathVariableStack))
#define OrgApacheXpathVariableStack_

@class IOSIntArray;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathVariableStack : NSObject < NSCopying > {
 @public
  IOSObjectArray *_stackFrames_;
  jint _frameTop_;
  IOSIntArray *_links_;
  jint _linksTop_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)initStackSize;

- (void)clearLocalSlotsWithInt:(jint)start
                       withInt:(jint)len;

- (id)java_clone;

- (OrgApacheXpathObjectsXObject *)elementAtWithInt:(jint)i;

- (OrgApacheXpathObjectsXObject *)getGlobalVariableWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                          withInt:(jint)index;

- (OrgApacheXpathObjectsXObject *)getGlobalVariableWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                          withInt:(jint)index
                                                                      withBoolean:(jboolean)destructiveOK;

- (OrgApacheXpathObjectsXObject *)getLocalVariableWithInt:(jint)index
                                                  withInt:(jint)frame;

- (OrgApacheXpathObjectsXObject *)getLocalVariableWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                         withInt:(jint)index;

- (OrgApacheXpathObjectsXObject *)getLocalVariableWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                         withInt:(jint)index
                                                                     withBoolean:(jboolean)destructiveOK;

- (jint)getStackFrame;

- (OrgApacheXpathObjectsXObject *)getVariableOrParamWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                        withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

- (jboolean)isLocalSetWithInt:(jint)index;

- (jint)linkWithInt:(jint)size;

- (void)reset;

- (void)setGlobalVariableWithInt:(jint)index
withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val;

- (void)setLocalVariableWithInt:(jint)index
withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val;

- (void)setLocalVariableWithInt:(jint)index
withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val
                        withInt:(jint)stackFrame;

- (void)setStackFrameWithInt:(jint)sf;

- (jint)size;

- (void)unlink;

- (void)unlinkWithInt:(jint)currentFrame;

#pragma mark Protected

- (void)resetWithInt:(jint)linksSize
             withInt:(jint)varArraySize;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathVariableStack)

J2OBJC_FIELD_SETTER(OrgApacheXpathVariableStack, _stackFrames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXpathVariableStack, _links_, IOSIntArray *)

inline jint OrgApacheXpathVariableStack_get_CLEARLIMITATION(void);
#define OrgApacheXpathVariableStack_CLEARLIMITATION 1024
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathVariableStack, CLEARLIMITATION, jint)

FOUNDATION_EXPORT void OrgApacheXpathVariableStack_init(OrgApacheXpathVariableStack *self);

FOUNDATION_EXPORT OrgApacheXpathVariableStack *new_OrgApacheXpathVariableStack_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathVariableStack *create_OrgApacheXpathVariableStack_init(void);

FOUNDATION_EXPORT void OrgApacheXpathVariableStack_initWithInt_(OrgApacheXpathVariableStack *self, jint initStackSize);

FOUNDATION_EXPORT OrgApacheXpathVariableStack *new_OrgApacheXpathVariableStack_initWithInt_(jint initStackSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathVariableStack *create_OrgApacheXpathVariableStack_initWithInt_(jint initStackSize);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathVariableStack)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathVariableStack")