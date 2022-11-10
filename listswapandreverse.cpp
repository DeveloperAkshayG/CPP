
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l{5,4,3,2,1};
    list<int> lr{6,7,8,9};
    list<int>::iterator itr1;
    cout << "intial content of list l are " << endl;
    for(itr1=l.begin();itr1!=l.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    cout << "\n";
    cout<< "intial content of list lr are " << endl;
    for(itr1=lr.begin();itr1!=lr.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    cout << "\n";
    l.swap(lr); // to swap the content of list
    cout << "after swapping content of list l are " << endl;
    for(itr1=l.begin();itr1!=l.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    cout << "\n";
    cout<< "after swapping content of list lr are " << endl;
    for(itr1=lr.begin();itr1!=lr.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    cout << "\n";
    cout << "after reversing content of list lr are " << endl;
    lr.reverse(); //to reverse content of list
    for(itr1=lr.begin();itr1!=lr.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    return 0;
}
