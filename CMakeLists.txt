cmake_minimum_required(VERSION 3.3)
project(Observer_Design_Pattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp SubjectPressButton.cpp SubjectPressButton.h Observer.cpp Observer.h ToggleObserver.cpp ToggleObserver.h BlinkObserver.cpp BlinkObserver.h)
add_executable(Observer_Design_Pattern ${SOURCE_FILES})