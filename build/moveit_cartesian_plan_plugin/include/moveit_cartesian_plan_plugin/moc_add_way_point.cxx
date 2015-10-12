/****************************************************************************
** Meta object code from reading C++ file 'add_way_point.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_cartesian_plan_plugin/include/moveit_cartesian_plan_plugin/add_way_point.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_way_point.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_cartesian_plan_plugin__AddWayPoint[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      43,   42,   42,   42, 0x05,
      69,   54,   42,   42, 0x05,
     106,   90,   42,   42, 0x05,
     160,  138,   42,   42, 0x05,
     218,  208,   42,   42, 0x05,
     291,  269,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
     350,  343,   42,   42, 0x09,
     369,  343,   42,   42, 0x09,
     400,  388,   42,   42, 0x0a,
     436,  426,   42,   42, 0x0a,
     466,  138,   42,   42, 0x0a,
     510,   42,   42,   42, 0x0a,
     527,   42,   42,   42, 0x0a,
     549,   42,   42,   42, 0x0a,
     587,  570,   42,   42, 0x0a,
     648,  617,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_moveit_cartesian_plan_plugin__AddWayPoint[] = {
    "moveit_cartesian_plan_plugin::AddWayPoint\0"
    "\0initRviz()\0marker_name_nr\0"
    "pointDeleteRviz(int)\0point_pos,count\0"
    "addPointRViz(tf::Transform,int)\0"
    "point_pos,marker_name\0"
    "pointPoseUpdatedRViz(tf::Transform,const char*)\0"
    "waypoints\0wayPoints_signal(std::vector<geometry_msgs::Pose>)\0"
    "waypoint,point_number\0"
    "onUpdatePosCheckIkValidity(geometry_msgs::Pose,int)\0"
    "config\0load(rviz::Config)\0save(rviz::Config)\0"
    "marker_name\0pointDeleted(std::string)\0"
    "point_pos\0addPointFromUI(tf::Transform)\0"
    "pointPoseUpdated(tf::Transform,const char*)\0"
    "parseWayPoints()\0saveWayPointsToFile()\0"
    "clearAllPointsRViz()\0point_number,out\0"
    "wayPointOutOfIK_slot(int,int)\0"
    "robot_model_frame,end_effector\0"
    "getRobotModelFrame_slot(std::string,tf::Transform)\0"
};

void moveit_cartesian_plan_plugin::AddWayPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddWayPoint *_t = static_cast<AddWayPoint *>(_o);
        switch (_id) {
        case 0: _t->initRviz(); break;
        case 1: _t->pointDeleteRviz((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addPointRViz((*reinterpret_cast< const tf::Transform(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->pointPoseUpdatedRViz((*reinterpret_cast< const tf::Transform(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 4: _t->wayPoints_signal((*reinterpret_cast< std::vector<geometry_msgs::Pose>(*)>(_a[1]))); break;
        case 5: _t->onUpdatePosCheckIkValidity((*reinterpret_cast< const geometry_msgs::Pose(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 6: _t->load((*reinterpret_cast< const rviz::Config(*)>(_a[1]))); break;
        case 7: _t->save((*reinterpret_cast< rviz::Config(*)>(_a[1]))); break;
        case 8: _t->pointDeleted((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 9: _t->addPointFromUI((*reinterpret_cast< const tf::Transform(*)>(_a[1]))); break;
        case 10: _t->pointPoseUpdated((*reinterpret_cast< const tf::Transform(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 11: _t->parseWayPoints(); break;
        case 12: _t->saveWayPointsToFile(); break;
        case 13: _t->clearAllPointsRViz(); break;
        case 14: _t->wayPointOutOfIK_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->getRobotModelFrame_slot((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const tf::Transform(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_cartesian_plan_plugin::AddWayPoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_cartesian_plan_plugin::AddWayPoint::staticMetaObject = {
    { &rviz::Panel::staticMetaObject, qt_meta_stringdata_moveit_cartesian_plan_plugin__AddWayPoint,
      qt_meta_data_moveit_cartesian_plan_plugin__AddWayPoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_cartesian_plan_plugin::AddWayPoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_cartesian_plan_plugin::AddWayPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_cartesian_plan_plugin::AddWayPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_cartesian_plan_plugin__AddWayPoint))
        return static_cast<void*>(const_cast< AddWayPoint*>(this));
    typedef rviz::Panel QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int moveit_cartesian_plan_plugin::AddWayPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef rviz::Panel QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void moveit_cartesian_plan_plugin::AddWayPoint::initRviz()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void moveit_cartesian_plan_plugin::AddWayPoint::pointDeleteRviz(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void moveit_cartesian_plan_plugin::AddWayPoint::addPointRViz(const tf::Transform & _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void moveit_cartesian_plan_plugin::AddWayPoint::pointPoseUpdatedRViz(const tf::Transform & _t1, const char * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void moveit_cartesian_plan_plugin::AddWayPoint::wayPoints_signal(std::vector<geometry_msgs::Pose> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void moveit_cartesian_plan_plugin::AddWayPoint::onUpdatePosCheckIkValidity(const geometry_msgs::Pose & _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
