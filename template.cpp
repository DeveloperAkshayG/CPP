/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//template for addition
template <typename T>

T add (T x, T y)
{
    T z=x+y;
    return z;
}

int main()
{
    int x=10,y=10;
    cout << add<int>(x,y) << endl;
    float a=5.5,b=5.5;
    cout << add<float>(a,b) << endl;

    return 0;
}