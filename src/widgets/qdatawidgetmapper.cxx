// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qdatawidgetmapper.h
// dst-file: /src/widgets/qdatawidgetmapper.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qdatawidgetmapper.h>

extern "C" {

int QDataWidgetMapper_Class_Size()
{
  return sizeof(QDataWidgetMapper);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qdatawidgetmapper_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QDataWidgetMapper_SlotProxy here
class QDataWidgetMapper_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDataWidgetMapper_SlotProxy():QObject(){}

public slots:
  // currentIndexChanged(int)
  void slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0);
public:
  void (*slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdatawidgetmapper.moc"

extern "C" {
  QDataWidgetMapper_SlotProxy* QDataWidgetMapper_SlotProxy_new()
  {
    return new QDataWidgetMapper_SlotProxy();
  }
};

void QDataWidgetMapper_SlotProxy::slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0) {
  if (this->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QDataWidgetMapper_SlotProxy_connect__ZN17QDataWidgetMapper19currentIndexChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDataWidgetMapper_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi = (decltype(that->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi))ffifptr;
  QObject::connect((QDataWidgetMapper*)sender, SIGNAL(currentIndexChanged(int)), that, SLOT(slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0)));
  return that;
}
extern "C"
void QDataWidgetMapper_SlotProxy_disconnect__ZN17QDataWidgetMapper19currentIndexChangedEi(QDataWidgetMapper_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

