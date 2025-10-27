//
// Created by gmadatyan on 2025-10-24.
//

#include "arraylist_operations.h"

#include <stdio.h>
#include <stdlib.h>

void append(arraylist *list, const int num) {
    if (list->size == list->capacity) {
        list->capacity += 50;
        int *arr = realloc(list->arr, list->capacity * sizeof(int));
        if (arr == NULL) {
            fputs("Out of memory", stderr);
            exit(1);
        }
        list->arr = arr;
    }

    list->arr[list->size++] = num;
}