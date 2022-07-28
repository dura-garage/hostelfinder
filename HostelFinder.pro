QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DbManager.cpp \
    Sources/models/hostel.cpp \
    mainwindow.cpp\
    models/Hostel\
    models/HostelOwner \
    models/hostel.cpp \
    models/hostelowner.cpp \
    repositories/hostelownerrepository.cpp \
    repositories/hostelrepository.cpp \
    service/hostelownerservice.cpp \
    services/hostelownerservice.cpp \
    services/hostelservice.cpp

HEADERS += \
    DbManager.h \
    Sources/models/hostel.h \
    mainwindow.h \
    models/Hostel\
    models/HostelOwner \
    models/hostel.h \
    models/hostelowner.h \
    repositories/hostelownerrepository.h \
    repositories/hostelrepository.h \
    service/hostelownerservice.h \
    services/hostelownerservice.h \
    services/hostelservice.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    .gitignore
