//
// Created by gmadatyan on 2025-10-24.
//
#pragma once
#include "arraylist_init.h"
#define get(list, idx) (list).arr[(idx)]
#define pop(list) (list).arr[--(list).size]
#define set(list, idx, num) (list).arr[(idx)] = (num)

void append(arraylist *list, int num);
int remove_idx(arraylist *list, int idx);
void remove_it(arraylist *list, int number);