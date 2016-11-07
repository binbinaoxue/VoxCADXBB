/****************************************************************************
** Meta object code from reading C++ file 'vworkspace.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../vworkspace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vworkspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vWorkSpace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      30,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   11,   11,   11, 0x0a,
      56,   11,   11,   11, 0x0a,
      82,   70,   11,   11, 0x0a,
     111,  101,   11,   11, 0x0a,
     133,   11,   11,   11, 0x0a,
     148,   11,   11,   11, 0x0a,
     163,   11,   11,   11, 0x0a,
     189,  178,   11,   11, 0x0a,
     223,  212,   11,   11, 0x0a,
     257,  246,   11,   11, 0x0a,
     288,  280,   11,   11, 0x0a,
     316,  308,   11,   11, 0x0a,
     344,  336,   11,   11, 0x0a,
     372,  364,   11,   11, 0x0a,
     404,  392,   11,   11, 0x0a,
     437,  425,   11,   11, 0x0a,
     473,  461,   11,   11, 0x0a,
     509,  497,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_vWorkSpace[] = {
    "vWorkSpace\0\0RequestUpdateGL()\0"
    "WSDimChanged()\0UpdateUI()\0IniUpdateUI()\0"
    "NewWSScheme\0ChangedScheme(int)\0NewLatDim\0"
    "ChangedLatDim(double)\0ChangedVXDim()\0"
    "ChangedVYDim()\0ChangedVZDim()\0NewXDimAdj\0"
    "ChangedXDimAdj(double)\0NewYDimAdj\0"
    "ChangedYDimAdj(double)\0NewZDimAdj\0"
    "ChangedZDimAdj(double)\0NewXLiO\0"
    "ChangedXLiO(double)\0NewYLiO\0"
    "ChangedYLiO(double)\0NewXLaO\0"
    "ChangedXLaO(double)\0NewYLaO\0"
    "ChangedYLaO(double)\0NewVoxShape\0"
    "ChangedVoxShape(int)\0NewXSqueeze\0"
    "ChangedXSqueeze(double)\0NewYSqueeze\0"
    "ChangedYSqueeze(double)\0NewZSqueeze\0"
    "ChangedZSqueeze(double)\0"
};

void vWorkSpace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vWorkSpace *_t = static_cast<vWorkSpace *>(_o);
        switch (_id) {
        case 0: _t->RequestUpdateGL(); break;
        case 1: _t->WSDimChanged(); break;
        case 2: _t->UpdateUI(); break;
        case 3: _t->IniUpdateUI(); break;
        case 4: _t->ChangedScheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ChangedLatDim((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->ChangedVXDim(); break;
        case 7: _t->ChangedVYDim(); break;
        case 8: _t->ChangedVZDim(); break;
        case 9: _t->ChangedXDimAdj((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->ChangedYDimAdj((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->ChangedZDimAdj((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->ChangedXLiO((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->ChangedYLiO((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->ChangedXLaO((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->ChangedYLaO((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->ChangedVoxShape((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->ChangedXSqueeze((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->ChangedYSqueeze((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->ChangedZSqueeze((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vWorkSpace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vWorkSpace::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_vWorkSpace,
      qt_meta_data_vWorkSpace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vWorkSpace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vWorkSpace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vWorkSpace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vWorkSpace))
        return static_cast<void*>(const_cast< vWorkSpace*>(this));
    return QWidget::qt_metacast(_clname);
}

int vWorkSpace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void vWorkSpace::RequestUpdateGL()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void vWorkSpace::WSDimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
