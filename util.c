//
// Created by gmadatyan on 2025-11-01.
//
#include "util.h"

inline void swap_int(int* val1, int* val2) {
    const int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}