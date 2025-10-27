#pragma once

#define dispose_arraylist(list) free((list).arr)

struct {
    int capacity;
    int size;
    int *arr;
} typedef arraylist;

void init_arraylist( arraylist list, ...);
arraylist create_arraylist( int capacity,  int size);
arraylist create_arraylist_init(int capacity, int size, ...);