// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qbitarray.h
// dst-file: /src/core/qbitarray.cxx
//

// header block begin =>
#include <qbitarray.h>

extern "C" {

  // proto:  bool QBitArray::isEmpty();
bool _ZNK9QBitArray7isEmptyEv(void *that)

{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->isEmpty();
}

  // proto:  int QBitArray::size();
int _ZNK9QBitArray4sizeEv(void *that)

{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->size();
}

  // proto:  void QBitArray::swap(QBitArray & other);
void _ZN9QBitArray4swapERS_(void *that, QBitArray & other)

{
  QBitArray *cthat = (QBitArray *)that;
   cthat->swap(other);
}

  // proto:  int QBitArray::count();
int _ZNK9QBitArray5countEv(void *that)

{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->count();
}

  // proto:  void QBitArray::QBitArray(QBitArray && other);
void _ZN9QBitArrayC1EOS_(void *that, QBitArray && other)

{
  QBitArray *cthat = (QBitArray *)that;
  auto _o = new(that) QBitArray(other);
}

  // proto:  void QBitArray::detach();
void _ZN9QBitArray6detachEv(void *that)

{
  QBitArray *cthat = (QBitArray *)that;
   cthat->detach();
}

  // proto:  void QBitArray::QBitArray();
void _ZN9QBitArrayC1Ev(void *that)

{
  QBitArray *cthat = (QBitArray *)that;
  auto _o = new(that) QBitArray();
}

  // proto:  void QBitArray::clear();
void _ZN9QBitArray5clearEv(void *that)

{
  QBitArray *cthat = (QBitArray *)that;
   cthat->clear();
}

  // proto:  void QBitArray::truncate(int pos);
void _ZN9QBitArray8truncateEi(void *that, int pos)

{
  QBitArray *cthat = (QBitArray *)that;
   cthat->truncate(pos);
}

  // proto:  void QBitArray::QBitArray(const QBitArray & other);
void _ZN9QBitArrayC1ERKS_(void *that, const QBitArray & other)

{
  QBitArray *cthat = (QBitArray *)that;
  auto _o = new(that) QBitArray(other);
}

  // proto:  bool QBitArray::isNull();
bool _ZNK9QBitArray6isNullEv(void *that)

{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->isNull();
}

  // proto:  bool QBitArray::isDetached();
bool _ZNK9QBitArray10isDetachedEv(void *that)

{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->isDetached();
}

  // proto:  bool QBitArray::fill(bool val, int size);
bool _ZN9QBitArray4fillEbi(void *that, bool val, int size)

{
  QBitArray *cthat = (QBitArray *)that;
  return cthat->fill(val, size);
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

