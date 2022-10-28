cmake_minimum_required(VERSION 3.2)

project (lab2s3)

add_subdirectory(
"${CMAKE_CURRENT_SOURCE_DIR}/googletest"
"googletest"

)


add_executable(
    prog2main
    "${PROJECT_SOURCE_DIR}/prog2main.cpp"
  
)

add_executable(
    test_snail
    "${PROJECT_SOURCE_DIR}/test_snail.cpp"
)

target_include_directories(
test_snail PRIVATE
"${CMAKE_CURRENT_SOURCE_DIR}/lab2s3"

)

target_link_libraries(
test_snail PRIVATE
gtest gtest_main
)



if(MSVC)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    target_compile_options(
        prog2main PRIVATE
        /W4
    )
    target_compile_options(
        test_snail PRIVATE
        /W4
    )
else ()
    target_compile_options(
        prog2main PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
    target_compile_options(
        test_snail PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()

