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
    int *x;
public:
    Base():x{nullptr} {cout << "default"<<endl;} //intializer list used
    Base(int *a):x{a} {cout << "parameterized"<<endl;} //intializer list used
    ~Base()
    {
        delete x;
        cout << "destructor called" << endl;
    }
    
};

int main()
{
   Base b(new int(10)); //for dynamic memory allocation
   return 0;

    return 0;
}