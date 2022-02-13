#include <iostream>
using namespace std;

// function declaration
int func();

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main ()
{
    // Variable definition:
    int a, b;
    int c;
    float f;

    // actual initialization
    a = 10;
    b = 20;

    c = a + b;
    cout << c << endl;

    f = 70.0/3.0;
    cout << f << endl;

    // function call
    int i = func();

    return 0;
}

// function definition
int func()
{
    return 0;
}