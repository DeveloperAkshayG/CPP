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
    Base(int a):x{a}{}
    friend class Getset;
};


class Getset{
public:
    Getset() {}
    void set(Base& obj, int x){obj.x=x;cout<<obj.x<<endl;} //member function
    int get(Base& obj){return obj.x;} //member function
};

int main()
{
    Base b2(20);
    Getset gs;
    cout << gs.get(b2) << endl; //using class getset i am accessing private member of class Base
    gs.set(b2,40);

    return 0;
}