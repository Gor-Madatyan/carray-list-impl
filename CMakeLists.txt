cmake_minimum_required(VERSION 4.0)
project(array_list_impl C)

set(CMAKE_C_STANDARD 23)

add_executable(array_list_impl main.c
        arraylist_init.c
        arraylist_init.h
        arraylist_operations.c
        arraylist_operations.h
        util.c
        util.h)
