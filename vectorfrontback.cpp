
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v1{1,2,3,4,5};
    cout << v1.back() << endl; //back() gives reference to last element of vector
    cout << v1.front() << endl; //front() gives reference to front element of vector
    return 0;
}
