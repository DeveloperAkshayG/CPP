/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Point{
    double x;
    double y;
    
public:
    Point() {x=0;y=0;cout << "default constructor called" << endl;}  //default constructor
    Point(double X,double Y){     //parameterized constructor
        x=X;
        y=Y;
        cout << "parameterized constructor called" << endl;
    }
    Point(const Point& rhs){x=rhs.x;y=rhs.y;cout << "copy constructor called" << endl;} //Copy constructor
    
    //getter function
    double getx() {return x;}
    double gety() {return y;}

};

int main()
{
    Point p1;    //default constructor
    Point p2(1.3,3.2); //parameterized constructor
    Point p3 = p1;   //copy constructor
    
    cout << p1.getx()<< endl; //p1 is default constructor 
    cout << p1.gety()<< endl;
    
    cout << p2.getx()<< endl; //p2 is parameterized constructor
    cout << p2.gety()<< endl;
    
    cout << p3.getx()<< endl; //copy constructor
    cout << p3.gety()<< endl;
    

    return 0;
}