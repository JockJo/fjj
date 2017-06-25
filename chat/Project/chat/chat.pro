#-------------------------------------------------
#
# Project created by QtCreator 2017-06-22T21:02:49
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chat
TEMPLATE = app


SOURCES += main.cpp\
    login.cpp \
    chat.cpp \
    tcp.cpp

HEADERS  += \
    login.h \
    main.h \
    chat.h \
    tcp.h

FORMS    += chat.ui \
    login.ui

RESOURCES += \
    images/myimages.qrc
