/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Circle
{
    const float pi=3.14; //constant declared inside class
    float r;
public:
    Circle(float a):r{a}{cout<<"using intializer list for radius"<<endl;}
    void getarea() {cout << (pi*r*r) << endl;}
};

int main()
{
    Circle c1(6.0);
    c1.getarea();

    return 0;
}