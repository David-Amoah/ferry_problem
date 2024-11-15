#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main() {

    QUEUE hQ1;
    QUEUE hQ2;

    hQ1 = queue_init_default();
    hQ2 = queue_init_default();

    if (hQ1 == NULL) {
        printf("Failed to allocate space for hQ");
        exit(1);
    }

    if (hQ2 == NULL) {
        printf("Failed to allocate space for hQ");
        exit(1);
    }


    queue_destroy(&hQ1);  //we want to set the handle to null when were done and that is why
                                // we pass using the ampersand
    queue_destroy(&hQ2);

    printf("Hello, World!\n");
    return 0;
}
