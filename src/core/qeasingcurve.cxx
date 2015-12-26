// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtCore/qeasingcurve.h
// dst-file: /src/core/qeasingcurve.cxx
//

// header block begin =>
#include <qeasingcurve.h>

extern "C" {

int QEasingCurve_Class_Size()
{
  return sizeof(QEasingCurve);
}

// QEasingCurve(const class QEasingCurve &)
QEasingCurve* dector_ZN12QEasingCurveC1ERKS_(const QEasingCurve & other)
{
  // static_assert(sizeof(QEasingCurve) == 32, "tyszerr");
  QEasingCurve* rthis = new QEasingCurve(other);
  return rthis;
}

// ~QEasingCurve()
void dedtor_ZN12QEasingCurveD0Ev(QEasingCurve* that)
{
  QEasingCurve* rthis = (QEasingCurve*)that;
  delete rthis;
}

// QEasingCurve(class QEasingCurve &&)
QEasingCurve* dector_ZN12QEasingCurveC1EOS_(QEasingCurve && other)
{
  // static_assert(sizeof(QEasingCurve) == 32, "tyszerr");
  QEasingCurve* rthis = new QEasingCurve(other);
  return rthis;
}

// QEasingCurve(enum QEasingCurve::Type)
QEasingCurve* dector_ZN12QEasingCurveC1ENS_4TypeE(QEasingCurve::Type type)
{
  // static_assert(sizeof(QEasingCurve) == 32, "tyszerr");
  QEasingCurve* rthis = new QEasingCurve(type);
  return rthis;
}

  // proto:  void QEasingCurve::swap(QEasingCurve & other);
void _ZN12QEasingCurve4swapERS_(void *that, QEasingCurve & other)
{
  QEasingCurve *cthat = (QEasingCurve *)that;
   cthat->swap(other);
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
// <= body block end

