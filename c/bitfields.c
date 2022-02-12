#include <stdio.h>
#include <string.h>

/* define simple structure */
struct
{
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* define a structure with bit fields */
struct
{
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

struct
{
    unsigned int age : 3;
} Age;

int main(int argc, char const *argv[])
{
    printf( "Memory size occupied by status1 : %ld\n", sizeof(status1));
    printf( "Memory size occupied by status2 : %ld\n", sizeof(status2));
    
    Age.age = 4;
    printf( "Sizeof( Age ) : %ld\n", sizeof(Age) );
    printf( "Age.age : %d\n", Age.age );

    Age.age = 7;
    printf( "Age.age : %d\n", Age.age );

    /* 
        The above structure definition instructs the C compiler that the 
        age variable is going to use only 3 bits to store the value. If 
        you try to use more than 3 bits, then it will not allow you to do 
        so
     */
    Age.age = 8;
    printf( "Age.age : %d\n", Age.age );


    return 0;
}
