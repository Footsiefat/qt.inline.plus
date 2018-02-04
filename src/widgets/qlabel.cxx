//  header block begin
// /usr/include/qt/QtWidgets/qlabel.h
#include <qlabel.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLabel is pure virtual: false
// QLabel has virtual projected: true
//  header block end

//  main block begin

class MyQLabel : public QLabel {
public:
  virtual ~MyQLabel() {}
// void QLabel(class QWidget *, Qt::WindowFlags)
MyQLabel(QWidget * parent, QFlags<Qt::WindowType> f) : QLabel(parent, f) {}
// void QLabel(const class QString &, class QWidget *, Qt::WindowFlags)
MyQLabel(const QString & text, QWidget * parent, QFlags<Qt::WindowType> f) : QLabel(text, parent, f) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QLabel::event(e);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::keyPressEvent(ev);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::paintEvent(arg0);
  }
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::changeEvent(arg0);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::mousePressEvent(ev);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::mouseMoveEvent(ev);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::mouseReleaseEvent(ev);
  }
  }
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::contextMenuEvent(ev);
  }
  }
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::focusInEvent(ev);
  }
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLabel::focusOutEvent(ev);
  }
  }
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QLabel::focusNextPrevChild(next);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK6QLabel10metaObjectEv(void *this_) {
  return (void*)((QLabel*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:70
// [-2] void QLabel(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN6QLabelC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQLabel*)(0);
  return  new MyQLabel(parent, f);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:71
// [-2] void QLabel(const class QString &, class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN6QLabelC2ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(QString* text, QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQLabel*)(0);
  return  new MyQLabel(*text, parent, f);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:72
// [-2] void ~QLabel()
extern "C"
void C_ZN6QLabelD2Ev(void *this_) {
  delete (QLabel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:74
// [8] QString text()
extern "C"
void* C_ZNK6QLabel4textEv(void *this_) {
  auto rv = ((QLabel*)this_)->text();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:75
// [8] const QPixmap * pixmap()
extern "C"
void* C_ZNK6QLabel6pixmapEv(void *this_) {
  return (void*)((QLabel*)this_)->pixmap();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:77
// [8] const QPicture * picture()
extern "C"
void* C_ZNK6QLabel7pictureEv(void *this_) {
  return (void*)((QLabel*)this_)->picture();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:80
// [8] QMovie * movie()
extern "C"
void* C_ZNK6QLabel5movieEv(void *this_) {
  return (void*)((QLabel*)this_)->movie();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:83
// [4] Qt::TextFormat textFormat()
extern "C"
Qt::TextFormat C_ZNK6QLabel10textFormatEv(void *this_) {
  return (Qt::TextFormat)((QLabel*)this_)->textFormat();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:84
// [-2] void setTextFormat(Qt::TextFormat)
extern "C"
void C_ZN6QLabel13setTextFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat arg0) {
  ((QLabel*)this_)->setTextFormat(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:86
// [4] Qt::Alignment alignment()
extern "C"
Qt::Alignment C_ZNK6QLabel9alignmentEv(void *this_) {
  return (Qt::Alignment)((QLabel*)this_)->alignment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:87
// [-2] void setAlignment(Qt::Alignment)
extern "C"
void C_ZN6QLabel12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, Qt::Alignment arg0) {
  ((QLabel*)this_)->setAlignment(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:89
// [-2] void setWordWrap(_Bool)
extern "C"
void C_ZN6QLabel11setWordWrapEb(void *this_, bool on) {
  ((QLabel*)this_)->setWordWrap(on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:90
// [1] bool wordWrap()
extern "C"
bool C_ZNK6QLabel8wordWrapEv(void *this_) {
  return (bool)((QLabel*)this_)->wordWrap();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:92
// [4] int indent()
extern "C"
int C_ZNK6QLabel6indentEv(void *this_) {
  return (int)((QLabel*)this_)->indent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:93
// [-2] void setIndent(int)
extern "C"
void C_ZN6QLabel9setIndentEi(void *this_, int arg0) {
  ((QLabel*)this_)->setIndent(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:95
// [4] int margin()
extern "C"
int C_ZNK6QLabel6marginEv(void *this_) {
  return (int)((QLabel*)this_)->margin();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:96
// [-2] void setMargin(int)
extern "C"
void C_ZN6QLabel9setMarginEi(void *this_, int arg0) {
  ((QLabel*)this_)->setMargin(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:98
// [1] bool hasScaledContents()
extern "C"
bool C_ZNK6QLabel17hasScaledContentsEv(void *this_) {
  return (bool)((QLabel*)this_)->hasScaledContents();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:99
// [-2] void setScaledContents(_Bool)
extern "C"
void C_ZN6QLabel17setScaledContentsEb(void *this_, bool arg0) {
  ((QLabel*)this_)->setScaledContents(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:100
// [8] QSize sizeHint()
extern "C"
void* C_ZNK6QLabel8sizeHintEv(void *this_) {
  auto rv = ((QLabel*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:101
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK6QLabel15minimumSizeHintEv(void *this_) {
  auto rv = ((QLabel*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:103
// [-2] void setBuddy(class QWidget *)
extern "C"
void C_ZN6QLabel8setBuddyEP7QWidget(void *this_, QWidget * arg0) {
  ((QLabel*)this_)->setBuddy(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:104
// [8] QWidget * buddy()
extern "C"
void* C_ZNK6QLabel5buddyEv(void *this_) {
  return (void*)((QLabel*)this_)->buddy();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:106
// [4] int heightForWidth(int)
extern "C"
int C_ZNK6QLabel14heightForWidthEi(void *this_, int arg0) {
  return (int)((QLabel*)this_)->heightForWidth(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:108
// [1] bool openExternalLinks()
extern "C"
bool C_ZNK6QLabel17openExternalLinksEv(void *this_) {
  return (bool)((QLabel*)this_)->openExternalLinks();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:109
// [-2] void setOpenExternalLinks(_Bool)
extern "C"
void C_ZN6QLabel20setOpenExternalLinksEb(void *this_, bool open) {
  ((QLabel*)this_)->setOpenExternalLinks(open);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:111
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void C_ZN6QLabel23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QLabel*)this_)->setTextInteractionFlags(flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:112
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C"
Qt::TextInteractionFlags C_ZNK6QLabel20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QLabel*)this_)->textInteractionFlags();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:114
// [-2] void setSelection(int, int)
extern "C"
void C_ZN6QLabel12setSelectionEii(void *this_, int arg0, int arg1) {
  ((QLabel*)this_)->setSelection(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:115
// [1] bool hasSelectedText()
extern "C"
bool C_ZNK6QLabel15hasSelectedTextEv(void *this_) {
  return (bool)((QLabel*)this_)->hasSelectedText();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:116
// [8] QString selectedText()
extern "C"
void* C_ZNK6QLabel12selectedTextEv(void *this_) {
  auto rv = ((QLabel*)this_)->selectedText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:117
// [4] int selectionStart()
extern "C"
int C_ZNK6QLabel14selectionStartEv(void *this_) {
  return (int)((QLabel*)this_)->selectionStart();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:120
// [-2] void setText(const class QString &)
extern "C"
void C_ZN6QLabel7setTextERK7QString(void *this_, QString* arg0) {
  ((QLabel*)this_)->setText(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:121
// [-2] void setPixmap(const class QPixmap &)
extern "C"
void C_ZN6QLabel9setPixmapERK7QPixmap(void *this_, QPixmap* arg0) {
  ((QLabel*)this_)->setPixmap(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:123
// [-2] void setPicture(const class QPicture &)
extern "C"
void C_ZN6QLabel10setPictureERK8QPicture(void *this_, QPicture* arg0) {
  ((QLabel*)this_)->setPicture(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:126
// [-2] void setMovie(class QMovie *)
extern "C"
void C_ZN6QLabel8setMovieEP6QMovie(void *this_, QMovie * movie) {
  ((QLabel*)this_)->setMovie(movie);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:128
// [-2] void setNum(int)
extern "C"
void C_ZN6QLabel6setNumEi(void *this_, int arg0) {
  ((QLabel*)this_)->setNum(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:129
// [-2] void setNum(double)
extern "C"
void C_ZN6QLabel6setNumEd(void *this_, double arg0) {
  ((QLabel*)this_)->setNum(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:130
// [-2] void clear()
extern "C"
void C_ZN6QLabel5clearEv(void *this_) {
  ((QLabel*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:133
// [-2] void linkActivated(const class QString &)
extern "C"
void C_ZN6QLabel13linkActivatedERK7QString(void *this_, QString* link) {
  ((QLabel*)this_)->linkActivated(*link);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:134
// [-2] void linkHovered(const class QString &)
extern "C"
void C_ZN6QLabel11linkHoveredERK7QString(void *this_, QString* link) {
  ((QLabel*)this_)->linkHovered(*link);
}
//  main block end
