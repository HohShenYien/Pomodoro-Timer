/****************************************************************************
** Meta object code from reading C++ file 'timer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "timer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Timer_t {
    QByteArrayData data[18];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Timer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Timer_t qt_meta_stringdata_Timer = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Timer"
QT_MOC_LITERAL(1, 6, 26), // "on_continueOrPause_pressed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 27), // "on_continueOrPause_released"
QT_MOC_LITERAL(4, 62, 18), // "on_nextBtn_pressed"
QT_MOC_LITERAL(5, 81, 19), // "on_nextBtn_released"
QT_MOC_LITERAL(6, 101, 17), // "on_endBtn_pressed"
QT_MOC_LITERAL(7, 119, 18), // "on_endBtn_released"
QT_MOC_LITERAL(8, 138, 19), // "on_startBtn_pressed"
QT_MOC_LITERAL(9, 158, 20), // "on_startBtn_released"
QT_MOC_LITERAL(10, 179, 19), // "on_startBtn_clicked"
QT_MOC_LITERAL(11, 199, 12), // "changeStatus"
QT_MOC_LITERAL(12, 212, 10), // "new_status"
QT_MOC_LITERAL(13, 223, 26), // "on_continueOrPause_clicked"
QT_MOC_LITERAL(14, 250, 18), // "on_nextBtn_clicked"
QT_MOC_LITERAL(15, 269, 17), // "on_endBtn_clicked"
QT_MOC_LITERAL(16, 287, 10), // "play_sound"
QT_MOC_LITERAL(17, 298, 5) // "track"

    },
    "Timer\0on_continueOrPause_pressed\0\0"
    "on_continueOrPause_released\0"
    "on_nextBtn_pressed\0on_nextBtn_released\0"
    "on_endBtn_pressed\0on_endBtn_released\0"
    "on_startBtn_pressed\0on_startBtn_released\0"
    "on_startBtn_clicked\0changeStatus\0"
    "new_status\0on_continueOrPause_clicked\0"
    "on_nextBtn_clicked\0on_endBtn_clicked\0"
    "play_sound\0track"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Timer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void Timer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Timer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_continueOrPause_pressed(); break;
        case 1: _t->on_continueOrPause_released(); break;
        case 2: _t->on_nextBtn_pressed(); break;
        case 3: _t->on_nextBtn_released(); break;
        case 4: _t->on_endBtn_pressed(); break;
        case 5: _t->on_endBtn_released(); break;
        case 6: _t->on_startBtn_pressed(); break;
        case 7: _t->on_startBtn_released(); break;
        case 8: _t->on_startBtn_clicked(); break;
        case 9: _t->changeStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_continueOrPause_clicked(); break;
        case 11: _t->on_nextBtn_clicked(); break;
        case 12: _t->on_endBtn_clicked(); break;
        case 13: _t->play_sound((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Timer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Timer.data,
    qt_meta_data_Timer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Timer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Timer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Timer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Timer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
