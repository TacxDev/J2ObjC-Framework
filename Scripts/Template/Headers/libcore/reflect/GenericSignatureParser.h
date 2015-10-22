//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/reflect/GenericSignatureParser.java
//

#ifndef _LibcoreReflectGenericSignatureParser_H_
#define _LibcoreReflectGenericSignatureParser_H_

#include "../../J2ObjC_header.h"

@class IOSCharArray;
@class IOSObjectArray;
@class JavaLangClassLoader;
@class LibcoreReflectListOfTypes;
@class LibcoreReflectTypeVariableImpl;
@protocol JavaLangReflectGenericDeclaration;
@protocol JavaLangReflectType;

/*!
 @brief Implements a parser for the generics signature attribute.
 Uses a top-down, recursive descent parsing approach for the following grammar:
 @code

  ClassSignature ::=
     OptFormalTypeParams SuperclassSignature {SuperinterfaceSignature}.
  SuperclassSignature ::= ClassTypeSignature.
  SuperinterfaceSignature ::= ClassTypeSignature.
  OptFormalTypeParams ::=
     ["<" FormalTypeParameter {FormalTypeParameter} ">"].
  FormalTypeParameter ::= Ident ClassBound {InterfaceBound}.
  ClassBound ::= ":" [FieldTypeSignature].
  InterfaceBound ::= ":" FieldTypeSignature.
  FieldTypeSignature ::=
     ClassTypeSignature | ArrayTypeSignature | TypeVariableSignature.
  ArrayTypeSignature ::= "[" TypSignature.
  ClassTypeSignature ::=
     "L" {Ident "/"} Ident OptTypeArguments {"." Ident OptTypeArguments} ";".
  OptTypeArguments ::= "<" TypeArgument {TypeArgument} ">".
  TypeArgument ::= ([WildcardIndicator] FieldTypeSignature) | "*".
  WildcardIndicator ::= "+" | "-".
  TypeVariableSignature ::= "T" Ident ";".
  TypSignature ::= FieldTypeSignature | BaseType.
  BaseType ::= "B" | "C" | "D" | "F" | "I" | "J" | "S" | "Z".
  MethodTypeSignature ::=
     OptFormalTypeParams "(" {TypeSignature} ")" ReturnType {ThrowsSignature}.
  ThrowsSignature ::= ("^" ClassTypeSignature) | ("^" TypeVariableSignature).
  ReturnType ::= TypSignature | VoidDescriptor.
  VoidDescriptor ::= "V".
  
@endcode
 */
@interface LibcoreReflectGenericSignatureParser : NSObject {
 @public
  LibcoreReflectListOfTypes *exceptionTypes_;
  LibcoreReflectListOfTypes *parameterTypes_;
  IOSObjectArray *formalTypeParameters_;
  id<JavaLangReflectType> returnType_;
  id<JavaLangReflectType> fieldType_;
  LibcoreReflectListOfTypes *interfaceTypes_;
  id<JavaLangReflectType> superclassType_;
  JavaLangClassLoader *loader_;
  id<JavaLangReflectGenericDeclaration> genericDecl_;
  jchar symbol_;
  NSString *identifier_;
  IOSCharArray *buffer_;
  jint pos_;
}

#pragma mark Public

- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)loader;

/*!
 @brief Parses the generic signature of a class and creates the data structure
 representing the signature.
 @param genericDecl the GenericDeclaration calling this method
 @param signature the generic signature of the class
 */
- (void)parseForClassWithJavaLangReflectGenericDeclaration:(id<JavaLangReflectGenericDeclaration>)genericDecl
                                              withNSString:(NSString *)signature;

/*!
 @brief Parses the generic signature of a constructor and creates the data
 structure representing the signature.
 @param genericDecl the GenericDeclaration calling this method
 @param signature the generic signature of the class
 */
- (void)parseForConstructorWithJavaLangReflectGenericDeclaration:(id<JavaLangReflectGenericDeclaration>)genericDecl
                                                    withNSString:(NSString *)signature
                                               withIOSClassArray:(IOSObjectArray *)rawExceptionTypes;

/*!
 @brief Parses the generic signature of a field and creates the data structure
 representing the signature.
 @param genericDecl the GenericDeclaration calling this method
 @param signature the generic signature of the class
 */
- (void)parseForFieldWithJavaLangReflectGenericDeclaration:(id<JavaLangReflectGenericDeclaration>)genericDecl
                                              withNSString:(NSString *)signature;

/*!
 @brief Parses the generic signature of a method and creates the data structure
 representing the signature.
 @param genericDecl the GenericDeclaration calling this method
 @param signature the generic signature of the class
 */
- (void)parseForMethodWithJavaLangReflectGenericDeclaration:(id<JavaLangReflectGenericDeclaration>)genericDecl
                                               withNSString:(NSString *)signature
                                          withIOSClassArray:(IOSObjectArray *)rawExceptionTypes;

#pragma mark Package-Private

- (void)expectWithChar:(jchar)c;

+ (jboolean)isStopSymbolWithChar:(jchar)ch;

- (void)parseClassSignature;

- (id<JavaLangReflectType>)parseClassTypeSignature;

- (id<JavaLangReflectType>)parseFieldTypeSignature;

- (LibcoreReflectTypeVariableImpl *)parseFormalTypeParameter;

/*!
 @param rawExceptionTypes the non-generic exceptions. This is necessary
 because the signature may omit the exceptions when none are generic.
 May be null for methods that declare no exceptions.
 */
- (void)parseMethodTypeSignatureWithIOSClassArray:(IOSObjectArray *)rawExceptionTypes;

- (void)parseOptFormalTypeParameters;

- (LibcoreReflectListOfTypes *)parseOptTypeArguments;

- (id<JavaLangReflectType>)parseReturnType;

- (id<JavaLangReflectType>)parseTypeArgument;

- (id<JavaLangReflectType>)parseTypeSignature;

- (LibcoreReflectTypeVariableImpl *)parseTypeVariableSignature;

- (void)scanIdentifier;

- (void)scanSymbol;

- (void)setInputWithJavaLangReflectGenericDeclaration:(id<JavaLangReflectGenericDeclaration>)genericDecl
                                         withNSString:(NSString *)input;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreReflectGenericSignatureParser)

J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, exceptionTypes_, LibcoreReflectListOfTypes *)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, parameterTypes_, LibcoreReflectListOfTypes *)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, formalTypeParameters_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, returnType_, id<JavaLangReflectType>)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, fieldType_, id<JavaLangReflectType>)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, interfaceTypes_, LibcoreReflectListOfTypes *)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, superclassType_, id<JavaLangReflectType>)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, loader_, JavaLangClassLoader *)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, genericDecl_, id<JavaLangReflectGenericDeclaration>)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, identifier_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreReflectGenericSignatureParser, buffer_, IOSCharArray *)

FOUNDATION_EXPORT void LibcoreReflectGenericSignatureParser_initWithJavaLangClassLoader_(LibcoreReflectGenericSignatureParser *self, JavaLangClassLoader *loader);

FOUNDATION_EXPORT LibcoreReflectGenericSignatureParser *new_LibcoreReflectGenericSignatureParser_initWithJavaLangClassLoader_(JavaLangClassLoader *loader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jboolean LibcoreReflectGenericSignatureParser_isStopSymbolWithChar_(jchar ch);

J2OBJC_TYPE_LITERAL_HEADER(LibcoreReflectGenericSignatureParser)

#endif // _LibcoreReflectGenericSignatureParser_H_
