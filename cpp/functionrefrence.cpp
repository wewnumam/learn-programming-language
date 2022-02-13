#include <iostream>
using namespace std;

// function declaration
void swap(int &x, int &y);

int main(int argc, char const *argv[])
{
    // local variable declaration:
    int a = 100;
    int b = 200;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    /* calling a function to swap the values using variable reference.*/
    swap(a, b);
    cout << "Addrress of a :" << &a << endl;

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
    
    return 0;
}

// function definition to swap the values.
void swap(int &x, int &y)
{
    cout << "Addrress of x :" << &x << endl;
    int temp;
    temp = x; /* save the value at address x */
    x = y; /* put y into x */
    y = temp; /* put x into y */
    
    return;
}
