// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtCore/qpoint.h
// dst-file: /src/core/qpoint.cxx
//

// header block begin =>
#include <qpoint.h>

extern "C" {

int QPoint_Class_Size()
{
  return sizeof(QPoint);
}

// QPoint(int, int)
QPoint* dector_ZN6QPointC1Eii(int xpos, int ypos)
{
  // static_assert(sizeof(QPoint) == 32, "tyszerr");
  QPoint* rthis = new QPoint(xpos, ypos);
  return rthis;
}

// QPoint()
QPoint* dector_ZN6QPointC1Ev()
{
  // static_assert(sizeof(QPoint) == 32, "tyszerr");
  QPoint* rthis = new QPoint();
  return rthis;
}

  // proto:  int & QPoint::ry();
int * _ZN6QPoint2ryEv(void *that)
{
  QPoint *cthat = (QPoint *)that;
  return &cthat->ry();
}

  // proto:  void QPoint::setX(int x);
void _ZN6QPoint4setXEi(void *that, int x)
{
  QPoint *cthat = (QPoint *)that;
   cthat->setX(x);
}

  // proto:  void QPoint::setY(int y);
void _ZN6QPoint4setYEi(void *that, int y)
{
  QPoint *cthat = (QPoint *)that;
   cthat->setY(y);
}

  // proto:  int & QPoint::rx();
int * _ZN6QPoint2rxEv(void *that)
{
  QPoint *cthat = (QPoint *)that;
  return &cthat->rx();
}

int QPointF_Class_Size()
{
  return sizeof(QPointF);
}

// QPointF(qreal, qreal)
QPointF* dector_ZN7QPointFC1Edd(double xpos, double ypos)
{
  // static_assert(sizeof(QPointF) == 32, "tyszerr");
  QPointF* rthis = new QPointF(xpos, ypos);
  return rthis;
}

// QPointF()
QPointF* dector_ZN7QPointFC1Ev()
{
  // static_assert(sizeof(QPointF) == 32, "tyszerr");
  QPointF* rthis = new QPointF();
  return rthis;
}

// QPointF(const class QPoint &)
QPointF* dector_ZN7QPointFC1ERK6QPoint(const QPoint & p)
{
  // static_assert(sizeof(QPointF) == 32, "tyszerr");
  QPointF* rthis = new QPointF(p);
  return rthis;
}

  // proto:  qreal & QPointF::rx();
qreal * _ZN7QPointF2rxEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return &cthat->rx();
}

  // proto:  bool QPointF::isNull();
bool _ZNK7QPointF6isNullEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return cthat->isNull();
}

  // proto:  void QPointF::setX(qreal x);
void _ZN7QPointF4setXEd(void *that, double x)
{
  QPointF *cthat = (QPointF *)that;
   cthat->setX(x);
}

  // proto:  qreal & QPointF::ry();
qreal * _ZN7QPointF2ryEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return &cthat->ry();
}

  // proto:  void QPointF::setY(qreal y);
void _ZN7QPointF4setYEd(void *that, double y)
{
  QPointF *cthat = (QPointF *)that;
   cthat->setY(y);
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

