#pragma once

#define dispose_arraylist(list) free((list).arr)

struct {
    int capacity;
    int size;
    bool is_ordered;
    int *arr;
} typedef arraylist;

void init_arraylist(const arraylist *list, ...);

arraylist create_arraylist(int capacity, int size);

arraylist create_arraylist_ordered(int capacity, int size);
