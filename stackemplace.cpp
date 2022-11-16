
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<stack>
using namespace std;

void show(stack<int>ss)
{
    while(!(ss.empty()))  //empty() to check whether stack is empty or not
    {
        cout<<ss.top()<<endl;//this will return the top element of stack
        ss.pop(); // to iterate over stack we have to first display top element and then pop out that top element
    }
}

int main()
{
    stack<int>ss; //syntax for declaring stack
    ss.push(7); //for inserting the element to stack
    ss.emplace(8); //to insert new element in stack we can use emplace()
    ss.emplace(9);
    ss.emplace(4);
    ss.emplace(5);
    ss.emplace(6);
    show(ss);
    cout << "the top element is " << ss.top()<<endl;
    cout << "the size of stack is " << ss.size()<<endl;
    ss.pop();
    cout << "the top element is " << ss.top()<<endl;
    cout << "the size of stack is " << ss.size()<<endl;
    show(ss);
    return 0;
}
