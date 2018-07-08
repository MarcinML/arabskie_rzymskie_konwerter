QT += core
QT -= gui

CONFIG += c++11

TARGET = rzymskie-arabskie
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    romanian.cpp \
    romaniantoarabic.cpp

HEADERS += \
    romanian.h \
    romaniantoarabic.h
