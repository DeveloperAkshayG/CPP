
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d1{1,2,3};
    deque<int>::iterator itr1;
    d1.clear(); //this will delete all the elements of deque and size of deque will be zero
    for(itr1=d1.begin();itr1!=d1.end();itr1++) 
    {
        cout<<*itr1<<" ";
    }
    return 0;
}
