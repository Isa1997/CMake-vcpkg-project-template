project(tests)

set(PROJECT_NAME tests.out)

find_package(Catch2 3 REQUIRED)

add_executable (tests.out "tests.cpp" "second_tests.cpp")

target_include_directories(${PROJECT_NAME} PUBLIC
"${CMAKE_HOME_DIRECTORY}/"
)

add_dependencies(${PROJECT_NAME} app.out)

target_link_libraries(tests.out PRIVATE Catch2::Catch2WithMain)