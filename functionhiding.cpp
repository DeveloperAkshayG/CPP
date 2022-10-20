/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
   
  //function hiding 
class Base{
    public:
        void print(int a)
        {
            cout << "Base" << endl;
        }
};

class Derived:public Base{
    public:
        // using Base::print; //to undo function hiding
        void print(char a)
        {
            cout << "derived" << endl;
        }
};

int main()
{
    Derived d1;
    d1.print(2);
    d1.print('a');

    return 0;
}