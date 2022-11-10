
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list>

using namespace std;


int main()
{
    list<int> l{8,9,10,11,12};
    list<int> lr{2,3,4,5,6,7};
    list<int>::iterator itr1;
    l.merge(lr); //merge using single parameter in mnerge() call
    for(itr1=l.begin();itr1!=l.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    cout << "\n";
    return 0;
}
