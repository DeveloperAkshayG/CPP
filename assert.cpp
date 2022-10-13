/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cassert> //header file to include assert in code

using namespace std;

void display(int *p)
{
    assert(p!=NULL); //thi line will terminate the execution of program if anything goes wrong
    cout<< *p << endl;
}
int main()
{
    int x=10;
    display(&x);
    int *y=NULL;
    display(y);

    return 0;
}