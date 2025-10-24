//
// Created by gmadatyan on 2025-10
#include "arraylist_init.h"
#include <stdio.h>
#include <stdlib.h>

void init_arraylist(const arraylist list, va_list args) {

    for (int *i = list.arr; i < list.arr + list.size; i++) {
        *i = va_arg(args, int);
    }

    va_end(args);
}

arraylist arrlist(const int capacity, const int size) {
    int *arr = calloc(capacity,sizeof(int));

    if (arr == NULL) {
        fputs("Out of memory",stderr);
        exit(1);
    }

    arraylist list = {.capacity = capacity, .size = size, .arr = arr};
    return list;
}

arraylist arrlist_init(const int capacity, const int size, ...) {
    va_list args;
    va_start(args, size);

    const arraylist list  = arrlist(capacity, size);
    init_arraylist(list, args);

    va_end(args);

    return list;
}