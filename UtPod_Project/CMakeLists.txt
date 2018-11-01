cmake_minimum_required(VERSION 3.12)
project(UtPod_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(UtPod_Project song.cpp song.h UtPod.cpp UtPod.h UtPodDriver.cpp)