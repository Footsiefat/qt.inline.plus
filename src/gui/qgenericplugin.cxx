// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qgenericplugin.h
// dst-file: /src/gui/qgenericplugin.cxx
//

// header block begin =>
#include <qgenericplugin.h>

extern "C" {

int QGenericPlugin_Class_Size()
{
  return sizeof(QGenericPlugin);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QGenericPlugin_SlotProxy here
class QGenericPlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGenericPlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qgenericplugin.moc"

extern "C" {
  QGenericPlugin_SlotProxy* QGenericPlugin_SlotProxy_new()
  {
    return new QGenericPlugin_SlotProxy();
  }
};

// <= body block end

