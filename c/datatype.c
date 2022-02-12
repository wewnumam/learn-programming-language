#include <stdio.h>

extern int a = 1, b = 2;
int main(int argc, char const *argv[])
{
    printf("a: %d b: %d\n", a, b);

    int a = 3, b = 4;
    printf("a: %d b: %d\n", a, b);

    return 0;
}
