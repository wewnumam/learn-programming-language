#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* INTEGER */
    int vardecimal = 85;        /* decimal */
    int varoctal = 0213;        /* octal */
    int varhexadecimal = 0x4b;  /* hexadecimal */
    int varint = 30;            /* int */
    int varunsignedint = 30u;   /* unsigned int */
    int varlong = 30l;          /* long */
    int varunsignedlong = 30ul; /* unsigned long */

    printf("%d\n", varhexadecimal);

    /* FLOAT */
    float varfloat1 = 3.14159;
    float varfloat2 = 314159E-5L;

    printf("%f\n", varfloat2);

    return 0;
}
