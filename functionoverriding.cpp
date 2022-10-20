/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


//example of overriding
class Person{
public:
    void print(){
            cout << "general category " << endl;
    }
};

class Man:public Person{
public:
    void print(){
            cout << "Akshay" << endl;
    }
};

int main()
{
    Person p1;
    Man m1;
     p1.print();
    m1.print();

    return 0;
}