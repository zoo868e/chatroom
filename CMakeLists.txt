cmake_minimum_required(VERSION 3.10)

project(Chatroom VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(ChatroomConfig.h.in chatroomConfig.h)

include_directories(include)

# add_subdirectory(src)

set(TARGET Chatroom)
add_executable(${TARGET} ${PROJECT_SOURCE_DIR}/chatroom.cpp ${PROJECT_SOURCE_DIR}/src/connection_common.cpp)

set(TARGET Client)
add_executable(${TARGET} ${PROJECT_SOURCE_DIR}/client.cpp ${PROJECT_SOURCE_DIR}/src/connection_common.cpp)

# target_link_libraries(Chatroom PUBLIC ${EXTRA_LIBS})
target_link_libraries(Chatroom PUBLIC)

# target_include_directories(Chatroom PUBLIC "${PROJECT_BINARY_DIR}" "${EXTRA_LIBS}")
target_include_directories(Chatroom PUBLIC "${PROJECT_BINARY_DIR}")

