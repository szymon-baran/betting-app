QT       += core gui
QT       += sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DbConnector/DbConnector.cpp \
    Score/score.cpp \
    Team/team.cpp \
    UserProfile/userbet.cpp \
    Bet/bet.cpp \
    InitialScreen/initialscreen.cpp \
    main.cpp \
    MainWindow/mainwindow.cpp \
    User/user.cpp

HEADERS += \
    DbConnector/DbConnector.h \
    InitialScreen/initialscreen.h \
    Score/score.h \
    Team/team.h \
    UserProfile/userbet.h \
    Bet/bet.h \
    MainWindow/mainwindow.h \
    Score/score.h \
    User/user.h

FORMS += \
    InitialScreen/initialscreen.ui \
    MainWindow/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
