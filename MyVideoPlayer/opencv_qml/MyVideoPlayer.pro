QT += qml quick multimedia
CONFIG += c++11 

DEFINES += QT_DEPRECATED_WARNINGS


UI_DIR += obj
RCC_DIR += obj
MOC_DIR += obj
OBJECTS_DIR += obj

SOURCES += \
    src/main.cpp \
    src/threads/opencv_thread.cpp \
    src/app/my_media_player.cpp \

HEADERS += \
    src/threads/opencv_thread.h \
    src/app/my_media_player.h \

RESOURCES += src/resources/qml.qrc \
    src/resources/qml.qrc

QML_IMPORT_PATH = /home/lee/Desktop/jayaraj/MyVideoPlayer

QML_DESIGNER_IMPORT_PATH =

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_videoio

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_video

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_ts

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../opencv/build/lib/libopencv_ts.a

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_stitching

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_photo

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_objdetect

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_ml

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_imgproc

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_imgcodecs

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_gapi

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_flann

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_features2d

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_dnn

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_core

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_calib3d

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include

unix:!macx: LIBS += -L$$PWD/../../../opencv/build/lib/ -lopencv_highgui

INCLUDEPATH += $$PWD/../../../opencv/build/include
DEPENDPATH += $$PWD/../../../opencv/build/include
