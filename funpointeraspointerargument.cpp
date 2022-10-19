/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void print(int *a)
{
    cout << "using func pointer value is  " << *a << endl;
}

int main()
{
    int x=10;
    int *p=&x;
    //passing pointer as an argument to function pointer
    void (*fp)(int *)=print;
    (fp)(p);

    return 0;
}