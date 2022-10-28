/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Base{
    int x;
public:
    Base():x{0}{} ;
    void getX(){cout << x<<endl;}
    void setX(int a){this->x=a;cout<<"after setting x is  " << x << endl;}
};

int main()
{
  Base b2;
  b2.getX();
  b2.setX(50);

  return 0;
}