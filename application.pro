QT += widgets
requires(qtConfig(filedialog))

HEADERS       = editeur.h
SOURCES       = main.cpp \
    editeur.cpp
#! [0]
RESOURCES     = application.qrc
#! [0]

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/mainwindows/application
INSTALLS += target
