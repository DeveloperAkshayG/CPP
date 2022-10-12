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
    int x;
public:
  //below line demonstrates how intializers are used in cpp
   Base(int a):x{a} {cout<<"intializers used in p constructor"<<endl;}
   int getX(){return x;}
};

int main()
{
    Base b1(10);
    cout << b1.getX() << endl;
    cout<<"Hello World";

    return 0;
}