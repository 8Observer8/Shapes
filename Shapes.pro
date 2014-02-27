#-------------------------------------------------
#
# Project created by QtCreator 2014-02-19T12:29:20
#
#-------------------------------------------------

QT       += core opengl widgets

QMAKE_CXXFLAGS += -std=c++11

TARGET = Shapes
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    viewer.cpp \
    circle.cpp

HEADERS += \
    circle.h \
    rectangle.h \
    shape.h \
    viewer.h \
    triangle.h
