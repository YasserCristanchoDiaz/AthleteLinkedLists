cmake_minimum_required(VERSION 3.20)
project(AthleteLinkedLists)

set(CMAKE_CXX_STANDARD 14)

add_executable(AthleteLinkedLists main.cpp LinkedList.cpp LinkedList.h Node.h Athlete.cpp Athlete.h)
