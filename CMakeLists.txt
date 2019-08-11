cmake_minimum_required(VERSION 3.14)
project(OpenGLProgramingTutorial)

set(CMAKE_CXX_STANDARD 14)

add_executable(OpenGLProgramingTutorial main.cpp Display.cpp Display.h Shader.cpp Shader.h Mesh.cpp Mesh.h)

target_link_libraries(OpenGLProgramingTutorial SDL2 GLEW GL ${CMAKE_EXE_LINKER_FLAGS})
