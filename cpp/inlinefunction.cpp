#include <iostream>

using namespace std;

/* 
    C++ inline function is powerful concept that is commonly used with 
    classes. If a function is inline, the compiler places a copy of the 
    code of that function at each point where the function is called at 
    compile time.
 */
inline int Max(int x, int y)
{
    return (x > y)? x : y;
}

// Main function for the program
int main()
{
    cout << "Max (20,10): " << Max(20,10) << endl;
    cout << "Max (0,200): " << Max(0,200) << endl;
    cout << "Max (100,1010): " << Max(100,1010) << endl;
    
    return 0;
}