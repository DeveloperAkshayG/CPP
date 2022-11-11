
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d1{1,2,3,4};
    deque<char>d2{'a','b','c','d'};
    d1.swap(d2); // to swap the content of both the deque both the deque should be of same data type  
    
    return 0;
}
