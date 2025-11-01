//
// Created by gmadatyan on 2025-10-24.
//

#include "arraylist_operations.h"
#include <stdio.h>
#include <stdlib.h>

static void make_enough_capacity(arraylist *list) {
    if (list->size == list->capacity) {
        list->capacity += 50;
        int *arr = realloc(list->arr, list->capacity * sizeof(int));
        if (arr == NULL) {
            fputs("Out of memory", stderr);
            exit(1);
        }
        list->arr = arr;
    }
}

void append(arraylist *list, const int num) {
    make_enough_capacity(list);
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

void insert(arraylist *list, const int idx, const int num) {
make_enough_capacity(list);
for (int *curr = list->arr+list->size; curr > list->arr+idx; curr--)
    *curr = *(curr - 1);
list->arr[idx] = num;
list->size++;
}

static int linear_search(const arraylist *list, const int number) {
    int i;
    for (i = 0; list->arr[i] != number && i < list->size; i++);
    return i;
}

static int binary_search(const arraylist *list, const int number) {
    int low = 0;
    int high = list->size-1;
    while (low <= high) {
        const int mid = (low + high) / 2;
        if (number == list->arr[mid]) return mid;
        if (number < list->arr[mid]) high = mid - 1;
        else low = mid + 1;
    }

    return -1;
}

int search(const arraylist *list, const int number) {
    if (list->is_ordered) return binary_search(list, number);
    return linear_search(list, number);
}