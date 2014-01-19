CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(src)

#----------------------------------------------------------------                                          
find_package( Qt4 COMPONENTS QtCore QtDBus QtTest QtXml QtXmlPatterns QtNetwork REQUIRED)

set(QT_DONT_USE_QTGUI true)
set(QT_USE_QTDBUS true)

INCLUDE_DIRECTORIES(
    ../inc
	${CMAKE_SOURCE_DIR}/si/inc
	${CMAKE_SOURCE_DIR}/hmi/hmiBase/inc
    /usr/local/include
)

LINK_DIRECTORIES(
  /usr/local/lib
  )

LINK_LIBRARIES(
  )

#----------------------------------------------------------------                                          
SET(OUTPUTNAME "hmiDiag")


SET(SRC_FILES
	main.cpp
	HmiDiag.cpp
	# TODO : generate below cpp files automatically
	LocationServiceSvcInterface.cpp
	LocationServiceProxy.cpp
)

SET(HDR_FILES
	../inc/HmiDiag.h
	# TODO : generate below h files automatically
	../inc/LocationServiceSvcInterface.h
	../inc/LocationServiceSIImpl.h
	../inc/LocationServiceProxy.h
	${CMAKE_SOURCE_DIR}/hmi/hmiBase/inc/BaseHMI.h
	${CMAKE_SOURCE_DIR}/hmi/hmiBase/inc/BaseHMIListener.h
	${CMAKE_SOURCE_DIR}/si/inc/SIProtocolAdaptor.h
	${CMAKE_SOURCE_DIR}/si/inc/SIProtocolProxy.h
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

