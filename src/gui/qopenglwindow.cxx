// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qopenglwindow.h
// dst-file: /src/gui/qopenglwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qopenglwindow.h>

extern "C" {

int QOpenGLWindow_Class_Size()
{
  return sizeof(QOpenGLWindow);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qopenglwindow_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QOpenGLWindow_SlotProxy here
class QOpenGLWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLWindow_SlotProxy():QObject(){}

public slots:
  // frameSwapped()
  void slot_proxy_func__ZN13QOpenGLWindow12frameSwappedEv();
public:
  void (*slot_func__ZN13QOpenGLWindow12frameSwappedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qopenglwindow.moc"

extern "C" {
  QOpenGLWindow_SlotProxy* QOpenGLWindow_SlotProxy_new()
  {
    return new QOpenGLWindow_SlotProxy();
  }
};

void QOpenGLWindow_SlotProxy::slot_proxy_func__ZN13QOpenGLWindow12frameSwappedEv() {
  if (this->slot_func__ZN13QOpenGLWindow12frameSwappedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWindow12frameSwappedEv(this->rsfptr);
  }
}
extern "C"
void* QOpenGLWindow_SlotProxy_connect__ZN13QOpenGLWindow12frameSwappedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QOpenGLWindow12frameSwappedEv = (decltype(that->slot_func__ZN13QOpenGLWindow12frameSwappedEv))ffifptr;
  QObject::connect((QOpenGLWindow*)sender, SIGNAL(frameSwapped()), that, SLOT(slot_proxy_func__ZN13QOpenGLWindow12frameSwappedEv()));
  return that;
}
extern "C"
void QOpenGLWindow_SlotProxy_disconnect__ZN13QOpenGLWindow12frameSwappedEv(QOpenGLWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

