
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d;
    deque<int>::iterator itr;
    if(d.empty()) //to check whether deque is empty or not
    {
        cout << "deque is empty" << endl;
        d.push_back(5);
        d.push_back(6);
        d.push_back(7);
        d.push_back(8);
    }
    else
    {
        cout<< "deque is not empty" << endl;
        d.push_back(5);
        d.push_back(6);
        d.push_back(7);
        d.push_back(8);
    }
    for(itr=d.begin();itr!=d.end();itr++)
    {
        cout << *itr << " ";
    }
    cout<<"\n";
    d.erase(d.begin()); //to erase the element specified by position
    for(itr=d.begin();itr!=d.end();itr++)
    {
        cout << *itr << " ";
    }
    cout<<"\n";
    d.push_front(5);
    for(itr=d.begin();itr!=d.end();itr++)
    {
        cout << *itr << " ";
    }
    cout<<"\n";
    d.erase(d.begin()+1,d.end()-1);  // to erase the elements specified by range
    for(itr=d.begin();itr!=d.end();itr++)
    {
        cout << *itr << " ";
    }
    
    return 0;
}
