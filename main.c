#include <stdio.h>
#include <stdlib.h>
#include "arraylist_init.h"
#include "arraylist_operations.h"


int main(void) {
    arraylist list = create_arraylist(5, 3);

    init_arraylist(list, 1,2,3);

    append(&list, 1000);
    append(&list, 50000);
    append(&list, 20000);
    set(list, 2, 202020202);
    printf("%d\n",pop(list));

    for (int i = 0; i < list.size; i++) {
        printf("%d ", get(list, i));
    }

    printf("\n%d", list.capacity);

    dispose_arraylist(list);
    return 0;
}
