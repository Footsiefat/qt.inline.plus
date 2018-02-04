//  header block begin
// /usr/include/qt/QtCore/qsocketnotifier.h
#include <qsocketnotifier.h>
#include <QtCore>
#include "callback_inherit.h"

// QSocketNotifier is pure virtual: false
// QSocketNotifier has virtual projected: true
//  header block end

//  main block begin

class MyQSocketNotifier : public QSocketNotifier {
public:
  virtual ~MyQSocketNotifier() {}
// void QSocketNotifier(qintptr, enum QSocketNotifier::Type, class QObject *)
MyQSocketNotifier(qintptr socket, QSocketNotifier::Type arg1, QObject * parent) : QSocketNotifier(socket, arg1, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSocketNotifier::event(arg0);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:50
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QSocketNotifier10metaObjectEv(void *this_) {
  return (void*)((QSocketNotifier*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:56
// [-2] void QSocketNotifier(qintptr, enum QSocketNotifier::Type, class QObject *)
extern "C"
void* C_ZN15QSocketNotifierC2ExNS_4TypeEP7QObject(qintptr socket, QSocketNotifier::Type arg1, QObject * parent) {
  auto _nilp = (MyQSocketNotifier*)(0);
  return  new MyQSocketNotifier(socket, arg1, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:57
// [-2] void ~QSocketNotifier()
extern "C"
void C_ZN15QSocketNotifierD2Ev(void *this_) {
  delete (QSocketNotifier*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:59
// [8] qintptr socket()
extern "C"
qintptr C_ZNK15QSocketNotifier6socketEv(void *this_) {
  return (qintptr)((QSocketNotifier*)this_)->socket();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:60
// [4] QSocketNotifier::Type type()
extern "C"
QSocketNotifier::Type C_ZNK15QSocketNotifier4typeEv(void *this_) {
  return (QSocketNotifier::Type)((QSocketNotifier*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:62
// [1] bool isEnabled()
extern "C"
bool C_ZNK15QSocketNotifier9isEnabledEv(void *this_) {
  return (bool)((QSocketNotifier*)this_)->isEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:65
// [-2] void setEnabled(_Bool)
extern "C"
void C_ZN15QSocketNotifier10setEnabledEb(void *this_, bool arg0) {
  ((QSocketNotifier*)this_)->setEnabled(arg0);
}
//  main block end
