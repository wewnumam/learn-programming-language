#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d;
    // ( 30 * 15 ) / 5
    printf("Value of (a + b) * c / d is : %d\n", e);

    e = ((a + b) * c) / d;
    // (30 * 15 ) / 5
    printf("Value of ((a + b) * c) / d is e = (a + b) * (c / d); : %d\n", e );
    // (30) * (15/5)
    printf("Value of (a + b) * (c / d) is e = a + (b * c) / d; e ); : %d\n", e );
    //20 + (150/5)
    printf("Value of a + (b * c) / d is : %d\n" , e );

    return 0;
}
