cmake_minimum_required(VERSION 3.9)
INCLUDE(FindProtobuf)
find_package (Protobuf REQUIRED)
include_directories(${PROTOBUG_INCLUDE_DIR})

#set(PD /)
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS ContactBook.proto)
add_library(foo ${PROTO_SRCS} ${PROTO_HDRS})

target_link_libraries(foo ${PROTOBUF_LIBRARIES} pthread)