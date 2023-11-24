cmake_minimum_required(VERSION 3.26)
project(AlgoData C)

set(CMAKE_C_STANDARD 23)

add_executable(AlgoData
        BinarySearch/binarySearch.c
        BinarySearch/binarySearch.h
        twoCrystalBalls/twoCrystalBalls.c
        twoCrystalBalls/twoCrystalBalls.h)
