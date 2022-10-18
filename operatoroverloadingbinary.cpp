/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Binary operator overloading

*******************************************************************************/
#include <iostream>

using namespace std;

class Point{
    int x;
    int y;
public: 
    Point (){};
    Point(int a,int b):x{a},y{b}{};
    // in below function call '+' operator is overloaded
    Point operator + (const Point &rhs){
        Point p;
        p.x=x+rhs.x;
        p.y=y+rhs.y;
        return p;
    }
    
    //in below function call '-' operator is overloaded
    Point operator - (const Point &rhs){
        Point p;
        p.x=x-rhs.x;
        p.y=y-rhs.y;
        return p;
    }
    
    
    void printval(){
        cout << "x: " << x << " y: " << y << endl;
    }
    
};

int main()
{
    Point p1(3,2),p2(3,5);
    Point p3=p1+p2;
    Point p4=p3-p1;
    p3.printval();
    p4.printval();

    return 0;
}