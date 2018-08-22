//  header block begin
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraimageprocessingcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageProcessingControl is pure virtual: true
// QCameraImageProcessingControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraImageProcessingControl : public QCameraImageProcessingControl {
public:
  virtual ~MyQCameraImageProcessingControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isParameterSupported(QCameraImageProcessingControl::ProcessingParameter)
  virtual bool isParameterSupported(QCameraImageProcessingControl::ProcessingParameter arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isParameterSupported", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
  virtual bool isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter parameter, const QVariant & value) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isParameterValueSupported", &handled, 2, (uint64_t)parameter, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant parameter(QCameraImageProcessingControl::ProcessingParameter)
  virtual QVariant parameter(QCameraImageProcessingControl::ProcessingParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"parameter", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setParameter(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
  virtual void setParameter(QCameraImageProcessingControl::ProcessingParameter parameter, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setParameter", &handled, 2, (uint64_t)parameter, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraImageProcessingControl::setParameter(parameter, value);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:79
// [1] bool isParameterSupported(QCameraImageProcessingControl::ProcessingParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:80
// [1] bool isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:81
// [16] QVariant parameter(QCameraImageProcessingControl::ProcessingParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:82
// [-2] void setParameter(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QCameraImageProcessingControl10metaObjectEv(void *this_) {
  return (void*)((QCameraImageProcessingControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN29QCameraImageProcessingControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraImageProcessingControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN29QCameraImageProcessingControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraImageProcessingControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN29QCameraImageProcessingControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraImageProcessingControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN29QCameraImageProcessingControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraImageProcessingControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:60
// [-2] void ~QCameraImageProcessingControl()
extern "C" Q_DECL_EXPORT
void C_ZN29QCameraImageProcessingControlD2Ev(void *this_) {
  delete (QCameraImageProcessingControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:79
// [1] bool isParameterSupported(QCameraImageProcessingControl::ProcessingParameter)
extern "C" Q_DECL_EXPORT
bool C_ZNK29QCameraImageProcessingControl20isParameterSupportedENS_19ProcessingParameterE(void *this_, QCameraImageProcessingControl::ProcessingParameter arg0) {
  return (bool)((QCameraImageProcessingControl*)this_)->isParameterSupported(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:80
// [1] bool isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZNK29QCameraImageProcessingControl25isParameterValueSupportedENS_19ProcessingParameterERK8QVariant(void *this_, QCameraImageProcessingControl::ProcessingParameter parameter, QVariant* value) {
  return (bool)((QCameraImageProcessingControl*)this_)->isParameterValueSupported(parameter, *value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:81
// [16] QVariant parameter(QCameraImageProcessingControl::ProcessingParameter)
extern "C" Q_DECL_EXPORT
void* C_ZNK29QCameraImageProcessingControl9parameterENS_19ProcessingParameterE(void *this_, QCameraImageProcessingControl::ProcessingParameter parameter) {
  auto rv = ((QCameraImageProcessingControl*)this_)->parameter(parameter);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:82
// [-2] void setParameter(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN29QCameraImageProcessingControl12setParameterENS_19ProcessingParameterERK8QVariant(void *this_, QCameraImageProcessingControl::ProcessingParameter parameter, QVariant* value) {
  ((QCameraImageProcessingControl*)this_)->setParameter(parameter, *value);
}

//  main block end
