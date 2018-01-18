#-------------------------------------------------
#
# Project created by QtCreator 2018-01-12T01:57:06
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = edumana
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    src/edumana.cpp \
    src/login.cpp \
    src/main.cpp \
    src/set.cpp \
    src/student.cpp \
    src/teacher.cpp \
    src/db.cpp

HEADERS += \
    inc/main.h \
    inc/edumana.h \
    inc/login.h \
    inc/set.h \
    inc/student.h \
    inc/teacher.h \
    inc/db.h

FORMS += \
    ui/edumana.ui \
    ui/login.ui \
    ui/set.ui \
    ui/student.ui \
    ui/teacher.ui

DISTFILES +=

RESOURCES += \
    images.qrc
