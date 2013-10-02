#-------------------------------------------------
#
# Project created by QtCreator 2013-05-13T16:43:24
#
#-------------------------------------------------

QT       += core



TARGET = testOpenCV
CONFIG   += console

TEMPLATE = app


SOURCES += main.cpp

INCLUDEPATH += C:/opencv/include

LIBS += -L"C:/opencv/lib" \
                -lopencv_core245d -lopencv_highgui245d \

