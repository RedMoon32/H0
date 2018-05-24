cmake_minimum_required(VERSION 3.9)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

set(PROJECT_HEADERS
            binarize.h
        )
set(PROJECT_SOURCES
        test_binarize.c
        binarize.c
        )

add_executable(untitled1 ${PROJECT_SOURCES} ${PROJECT_HEADERS})