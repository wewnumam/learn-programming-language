#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
    int var[] = {10, 100, 200};
    int i, *ptr[MAX];

    for ( i = 0; i < MAX; i++)
        ptr[i] = &var[i]; /* assign the address of integer. */

    for ( i = 0; i < MAX; i++)
        printf("Value of var[%d] = %d\n", i, *ptr[i]);


    printf("\n");

    char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };

    for (int i = 0; i < MAX; i++)
        printf("Value of names[%d] = %s\n", i, names[i]);

    return 0;
}
