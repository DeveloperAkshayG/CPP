/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x =20;
    int &r=x; //reference variable for x
    cout << x << endl;
    cout << r << endl;
    //after changing the reference variable value the variable value also changes which is 
    //demonstrated below
    r=100;
    cout << x << endl;
    cout << r << endl;

    return 0;
}