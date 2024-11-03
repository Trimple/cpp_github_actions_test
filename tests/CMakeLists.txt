add_executable(template_tests template_tests.cpp)
target_include_directories(template_tests PUBLIC "./")
target_link_libraries(template_tests PRIVATE gtest_main)

include(GoogleTest)

gtest_add_tests(TARGET      template_tests
                TEST_SUFFIX .noArgs
                TEST_LIST   noArgsTests
)

set_tests_properties(${noArgsTests}   PROPERTIES TIMEOUT 10)