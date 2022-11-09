
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> lr{1,2,3,4,5};
    list<int>::iterator itr;
    lr.push_back(6); //push_back adds element to end of list
    lr.push_front(0);//push_front adds element to start of list
    for(itr=lr.begin();itr!=lr.end();itr++)
    {
        cout<<*itr<<endl;
    }
    lr.pop_back(); //pops last element from list
    lr.pop_front(); // pop front element from list
    cout << "after popping" << endl;
    for(itr=lr.begin();itr!=lr.end();itr++)
    {
        cout<<*itr<<endl;
    }
    return 0;
}
