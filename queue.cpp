
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<queue> //header file for queue

using namespace std;

void print(queue<int>q)
{
    while(!(q.empty())) //as we cannot iterate over queue we first print the top element and then pop out that elment
    {
        cout<<q.front()<<endl; //to print the first element 
        q.pop(); //to remove the front element so that the next element can be accessed
    }
}
int main()
{
    queue<int>q; //syntax for declaring queue
    q.push(3); //push insert element from rear end
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    print(q);
    return 0;
}
