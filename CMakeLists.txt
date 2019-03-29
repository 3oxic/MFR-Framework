cmake_minimum_required(VERSION 3.10)
project(AbstractWithSharedObjects)
project(MapFunctions)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractWithSharedObjects main.cpp SharedMemory/PointerList.cpp SharedMemory/Pointer.cpp SharedMemory/SharedMemoryGenerator.cpp SharedMemory/resources/SharedMemoryData.cpp SharedMemory/resources/SharedMemoryData.h SharedLibraries/mapFunctions.cpp Serialize/Serialize.h)
add_library(MapFunctions SHARED SharedLibraries/mapFunctions.cpp)
install (TARGETS MapFunctions DESTINATION SharedLibraries)

