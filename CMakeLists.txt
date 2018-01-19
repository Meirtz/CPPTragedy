cmake_minimum_required(VERSION 3.9)
project(Contacts)

set(CMAKE_CXX_STANDARD 11)
find_package(Curses REQUIRED)
include_directories(${CURSES_LIBRARIES})

add_executable(Contacts main.cpp Contacts.h Contacts.cpp ContactBook.cpp ContactBook.h ContactException.cpp ContactException.h Interface.cpp Interface.h)
target_link_libraries(Contacts ${CURSES_LIBRARIES})