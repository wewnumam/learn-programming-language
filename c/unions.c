#include <stdio.h>
#include <string.h>

/* 
    A union is a special data type available in C that allows to store 
    different data types in the same memory location. You can define a 
    union with many members, but only one member can contain a value at 
    any given time. Unions provide an efficient way of using the same 
    memory location for multiple purpose.
 */
union Data
{
    int i;
    float f;
    char str[20];
};

int main(int argc, char const *argv[])
{
    union Data data;

    printf( "Memory size occupied by data : %ld\n", sizeof(data));

    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);
    /* 
        values of i and f members of union got corrupted because the final 
        value assigned to the variable has occupied the memory location 
        and this is the reason that the value of str member is getting 
        printed very well.
     */
    printf("\n");


    data.i = 10;
    printf( "data.i : %d\n", data.i);
    data.f = 220.5;
    printf( "data.f : %f\n", data.f);
    strcpy( data.str, "C Programming");
    printf( "data.str : %s\n", data.str);

    return 0;
}
