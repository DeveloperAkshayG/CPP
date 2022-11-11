
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d1{2};
    deque<int>::iterator itr1;
    //syntax of emplace is emplace(iterator(position to insert),value)
    d1.emplace(d1.begin(),1); //to insert at particular position use emplace()
    for(itr1=d1.begin();itr1!=d1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    cout<<"\n";
    d1.emplace_front(0); //to insert at the start of the container i.e deque use emplace_front
    d1.emplace_back(3); //to insert at the end of the container i.e deque use emplace_back
    for(itr1=d1.begin();itr1!=d1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    return 0;
}
