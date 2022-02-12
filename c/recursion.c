#include <stdio.h>

/* Number Factorial */
int factorial(unsigned int i);

/* Fibonacci Series */
int fibonaci(int i);

int main(int argc, char const *argv[])
{
    int i = 15;
    printf("Factorial of %d is %d\n", i, factorial(i));

    for (int i = 0; i < 10; i++)
        printf("%d ", fibonaci(i));
    
    printf("\n");

    return 0;
}

int factorial(unsigned int i)
{
    if(i <= 1)
        return 1;

    return i * factorial(i - 1);
}

int fibonaci(int i)
{
    if(i == 0)
        return 0;

    if(i == 1)
        return 1;
    
    return fibonaci(i-1) + fibonaci(i-2);
}