
TEMPLATE = app
TARGET = select
INCLUDEPATH += .
QT += sql
CONFIG += console debug
CONFIG -= moc
CONFIG += c++11
# QMAKE_CXXFLAGS += -std=c++11

# Input
SOURCES += select.cpp
