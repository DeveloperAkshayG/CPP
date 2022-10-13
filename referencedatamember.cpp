/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Base{
    int& x; //reference 
public:
    Base(int& a):x{a} {cout<<"reference data member intialization"<<endl;} //intializer list unsigned
    void printX(){cout<<x<<endl;}
};
int main()
{
    int val=40;
    Base b1(val);
    b1.printX();
    return 0;
}