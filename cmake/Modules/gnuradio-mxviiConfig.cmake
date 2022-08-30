find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_MXVII gnuradio-mxvii)

FIND_PATH(
    GR_MXVII_INCLUDE_DIRS
    NAMES gnuradio/mxvii/api.h
    HINTS $ENV{MXVII_DIR}/include
        ${PC_MXVII_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_MXVII_LIBRARIES
    NAMES gnuradio-mxvii
    HINTS $ENV{MXVII_DIR}/lib
        ${PC_MXVII_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-mxviiTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_MXVII DEFAULT_MSG GR_MXVII_LIBRARIES GR_MXVII_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_MXVII_LIBRARIES GR_MXVII_INCLUDE_DIRS)
