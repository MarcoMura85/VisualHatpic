/****************************************************************************
** Meta object code from reading C++ file 'path_planning_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/moveit_cartesian_plan_plugin/include/moveit_cartesian_plan_plugin/widgets/path_planning_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'path_planning_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_cartesian_plan_plugin__widgets__PathPlanningWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      69,   59,   58,   58, 0x05,
     105,   93,   58,   58, 0x05,
     157,  136,   58,   58, 0x05,
     207,   58,   58,   58, 0x05,
     233,   58,   58,   58, 0x05,
     255,   58,   58,   58, 0x05,
     357,  279,   58,   58, 0x05,
     422,   58,   58,   58, 0x05,

 // slots: signature, parameters, type, tag, flags
     448,   58,   58,   58, 0x09,
     463,   58,   58,   58, 0x09,
     480,   58,   58,   58, 0x09,
     509,  493,   58,   58, 0x09,
     548,  538,   58,   58, 0x09,
     585,  563,   58,   58, 0x09,
     650,  633,   58,   58, 0x09,
     702,  689,   58,   58, 0x09,
     747,   58,   58,   58, 0x09,
     771,   58,   58,   58, 0x09,
     790,   58,   58,   58, 0x09,
     811,   58,   58,   58, 0x09,
     864,  833,   58,   58, 0x09,
     913,   58,   58,   58, 0x09,
     943,   58,   58,   58, 0x09,
     974,   58,   58,   58, 0x09,
    1016, 1007,   58,   58, 0x09,
    1047,   58,   58,   58, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_moveit_cartesian_plan_plugin__widgets__PathPlanningWidget[] = {
    "moveit_cartesian_plan_plugin::widgets::PathPlanningWidget\0"
    "\0point_pos\0addPoint(tf::Transform)\0"
    "marker_name\0pointDelUI_signal(std::string)\0"
    "position,marker_name\0"
    "pointPosUpdated_signal(tf::Transform,const char*)\0"
    "parseWayPointBtn_signal()\0"
    "saveToFileBtn_press()\0clearAllPoints_signal()\0"
    "plan_time_,cart_step_size_,cart_jump_thresh_,moveit_replan_,avoid_coll"
    "isions_\0"
    "cartesianPathParamsFromUI_signal(double,double,double,bool,bool)\0"
    "moveToHomeFromUI_signal()\0initTreeView()\0"
    "pointDeletedUI()\0pointAddUI()\0"
    "point_pos,count\0insertRow(tf::Transform,int)\0"
    "marker_nr\0removeRow(int)\0point_pos,marker_name\0"
    "pointPosUpdated_slot(tf::Transform,const char*)\0"
    "current,previous\0"
    "selectedPoint(QModelIndex,QModelIndex)\0"
    "index,index2\0treeViewDataChanged(QModelIndex,QModelIndex)\0"
    "parseWayPointBtn_slot()\0savePointsToFile()\0"
    "loadPointsFromFile()\0clearAllPoints_slot()\0"
    "robot_model_frame,end_effector\0"
    "setAddPointUIStartPos(std::string,tf::Transform)\0"
    "cartesianPathStartedHandler()\0"
    "cartesianPathFinishedHandler()\0"
    "sendCartTrajectoryParamsFromUI()\0"
    "fraction\0cartPathCompleted_slot(double)\0"
    "moveToHomeFromUI()\0"
};

void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathPlanningWidget *_t = static_cast<PathPlanningWidget *>(_o);
        switch (_id) {
        case 0: _t->addPoint((*reinterpret_cast< const tf::Transform(*)>(_a[1]))); break;
        case 1: _t->pointDelUI_signal((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->pointPosUpdated_signal((*reinterpret_cast< const tf::Transform(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 3: _t->parseWayPointBtn_signal(); break;
        case 4: _t->saveToFileBtn_press(); break;
        case 5: _t->clearAllPoints_signal(); break;
        case 6: _t->cartesianPathParamsFromUI_signal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 7: _t->moveToHomeFromUI_signal(); break;
        case 8: _t->initTreeView(); break;
        case 9: _t->pointDeletedUI(); break;
        case 10: _t->pointAddUI(); break;
        case 11: _t->insertRow((*reinterpret_cast< const tf::Transform(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 12: _t->removeRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->pointPosUpdated_slot((*reinterpret_cast< const tf::Transform(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 14: _t->selectedPoint((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 15: _t->treeViewDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 16: _t->parseWayPointBtn_slot(); break;
        case 17: _t->savePointsToFile(); break;
        case 18: _t->loadPointsFromFile(); break;
        case 19: _t->clearAllPoints_slot(); break;
        case 20: _t->setAddPointUIStartPos((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const tf::Transform(*)>(_a[2]))); break;
        case 21: _t->cartesianPathStartedHandler(); break;
        case 22: _t->cartesianPathFinishedHandler(); break;
        case 23: _t->sendCartTrajectoryParamsFromUI(); break;
        case 24: _t->cartPathCompleted_slot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->moveToHomeFromUI(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_moveit_cartesian_plan_plugin__widgets__PathPlanningWidget,
      qt_meta_data_moveit_cartesian_plan_plugin__widgets__PathPlanningWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_cartesian_plan_plugin__widgets__PathPlanningWidget))
        return static_cast<void*>(const_cast< PathPlanningWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::addPoint(const tf::Transform _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::pointDelUI_signal(std::string _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::pointPosUpdated_signal(const tf::Transform & _t1, const char * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::parseWayPointBtn_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::saveToFileBtn_press()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::clearAllPoints_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::cartesianPathParamsFromUI_signal(double _t1, double _t2, double _t3, bool _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void moveit_cartesian_plan_plugin::widgets::PathPlanningWidget::moveToHomeFromUI_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
