/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class World
{
    int x;
public:
    World(int a):x{a} {cout<< "intializer used " << endl;} //intializer used to intialize 
    
    // void getavalue() {cout << x << endl;}
    
    int getavalue() {return x;}
    
    ~World()
    {
        cout << "BYEBYE" << endl;
    }
};

int main()
{
  World gundu(10);
  cout << gundu.getavalue() << endl; 
  return 0;
}