QT       += core gui
QT       += webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WebBrowser
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS += mainwindow.h

FORMS += mainwindow.ui 