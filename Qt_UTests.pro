#-------------------------------------------------
#
# Project created by QtCreator 2019-06-08T16:58:55
#
#-------------------------------------------------

QT += widgets qml quick network opengl sql script scripttools svg xml xmlpatterns multimedia testlib dbus

greaterThan(QT_MAJOR_VERSION, 4): QT += printsupport

TARGET = tst_test_glcmbuilder
CONFIG   += console
CONFIG   -= app_bundle

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

PKGCONFIG += opencv

INCLUDEPATH += -I/usr/local/include/opencv
LIBS += $(shell pkg-config opencv --libs)

INCLUDEPATH += ../Qt_disease_detector

SOURCES += \
        tst_test_glcmbuilder.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"
