# Auto-generated by IDE. Any changes made by user will be lost!
BASEDIR =  $$quote($$_PRO_FILE_PWD_)

device {
    CONFIG(debug, debug|release) {
        INCLUDEPATH +=  $$quote($$BASEDIR/..//tibb/include) \
                 $$quote(${QNX_TARGET}/../target-override/usr/include) \
                 $$quote(${QNX_TARGET}/usr/include/bb/data) \
                 $$quote(${QNX_TARGET}/usr/include/freetype2)

        DEPENDPATH +=  $$quote($$BASEDIR/..//tibb/include) \
                 $$quote(${QNX_TARGET}/../target-override/usr/include) \
                 $$quote(${QNX_TARGET}/usr/include/bb/data) \
                 $$quote(${QNX_TARGET}/usr/include/freetype2)

        HEADERS +=  $$quote($$BASEDIR/include/tibb.h)
    }

    CONFIG(release, debug|release) {
        INCLUDEPATH +=  $$quote($$BASEDIR/..//tibb/include) \
                 $$quote(${QNX_TARGET}/../target-override/usr/include) \
                 $$quote(${QNX_TARGET}/usr/include/bb/data) \
                 $$quote(${QNX_TARGET}/usr/include/freetype2)

        DEPENDPATH +=  $$quote($$BASEDIR/..//tibb/include) \
                 $$quote(${QNX_TARGET}/../target-override/usr/include) \
                 $$quote(${QNX_TARGET}/usr/include/bb/data) \
                 $$quote(${QNX_TARGET}/usr/include/freetype2)

        HEADERS +=  $$quote($$BASEDIR/include/tibb.h)
    }
}

simulator {
    CONFIG(debug, debug|release) {
        INCLUDEPATH +=  $$quote($$BASEDIR/..//tibb/include) \
                 $$quote("${QNX_TARGET}/usr/include/qt4/") \
                 $$quote(${QNX_TARGET}/../target-override/usr/include) \
                 $$quote("${QNX_TARGET}/usr/include/qt4") \
                 $$quote(${QNX_TARGET}/usr/include/bb/data) \
                 $$quote("${QNX_TARGET}/usr/include/qt4/cpp/c") \
                 $$quote("${QNX_TARGET}/usr/include/qt4/cpp") \
                 $$quote("${QNX_TARGET}/usr/include/qt4/QtCore") \
                 $$quote({QNX_TARGET}/usr/include/bb/data) \
                 $$quote("${QNX_TARGET}/usr/include/qt4/cpp/embedded")

        DEPENDPATH +=  $$quote($$BASEDIR/..//tibb/include) \
                 $$quote("${QNX_TARGET}/usr/include/qt4/") \
                 $$quote(${QNX_TARGET}/../target-override/usr/include) \
                 $$quote("${QNX_TARGET}/usr/include/qt4") \
                 $$quote(${QNX_TARGET}/usr/include/bb/data) \
                 $$quote("${QNX_TARGET}/usr/include/qt4/cpp/c") \
                 $$quote("${QNX_TARGET}/usr/include/qt4/cpp") \
                 $$quote("${QNX_TARGET}/usr/include/qt4/QtCore") \
                 $$quote({QNX_TARGET}/usr/include/bb/data) \
                 $$quote("${QNX_TARGET}/usr/include/qt4/cpp/embedded")

        HEADERS +=  $$quote($$BASEDIR/include/tibb.h)
    }
}

INCLUDEPATH +=  $$quote($$BASEDIR/include)

lupdate_inclusion {
    SOURCES +=  $$quote($$BASEDIR/../include/*.c) \
             $$quote($$BASEDIR/../include/*.c++) \
             $$quote($$BASEDIR/../include/*.cc) \
             $$quote($$BASEDIR/../include/*.cpp) \
             $$quote($$BASEDIR/../include/*.cxx) \
             $$quote($$BASEDIR/../assets/*.qml) \
             $$quote($$BASEDIR/../assets/*.js) \
             $$quote($$BASEDIR/../assets/*.qs)

    HEADERS +=  $$quote($$BASEDIR/../include/*.h) \
             $$quote($$BASEDIR/../include/*.h++) \
             $$quote($$BASEDIR/../include/*.hh) \
             $$quote($$BASEDIR/../include/*.hpp) \
             $$quote($$BASEDIR/../include/*.hxx)
}

TRANSLATIONS =  $$quote($${TARGET}.ts)
