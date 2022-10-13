/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Base{
    int x;
public:
    Base() {}
    Base(int a):x{a}{}
    int get(){return this->x;} //this pointer
    void set(int b){this->x=b;cout<<x<<endl;}
};

int main()
{
   Base b1;
   Base b2(10);
   cout << b2.get() << endl;
   b2.set(100);
   b1.set(50);

    return 0;
}