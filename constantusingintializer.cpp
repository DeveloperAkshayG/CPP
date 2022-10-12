/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Human
{
    const string pname;
public:
    Human(string str):pname{str} {cout << "constant using intializer list" << endl;}
    void printhuman( ) {cout << "the human name is " << pname << endl;}
};

int main()
{
    Human m1("Akshay"),m2("hridya");
    m1.printhuman();
    m2.printhuman();

    return 0;
}