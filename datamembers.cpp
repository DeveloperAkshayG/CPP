/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class  Point
{
public:
    int x;  //attributes or data memebers of class
    int y;  //attributes or data memebers of class
    // Point(){cout << "default" << endl;}
    Point (int a,int b):x{a},y{b} {cout<<"parameterized"<<endl;};
};

int main()
{
  Point p1(1,1),p2(1,2);
  cout<<p1.x<<endl;
  cout<<p1.y<<endl;
  cout<<p2.x<<endl;
  cout<<p2.y<<endl;
  

  return 0;
}