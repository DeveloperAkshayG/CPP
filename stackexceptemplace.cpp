
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
    ss.push(8);
    ss.push(9);
    ss.push(5);
    ss.push(6);
    ss.push(4);
    show(ss); //this will print the element in stack
    cout << "the recent element added to stack is top element and it is " << ss.top() << endl; //use of top
    cout << "the size of stack is  " << ss.size() << endl;
    ss.pop();
    cout << "after popping element of stack are as follows: " << endl;
    show(ss);
    return 0;
}
