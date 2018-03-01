//  header block begin
// /usr/include/qt/QtCore/qsemaphore.h
#ifndef protected
#define protected public
#endif
#include <qsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSemaphore is pure virtual: false
// QSemaphore has virtual projected: false
//  header block end

//  main block begin

class MyQSemaphore : public QSemaphore {
public:
  virtual ~MyQSemaphore() {}
// void QSemaphore(int)
MyQSemaphore(int n) : QSemaphore(n) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:55
// [-2] void QSemaphore(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSemaphoreC2Ei(int n) {
  return  new QSemaphore(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:56
// [-2] void ~QSemaphore()
extern "C" Q_DECL_EXPORT
void C_ZN10QSemaphoreD2Ev(void *this_) {
  delete (QSemaphore*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:58
// [-2] void acquire(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QSemaphore7acquireEi(void *this_, int n) {
  ((QSemaphore*)this_)->acquire(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:59
// [1] bool tryAcquire(int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSemaphore10tryAcquireEi(void *this_, int n) {
  return (bool)((QSemaphore*)this_)->tryAcquire(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:60
// [1] bool tryAcquire(int, int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSemaphore10tryAcquireEii(void *this_, int n, int timeout) {
  return (bool)((QSemaphore*)this_)->tryAcquire(n, timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:62
// [-2] void release(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QSemaphore7releaseEi(void *this_, int n) {
  ((QSemaphore*)this_)->release(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:64
// [4] int available()
extern "C" Q_DECL_EXPORT
int C_ZNK10QSemaphore9availableEv(void *this_) {
  return (int)((QSemaphore*)this_)->available();
}

//  main block end
