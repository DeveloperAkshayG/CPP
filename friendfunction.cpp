/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/********************************************************************************
    Function as friend
*********************************************************************************/


#include <iostream>

using namespace std;

class Base{
    int x;
    public:
        Base(){}
        Base (int a):x{a}{}
        friend void set(Base& obj,int x);  
        friend int get(Base &obj); 
};

void set(Base& obj,int x)
{
    obj.x=x;
    cout<<obj.x<<endl;
}

int get(Base& obj)
{
    return obj.x;
}


int main()
{
    Base b2(20);
    cout<<get(b2)<<endl;
    // cout<<b2.x<<endl; //cannot access x here as x is private
    set(b2,40);

    return 0;
}