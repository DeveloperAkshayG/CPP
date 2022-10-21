/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int size;
    int *arr = new int [size]; //dynamic memory allocation using new in cpp
    cout << "enter the array size " << endl;
    cin >> size;
    cout<<"the array size is  " << size << endl;
    cout << "enter the elements of array" << endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout << "the entered elements are " << endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete [] arr; //deleting the memory

    return 0;
}