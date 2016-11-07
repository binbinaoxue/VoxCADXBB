/****************************************************************************
** Meta object code from reading C++ file 'vStructureEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../vStructureEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vStructureEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vStructureEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   32,   17,   17, 0x0a,
      53,   17,   17,   17, 0x0a,
      69,   17,   17,   17, 0x0a,
      82,   17,   17,   17, 0x0a,
      99,   17,   17,   17, 0x0a,
     118,   17,   17,   17, 0x0a,
     146,  140,   17,   17, 0x0a,
     173,  167,   17,   17, 0x0a,
     215,  202,   17,   17, 0x0a,
     250,  167,   17,   17, 0x0a,
     278,  167,   17,   17, 0x0a,
     312,   17,   17,   17, 0x0a,
     337,  328,   17,   17, 0x0a,
     357,   17,   17,   17, 0x0a,
     371,   17,   17,   17, 0x0a,
     382,   17,   17,   17, 0x0a,
     402,  397,   17,   17, 0x0a,
     420,   32,   17,   17, 0x0a,
     439,   32,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_vStructureEditor[] = {
    "vStructureEditor\0\0DoneEditing()\0YN\0"
    "IsEditMode(bool*)\0ClickedPencil()\0"
    "ClickedBox()\0ClickedEllipse()\0"
    "ClickedLayerBack()\0ClickedLayerForward()\0"
    "State\0ClickedRefView(bool)\0X,Y,Z\0"
    "HoverMove(float,float,float)\0X,Y,Z,IsCtrl\0"
    "LMouseDown(float,float,float,bool)\0"
    "LMouseUp(float,float,float)\0"
    "LMouseDownMove(float,float,float)\0"
    "PressedEscape()\0Positive\0CtrlMouseRoll(bool)\0"
    "IniUpdateUI()\0UpdateUI()\0UpdateGLWins()\0"
    "pMat\0CurMaterial(int*)\0WantGLIndex(bool*)\0"
    "WantCoord3D(bool*)\0"
};

void vStructureEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vStructureEditor *_t = static_cast<vStructureEditor *>(_o);
        switch (_id) {
        case 0: _t->DoneEditing(); break;
        case 1: _t->IsEditMode((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 2: _t->ClickedPencil(); break;
        case 3: _t->ClickedBox(); break;
        case 4: _t->ClickedEllipse(); break;
        case 5: _t->ClickedLayerBack(); break;
        case 6: _t->ClickedLayerForward(); break;
        case 7: _t->ClickedRefView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->HoverMove((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 9: _t->LMouseDown((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 10: _t->LMouseUp((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 11: _t->LMouseDownMove((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 12: _t->PressedEscape(); break;
        case 13: _t->CtrlMouseRoll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->IniUpdateUI(); break;
        case 15: _t->UpdateUI(); break;
        case 16: _t->UpdateGLWins(); break;
        case 17: _t->CurMaterial((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 18: _t->WantGLIndex((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 19: _t->WantCoord3D((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vStructureEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vStructureEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_vStructureEditor,
      qt_meta_data_vStructureEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vStructureEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vStructureEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vStructureEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vStructureEditor))
        return static_cast<void*>(const_cast< vStructureEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int vStructureEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void vStructureEditor::DoneEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
