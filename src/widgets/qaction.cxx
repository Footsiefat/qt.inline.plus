// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qaction.h
// dst-file: /src/widgets/qaction.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qaction.h>

extern "C" {

int QAction_Class_Size()
{
  return sizeof(QAction);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qaction_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 177, column 10>
//   // proto:  void QAction::trigger();
if (false) {
  auto f = []() {
    ((QAction*)0)->trigger();
  };
}
// _ZN7QAction7triggerEv trigger()
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 182, column 17>
//   // proto:  void QAction::setDisabled(bool b);
if (false) {
  auto f = [](bool arg1) {
    ((QAction*)0)->setDisabled(arg1);
  };
}
// _ZN7QAction11setDisabledEb setDisabled(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 178, column 10>
//   // proto:  void QAction::hover();
if (false) {
  auto f = []() {
    ((QAction*)0)->hover();
  };
}
// _ZN7QAction5hoverEv hover()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QAction_SlotProxy here
class QAction_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAction_SlotProxy():QObject(){}

public slots:
  // toggled(_Bool)
  void slot_proxy_func__ZN7QAction7toggledEb(bool arg0);
public:
  void (*slot_func__ZN7QAction7toggledEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // triggered(_Bool)
  void slot_proxy_func__ZN7QAction9triggeredEb(bool arg0);
public:
  void (*slot_func__ZN7QAction9triggeredEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // changed()
  void slot_proxy_func__ZN7QAction7changedEv();
public:
  void (*slot_func__ZN7QAction7changedEv)(void* rsfptr) = NULL;
public slots:
  // hovered()
  void slot_proxy_func__ZN7QAction7hoveredEv();
public:
  void (*slot_func__ZN7QAction7hoveredEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qaction.moc"

extern "C" {
  QAction_SlotProxy* QAction_SlotProxy_new()
  {
    return new QAction_SlotProxy();
  }
};

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7toggledEb(bool arg0) {
  if (this->slot_func__ZN7QAction7toggledEb != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7toggledEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7toggledEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAction_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QAction7toggledEb = (decltype(that->slot_func__ZN7QAction7toggledEb))ffifptr;
  QObject::connect((QAction*)sender, SIGNAL(toggled(_Bool)), that, SLOT(slot_proxy_func__ZN7QAction7toggledEb(bool arg0)));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7toggledEb(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction9triggeredEb(bool arg0) {
  if (this->slot_func__ZN7QAction9triggeredEb != NULL) {
    // do smth...
    this->slot_func__ZN7QAction9triggeredEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction9triggeredEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAction_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QAction9triggeredEb = (decltype(that->slot_func__ZN7QAction9triggeredEb))ffifptr;
  QObject::connect((QAction*)sender, SIGNAL(triggered(_Bool)), that, SLOT(slot_proxy_func__ZN7QAction9triggeredEb(bool arg0)));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction9triggeredEb(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7changedEv() {
  if (this->slot_func__ZN7QAction7changedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7changedEv(this->rsfptr);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7changedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAction_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QAction7changedEv = (decltype(that->slot_func__ZN7QAction7changedEv))ffifptr;
  QObject::connect((QAction*)sender, SIGNAL(changed()), that, SLOT(slot_proxy_func__ZN7QAction7changedEv()));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7changedEv(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7hoveredEv() {
  if (this->slot_func__ZN7QAction7hoveredEv != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7hoveredEv(this->rsfptr);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7hoveredEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAction_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QAction7hoveredEv = (decltype(that->slot_func__ZN7QAction7hoveredEv))ffifptr;
  QObject::connect((QAction*)sender, SIGNAL(hovered()), that, SLOT(slot_proxy_func__ZN7QAction7hoveredEv()));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7hoveredEv(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

