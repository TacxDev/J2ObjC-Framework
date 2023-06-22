//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/XSLTElementDef.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementDef")
#ifdef RESTRICT_OrgApacheXalanProcessorXSLTElementDef
#define INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementDef 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementDef 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorXSLTElementDef

#if !defined (OrgApacheXalanProcessorXSLTElementDef_) && (INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementDef || defined(INCLUDE_OrgApacheXalanProcessorXSLTElementDef))
#define OrgApacheXalanProcessorXSLTElementDef_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaUtilHashtable;
@class OrgApacheXalanProcessorXSLTAttributeDef;
@class OrgApacheXalanProcessorXSLTElementProcessor;
@class OrgApacheXalanProcessorXSLTSchema;

@interface OrgApacheXalanProcessorXSLTElementDef : NSObject {
 @public
  JavaUtilHashtable *m_requiredFound_;
  jboolean m_isOrdered_;
}

#pragma mark Public

- (OrgApacheXalanProcessorXSLTElementProcessor *)getElementProcessor;

- (IOSObjectArray *)getElements;

- (void)setElementProcessorWithOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)handler;

#pragma mark Package-Private

- (instancetype)init;

- (instancetype)initWithIOSClass:(IOSClass *)classObject
withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
                         withInt:(jint)type;

- (instancetype)initWithOrgApacheXalanProcessorXSLTSchema:(OrgApacheXalanProcessorXSLTSchema *)schema
                                             withNSString:(NSString *)namespace_
                                             withNSString:(NSString *)name
                                             withNSString:(NSString *)nameAlias
           withOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)elements
         withOrgApacheXalanProcessorXSLTAttributeDefArray:(IOSObjectArray *)attributes
          withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
                                             withIOSClass:(IOSClass *)classObject;

- (instancetype)initWithOrgApacheXalanProcessorXSLTSchema:(OrgApacheXalanProcessorXSLTSchema *)schema
                                             withNSString:(NSString *)namespace_
                                             withNSString:(NSString *)name
                                             withNSString:(NSString *)nameAlias
           withOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)elements
         withOrgApacheXalanProcessorXSLTAttributeDefArray:(IOSObjectArray *)attributes
          withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
                                             withIOSClass:(IOSClass *)classObject
                                              withBoolean:(jboolean)has_required;

- (instancetype)initWithOrgApacheXalanProcessorXSLTSchema:(OrgApacheXalanProcessorXSLTSchema *)schema
                                             withNSString:(NSString *)namespace_
                                             withNSString:(NSString *)name
                                             withNSString:(NSString *)nameAlias
           withOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)elements
         withOrgApacheXalanProcessorXSLTAttributeDefArray:(IOSObjectArray *)attributes
          withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
                                             withIOSClass:(IOSClass *)classObject
                                              withBoolean:(jboolean)has_required
                                              withBoolean:(jboolean)required;

- (instancetype)initWithOrgApacheXalanProcessorXSLTSchema:(OrgApacheXalanProcessorXSLTSchema *)schema
                                             withNSString:(NSString *)namespace_
                                             withNSString:(NSString *)name
                                             withNSString:(NSString *)nameAlias
           withOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)elements
         withOrgApacheXalanProcessorXSLTAttributeDefArray:(IOSObjectArray *)attributes
          withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
                                             withIOSClass:(IOSClass *)classObject
                                              withBoolean:(jboolean)has_required
                                              withBoolean:(jboolean)required
                                              withBoolean:(jboolean)has_order
                                                  withInt:(jint)order
                                              withBoolean:(jboolean)multiAllowed;

- (instancetype)initWithOrgApacheXalanProcessorXSLTSchema:(OrgApacheXalanProcessorXSLTSchema *)schema
                                             withNSString:(NSString *)namespace_
                                             withNSString:(NSString *)name
                                             withNSString:(NSString *)nameAlias
           withOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)elements
         withOrgApacheXalanProcessorXSLTAttributeDefArray:(IOSObjectArray *)attributes
          withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
                                             withIOSClass:(IOSClass *)classObject
                                              withBoolean:(jboolean)has_required
                                              withBoolean:(jboolean)required
                                                  withInt:(jint)order
                                              withBoolean:(jboolean)multiAllowed;

- (instancetype)initWithOrgApacheXalanProcessorXSLTSchema:(OrgApacheXalanProcessorXSLTSchema *)schema
                                             withNSString:(NSString *)namespace_
                                             withNSString:(NSString *)name
                                             withNSString:(NSString *)nameAlias
           withOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)elements
         withOrgApacheXalanProcessorXSLTAttributeDefArray:(IOSObjectArray *)attributes
          withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
                                             withIOSClass:(IOSClass *)classObject
                                              withBoolean:(jboolean)has_order
                                                  withInt:(jint)order
                                              withBoolean:(jboolean)multiAllowed;

- (instancetype)initWithOrgApacheXalanProcessorXSLTSchema:(OrgApacheXalanProcessorXSLTSchema *)schema
                                             withNSString:(NSString *)namespace_
                                             withNSString:(NSString *)name
                                             withNSString:(NSString *)nameAlias
           withOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)elements
         withOrgApacheXalanProcessorXSLTAttributeDefArray:(IOSObjectArray *)attributes
          withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
                                             withIOSClass:(IOSClass *)classObject
                                                  withInt:(jint)order
                                              withBoolean:(jboolean)multiAllowed;

