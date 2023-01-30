/****************************************************************************
** Meta object code from reading C++ file 'opencv_thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../opencv_qml/src/threads/opencv_thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opencv_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenCVThread_t {
    QByteArrayData data[9];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenCVThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenCVThread_t qt_meta_stringdata_OpenCVThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OpenCVThread"
QT_MOC_LITERAL(1, 13, 10), // "frameReady"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 33, 5), // "frame"
QT_MOC_LITERAL(5, 39, 8), // "finished"
QT_MOC_LITERAL(6, 48, 11), // "thread_name"
QT_MOC_LITERAL(7, 60, 5), // "start"
QT_MOC_LITERAL(8, 66, 4) // "stop"

    },
    "OpenCVThread\0frameReady\0\0cv::Mat\0frame\0"
    "finished\0thread_name\0start\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenCVThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   40,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OpenCVThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenCVThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->frameReady((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->finished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpenCVThread::*)(cv::Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenCVThread::frameReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpenCVThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenCVThread::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenCVThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenCVThread.data,
    qt_meta_data_OpenCVThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenCVThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenCVThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenCVThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenCVThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OpenCVThread::frameReady(cv::Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenCVThread::finished(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
