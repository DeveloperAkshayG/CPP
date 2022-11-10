
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> lr{1,2,3,4,45};
    list<int>::iterator itr1;
    lr.resize(3);  //to resize the list
    for(itr1=lr.begin();itr1!=lr.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    cout << "\n";
    lr.resize(5,50); //resize the list and add the values to list
    for(itr1=lr.begin();itr1!=lr.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    return 0;
}
