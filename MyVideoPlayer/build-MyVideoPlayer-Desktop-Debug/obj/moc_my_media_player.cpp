/****************************************************************************
** Meta object code from reading C++ file 'my_media_player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../opencv_qml/src/app/my_media_player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'my_media_player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyMediaPlayer_t {
    QByteArrayData data[13];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyMediaPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyMediaPlayer_t qt_meta_stringdata_MyMediaPlayer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MyMediaPlayer"
QT_MOC_LITERAL(1, 14, 14), // "surfaceChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "QAbstractVideoSurface*"
QT_MOC_LITERAL(4, 53, 7), // "surface"
QT_MOC_LITERAL(5, 61, 15), // "setVideoSurface"
QT_MOC_LITERAL(6, 77, 17), // "onVideoFrameReady"
QT_MOC_LITERAL(7, 95, 7), // "cv::Mat"
QT_MOC_LITERAL(8, 103, 10), // "curr_frame"
QT_MOC_LITERAL(9, 114, 4), // "play"
QT_MOC_LITERAL(10, 119, 5), // "pause"
QT_MOC_LITERAL(11, 125, 4), // "stop"
QT_MOC_LITERAL(12, 130, 12) // "videoSurface"

    },
    "MyMediaPlayer\0surfaceChanged\0\0"
    "QAbstractVideoSurface*\0surface\0"
    "setVideoSurface\0onVideoFrameReady\0"
    "cv::Mat\0curr_frame\0play\0pause\0stop\0"
    "videoSurface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyMediaPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   53,    2, 0x02 /* Public */,
      10,    0,   54,    2, 0x02 /* Public */,
      11,    0,   55,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MyMediaPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyMediaPlayer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->surfaceChanged((*reinterpret_cast< QAbstractVideoSurface*(*)>(_a[1]))); break;
        case 1: _t->setVideoSurface((*reinterpret_cast< QAbstractVideoSurface*(*)>(_a[1]))); break;
        case 2: _t->onVideoFrameReady((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 3: _t->play(); break;
        case 4: _t->pause(); break;
        case 5: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractVideoSurface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractVideoSurface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyMediaPlayer::*)(QAbstractVideoSurface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyMediaPlayer::surfaceChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractVideoSurface* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MyMediaPlayer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractVideoSurface**>(_v) = _t->videoSurface(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MyMediaPlayer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVideoSurface(*reinterpret_cast< QAbstractVideoSurface**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MyMediaPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyMediaPlayer.data,
    qt_meta_data_MyMediaPlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyMediaPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyMediaPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyMediaPlayer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyMediaPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyMediaPlayer::surfaceChanged(QAbstractVideoSurface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
