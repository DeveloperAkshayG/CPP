
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list>

using namespace std;

bool comparison(int first,int second)
{
    bool a;
    a=first<second;
    return(a);
}
int main()
{
    list<int> l{8,9,10,11,12};
    list<int> lr{2,3,4,5,6,7};
    list<int>::iterator itr1;
    l.merge(lr,comparison); //merge using two parameter in merge(list,compare) call
    for(itr1=l.begin();itr1!=l.end();itr1++)
    {
        cout << *itr1 << " ";
    }
    return 0;
}
