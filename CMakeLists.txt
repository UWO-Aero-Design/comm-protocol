cmake_minimum_required(VERSION 3.5.0)

project( Message )

include_directories( ${Message_SOURCE_DIR}/include )

file( GLOB SOURCES "${Message_SOURCE_DIR}/src/*.cpp" )

add_executable(main examples/main.cpp ${SOURCES})
add_executable(serial examples/serial_test.cpp ${SOURCES})