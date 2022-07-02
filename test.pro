QT += qml quick
QT += dbus


HEADERS += \
    SystemDataItem.h \
    datatext.h
SOURCES += \
           datatext.cpp \
           main.cpp

RESOURCES += test.qrc

DESTPATH = $$[QT_INSTALL_EXAMPLES]/qml/tutorials/extending-qml/chapter1-basics
target.path = $$DESTPATH

qml.files = *.qml
qml.path = $$DESTPATH

INSTALLS += target qml
