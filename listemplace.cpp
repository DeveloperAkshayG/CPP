
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<string>lr{"C"};
    list<string>::iterator itr1;
    itr1=lr.begin();
    itr1++;
    lr.emplace(itr1,"is"); //emplace function to add element to list here we need input as iterator only
    for(itr1=lr.begin();itr1!=lr.end();itr1++)
    {
        cout << *itr1<< " ";
    }
    cout << "\n";
    lr.emplace_front("Embedded"); //emplace_front to add element at front
    for(itr1=lr.begin();itr1!=lr.end();itr1++)
    {
        cout << *itr1<< " ";
    }
    cout << "\n";
    lr.emplace_back("Programming language"); //emplace_back to add element at end
    for(itr1=lr.begin();itr1!=lr.end();itr1++)
    {
        cout << *itr1<< " ";
    }
    return 0;
}
