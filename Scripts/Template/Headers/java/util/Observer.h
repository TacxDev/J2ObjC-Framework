//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Observer.java
//

#ifndef _JavaUtilObserver_H_
#define _JavaUtilObserver_H_

#include "../../J2ObjC_header.h"

@class JavaUtilObservable;

/*!
 @brief <code>Observer</code> is the interface to be implemented by objects that
 receive notification of updates on an <code>Observable</code> object.
 */
@protocol JavaUtilObserver < NSObject, JavaObject >

/*!
 @brief This method is called if the specified <code>Observable</code> object's
 <code>notifyObservers</code> method is called (because the <code>Observable</code>
 object has been updated.
 @param observable
 the <code>Observable</code> object.
 @param data
 the data passed to <code>Observable.notifyObservers(Object)</code>.
 */
- (void)updateWithJavaUtilObservable:(JavaUtilObservable *)observable
                              withId:(id)data;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilObserver)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilObserver)

#endif // _JavaUtilObserver_H_
