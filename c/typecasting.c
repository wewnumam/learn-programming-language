#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 17, count = 5;
    double mean;

    mean = (double) sum / count;
    printf("Value of mean : %f\n", mean );


    /* Integer Promotion */
    int i = 17;
    char c = 'c'; /* ascii value is 99 */
    sum = i + c;
    printf("Value of sum : %d\n", sum );

    return 0;
}
