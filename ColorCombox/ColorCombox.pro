#-------------------------------------------------
#
# Project created by QtCreator 2022-06-30T13:32:59
#
#-------------------------------------------------

#指定插件对应的库和方法
QT += widgets uiplugin

TARGET = ColorCombox
TEMPLATE = lib
CONFIG += plugin
CONFIG += c++14

#设置导出宏
DEFINES += COLORCOMBOX_LIBRARY

TARGET = $$qtLibraryTarget($$TARGET)
INSTALLS += target

#指定输出路径
debug:DESTDIR = $$PWD/../colorComboBox_output/debug/
release:DESTDIR =$$PWD/../colorComboBox_output/release/

#指定安装路径
windows {
    target.path = $$(QTDIR)/../../Tools/QtCreator/bin/plugins/designer
    debug:target_lib.files = $$OUT_PWD/debug/$${TARGET}.lib
    release:target_lib.files = $$OUT_PWD/release/$${TARGET}.lib
    target_lib.path = $$(QTDIR)/../../Tools/QtCreator/bin/plugins/designer
    INSTALLS += target_lib
}

#linux {
#    target.path = $$(QTDIR)/../../Tools/QtCreator/lib/Qt/plugins/designer/
#    CONFIG += link_pkgconfig
#}

#macx {
#    target.path = "$$(QTDIR)/../../Qt Creator.app/Contents/PlugIns/designer/"
#    target_lib.files = $$OUT_PWD/lib$${TARGET}.dylib
#    target_lib.path = "$$(QTDIR)/../../Qt Creator.app/Contents/PlugIns/designer/"
#    INSTALLS += target_lib
#}

SOURCES += \
        colorcombox.cpp \
    colorcomboxplugindesigner.cpp

HEADERS += \
        colorcombox.h \
        colorcombox_global.h \ 
    colorcomboxplugindesigner.h

RESOURCES += \
    image.qrc
