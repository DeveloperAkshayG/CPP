
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>l;
    list<int>lr{1,2,3,4,5};
    cout << "empty: " << l.empty()<<endl; //empty() to check list is empty or not
    cout << "empty: " << lr.empty()<<endl;
    cout<<  "size:  " << l.size() << endl;//size() to check the size of list
    cout<<  "size:  " << lr.size() << endl;
    return 0;
}
