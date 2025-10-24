#include <stdio.h>
#include <stdlib.h>
#include "arraylist_init.h"
#include "arraylist_operations.h"


int main(void) {
    arraylist list = arrlist(5, 0);

    append(&list, 1000);
    append(&list, 50000);
    append(&list, 50000);



    for (int i = 0; i < list.size; i++) {
        printf("%d ", get(list, i));
    }

    printf("\n%d", list.capacity);

    free(list.arr);

    return 0;
}
