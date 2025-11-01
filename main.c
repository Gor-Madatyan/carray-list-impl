#include <stdio.h>
#include <stdlib.h>
#include "arraylist_init.h"
#include "arraylist_operations.h"


int main(void) {
    arraylist list = create_arraylist(10, 10);

    init_arraylist(&list, 10,30,34,37,41,50,70,71,74,75);

    insert(&list,2,1010101011);

    printf("%d\n", search(&list,75));

    for (int i = 0; i< list.size; i++)
        printf("%d ", get(list,i));

    printf("\n%d",list.capacity);


    dispose_arraylist(list);
    return 0;
}
