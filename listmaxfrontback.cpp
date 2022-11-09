
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>lr{1,2,3,4,5,6};
    cout << "max size is: " << lr.max_size() << endl; //gives the max_size of list
    cout << "front is: "<< lr.front() << endl; //gives front element of list
    cout << "back is : "<< lr.back()  << endl; //gives back element of list 
    return 0;
}
