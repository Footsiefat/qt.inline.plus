//  header block begin
// since 0x050400
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractPlanarVideoBuffer is pure virtual: true
// QAbstractPlanarVideoBuffer has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractPlanarVideoBuffer : public QAbstractPlanarVideoBuffer {
public:
  virtual ~MyQAbstractPlanarVideoBuffer() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int map(QAbstractVideoBuffer::MapMode, int *, int *, uchar **)
  virtual int map(QAbstractVideoBuffer::MapMode mode, int * numBytes, int bytesPerLine[4], uchar * data[4])  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"map", &handled, 4, (uint64_t)mode, (uint64_t)numBytes, (uint64_t)bytesPerLine, (uint64_t)data, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QAbstractVideoBuffer::MapMode mapMode()
  virtual QAbstractVideoBuffer::MapMode mapMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mapMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractVideoBuffer::MapMode)(int)(irv);
      // Enum Enum QAbstractVideoBuffer::MapMode
    } else {
    return (QAbstractVideoBuffer::MapMode){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void unmap()
  virtual void unmap()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"unmap", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractPlanarVideoBuffer::unmap();
  }
  }

// void QAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType)
MyQAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType type_) : QAbstractPlanarVideoBuffer(type_) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:111
// [4] int map(QAbstractVideoBuffer::MapMode, int *, int *, uchar **)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:84
// [4] QAbstractVideoBuffer::MapMode mapMode()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:88
// [-2] void unmap()
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:107
// [-2] void QAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAbstractPlanarVideoBufferC2EN20QAbstractVideoBuffer10HandleTypeE(QAbstractVideoBuffer::HandleType type_) {
  return 0; // new QAbstractPlanarVideoBuffer(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:108
// [-2] void ~QAbstractPlanarVideoBuffer()
extern "C" Q_DECL_EXPORT
void C_ZN26QAbstractPlanarVideoBufferD2Ev(void *this_) {
  delete (QAbstractPlanarVideoBuffer*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:110
// [8] uchar * map(QAbstractVideoBuffer::MapMode, int *, int *)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAbstractPlanarVideoBuffer3mapEN20QAbstractVideoBuffer7MapModeEPiS2_(void *this_, QAbstractVideoBuffer::MapMode mode, int * numBytes, int * bytesPerLine) {
  return (void*)((QAbstractPlanarVideoBuffer*)this_)->map(mode, numBytes, bytesPerLine);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:111
// [4] int map(QAbstractVideoBuffer::MapMode, int *, int *, uchar **)
extern "C" Q_DECL_EXPORT
int C_ZN26QAbstractPlanarVideoBuffer3mapEN20QAbstractVideoBuffer7MapModeEPiS2_PPh(void *this_, QAbstractVideoBuffer::MapMode mode, int * numBytes, int* bytesPerLine, uchar** data) {
  return (int)((QAbstractPlanarVideoBuffer*)this_)->map(mode, numBytes, bytesPerLine, data);
}

//  main block end
