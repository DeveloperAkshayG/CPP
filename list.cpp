
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list> //header file for list

using namespace std;

int main()
{
    list<int> lr{1,2,3,4,5};  //syntax for declaring list
    list<int>::iterator itr1;
    for(itr1=lr.begin();itr1 != lr.end();++itr1)
    {
        cout<<*itr1<<endl;
    }
    return 0;
}
