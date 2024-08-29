cmake_minimum_required(VERSION 3.29)
project(picture_steganography)

set(CMAKE_CXX_STANDARD 20)

add_executable(picture_steganography main.cpp
        constants.h
        steganography.h
        bmp.h
        channels.h)
