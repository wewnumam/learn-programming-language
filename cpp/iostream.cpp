#include <iostream>
using namespace std;

int main()
{
    char str[] = "Unable to read....";
    cerr << "Error message : " << str << endl;
    clog << "Error message : " << str << endl;
    
    char name[50];
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;

    return 0;
}