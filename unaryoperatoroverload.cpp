/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Point{
    int x;
    int y;
public:
    // Point(){};
    Point(int a=0,int b=0):x{a},y{b}{};
    void print(){
        cout << "x: " << x << " y: " << y << endl;
    }
    //unary operator '-' overloaded
    Point operator - ()
    {
        return Point(-x,-y);
    }
};

int main()
{
    Point p1(3,2),p2;
    p1.print();
    p2.print();
    Point p3= -p1;
    p3.print();

    return 0;
}