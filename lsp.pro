QT       += core
QT       -= gui

TARGET = lsp_example
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    wezel.cpp \
    wezelurzadzenia.cpp \
    wezelpomiaru.cpp \
    wezelkarty.cpp \
    widok.cpp

HEADERS += \
    wezel.h \
    wezelurzadzenia.h \
    wezelpomiaru.h \
    wezelkarty.h \
    widok.h
