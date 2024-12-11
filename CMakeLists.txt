cmake_minimum_required(VERSION 3.24)
project(ML_DSA_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Google Benchmark
set(BENCHMARK_ENABLE_TESTING OFF)
add_subdirectory(benchmark)

# Add your executable, using main.cpp
add_executable(benchmark_test main.cpp)
target_link_libraries(benchmark_test PRIVATE benchmark::benchmark)