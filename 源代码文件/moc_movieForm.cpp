/****************************************************************************
** Meta object code from reading C++ file 'movieForm.h'
**
** Created: Fri Nov 29 20:41:49 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "movieForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'movieForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mplayer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      30,    8,    8,    8, 0x08,
      50,    8,    8,    8, 0x08,
      70,    8,    8,    8, 0x08,
      90,    8,    8,    8, 0x08,
     111,    8,    8,    8, 0x08,
     132,    8,    8,    8, 0x08,
     153,    8,    8,    8, 0x08,
     180,  175,    8,    8, 0x08,
     230,  224,    8,    8, 0x08,
     264,  262,    8,    8, 0x08,
     297,    8,    8,    8, 0x08,
     311,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mplayer[] = {
    "mplayer\0\0on_nextBtn_clicked()\0"
    "on_preBtn_clicked()\0on_addBtn_clicked()\0"
    "on_delBtn_clicked()\0on_playBtn_clicked()\0"
    "on_stopBtn_clicked()\0on_timeBtn_clicked()\0"
    "on_speedBtn_clicked()\0item\0"
    "on_list_itemDoubleClicked(QListWidgetItem*)\0"
    "value\0on_currentlBar_sliderMoved(int)\0"
    "v\0on_volumeSlider_sliderMoved(int)\0"
    "dataRecieve()\0sureBtnClicked()\0"
};

const QMetaObject mplayer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mplayer,
      qt_meta_data_mplayer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mplayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mplayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mplayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mplayer))
        return static_cast<void*>(const_cast< mplayer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mplayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_nextBtn_clicked(); break;
        case 1: on_preBtn_clicked(); break;
        case 2: on_addBtn_clicked(); break;
        case 3: on_delBtn_clicked(); break;
        case 4: on_playBtn_clicked(); break;
        case 5: on_stopBtn_clicked(); break;
        case 6: on_timeBtn_clicked(); break;
        case 7: on_speedBtn_clicked(); break;
        case 8: on_list_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: on_currentlBar_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: on_volumeSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: dataRecieve(); break;
        case 12: sureBtnClicked(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
