#include <stdio.h>
#include <stdlib.h>
#include "arraylist_init.h"
#include "arraylist_operations.h"


int main(void) {
    const arraylist list = create_arraylist(10, 10);

    init_arraylist(&list, 10,30,34,37,41,50,70,71,74,75);

    printf("%d", search(&list,75));

    dispose_arraylist(list);
    return 0;
}
