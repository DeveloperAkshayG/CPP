/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Demo
{
    int x;  //non mutable data member
public:
    Demo():x{0}{};
    Demo(int a):x{a}{};
    void getX() const {cout<<x<<endl;} //const member function tells that i cannot modify the
                                      // value of data member,i am just used for displaying value
    void setX(int b){x=b;cout<<x<<endl;}
};

int main()
{
    Demo d1(2);
    d1.getX();
    d1.setX(50);

    return 0;
}