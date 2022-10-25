/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

float division(int x,int y)
{
    if(y==0)
    {
        throw "attempt to divide by zero";
    }
    else
    {
        return x/y;
    }
}

int main()
{
    int i=50;
    int j=0;
    int z=0;
    try{
        z=division(i,j);
        cout<<z<<endl;
    }
    catch(const char *e)
    {
        cerr<<e<<endl;
    }

    return 0;
}