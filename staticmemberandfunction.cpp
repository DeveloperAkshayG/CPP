/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Base
{
public:    
    int x;  //data member which are attributes of objects
    static int y; //static data member attributes of class
    void getX() {cout << x  << endl;}
    static void getY() {cout << y <<endl;} //static member funtion
};

int Base :: y ;//since y is static we created memory to hold the value and it is common to all objects



int main()
{
    Base b1,b2,b3;
    b1.x=20;
    b1.y=40;
    
    b2.x=29;
    
    b3.x=60;
    b3.y=100;
    b1.getX();
    b1.getY(); //calling static member function using object
    b2.getX();
    Base::getY(); //static member function can also be called using class name 
    b3.getX();
    b3.getY();

    return 0;
}