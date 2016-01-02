// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qvector3d.h
// dst-file: /src/gui/qvector3d.cxx
//

// header block begin =>
#include <qvector3d.h>

extern "C" {

int QVector3D_Class_Size()
{
  return sizeof(QVector3D);
}

// QVector3D(Qt::Initialization)
QVector3D* dector_ZN9QVector3DC1EN2Qt14InitializationE(Qt::Initialization arg1)
{
  // static_assert(sizeof(QVector3D) == 32, "tyszerr");
  QVector3D* rthis = new QVector3D(arg1);
  return rthis;
}

// QVector3D(const class QPointF &)
QVector3D* dector_ZN9QVector3DC1ERK7QPointF(const QPointF & point)
{
  // static_assert(sizeof(QVector3D) == 32, "tyszerr");
  QVector3D* rthis = new QVector3D(point);
  return rthis;
}

// QVector3D(const class QVector2D &)
QVector3D* dector_ZN9QVector3DC1ERK9QVector2D(const QVector2D & vector)
{
  // static_assert(sizeof(QVector3D) == 32, "tyszerr");
  QVector3D* rthis = new QVector3D(vector);
  return rthis;
}

// QVector3D(const class QPoint &)
QVector3D* dector_ZN9QVector3DC1ERK6QPoint(const QPoint & point)
{
  // static_assert(sizeof(QVector3D) == 32, "tyszerr");
  QVector3D* rthis = new QVector3D(point);
  return rthis;
}

// QVector3D(const class QVector4D &)
QVector3D* dector_ZN9QVector3DC1ERK9QVector4D(const QVector4D & vector)
{
  // static_assert(sizeof(QVector3D) == 32, "tyszerr");
  QVector3D* rthis = new QVector3D(vector);
  return rthis;
}

// QVector3D()
QVector3D* dector_ZN9QVector3DC1Ev()
{
  // static_assert(sizeof(QVector3D) == 32, "tyszerr");
  QVector3D* rthis = new QVector3D();
  return rthis;
}

// QVector3D(float, float, float)
QVector3D* dector_ZN9QVector3DC1Efff(float xpos, float ypos, float zpos)
{
  // static_assert(sizeof(QVector3D) == 32, "tyszerr");
  QVector3D* rthis = new QVector3D(xpos, ypos, zpos);
  return rthis;
}

// QVector3D(const class QVector2D &, float)
QVector3D* dector_ZN9QVector3DC1ERK9QVector2Df(const QVector2D & vector, float zpos)
{
  // static_assert(sizeof(QVector3D) == 32, "tyszerr");
  QVector3D* rthis = new QVector3D(vector, zpos);
  return rthis;
}

  // proto:  void QVector3D::setY(float y);
void demth_ZN9QVector3D4setYEf(void *that, float y)
{
  QVector3D *cthat = (QVector3D *)that;
   cthat->setY(y);
}

  // proto:  void QVector3D::setZ(float z);
void demth_ZN9QVector3D4setZEf(void *that, float z)
{
  QVector3D *cthat = (QVector3D *)that;
   cthat->setZ(z);
}

  // proto:  bool QVector3D::isNull();
bool demth_ZNK9QVector3D6isNullEv(void *that)
{
  QVector3D *cthat = (QVector3D *)that;
  return cthat->isNull();
}

  // proto:  void QVector3D::setX(float x);
void demth_ZN9QVector3D4setXEf(void *that, float x)
{
  QVector3D *cthat = (QVector3D *)that;
   cthat->setX(x);
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

