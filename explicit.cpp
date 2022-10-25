/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Base{
    int b_Var;
    public:
        Base(){};
        explicit Base(int a):b_Var{a}{}; //explicit constructor
        void print(){
            cout << b_Var << endl;
        }
};

int main()
{
    Base b1(10);
    b1.print();
    Base b2=50;
    b2.print();

    return 0;
}