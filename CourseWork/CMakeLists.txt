cmake_minimum_required(VERSION 3.5)

project(CourseWork LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

get_property(QT_CORE_INCLUDE_DIRS TARGET Qt5::Widgets PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
list(GET QT_CORE_INCLUDE_DIRS 0 QT_CORE_MAIN_INCLUDE_DIR)
get_filename_component(QT_MAIN_DIR ${QT_CORE_MAIN_INCLUDE_DIR}/.. ABSOLUTE)

add_executable(CourseWork
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    choosingstory.cpp
    choosingstory.h
    choosingstory.ui
    traum.cpp
    traum.h
    traum.ui
    traum_follow.cpp
    traum_follow.ui
    traum_follow.h
    traum_end.h
    traum_end.ui
    traum_end.cpp
    cpm.cpp
    cpm.ui
    cpm.h
    cpm_end.cpp
    cpm_end.ui
    cpm_end.h
    cpm_follow.cpp
    cpm_follow.ui
    cpm_follow.h
)


target_link_libraries(CourseWork PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

install(TARGETS CourseWork
  EXPORT CourseWork
  DESTINATION ${CMAKE_INSTALL_PREFIX} 
  CONFIGURATIONS Release
)

install(FILES 
    $<TARGET_FILE:Qt5::Widgets> 
    $<TARGET_FILE:Qt5::Core> 
    $<TARGET_FILE:Qt5::Gui>
  DESTINATION ${CMAKE_INSTALL_PREFIX}
)


install(DIRECTORY ${QT_MAIN_DIR}/Plugins/platforms/ 
  DESTINATION ${CMAKE_INSTALL_PREFIX}/platforms
)

install(DIRECTORY ${QT_MAIN_DIR}/Plugins/imageformats/ 
  DESTINATION ${CMAKE_INSTALL_PREFIX}/imageformats
)

install(DIRECTORY ${QT_MAIN_DIR}/Plugins/styles/ 
  DESTINATION ${CMAKE_INSTALL_PREFIX}/styles
)

install(DIRECTORY ${QT_MAIN_DIR}/Plugins/iconengines/ 
  DESTINATION ${CMAKE_INSTALL_PREFIX}/iconengines
)