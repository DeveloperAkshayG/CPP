/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Point{
    int arr[2];
public:
    Point(int x=0,int y=0)
    {
        arr[0]=x;
        arr[1]=y;
    }
    void print(){
        cout << "x: " << arr[0] << " y: " << arr[1] << endl;
    }
    
    //below is [] overloading we have used int& as we have to return the reference
    // and argument as pos because based on pos we will be doing operation
    int & operator [] (int pos)
    {
        if(pos==0)
        {
            return arr[0];
        }
        else if(pos==1)
        {
            return arr[1];
        }
        else
        {
            cout << "end of array" << endl;
            exit(0);
        }
    }
    
};

int main()
{
    Point p1(3,2);
    p1.print();
    p1[0]=8;
    p1[1]=10;
    p1.print();
    p1[3]=10;
    return 0;
}