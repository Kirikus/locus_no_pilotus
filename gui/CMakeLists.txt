cmake_minimum_required(VERSION 3.20)

project(gui VERSION 0.1 LANGUAGES CXX)

file(GLOB PROJECT_SOURCES "*.h" "*.cpp")

add_library(gui STATIC ${PROJECT_SOURCES})

target_link_libraries(gui PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(gui PRIVATE QCUSTOMPLOT_USE_LIBRARY)
target_link_libraries(gui PUBLIC qcustomplot)
