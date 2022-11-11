
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d1{1,2,3,4};
    deque<int>d2{5,6,7,8};
    deque<int>::iterator itr1;
    cout<<"before swapping content of d1 and d2 are" << endl;
    for(itr1=d1.begin();itr1!=d1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    cout<<"\n";
    for(itr1=d2.begin();itr1!=d2.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    cout<<"\n";
    d1.swap(d2); // to swap the content of both the deque
    cout<<"after swapping content of d1 and d2 are" << endl;
    for(itr1=d1.begin();itr1!=d1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    cout<<"\n";
    for(itr1=d2.begin();itr1!=d2.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    return 0;
}
