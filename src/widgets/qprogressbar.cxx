// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qprogressbar.h
// dst-file: /src/widgets/qprogressbar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qprogressbar.h>

extern "C" {

int QProgressBar_Class_Size()
{
  return sizeof(QProgressBar);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qprogressbar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QProgressBar_SlotProxy here
class QProgressBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QProgressBar_SlotProxy():QObject(){}

public slots:
  // valueChanged(int)
  void slot_proxy_func__ZN12QProgressBar12valueChangedEi(int arg0);
public:
  void (*slot_func__ZN12QProgressBar12valueChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qprogressbar.moc"

extern "C" {
  QProgressBar_SlotProxy* QProgressBar_SlotProxy_new()
  {
    return new QProgressBar_SlotProxy();
  }
};

void QProgressBar_SlotProxy::slot_proxy_func__ZN12QProgressBar12valueChangedEi(int arg0) {
  if (this->slot_func__ZN12QProgressBar12valueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QProgressBar12valueChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QProgressBar_SlotProxy_connect__ZN12QProgressBar12valueChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProgressBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QProgressBar12valueChangedEi = (decltype(that->slot_func__ZN12QProgressBar12valueChangedEi))ffifptr;
  QObject::connect((QProgressBar*)sender, SIGNAL(valueChanged(int)), that, SLOT(slot_proxy_func__ZN12QProgressBar12valueChangedEi(int arg0)));
  return that;
}
extern "C"
void QProgressBar_SlotProxy_disconnect__ZN12QProgressBar12valueChangedEi(QProgressBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

