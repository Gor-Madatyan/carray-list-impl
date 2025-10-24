#pragma once
#include <stdarg.h>

struct {
    int capacity;
    int size;
    int *arr;
} typedef arraylist;

void init_arraylist( arraylist list, va_list args);
arraylist arrlist( int capacity,  int size);
arraylist arrlist_init(int capacity, int size, ...);
