#include <iostream>

void pangkat(int &a);

int main(int argc, char const *argv[])
{
    int a = 10;
    int &b = a;

    pangkat(a);
    std::cout << &a << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}

void pangkat(int &a) 
{
    std::cout << &a << std::endl;
    a = a * a;
}
