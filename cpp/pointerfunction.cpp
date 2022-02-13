#include <iostream>
#include <ctime>
using namespace std;

void getSeconds(unsigned long *par);
double getAverage(int *arr, int size);

int main()
{
    unsigned long sec;

    getSeconds( &sec );
    cout << "Address of sec :" << &sec << endl;
    
    // print the actual value
    cout << "Number of seconds :" << sec << endl;


    // an int array with 5 elements.
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    
    // pass pointer to the array as an argument.
    avg = getAverage( balance, 5 ) ;
    
    // output the returned value
    cout << "Average value is: " << avg << endl;
    
    return 0;
}

void getSeconds(unsigned long *par)
{
    cout << "Address of par :" << par << endl;

    // get the current number of seconds
    *par = time( NULL );

    return;
}

double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
        sum += arr[i];
    
    avg = double(sum) / size;
    
    return avg;
}