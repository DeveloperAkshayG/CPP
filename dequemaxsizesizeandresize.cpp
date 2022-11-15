
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d{1,2,3,4,5};
    deque<int>::iterator itr;
    cout << "the max size of deque is " << d.max_size() << endl;
    d.push_front(6);
    d.push_front(7);
    cout << "the size of deque is " << d.size() << endl;
    for(itr=d.begin();itr!=d.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout << '\n';
    d.resize(3); //to resize the container by only passing size as parameter
    for(itr=d.begin();itr!=d.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout << '\n';
    d.resize(6,4); //to resize the container by passing both size and value
    for(itr=d.begin();itr!=d.end();itr++)
    {
        cout<<*itr<<" ";
    }
    return 0;
}
