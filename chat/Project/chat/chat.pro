#-------------------------------------------------
#
# Project created by QtCreator 2017-06-22T21:02:49
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chat
TEMPLATE = app


SOURCES += main.cpp\
    login.cpp \
    chat.cpp \
    tcp.cpp \
    udp.cpp \
    set.cpp

HEADERS  += \
    login.h \
    main.h \
    chat.h \
    tcp.h \
    udp.h \
    set.h

FORMS    += chat.ui \
    login.ui \
    set.ui

RESOURCES += \
    images/myimages.qrc
