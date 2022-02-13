#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);
void swap(int x, int y);
int sum(int a, int b=20)
{
    int result;
    result = a + b;

    return (result);
}

int main ()
{
    // local variable declaration:
    int a = 100;
    int b = 200;
    int ret;

    // calling a function to get max value.
    ret = max(a, b);
    cout << "Max value is : " << ret << endl;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;
    
    // calling a function to swap the values.
    cout << "Addrress of a :" << &a << endl;
    swap(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;

    // local variable declaration:
    a = 100;
    b = 200;
    int result;

    result = sum(a, b);
    cout << "Total value is :" << result << endl;

    // calling a function again as follows.
    result = sum(a);
    cout << "Total value is :" << result << endl;

    return 0;
}

// function returning the max between two numbers
int max(int num1, int num2)
{
    // local variable declaration
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

// function definition to swap the values.
void swap(int x, int y)
{
    cout << "Addrress of x :" << &x << endl;
    int temp;
    temp = x; /* save the value of x */
    x = y; /* put y into x */
    y = temp; /* put x into y */

    return;
}