cmake_minimum_required(VERSION 3.10)

project(Chatroom VERSION 0.1)

configure_file(ChatroomConfig.h.in chatroomConfig.h)

include_directories(include)

add_subdirectory(src)

# target_link_libraries(Chatroom PUBLIC ${EXTRA_LIBS})
target_link_libraries(Chatroom PUBLIC)

# target_include_directories(Chatroom PUBLIC "${PROJECT_BINARY_DIR}" "${EXTRA_LIBS}")
target_include_directories(Chatroom PUBLIC "${PROJECT_BINARY_DIR}")

