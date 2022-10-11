/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Standard
{
    //default access specifier is private
    string s_name;      //attributes of class
    string s_address;
    
public:    //access specifier public specifies that the class operation can be accessed outside the class
    
    Standard (string name, string address) // constructor which is used to construct or create an object 
    {
        s_name = name;
        s_address = address;
    }

    void studentname()
    {
        cout << "the name of student is " << s_name << endl;
    }
    
    void studentaddress()
    {
        cout << "the address of student is " << s_address << endl;
    }
};

int main()
{
    Standard first ("Hridya","ulhasnagar"); //object of class created
    first.studentname();  //performing the operations of class
    first.studentaddress();//performing the operations of class
    
    Standard second ("Siya","Airoli"); //second object of class created
    second.studentname();
    second.studentaddress();
    

    return 0;
}