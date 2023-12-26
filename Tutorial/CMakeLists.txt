# create io_port library
add_library(sample sample.cc "stopwatch.h")
target_include_directories(sample INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(
	sample
	PUBLIC
)


# create io_port test executable
add_executable(
  sample_test sample_test.cc)

target_link_libraries(
  sample_test
  sample
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(sample_test)
