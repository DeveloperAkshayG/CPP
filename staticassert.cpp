/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<assert.h>

using namespace std;

int main()
{
    assert(5+6 == 7);
    static_assert(5+6 == 7 , "here i am out of way"); // executed at compile time
    cout << "static_assert in c++" << endl;
    return 0;
}