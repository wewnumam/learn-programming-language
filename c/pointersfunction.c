#include <stdio.h>
#include <time.h>

/* function declaration */
void getSeconds(unsigned long *par);
double getAverage(int *arr, int size);

int main(int argc, char const *argv[])
{
    unsigned long sec;
    getSeconds( &sec );
    printf("Number of seconds: %ld\n\n", sec );


    /* an int array with 5 elements */
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    printf("   addr balance: %p\n", &balance);
    printf("addr balance[0]: %p\n", &balance[0]);

    /* pass pointer to the array as an argument */
    avg = getAverage( balance, 5 ) ;
    printf("Average value is: %f\n", avg );

    return 0;
}

void getSeconds(unsigned long *par)
{
    /* get the current number of seconds */
    *par = time( NULL );
    
    return;
}

double getAverage(int *arr, int size)
{
    printf("       addr arr: %p\n", &arr);
    printf("    addr arr[0]: %p\n", &arr[0]);

    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
        sum += arr[i];

    avg = (double)sum / size;
    
    return avg;
}