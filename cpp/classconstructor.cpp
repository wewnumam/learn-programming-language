#include <iostream>

using namespace std;

class Line
{
    public:
        void setLength( double len );
        double getLength( void );
        Line(); // This is the constructor
        Line(double len); // This is the constructor
    
    private:
        double length;
};

// Member functions definitions including constructor
Line::Line(void)
{
    cout << "Object is being created" << endl;
}

Line::Line( double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}

// Main function for the program
int main()
{
    Line line1;
    Line line2(10.0);
    
    // get initially set length.
    cout << "Length of line : " << line2.getLength() <<endl;
    
    // set line length again
    line2.setLength(6.0);
    
    cout << "Length of line : " << line2.getLength() <<endl;
    
    return 0;
}