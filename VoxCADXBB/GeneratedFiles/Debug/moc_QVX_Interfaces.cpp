/****************************************************************************
** Meta object code from reading C++ file 'QVX_Interfaces.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QVX_Interfaces.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QVX_Interfaces.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QVX_Object[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   12,   11,   11, 0x0a,
      48,   11,   11,   11, 0x0a,
      89,   54,   11,   11, 0x0a,
     132,  113,   11,   11, 0x2a,
     159,  147,   11,   11, 0x2a,
     169,   11,   11,   11, 0x2a,
     176,   11,   11,   11, 0x0a,
     200,  187,   11,   11, 0x0a,
     221,   11,   11,   11, 0x2a,
     234,   11,   11,   11, 0x0a,
     249,   11,   11,   11, 0x0a,
     271,   11,   11,   11, 0x0a,
     283,   11,   11,   11, 0x0a,
     295,   11,   11,   11, 0x0a,
     312,  187,  307,   11, 0x0a,
     327,   11,  307,   11, 0x2a,
     334,   11,   11,   11, 0x0a,
     342,   11,  307,   11, 0x0a,
     352,   11,  307,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QVX_Object[] = {
    "QVX_Object\0\0pVec,pOff\0GetDim(Vec3D<>*,Vec3D<>*)\0"
    "New()\0Compression,NewLoc,pNewFilenameOut\0"
    "Save(int,bool,QString*)\0Compression,NewLoc\0"
    "Save(int,bool)\0Compression\0Save(int)\0"
    "Save()\0SaveZLib()\0pFilenameOut\0"
    "SaveAsZLib(QString*)\0SaveAsZLib()\0"
    "SaveAsBase64()\0SaveAsAsciiReadable()\0"
    "ExportSTL()\0ExportXYZ()\0ExportKV6()\0"
    "bool\0Open(QString*)\0Open()\0Close()\0"
    "OpenPal()\0SavePal()\0"
};

void QVX_Object::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QVX_Object *_t = static_cast<QVX_Object *>(_o);
        switch (_id) {
        case 0: _t->GetDim((*reinterpret_cast< Vec3D<>*(*)>(_a[1])),(*reinterpret_cast< Vec3D<>*(*)>(_a[2]))); break;
        case 1: _t->New(); break;
        case 2: _t->Save((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3]))); break;
        case 3: _t->Save((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->Save((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->Save(); break;
        case 6: _t->SaveZLib(); break;
        case 7: _t->SaveAsZLib((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 8: _t->SaveAsZLib(); break;
        case 9: _t->SaveAsBase64(); break;
        case 10: _t->SaveAsAsciiReadable(); break;
        case 11: _t->ExportSTL(); break;
        case 12: _t->ExportXYZ(); break;
        case 13: _t->ExportKV6(); break;
        case 14: { bool _r = _t->Open((*reinterpret_cast< QString*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->Open();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->Close(); break;
        case 17: { bool _r = _t->OpenPal();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->SavePal();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QVX_Object::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QVX_Object::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QVX_Object,
      qt_meta_data_QVX_Object, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVX_Object::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVX_Object::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVX_Object::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVX_Object))
        return static_cast<void*>(const_cast< QVX_Object*>(this));
    if (!strcmp(_clname, "CVX_Object"))
        return static_cast< CVX_Object*>(const_cast< QVX_Object*>(this));
    return QWidget::qt_metacast(_clname);
}

int QVX_Object::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
