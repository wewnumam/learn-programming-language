#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    time_t t;
    srand((unsigned) time(&t));
    printf("%d\n", rand());
    return 0;
}