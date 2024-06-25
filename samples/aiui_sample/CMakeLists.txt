cmake_minimum_required(VERSION 3.6)
set(CMAKE_USE_RELATIVE_PATHS ON)
project(aiui_sample)

set(ROOT_PATH ${CMAKE_CURRENT_LIST_DIR}/../..)

# 必须指定编译平台
if (NOT DEFINED PLATFORM)
    MESSAGE(FATAL_ERROR "PLATFORM can be x64 or x86")
endif (NOT DEFINED PLATFORM)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Default build type: Release" FORCE)
endif ()

SET(COMMON_FLAG "/W0 /nologo /utf-8 /Gm- /errorReport:prompt /WX- /Zc:wchar_t /Zc:inline /Zc:forScope /GR /Gd /Oy- /MT /EHsc /MP /std:c++latest")

SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_FLAG}")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMMON_FLAG}")
SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /LTCG")

include_directories(${ROOT_PATH}/include)
include_directories(${ROOT_PATH}/samples/aiui_sample/src/jsoncpp)
include_directories(${ROOT_PATH}/samples/aiui_sample/src/jutils)

file(GLOB_RECURSE SOURCE_FILE
        "${ROOT_PATH}/samples/aiui_sample/src/*.cpp"
        "${ROOT_PATH}/samples/aiui_sample/src/*.c")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DAIUI_WINDOWS")

macro(source_group_by_dir abs_cur_dir source_files)
    if (MSVC)
        set(sgbd_cur_dir ${${abs_cur_dir}})
        foreach (sgbd_file ${${source_files}})
            string(REGEX REPLACE ${sgbd_cur_dir}/\(.*\) \\1 sgbd_fpath ${sgbd_file})
            string(REGEX REPLACE "\(.*\)/.*" \\1 sgbd_group_name ${sgbd_fpath})
            string(COMPARE EQUAL ${sgbd_fpath} ${sgbd_group_name} sgbd_nogroup)
            string(REPLACE "/" "\\" sgbd_group_name ${sgbd_group_name})
            if (sgbd_nogroup)
                set(sgbd_group_name "\\")
            endif (sgbd_nogroup)
            source_group(${sgbd_group_name} FILES ${sgbd_file})
        endforeach (sgbd_file)
    endif (MSVC)
endmacro(source_group_by_dir)

add_executable(${PROJECT_NAME} ${SOURCE_FILE})

source_group_by_dir(CMAKE_CURRENT_LIST_DIR PROJECT_SRC)

target_link_directories(${PROJECT_NAME} PRIVATE ${ROOT_PATH}/libs/${PLATFORM})
target_link_libraries(${PROJECT_NAME} aiui)

SET(EXECUTABLE_OUTPUT_PATH ${ROOT_PATH}/bin_${PLATFORM})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_OUTPUT_PATH})

set_target_properties(${PROJECT_NAME} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${EXECUTABLE_OUTPUT_PATH}")
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${EXECUTABLE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/${PROJECT_NAME}.exe
        ${EXECUTABLE_OUTPUT_PATH})

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_CURRENT_LIST_DIR}/../AIUI
        ${EXECUTABLE_OUTPUT_PATH}/AIUI)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${ROOT_PATH}/libs/${PLATFORM}
        ${EXECUTABLE_OUTPUT_PATH})