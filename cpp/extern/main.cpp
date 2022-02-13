/* 
 * RUN WITH THIS FOLLOWING COMMAND:
 * $ g++ main.cpp support.cpp && ./a.out
 */

#include <iostream>

int count;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}