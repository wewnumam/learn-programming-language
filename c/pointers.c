#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var = 20; /* actual variable declaration */
    int *ip; /* pointer variable declaration */
    ip = &var;

    /* store address of var in pointer variable*/
    printf("Address of var variable: %p\n", &var);
    /* address stored in pointer variable */
    printf("Address stored in ip variable: %p\n", ip );
    /* access the value using the pointer */
    printf("Value of *ip variable: %d\n\n", *ip );

    
    /* WITH POINTER */
    int a = 10;
    int *ptrA;
    ptrA = &a;
    printf("   a: %d\n", a);
    printf("ptrA: %d\n", *ptrA);
    a = 12;
    printf("   a: %d\n", a);
    printf("ptrA: %d\n", *ptrA);
    *ptrA = 11;
    printf("   a: %d\n", a);
    printf("ptrA: %d\n\n", *ptrA);
    
    /* WITHOUT POINTER */
    int b = 10;
    int c = b;
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    b = 12;
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    c = 11;
    printf("b: %d\n", b);
    printf("c: %d\n\n", c);

    /* ARRAY PONTER */
    int d[] = {1,2,3,4,5};
    int *e;
    e = d;
    printf("d: %d\n", d[0]);
    printf("e: %d\n", e[0]);
    printf("addr d: %p\n", &d);
    printf("addr e: %p\n", &e);
    printf("addr d[0]: %p\n", &d[0]);
    printf("addr e[0]: %p\n", &e[0]);
    d[0] = 99;
    printf("d: %d\n", d[0]);
    printf("e: %d\n", e[0]);
    printf("addr d: %p\n", &d);
    printf("addr e: %p\n", &e);
    printf("addr d[0]: %p\n", &d[0]);
    printf("addr e[0]: %p\n", &e[0]);
    e[0] = 66;
    printf("d: %d\n", d[0]);
    printf("e: %d\n", e[0]);
    printf("addr d: %p\n", &d);
    printf("addr e: %p\n", &e);
    printf("addr d[0]: %p\n", &d[0]);
    printf("addr e[0]: %p\n", &e[0]);

    return 0;
}
