#include <stdio.h>
#include <stdlib.h>
#include "arraylist_init.h"
#include "arraylist_operations.h"


int main(void) {
    arraylist list = create_arraylist(9, 9);

    init_arraylist(&list, 4, 6, 3, 1, 5, 100, 4, 9,6);

    sort(&list);

    printf("%d\n", search(&list, 6));

    for (int i = 0; i < list.size; i++)
        printf("%d ", get(list, i));

    dispose_arraylist(list);
    return 0;
}
