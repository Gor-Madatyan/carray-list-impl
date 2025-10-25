//
// Created by gmadatyan on 2025-10
#include "arraylist_init.h"
#include <stdio.h>
#include <stdlib.h>

static void init(const arraylist list, va_list args) {

    for (int *i = list.arr; i < list.arr + list.size; i++) {
        *i = va_arg(args, int);
    }

    va_end(args);
}

void init_arraylist(const arraylist arr, ...) {
    va_list args;
    va_start(args, arr);
    init(arr, args);
}

arraylist create_arraylist(const int capacity, const int size) {
    int *arr = calloc(capacity,sizeof(int));

    if (arr == NULL) {
        fputs("Out of memory",stderr);
        exit(1);
    }

    arraylist list = {.capacity = capacity, .size = size, .arr = arr};
    return list;
}

arraylist create_arraylist_init(const int capacity, const int size, ...) {
    va_list args;
    va_start(args, size);

    const arraylist list  = create_arraylist(capacity, size);
    init(list, args);
    return list;
}

void dispose_arraylist(const arraylist arr) {
    free(arr.arr);
}