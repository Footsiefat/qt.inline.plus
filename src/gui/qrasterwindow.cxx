//  header block begin
// /usr/include/qt/QtGui/qrasterwindow.h
#include <qrasterwindow.h>
#include <QtGui>
#include "callback_inherit.h"

// QRasterWindow is pure virtual: false
// QRasterWindow has virtual projected: true
//  header block end

//  main block begin

class MyQRasterWindow : public QRasterWindow {
public:
  virtual ~MyQRasterWindow() {}
// void QRasterWindow(class QWindow *)
MyQRasterWindow(QWindow * parent) : QRasterWindow(parent) {}
// int metric(enum QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QRasterWindow::metric(metric);
  }
  }
// QPaintDevice * redirected(class QPoint *)
  virtual QPaintDevice * redirected(QPoint * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"redirected", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintDevice *)(irv);
      // PointerPointerQPaintDevice *
    } else {
    return QRasterWindow::redirected(arg0);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:52
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QRasterWindow10metaObjectEv(void *this_) {
  return (void*)((QRasterWindow*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:56
// [-2] void QRasterWindow(class QWindow *)
extern "C"
void* C_ZN13QRasterWindowC2EP7QWindow(QWindow * parent) {
  auto _nilp = (MyQRasterWindow*)(0);
  return  new MyQRasterWindow(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:57
// [-2] void ~QRasterWindow()
extern "C"
void C_ZN13QRasterWindowD2Ev(void *this_) {
  delete (QRasterWindow*)(this_);
}
//  main block end
