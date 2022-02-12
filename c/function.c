#include <stdio.h>

/* function declaration */
int max(int num1, int num2);
void swapbyvalue(int x, int y);
void swapbyreference(int *x, int *y);

int main(int argc, char const *argv[])
{
    /* local variable definition */
    int a = 100;
    int b = 200;
    int ret;

    /* calling a function to get max value */
    ret = max(a, b);
    printf( "Max value is : %d\n", ret );

    printf("Before swap, value of a : %d\n", a );
    printf("Before swap, value of b : %d\n", b );

    /* calling a function to swap the values */
    swapbyvalue(a, b);
    printf("After swap, value of a : %d\n", a );
    printf("After swap, value of b : %d\n", b );

    swapbyvalue(a, b);
    printf("Before swap, value of a : %d\n", a );
    printf("Before swap, value of b : %d\n", b );

    /* calling a function to swap the values.
     * &a indicates pointer to a i.e. address of variable a and
     * &b indicates pointer to b i.e. address of variable b.
     */
    swapbyreference(&a, &b);
    printf("After swap, value of a : %d\n", a );
    printf("After swap, value of b : %d\n", b );

    return 0;
}

/* function returning the max between two numbers */
int max(int num1, int num2)
{
    /* local variable declaration */
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

/* function definition to swap the values */
void swapbyvalue(int x, int y)
{
    int temp;
    temp = x;   /* save the value of x */
    x = y;      /* put y into x */
    y = temp;   /* put temp into y */

    return;
}

/* function definition to swap the values */
void swapbyreference(int *x, int *y)
{
    int temp;
    temp = *x;  /* save the value at address x */
    *x = *y;    /* put y into x */
    *y = temp;  /* put temp into y */

    return;
}