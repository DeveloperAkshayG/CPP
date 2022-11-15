
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int>q;
    q.emplace(6); //to insert element to the queue
    q.emplace(7);
    q.emplace(8);
    q.emplace(9);
    cout<<"the top element is " << q.front()<<endl;
    cout <<"the back element is " << q.back()<<endl;
    cout<<"the content of queue are " <<endl;
    while(!(q.empty()))
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}
