
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
    if(q.empty()) //empty() to check whether queue is empty or not
    {
        q.push(6);
        q.push(7);
        q.push(8);
        q.push(9);
        cout<<"the old element is " << q.front() <<endl;
        cout<<"the new or recent element is " << q.back() << endl;
    }
    else
    {
        q.push(7);
        q.push(8);
    }
    print(q);
    cout << "the size of queue is " << q.size(); //size() to find the size of element
    q.pop(); //pop() removes the top element from queue
    cout << "the top element after pop is " << q.front() << endl;
    print(q);
    return 0;
}
