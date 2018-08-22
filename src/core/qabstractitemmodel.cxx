//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractItemModel is pure virtual: true
// QAbstractItemModel has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractItemModel : public QAbstractItemModel {
public:
  virtual ~MyQAbstractItemModel() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [24] QModelIndex index(int, int, const QModelIndex &)
  virtual QModelIndex index(int row, int column, const QModelIndex & parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"index", &handled, 3, (uint64_t)row, (uint64_t)column, (uint64_t)&parent, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return (QModelIndex){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [24] QModelIndex parent(const QModelIndex &)
  virtual QModelIndex parent(const QModelIndex & child) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"parent", &handled, 1, (uint64_t)&child, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QModelIndex){};}
    auto prv = (QModelIndex*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QModelIndex
    } else {
    return (QModelIndex){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int rowCount(const QModelIndex &)
  virtual int rowCount(const QModelIndex & parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowCount", &handled, 1, (uint64_t)&parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int columnCount(const QModelIndex &)
  virtual int columnCount(const QModelIndex & parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnCount", &handled, 1, (uint64_t)&parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant data(const QModelIndex &, int)
  virtual QVariant data(const QModelIndex & index, int role) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"data", &handled, 2, (uint64_t)&index, (uint64_t)role, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// void QAbstractItemModel(QObject *)
MyQAbstractItemModel(QObject * parent) : QAbstractItemModel(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:178
// [24] QModelIndex index(int, int, const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:180
// [24] QModelIndex parent(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:183
// [4] int rowCount(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:184
// [4] int columnCount(const QModelIndex &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:187
// [16] QVariant data(const QModelIndex &, int)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:167
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel10metaObjectEv(void *this_) {
  return (void*)((QAbstractItemModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:167
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractItemModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractItemModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:167
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QAbstractItemModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractItemModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:167
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractItemModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractItemModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:167
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractItemModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractItemModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:174
// [-2] void QAbstractItemModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractItemModelC2EP7QObject(QObject * parent) {
  return 0; // new QAbstractItemModel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:175
// [-2] void ~QAbstractItemModel()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModelD2Ev(void *this_) {
  delete (QAbstractItemModel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:177
// [1] bool hasIndex(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QAbstractItemModel8hasIndexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->hasIndex(row, column, *parent);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:178
// [24] QModelIndex index(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QAbstractItemModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:180
// [24] QModelIndex parent(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QAbstractItemModel*)this_)->parent(*child);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:182
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QAbstractItemModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:183
// [4] int rowCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractItemModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QAbstractItemModel*)this_)->rowCount(*parent);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:184
// [4] int columnCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractItemModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QAbstractItemModel*)this_)->columnCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:185
// [1] bool hasChildren(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QAbstractItemModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->hasChildren(*parent);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:187
// [16] QVariant data(const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QAbstractItemModel*)this_)->data(*index, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:188
// [1] bool setData(const QModelIndex &, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QAbstractItemModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:190
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QAbstractItemModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:192
// [1] bool setHeaderData(int, Qt::Orientation, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *this_, int section, Qt::Orientation orientation, QVariant* value, int role) {
  return (bool)((QAbstractItemModel*)this_)->setHeaderData(section, orientation, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:195
// [8] QMap<int, QVariant> itemData(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK18QAbstractItemModel8itemDataERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemModel*)this_)->itemData(*index);
/*return rv;*/
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:196
// [1] bool setItemData(const QModelIndex &, const QMap<int, QVariant> &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE(void *this_, QModelIndex* index, QMap<int, QVariant>* roles) {
  return (bool)((QAbstractItemModel*)this_)->setItemData(*index, *roles);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:198
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel9mimeTypesEv(void *this_) {
  auto rv = ((QAbstractItemModel*)this_)->mimeTypes();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:199
// [8] QMimeData * mimeData(const QModelIndexList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  return (void*)((QAbstractItemModel*)this_)->mimeData(indexes);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:200
// [1] bool canDropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QAbstractItemModel15canDropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->canDropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:202
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qabstractitemmodel.h:204
// [4] Qt::DropActions supportedDropActions()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK18QAbstractItemModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QAbstractItemModel*)this_)->supportedDropActions();
}
#endif // QT_VERSION >= 0x040200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:206
// [4] Qt::DropActions supportedDragActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK18QAbstractItemModel20supportedDragActionsEv(void *this_) {
  return (Qt::DropActions)((QAbstractItemModel*)this_)->supportedDragActions();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:212
// [1] bool insertRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->insertRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:213
// [1] bool insertColumns(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->insertColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:214
// [1] bool removeRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->removeRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:215
// [1] bool removeColumns(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->removeColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:216
// [1] bool moveRows(const QModelIndex &, int, int, const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel8moveRowsERK11QModelIndexiiS2_i(void *this_, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
  return (bool)((QAbstractItemModel*)this_)->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:218
// [1] bool moveColumns(const QModelIndex &, int, int, const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel11moveColumnsERK11QModelIndexiiS2_i(void *this_, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
  return (bool)((QAbstractItemModel*)this_)->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:221
// [1] bool insertRow(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel9insertRowEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->insertRow(row, *parent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:222
// [1] bool insertColumn(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->insertColumn(column, *parent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:223
// [1] bool removeRow(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel9removeRowEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->removeRow(row, *parent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:224
// [1] bool removeColumn(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->removeColumn(column, *parent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:225
// [1] bool moveRow(const QModelIndex &, int, const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i(void *this_, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild) {
  return (bool)((QAbstractItemModel*)this_)->moveRow(*sourceParent, sourceRow, *destinationParent, destinationChild);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:227
// [1] bool moveColumn(const QModelIndex &, int, const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i(void *this_, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild) {
  return (bool)((QAbstractItemModel*)this_)->moveColumn(*sourceParent, sourceColumn, *destinationParent, destinationChild);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:230
// [-2] void fetchMore(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel9fetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  ((QAbstractItemModel*)this_)->fetchMore(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:231
// [1] bool canFetchMore(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QAbstractItemModel12canFetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->canFetchMore(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:232
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK18QAbstractItemModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QAbstractItemModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:233
// [-2] void sort(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QAbstractItemModel*)this_)->sort(column, order);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:234
// [24] QModelIndex buddy(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel5buddyERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemModel*)this_)->buddy(*index);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:235
// [8] QModelIndexList match(const QModelIndex &, int, const QVariant &, int, Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK18QAbstractItemModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *this_, QModelIndex* start, int role, QVariant* value, int hits, QFlags<Qt::MatchFlag> flags) {
  auto rv = ((QAbstractItemModel*)this_)->match(*start, role, *value, hits, flags);
return new QModelIndexList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:239
// [8] QSize span(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractItemModel4spanERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemModel*)this_)->span(*index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qabstractitemmodel.h:241
// [-2] QHash<int, QByteArray> roleNames()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZNK18QAbstractItemModel9roleNamesEv(void *this_) {
  auto rv = ((QAbstractItemModel*)this_)->roleNames();
/*return rv;*/
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:254
// [-2] void dataChanged(const QModelIndex &, const QModelIndex &, const QVector<int> &)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel11dataChangedERK11QModelIndexS2_RK7QVectorIiE(void *this_, QModelIndex* topLeft, QModelIndex* bottomRight, QVector<int>* roles) {
  ((QAbstractItemModel*)this_)->dataChanged(*topLeft, *bottomRight, *roles);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:255
// [-2] void headerDataChanged(Qt::Orientation, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(void *this_, Qt::Orientation orientation, int first, int last) {
  ((QAbstractItemModel*)this_)->headerDataChanged(orientation, first, last);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qabstractitemmodel.h:256
// [-2] void layoutChanged(const QList<QPersistentModelIndex> &, QAbstractItemModel::LayoutChangeHint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel13layoutChangedERK5QListI21QPersistentModelIndexENS_16LayoutChangeHintE(void *this_, QList<QPersistentModelIndex>* parents, QAbstractItemModel::LayoutChangeHint hint) {
  ((QAbstractItemModel*)this_)->layoutChanged(*parents, hint);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qabstractitemmodel.h:257
// [-2] void layoutAboutToBeChanged(const QList<QPersistentModelIndex> &, QAbstractItemModel::LayoutChangeHint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel22layoutAboutToBeChangedERK5QListI21QPersistentModelIndexENS_16LayoutChangeHintE(void *this_, QList<QPersistentModelIndex>* parents, QAbstractItemModel::LayoutChangeHint hint) {
  ((QAbstractItemModel*)this_)->layoutAboutToBeChanged(*parents, hint);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:259
// [-2] void rowsAboutToBeInserted(const QModelIndex &, int, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel21rowsAboutToBeInsertedERK11QModelIndexiiNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int first, int last, QAbstractItemModel::QPrivateSignal* arg3) {
  ((QAbstractItemModel*)this_)->rowsAboutToBeInserted(*parent, first, last, *arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:260
// [-2] void rowsInserted(const QModelIndex &, int, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel12rowsInsertedERK11QModelIndexiiNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int first, int last, QAbstractItemModel::QPrivateSignal* arg3) {
  ((QAbstractItemModel*)this_)->rowsInserted(*parent, first, last, *arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:262
// [-2] void rowsAboutToBeRemoved(const QModelIndex &, int, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel20rowsAboutToBeRemovedERK11QModelIndexiiNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int first, int last, QAbstractItemModel::QPrivateSignal* arg3) {
  ((QAbstractItemModel*)this_)->rowsAboutToBeRemoved(*parent, first, last, *arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:263
// [-2] void rowsRemoved(const QModelIndex &, int, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel11rowsRemovedERK11QModelIndexiiNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int first, int last, QAbstractItemModel::QPrivateSignal* arg3) {
  ((QAbstractItemModel*)this_)->rowsRemoved(*parent, first, last, *arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:265
// [-2] void columnsAboutToBeInserted(const QModelIndex &, int, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel24columnsAboutToBeInsertedERK11QModelIndexiiNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int first, int last, QAbstractItemModel::QPrivateSignal* arg3) {
  ((QAbstractItemModel*)this_)->columnsAboutToBeInserted(*parent, first, last, *arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:266
// [-2] void columnsInserted(const QModelIndex &, int, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel15columnsInsertedERK11QModelIndexiiNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int first, int last, QAbstractItemModel::QPrivateSignal* arg3) {
  ((QAbstractItemModel*)this_)->columnsInserted(*parent, first, last, *arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:268
// [-2] void columnsAboutToBeRemoved(const QModelIndex &, int, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel23columnsAboutToBeRemovedERK11QModelIndexiiNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int first, int last, QAbstractItemModel::QPrivateSignal* arg3) {
  ((QAbstractItemModel*)this_)->columnsAboutToBeRemoved(*parent, first, last, *arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:269
// [-2] void columnsRemoved(const QModelIndex &, int, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel14columnsRemovedERK11QModelIndexiiNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int first, int last, QAbstractItemModel::QPrivateSignal* arg3) {
  ((QAbstractItemModel*)this_)->columnsRemoved(*parent, first, last, *arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:271
// [-2] void modelAboutToBeReset(QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel19modelAboutToBeResetENS_14QPrivateSignalE(void *this_, QAbstractItemModel::QPrivateSignal* arg0) {
  ((QAbstractItemModel*)this_)->modelAboutToBeReset(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:272
// [-2] void modelReset(QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel10modelResetENS_14QPrivateSignalE(void *this_, QAbstractItemModel::QPrivateSignal* arg0) {
  ((QAbstractItemModel*)this_)->modelReset(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:274
// [-2] void rowsAboutToBeMoved(const QModelIndex &, int, int, const QModelIndex &, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel18rowsAboutToBeMovedERK11QModelIndexiiS2_iNS_14QPrivateSignalE(void *this_, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow, QAbstractItemModel::QPrivateSignal* arg5) {
  ((QAbstractItemModel*)this_)->rowsAboutToBeMoved(*sourceParent, sourceStart, sourceEnd, *destinationParent, destinationRow, *arg5);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:275
// [-2] void rowsMoved(const QModelIndex &, int, int, const QModelIndex &, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel9rowsMovedERK11QModelIndexiiS2_iNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int start, int end, QModelIndex* destination, int row, QAbstractItemModel::QPrivateSignal* arg5) {
  ((QAbstractItemModel*)this_)->rowsMoved(*parent, start, end, *destination, row, *arg5);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:277
// [-2] void columnsAboutToBeMoved(const QModelIndex &, int, int, const QModelIndex &, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel21columnsAboutToBeMovedERK11QModelIndexiiS2_iNS_14QPrivateSignalE(void *this_, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn, QAbstractItemModel::QPrivateSignal* arg5) {
  ((QAbstractItemModel*)this_)->columnsAboutToBeMoved(*sourceParent, sourceStart, sourceEnd, *destinationParent, destinationColumn, *arg5);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:278
// [-2] void columnsMoved(const QModelIndex &, int, int, const QModelIndex &, int, QAbstractItemModel::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel12columnsMovedERK11QModelIndexiiS2_iNS_14QPrivateSignalE(void *this_, QModelIndex* parent, int start, int end, QModelIndex* destination, int column, QAbstractItemModel::QPrivateSignal* arg5) {
  ((QAbstractItemModel*)this_)->columnsMoved(*parent, start, end, *destination, column, *arg5);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:281
// [1] bool submit()
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractItemModel6submitEv(void *this_) {
  return (bool)((QAbstractItemModel*)this_)->submit();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:282
// [-2] void revert()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractItemModel6revertEv(void *this_) {
  ((QAbstractItemModel*)this_)->revert();
}

//  main block end
