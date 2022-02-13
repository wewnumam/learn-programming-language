#include <iostream>

// Function declaration
void func(void);

static int count = 10; /* Global variable */

int main()
{
    while(count--)
        func();
    
    return 0;
}

// Function definition
void func( void )
{
    // int i = 5;
    static int i = 5; // local static variable
    i++;

    std::cout << "i is " << i ;
    std::cout << " and count is " << count << std::endl;
}