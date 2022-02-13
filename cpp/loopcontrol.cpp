#include <iostream>
using namespace std;
int main ()
{
    // Local variable declaration:
    int a = 10;

    // do loop execution
    do
    {
        cout << "value of a: " << a << endl;
        a = a + 1;
        if( a > 15)
            break; // terminate the loop
    } while( a < 20 );

    cout << endl;

    // Local variable declaration:
    a = 10;

    // do loop execution
    do
    {
        if( a == 15)
        {
            // skip the iteration.
            a = a + 1;
            continue;
        }
        cout << "value of a: " << a << endl;
        a = a + 1;
    } while( a < 20 );

    cout << endl;

    // Local variable declaration:
    a = 10;

    // do loop execution
    LOOP:do
    {
        if( a == 15)
        {
            // skip the iteration.
            a = a + 1;
            goto LOOP;
        }
        cout << "value of a: " << a << endl;
        a = a + 1;
    } while( a < 20 );

    return 0;
}