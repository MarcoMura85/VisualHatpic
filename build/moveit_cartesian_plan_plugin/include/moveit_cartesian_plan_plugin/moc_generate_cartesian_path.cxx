/****************************************************************************
** Meta object code from reading C++ file 'generate_cartesian_path.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_cartesian_plan_plugin/include/moveit_cartesian_plan_plugin/generate_cartesian_path.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generate_cartesian_path.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GenerateCartesianPath[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      49,   23,   22,   22, 0x05,
     105,   74,   22,   22, 0x05,
     158,   22,   22,   22, 0x05,
     188,   22,   22,   22, 0x05,
     228,  219,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     269,  259,   22,   22, 0x0a,
     336,  314,   22,   22, 0x0a,
     383,   22,   22,   22, 0x0a,
     399,  259,   22,   22, 0x0a,
     532,  454,   22,   22, 0x0a,
     578,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GenerateCartesianPath[] = {
    "GenerateCartesianPath\0\0point_number,out_of_range\0"
    "wayPointOutOfIK(int,int)\0"
    "robot_model_frame,end_effector\0"
    "getRobotModelFrame_signal(std::string,tf::Transform)\0"
    "cartesianPathExecuteStarted()\0"
    "cartesianPathExecuteFinished()\0fraction\0"
    "cartesianPathCompleted(double)\0waypoints\0"
    "moveToPose(std::vector<geometry_msgs::Pose>)\0"
    "waypoints,marker_name\0"
    "checkWayPointValidity(geometry_msgs::Pose,int)\0"
    "initRviz_done()\0"
    "cartesianPathHandler(std::vector<geometry_msgs::Pose>)\0"
    "plan_time_,cart_step_size_,cart_jump_thresh_,moveit_replan_,avoid_coll"
    "isions_\0"
    "setCartParams(double,double,double,bool,bool)\0"
    "moveToHome()\0"
};

void GenerateCartesianPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GenerateCartesianPath *_t = static_cast<GenerateCartesianPath *>(_o);
        switch (_id) {
        case 0: _t->wayPointOutOfIK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->getRobotModelFrame_signal((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const tf::Transform(*)>(_a[2]))); break;
        case 2: _t->cartesianPathExecuteStarted(); break;
        case 3: _t->cartesianPathExecuteFinished(); break;
        case 4: _t->cartesianPathCompleted((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->moveToPose((*reinterpret_cast< std::vector<geometry_msgs::Pose>(*)>(_a[1]))); break;
        case 6: _t->checkWayPointValidity((*reinterpret_cast< const geometry_msgs::Pose(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->initRviz_done(); break;
        case 8: _t->cartesianPathHandler((*reinterpret_cast< std::vector<geometry_msgs::Pose>(*)>(_a[1]))); break;
        case 9: _t->setCartParams((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 10: _t->moveToHome(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GenerateCartesianPath::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GenerateCartesianPath::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GenerateCartesianPath,
      qt_meta_data_GenerateCartesianPath, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GenerateCartesianPath::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GenerateCartesianPath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GenerateCartesianPath::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenerateCartesianPath))
        return static_cast<void*>(const_cast< GenerateCartesianPath*>(this));
    return QObject::qt_metacast(_clname);
}

int GenerateCartesianPath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GenerateCartesianPath::wayPointOutOfIK(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GenerateCartesianPath::getRobotModelFrame_signal(const std::string _t1, const tf::Transform _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GenerateCartesianPath::cartesianPathExecuteStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GenerateCartesianPath::cartesianPathExecuteFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GenerateCartesianPath::cartesianPathCompleted(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
