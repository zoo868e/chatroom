include_directories(${PROJECT_SOURCE_DIR}/include)
set(TARGET Chatroom)
add_executable(${TARGET} ${PROJECT_SOURCE_DIR}/chatroom.cpp connection_common.cpp)
