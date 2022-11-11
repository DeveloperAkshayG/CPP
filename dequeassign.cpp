
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d1{1,2,3};
    deque<int>d2;
    deque<int>d3;
    deque<int>::iterator itr1;
    d2.assign(d1.begin(),d1.end()); //to assign the elements from one deque to other deque based on range
    for(itr1=d2.begin();itr1!=d2.end();itr1++) //for second d2 deque printing
    {
        cout<<*itr1<<" ";
    }
    cout <<"\n";
    for(itr1=d1.begin();itr1!=d1.end();itr1++) //for first deque printing
    {
        cout<<*itr1<<" ";
    }
    cout<<"\n";
    //syntax of assign is assign(n,val) where n is size 
    d3.assign(3,6); //to assign value to the deque by providing size and value as parameter
    for(itr1=d3.begin();itr1!=d3.end();itr1++) //for first deque printing
    {
        cout<<*itr1<<" ";
    }
    return 0;
}
