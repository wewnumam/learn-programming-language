#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var = 3000;
    int *ptr;
    int **pptr;

    /* take the address of var */
    ptr = &var;

    /* take the address of ptr using address of operator & */
    pptr = &ptr;

    **pptr = 2000;
    
    printf("Value of var = %d\n", var );
    printf("Value available at *ptr = %d\n", *ptr );
    printf("Value available at **pptr = %d\n", **pptr);
    
    return 0;
}
