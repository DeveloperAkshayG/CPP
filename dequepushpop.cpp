
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d{1,2};
    deque<int>::iterator itr1;
    d.push_front(0);
    d.push_back(3);
    d.push_back(4);
    for(itr1=d.begin();itr1!=d.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    cout << "\n";
    cout << "after popping from front and back deque is "<< endl;
    d.pop_back();
    d.pop_front();
    for(itr1=d.begin();itr1!=d.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    return 0;
}
