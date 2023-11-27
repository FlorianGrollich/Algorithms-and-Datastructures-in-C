cmake_minimum_required(VERSION 3.26)
project(AlgoData C)

set(CMAKE_C_STANDARD 23)

add_executable(AlgoData

        BubbleSort/bubbleSort.c
        BubbleSort/bubbleSort.h
        BinarySearch/binarySearch.h
        BinarySearch/binarySearch.c
        LinkedList/linkedList.c
        LinkedList/linkedList.h)
