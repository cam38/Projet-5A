QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    action.cpp \
    capteur.cpp \
    main.cpp \
    mainwindow.cpp \
    noeud.cpp \
    parametragenoeud.cpp \
    parametrageprojet.cpp \
    popupnbnoeudsmax.cpp \
    popupnbthreadsmax.cpp \
    projet.cpp \
    thread.cpp

HEADERS += \
    action.h \
    capteur.h \
    mainwindow.h \
    noeud.h \
    parametragenoeud.h \
    parametrageprojet.h \
    popupnbnoeudsmax.h \
    popupnbthreadsmax.h \
    projet.h \
    thread.h

FORMS += \
    mainwindow.ui \
    parametragenoeud.ui \
    parametrageprojet.ui \
    popupnbnoeudsmax.ui \
    popupnbthreadsmax.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
