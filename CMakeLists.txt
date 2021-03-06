cmake_minimum_required(VERSION 2.8)

if(POLICY CMP0042)
   CMAKE_POLICY(SET CMP0042 NEW)
endif()
if(POLICY CMP0020)
   CMAKE_POLICY(SET CMP0020 NEW)
endif()
if(POLICY CMP0028)
   CMAKE_POLICY(SET CMP0028 NEW)
endif()
if(POLICY CMP0037)
   CMAKE_POLICY(SET CMP0037 NEW)
endif()
if(POLICY CMP0047)
   CMAKE_POLICY(SET CMP0047 NEW)
endif()

if(APPLE)
   set(CMAKE_CXX_FLAGS -std=c++11)
endif()

#############################################################
###		ENVIRONMENT         			  ###
#############################################################
include(environment.cmake)
#############################################################
###		GENERAL MACROS                            ###
#############################################################

include(${CMAKE_SOURCE_DIR}/cmake/general/BuildTarget.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/general/BuildTargetUtilities.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/general/EndingsToCollect.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/general/FileUtilities.cmake)


#############################################################
###		GENERAL SETTINGS                          ###
#############################################################

project(MoneyExampleTDD)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(BUILD_SHARED_LIBS ON CACHE BOOL "Build shared libraries")
sharedLibs()


#############################################################
###		SUBDIRECTORIES                            ###
#############################################################
add_subdirectory(applications/multiCurrencyMoney)
add_subdirectory(applications/multiCurrencyMoney.Test)
add_subdirectory(applications/multiCurrencyMoney.Main)

