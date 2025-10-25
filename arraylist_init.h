#pragma once
#include <stdarg.h>

struct {
    int capacity;
    int size;
    int *arr;
} typedef arraylist;

void init_arraylist( arraylist list, ...);
arraylist create_arraylist( int capacity,  int size);
arraylist create_arraylist_init(int capacity, int size, ...);
void dispose_arraylist(arraylist arr);
