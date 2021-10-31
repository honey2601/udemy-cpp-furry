cmake_minimum_required(VERSION 3.0.0)
project(advanced-cpp)

add_compile_options(-Wall -Wextra -pedantic -Wconversion -Werror)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/sec*.cpp)
foreach(SOURCE_FILE_PATH ${SRC_FILES})
    get_filename_component(SOURCE_FILENAME ${SOURCE_FILE_PATH} NAME)
    string(REGEX REPLACE "\\.[^.]*$" "" SOURCE_FILENAME_WITHOUT_EXT ${SOURCE_FILENAME})
    add_executable("${SOURCE_FILENAME_WITHOUT_EXT}" "${SOURCE_FILENAME}")
endforeach(SOURCE_FILE_PATH in SRC_FILES)
