cmake_minimum_required(VERSION 3.16)

# Thu thập tất cả các file .c trong thư mục src/
file(GLOB GIF_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c")

# Kiểm tra xem có file GIF nào không
list(LENGTH GIF_SOURCES GIF_COUNT)
if(GIF_COUNT EQUAL 0)
    message(WARNING "Không tìm thấy file GIF nào trong ${CMAKE_CURRENT_SOURCE_DIR}/src/")
else()
    message(STATUS "Tìm thấy ${GIF_COUNT} file GIF trong test-gif-component")
endif()

# Đăng ký component với ESP-IDF
idf_component_register(
    SRCS ${GIF_SOURCES}
    INCLUDE_DIRS "include"
    REQUIRES "lvgl"
)

# Định nghĩa version cho component
target_compile_definitions(${COMPONENT_LIB} PRIVATE 
    TEST_GIF_COMPONENT_VERSION="1.0.0"
)
