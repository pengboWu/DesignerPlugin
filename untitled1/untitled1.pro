#-------------------------------------------------
#
# Project created by QtCreator 2022-06-30T17:24:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled1
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

#添加包含目录
INCLUDEPATH += ../ColorCombox

#添加对应的动态库
win32 {
    debug:LIBS += -L$$PWD/../colorComboBox_output/debug/ -lColorComboxd
    release:LIBS += -L$$PWD/../colorComboBox_output/release/ -lColorCombox
}

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui
