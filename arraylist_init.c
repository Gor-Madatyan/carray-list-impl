//
// Created by gmadatyan on 2025-10
#include "arraylist_init.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void init_arraylist(const arraylist *list, ...) {
    va_list args;
    va_start(args, arr);
    for (int *i = list->arr; i < list->arr + list->size; i++) {
        *i = va_arg(args, int);
    }

    va_end(args);
}

static arraylist create_arraylist_details(const int capacity, const int size, const bool ordered) {
    int *arr = calloc(capacity, sizeof(int));

    if (arr == NULL) {
        fputs("Out of memory",stderr);
        exit(1);
    }

    const arraylist list = {.capacity = capacity, .size = size, .is_ordered = ordered, .arr = arr};
    return list;
}

arraylist create_arraylist(const int capacity, const int size) {
    return create_arraylist_details(capacity, size, false);
}

arraylist create_arraylist_ordered(const int capacity, const int size) {
    return create_arraylist_details(capacity, size, true);
}