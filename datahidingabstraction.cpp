/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Rectangle
{
    int length;  //data hiding as they are in private scope
    int breadth; //data hiding as they are in private scope
public:
    // Rectangle():length1{0},breadth1{0} {}//default constructor
    Rectangle():length{0},breadth{0} {}
    //hiding the implementation details of function for outside of class
    //only the resullt of function will be visible which is known as abstraction
    void getlb() {cout << "the length is  " << length << " " << "breadth is  " <<breadth<<endl;}
    void area(int a,int b){length=a;breadth=b;cout<<"the area is  " << (length * breadth) << endl;}
};

int main()
{
    Rectangle r1;
    r1.getlb();
    r1.area(5,4);
    return 0;
}