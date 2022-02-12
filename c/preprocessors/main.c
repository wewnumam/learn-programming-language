#include <stdio.h>
#include "myheader.h"

/* Once-Only Headers */
#ifndef MESSAGE
#define MESSAGE "You wish! from main.c"
#endif

/* The Stringize (#) Operator */
#define message_for(a, b) \
    printf(#a " and " #b ": We love you!\n")

/* The Token Pasting (##) Operator */
#define tokenpaster(n) printf ("token" #n " = %d\n", token##n)

/* Parameterized Macros */
#define square(x) ((x) * (x))
#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main(int argc, char const *argv[])
{    
    printf("Here is the message: %s\n", MESSAGE);

    /* Predefined Macros */
    printf("File : %s\n", __FILE__ );
    printf("Date : %s\n", __DATE__ );
    printf("Time : %s\n", __TIME__ );
    printf("Line : %d\n", __LINE__ );
    printf("ANSI : %d\n", __STDC__ );

    message_for(Carole, Debra);

    int token34 = 40;
    tokenpaster(34);

    printf("Max between 20 and 10 is %d\n", MAX(10, 20));

    return 0;
}