- (void)buildWithNSString:(NSString *)namespace_
             withNSString:(NSString *)name
             withNSString:(NSString *)nameAlias
withOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)elements
withOrgApacheXalanProcessorXSLTAttributeDefArray:(IOSObjectArray *)attributes
withOrgApacheXalanProcessorXSLTElementProcessor:(OrgApacheXalanProcessorXSLTElementProcessor *)contentHandler
             withIOSClass:(IOSClass *)classObject;

- (OrgApacheXalanProcessorXSLTAttributeDef *)getAttributeDefWithNSString:(NSString *)uri
                                                            withNSString:(NSString *)localName;

- (IOSObjectArray *)getAttributes;

- (IOSClass *)getClassObject;

- (jint)getLastOrder;

- (jboolean)getMultiAllowed;

- (NSString *)getName;

- (NSString *)getNameAlias;

- (NSString *)getNamespace;

- (jint)getOrder;

- (OrgApacheXalanProcessorXSLTElementProcessor *)getProcessorForWithNSString:(NSString *)uri
                                                                withNSString:(NSString *)localName;

- (OrgApacheXalanProcessorXSLTElementProcessor *)getProcessorForUnknownWithNSString:(NSString *)uri
                                                                       withNSString:(NSString *)localName;

- (jboolean)getRequired;

- (NSString *)getRequiredElem;

- (jboolean)getRequiredFound;

- (jint)getType;

- (jboolean)hasRequired;

- (jboolean)isOrdered;

- (void)setElementsWithOrgApacheXalanProcessorXSLTElementDefArray:(IOSObjectArray *)defs;

- (void)setLastOrderWithInt:(jint)order;

- (void)setRequiredFoundWithNSString:(NSString *)elem
                         withBoolean:(jboolean)found;

- (void)setTypeWithInt:(jint)t;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorXSLTElementDef)

J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorXSLTElementDef, m_requiredFound_, JavaUtilHashtable *)

inline jint OrgApacheXalanProcessorXSLTElementDef_get_T_ELEMENT(void);
#define OrgApacheXalanProcessorXSLTElementDef_T_ELEMENT 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorXSLTElementDef, T_ELEMENT, jint)

inline jint OrgApacheXalanProcessorXSLTElementDef_get_T_PCDATA(void);
#define OrgApacheXalanProcessorXSLTElementDef_T_PCDATA 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorXSLTElementDef, T_PCDATA, jint)

inline jint OrgApacheXalanProcessorXSLTElementDef_get_T_ANY(void);
#define OrgApacheXalanProcessorXSLTElementDef_T_ANY 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorXSLTElementDef, T_ANY, jint)

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_init(OrgApacheXalanProcessorXSLTElementDef *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_init(void);

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_(OrgApacheXalanProcessorXSLTElementDef *self, OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject);

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_(OrgApacheXalanProcessorXSLTElementDef *self, OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required);

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_(OrgApacheXalanProcessorXSLTElementDef *self, OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required);

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTElementDef *self, OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required, jint order, jboolean multiAllowed);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required, jint order, jboolean multiAllowed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required, jint order, jboolean multiAllowed);

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTElementDef *self, OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required, jboolean has_order, jint order, jboolean multiAllowed);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required, jboolean has_order, jint order, jboolean multiAllowed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withBoolean_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_required, jboolean required, jboolean has_order, jint order, jboolean multiAllowed);

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTElementDef *self, OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_order, jint order, jboolean multiAllowed);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_order, jint order, jboolean multiAllowed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withBoolean_withInt_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jboolean has_order, jint order, jboolean multiAllowed);

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withInt_withBoolean_(OrgApacheXalanProcessorXSLTElementDef *self, OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jint order, jboolean multiAllowed);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withInt_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jint order, jboolean multiAllowed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_initWithOrgApacheXalanProcessorXSLTSchema_withNSString_withNSString_withNSString_withOrgApacheXalanProcessorXSLTElementDefArray_withOrgApacheXalanProcessorXSLTAttributeDefArray_withOrgApacheXalanProcessorXSLTElementProcessor_withIOSClass_withInt_withBoolean_(OrgApacheXalanProcessorXSLTSchema *schema, NSString *namespace_, NSString *name, NSString *nameAlias, IOSObjectArray *elements, IOSObjectArray *attributes, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, IOSClass *classObject, jint order, jboolean multiAllowed);

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementDef_initWithIOSClass_withOrgApacheXalanProcessorXSLTElementProcessor_withInt_(OrgApacheXalanProcessorXSLTElementDef *self, IOSClass *classObject, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, jint type);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *new_OrgApacheXalanProcessorXSLTElementDef_initWithIOSClass_withOrgApacheXalanProcessorXSLTElementProcessor_withInt_(IOSClass *classObject, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, jint type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementDef *create_OrgApacheXalanProcessorXSLTElementDef_initWithIOSClass_withOrgApacheXalanProcessorXSLTElementProcessor_withInt_(IOSClass *classObject, OrgApacheXalanProcessorXSLTElementProcessor *contentHandler, jint type);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorXSLTElementDef)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementDef")
