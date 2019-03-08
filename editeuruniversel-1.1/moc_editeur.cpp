/****************************************************************************
** Meta object code from reading C++ file 'editeur.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editeur.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editeur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Editeur_t {
    QByteArrayData data[10];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Editeur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Editeur_t qt_meta_stringdata_Editeur = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Editeur"
QT_MOC_LITERAL(1, 8, 5), // "creer"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 6), // "ouvrir"
QT_MOC_LITERAL(4, 22, 11), // "sauvegarder"
QT_MOC_LITERAL(5, 34, 15), // "sauvegarderSous"
QT_MOC_LITERAL(6, 50, 5), // "about"
QT_MOC_LITERAL(7, 56, 19), // "documentWasModified"
QT_MOC_LITERAL(8, 76, 10), // "commitData"
QT_MOC_LITERAL(9, 87, 16) // "QSessionManager&"

    },
    "Editeur\0creer\0\0ouvrir\0sauvegarder\0"
    "sauvegarderSous\0about\0documentWasModified\0"
    "commitData\0QSessionManager&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Editeur[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void Editeur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Editeur *_t = static_cast<Editeur *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->creer(); break;
        case 1: _t->ouvrir(); break;
        case 2: { bool _r = _t->sauvegarder();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->sauvegarderSous();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->about(); break;
        case 5: _t->documentWasModified(); break;
        case 6: _t->commitData((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Editeur::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Editeur.data,
      qt_meta_data_Editeur,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Editeur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Editeur::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Editeur.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Editeur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
