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

int remove_idx(arraylist *list, const int idx) {
    const int num = list->arr[idx];
    for (int *curr = list->arr+idx+1; curr < list->arr + list->size; curr++)
        *(curr-1) = *curr;
    list->size--;

    return num;
}

void remove_it(arraylist *list, const int number) {
    remove_idx(list, search(list, number));
}

int search(const arraylist *list, const int number) {
    int i;
    for (i = 0; list->arr[i] != number && i < list->size; i++);
    return i;
}