// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qgridlayout.h
// dst-file: /src/widgets/qgridlayout.cxx
//

// header block begin =>
#include <qgridlayout.h>

extern "C" {

int QGridLayout_Class_Size()
{
  return sizeof(QGridLayout);
}

// QGridLayout(class QWidget *)
QGridLayout* dector_ZN11QGridLayoutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QGridLayout) == 32, "tyszerr");
  QGridLayout* rthis = new QGridLayout(parent);
  return rthis;
}

// QGridLayout()
QGridLayout* dector_ZN11QGridLayoutC1Ev()
{
  // static_assert(sizeof(QGridLayout) == 32, "tyszerr");
  QGridLayout* rthis = new QGridLayout();
  return rthis;
}

// ~QGridLayout()
void dedtor_ZN11QGridLayoutD0Ev(QGridLayout* that)
{
  QGridLayout* rthis = (QGridLayout*)that;
  delete rthis;
}

  // proto:  void QGridLayout::addWidget(QWidget * w);
void _ZN11QGridLayout9addWidgetEP7QWidget(void *that, QWidget * w)
{
  QGridLayout *cthat = (QGridLayout *)that;
   cthat->addWidget(w);
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

