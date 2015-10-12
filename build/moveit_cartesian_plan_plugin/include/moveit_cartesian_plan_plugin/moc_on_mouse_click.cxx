/****************************************************************************
** Meta object code from reading C++ file 'on_mouse_click.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_cartesian_plan_plugin/include/moveit_cartesian_plan_plugin/on_mouse_click.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'on_mouse_click.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_cartesian_plan_plugin__OnMouseClick[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   43,   43,   43, 0x0a,
      58,   43,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_moveit_cartesian_plan_plugin__OnMouseClick[] = {
    "moveit_cartesian_plan_plugin::OnMouseClick\0"
    "\0updateTopic()\0updateAutoDeactivate()\0"
};

void moveit_cartesian_plan_plugin::OnMouseClick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OnMouseClick *_t = static_cast<OnMouseClick *>(_o);
        switch (_id) {
        case 0: _t->updateTopic(); break;
        case 1: _t->updateAutoDeactivate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData moveit_cartesian_plan_plugin::OnMouseClick::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_cartesian_plan_plugin::OnMouseClick::staticMetaObject = {
    { &Tool::staticMetaObject, qt_meta_stringdata_moveit_cartesian_plan_plugin__OnMouseClick,
      qt_meta_data_moveit_cartesian_plan_plugin__OnMouseClick, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_cartesian_plan_plugin::OnMouseClick::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_cartesian_plan_plugin::OnMouseClick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_cartesian_plan_plugin::OnMouseClick::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_cartesian_plan_plugin__OnMouseClick))
        return static_cast<void*>(const_cast< OnMouseClick*>(this));
    return Tool::qt_metacast(_clname);
}

int moveit_cartesian_plan_plugin::OnMouseClick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
