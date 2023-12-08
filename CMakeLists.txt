cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(yugen VERSION 1.0)

# set compiler options using an interface 
add_library(compiler_flags INTERFACE)
target_compile_features(compiler_flags INTERFACE cxx_std_17)

# add subdirectories
add_subdirectory(project01)



# cmake module used to fetch content from remote repositories
include(FetchContent)

# fetch googletest to write test cases
FetchContent_Declare(
  googletest
  # update the hash to point to latest commits regularly
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# fetch abseil library
FetchContent_Declare(
  absl
  # update the hash to point to latest commits regularly
  URL https://github.com/abseil/abseil-cpp/archive/6c8338c252116e429307361ff4fdc1fd0532902d.zip
)
FetchContent_MakeAvailable(absl)



