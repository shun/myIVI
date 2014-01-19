CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(src)

#----------------------------------------------------------------                                          
find_package( Qt4 COMPONENTS QtCore QtDBus QtTest QtXml QtXmlPatterns QtNetwork REQUIRED)

set(QT_DONT_USE_QTGUI true)
set(QT_USE_QTDBUS true)

INCLUDE_DIRECTORIES(
    ../inc
	${CMAKE_SOURCE_DIR}/si/inc
    /usr/local/include
)

LINK_DIRECTORIES(
  /usr/local/lib
  )

LINK_LIBRARIES(
  )

#----------------------------------------------------------------                                          
SET(OUTPUTNAME "LocationService")


SET(SRC_FILES
	main.cpp
	LocationService.cpp
)

SET(HDR_FILES
	../inc/LocationService.h
	../inc/LocationServiceListener.h
	${CMAKE_SOURCE_DIR}/si/inc/SIProtocolAdaptor.h
)

include(${QT_USE_FILE})
QT4_WRAP_CPP( MOC_SRC_FILES ${HDR_FILES})

ADD_EXECUTABLE(
  ${OUTPUTNAME}
  ${SRC_FILES}
  ${MOC_SRC_FILES}
  )

target_link_libraries(
    ${OUTPUTNAME}
    ${QT_LIBRARIES}
)

#----------------------------------------------------------------                                          

#----------------------------------------------------------------                                          
INSTALL(

    FILES
        ${PROJECT_BINARY_DIR}/${OUTPUTNAME}
    DESTINATION
        ${CMAKE_SOURCE_DIR}/bin
    PERMISSIONS
        OWNER_READ
        OWNER_EXECUTE
        GROUP_READ
        GROUP_EXECUTE
        WORLD_READ
        WORLD_EXECUTE
        )

