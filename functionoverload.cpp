/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//function overloading example in below function

void add(int x,int y)
{
    int z=x+y;
    cout << "function overloaded 1 add is " << z<< endl;
}

void add(double x,double y)
{
    double z=x+y;
    cout << "function overloaded 2 add is " << z<< endl;
}

int main()
{
   int x,y;
   double a,b;
   cout << "enter the value of x" << endl;
   cin >> x;
   cout << "enter the value of y" << endl;
   cin >> y;
   cout << "enter the value of a" << endl;
   cin >> a;
   cout << "enter the value of b" << endl;
   cin >> b;
   add(x,y);
   add(a,b);

    return 0;
}