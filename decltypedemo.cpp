/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template <typename T1,typename T2>

//use of decltype which return trailing return type which means we are specifying return
//type at last.decltype checks the type of expression and returns the type
auto add(T1 a, T2 b)->decltype(a+b){
    return a+b;
}

int main()
{
    cout << add(5,5) << endl;
    cout << add(5.5,6) << endl;
    cout << add(4.5,5) << endl;

    return 0;
}