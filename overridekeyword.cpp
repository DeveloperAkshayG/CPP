/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Base{
    public:
     virtual void show(){
         cout << "i am base" << endl;
     }
};

class Derived:public Base{
    public:
        void show(int a) override 
        {
            cout << "hridya" << endl;
        }
//the above will fail as function signature is different as we have used override keyword which checks
//function signature and function namespace
}                                 

int main()
{
    Base b;
    Derived d;
    cout<<"Hello World";

    return 0;
}