cmake_minimum_required(VERSION 3.0.0)
project(Taller1 VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories("src")
add_executable(Taller1 src/logic/Node.cpp src/logic/Persona.cpp src/main.cpp)
target_link_libraries(Taller1 ${OpenCV_LIBS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
